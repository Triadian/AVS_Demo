// Copyright 2019-2023 Seven47 Software. All Rights Reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited

#include "VehicleSystemBase.h"
#include "TimerManager.h"
#include "GameFramework/GameStateBase.h"
#include "Kismet/KismetMathLibrary.h"

AVehicleSystemBase::AVehicleSystemBase()
{
	bReplicates = true;
	PrimaryActorTick.bCanEverTick = true;
	VehicleMesh = CreateDefaultSubobject<UStaticMeshComponent>("VehicleMesh");
	RootComponent = VehicleMesh;

	ReplicateMovement = true;
	SyncLocation = true;
	SyncRotation = true;
	NetSendRate = 0.05f;
	NetTimeBehind = 0.15f;
	NetLerpStart = 0.35f;
	NetPositionTolerance = 0.1f;
	NetSmoothing = 10.0f;
}

//Replicated Variables
void AVehicleSystemBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AVehicleSystemBase, RestState);
}

void AVehicleSystemBase::BeginPlay()
{
	Super::BeginPlay();
	SetReplicationTimer(ReplicateMovement);
}

void AVehicleSystemBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if(GetLocalRole() == ROLE_Authority)
	{
		Multicast_ChangedOwner();
	}
	ClearQueue();
}

void AVehicleSystemBase::UnPossessed()
{
	Super::UnPossessed();
	if(GetLocalRole() == ROLE_Authority)
	{
		Multicast_ChangedOwner();
	}
	ClearQueue();
}

// Sets IsVehicleAtRest to true if the vehicle is within the velocity threshold for 3 seconds
void AVehicleSystemBase::DetermineRestState()
{
	constexpr float RestVelocityThreshold = 50.0f; // Threshold at which the vehicle is considered not moving
	bool WithinRestThreshold = VehicleMesh->GetPhysicsLinearVelocity().Size() <= RestVelocityThreshold; // Vehicle is moving slow enough to be considered not moving (resting)
	
	if( WithinRestThreshold ) // Meets resting requirements
	{
		if ( !VehicleAtRest ) // Variable not resting yet
		{
			RestTimer += TickDeltaTime; // Increment rest timer
			if( RestTimer >= 3.0f ) // Resting conditions have been met for at least 3 seconds
			{
				VehicleAtRest = true;
			}
		}
		else
		{
			RestTimer = 0.0f; // Variable is at rest, reset timer
		}
	}
	else // Does not meet resting requirements
	{
		RestTimer = 0.0f; // Not resting, Reset rest timer
		VehicleAtRest = false; // Not resting, reset variable
	}
}

// We are using TickActor to gatekeep the tick function
void AVehicleSystemBase::TickActor(float DeltaTime, ELevelTick TickType, FActorTickFunction& ThisTickFunction)
{
	if (!IsPendingKill() && GetWorld())
	{
		TickDeltaTime = DeltaTime;

		// AVS performance checks
		DetermineRestState();
		bool NewPassive = DeterminePassiveState();
		if(NewPassive != PassiveMode)
		{
			PassiveMode = NewPassive;
			PassiveStateChanged(NewPassive);
		}
		if( PassiveMode && PassiveTickGatekeeping ){ PassiveTick(); return; } // Disallow standard tick when in passive mode
		Super::TickActor(DeltaTime, TickType, ThisTickFunction); // Super will call standard Tick function
	}
}

// Tick that uses minimal resources
void AVehicleSystemBase::PassiveTick()
{
	NetworkTick();
	PassiveTickBP(); // Tick blueprints
}

// Standard Unreal Tick
void AVehicleSystemBase::Tick(float DeltaTime)
{
	NetworkTick();
	Super::Tick(TickDeltaTime);
	if( !PassiveMode )
	{
		AVS_Tick(TickDeltaTime); // Decoupled blueprint tick
	}
}

// AVS Networking Tick
void AVehicleSystemBase::NetworkTick()
{
	NetworkRoles CurrentRole = GetNetworkRole();
	if (CurrentRole != NetworkRoles::Owner)
	{
		if (ReplicateMovement && ShouldSyncWithServer)
		{
			SyncPhysics();
		}
	}

	// Update camera manager for network relevancy
	if( (CurrentRole != NetworkRoles::Server) && IsNetMode(NM_Client) )
	{
		if( APlayerController* PlayerController = Cast<APlayerController>(GetController()) )
		{
			APlayerCameraManager* CameraManager = PlayerController->PlayerCameraManager;
			if( CameraManager && CameraManager->bUseClientSideCameraUpdates )
			{
				CameraManager->bShouldSendClientSideCameraUpdate = true;
			}
		}
	}
}

void AVehicleSystemBase::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

float AVehicleSystemBase::GetSteeringFromCurve(float Speed)
{
	const FRichCurve *SCurve = SteeringCurve.GetRichCurveConst();
	return SCurve->Eval(Speed);
}

void AVehicleSystemBase::SetShouldSyncWithServer(bool ShouldSync)
{
	ShouldSyncWithServer = ShouldSync;
	SetReplicationTimer(ShouldSync);
}

void AVehicleSystemBase::SetReplicationTimer(bool Enabled)
{
	if (ReplicateMovement && Enabled)
	{
		GetWorldTimerManager().SetTimer(NetSendTimer, this, &AVehicleSystemBase::NetStateSend, NetSendRate, true);
	}
	else
	{
		GetWorldTimerManager().ClearTimer(NetSendTimer);
		NetworkAtRest = false;
		ClearQueue();
	}
}

void AVehicleSystemBase::NetStateSend()
{
	if (GetNetworkRole() == NetworkRoles::Owner)
	{
		FNetState NewState = CreateNetStateForNow();

		// Only send while not at rest
		if ( !VehicleAtRest ) // Not at rest
		{
			Server_ReceiveNetState(NewState); // Send moving state
			if ( NetworkAtRest ) // NetRest is resting but should not be
			{
				FNetState BlankRestState;
				Server_ReceiveRestState(BlankRestState); // Reset NetRest
			}
		}
		else // Is at rest
		{
			// NetRest is not resting but should be, or distance is too different
			if( !NetworkAtRest || (FVector::DistXY(RestState.position, NewState.position) > 50) )
			{
				Server_ReceiveRestState(NewState);
			}
		}

		if (StateQueue.Num() > 0)
		{
			ClearQueue(); //Clear the queue if we are the owner to avoid syncing to old states
		}
	}
}

FNetState AVehicleSystemBase::CreateNetStateForNow()
{
	FNetState newState;
	FTransform primTransform = VehicleMesh->GetComponentToWorld();
	newState.position = primTransform.GetLocation();
	newState.rotation = primTransform.GetRotation().Rotator();
	newState.velocity = VehicleMesh->GetPhysicsLinearVelocity();
	newState.angularVelocity = VehicleMesh->GetPhysicsAngularVelocityInDegrees();
	newState.timestamp = GetLocalWorldTime();
	return newState;
}

bool AVehicleSystemBase::Server_ReceiveNetState_Validate(FNetState State)
{
	return true;
}
void AVehicleSystemBase::Server_ReceiveNetState_Implementation(FNetState State)
{
	Client_ReceiveNetState(State);
}

bool AVehicleSystemBase::Client_ReceiveNetState_Validate(FNetState State)
{
	return true;
}
void AVehicleSystemBase::Client_ReceiveNetState_Implementation(FNetState State)
{
	if(ShouldSyncWithServer)
	{
		AddStateToQueue(State);
	}
}

bool AVehicleSystemBase::Server_ReceiveRestState_Validate(FNetState State)
{
	return true;
}
void AVehicleSystemBase::Server_ReceiveRestState_Implementation(FNetState State)
{
	RestState = State; //Clients should still receive even when not actively syncing
	if(GetLocalRole() == ROLE_Authority) {OnRep_RestState();} //RepNotify on Server
}

bool AVehicleSystemBase::Multicast_ChangedOwner_Validate()
{
	return true;
}
void AVehicleSystemBase::Multicast_ChangedOwner_Implementation()
{
	ClearQueue();
	OwnerChanged();
}

void AVehicleSystemBase::AddStateToQueue(FNetState StateToAdd)
{
	if (GetNetworkRole() != NetworkRoles::Owner)
	{
		//If we have 10 or more states we are flooded and should drop new states
		if (StateQueue.Num() < 10)
		{
			StateToAdd.timestamp += NetTimeBehind; //Change the timestamp to the future so we can lerp

			if(StateToAdd.timestamp < LastActiveTimestamp)
			{
				return; //This state is late and should be discarded
			}

			if (StateQueue.IsValidIndex(0))
			{
				int8 lastindex = StateQueue.Num() - 1;
				for (int8 i = lastindex; i >= 0; --i)
				{
					if (StateQueue.IsValidIndex(i))
					{
						if (StateQueue[i].timestamp < StateToAdd.timestamp)
						{
							StateQueue.Insert(StateToAdd, i + 1);
							CalculateTimestamps();
							StateToAdd.localtimestamp = StateQueue[i+1].timestamp;
							break;
						}
					}
				}
			}
			else
			{
				StateToAdd.localtimestamp = GetLocalWorldTime() + NetTimeBehind;
				StateQueue.Insert(StateToAdd, 0); //If the queue is empty just add it in the first spot
			}
		}
	}
}

void AVehicleSystemBase::ClearQueue()
{
	StateQueue.Empty();
	CreateNewStartState = true;
	LastActiveTimestamp = 0;
}

void AVehicleSystemBase::CalculateTimestamps()
{
	int8 lastindex = StateQueue.Num() - 1;
	for (int8 i = 0; i <= lastindex; i++)
	{
		//The first state is always our point of reference and should not change
		//Especially since it could be actively syncing
		if(i != 0)
		{
			if (StateQueue.IsValidIndex(i))
			{
				//Calculate the time difference in the owners times and apply it to our local times
				float timeDifference = StateQueue[i].timestamp - StateQueue[i-1].timestamp;
				StateQueue[i].localtimestamp = StateQueue[i-1].localtimestamp + timeDifference;
			}
		}
	}
}

void AVehicleSystemBase::SyncPhysics()
{
	if(NetworkAtRest)
	{
		SetVehicleLocation(RestState.position, RestState.rotation);
		if(StateQueue.Num() > 0)
		{
			ClearQueue(); //Queue should be empty while resting
		}
		return;
	}

	if (StateQueue.IsValidIndex(0))
	{
		FNetState NextState = StateQueue[0];
		float ServerTime = GetLocalWorldTime();

		//use physics until we are close enough to this timestamp
		if (ServerTime >= (NextState.localtimestamp - NetLerpStart))
		{
			if (CreateNewStartState)
			{
				LerpStartState = CreateNetStateForNow();
				CreateNewStartState = false;

					//If our start state is nearly equal to our end state, just skip it
					//This keeps the physics from looking weird when moving slowly, and allows physics to settle
				if (FMath::IsNearlyEqual(LerpStartState.position.X, NextState.position.X, NetPositionTolerance) &&
                    FMath::IsNearlyEqual(LerpStartState.position.Y, NextState.position.Y, NetPositionTolerance) &&
                    FMath::IsNearlyEqual(LerpStartState.position.Z, NextState.position.Z, NetPositionTolerance))
				{
					StateQueue.RemoveAt(0);
					CreateNewStartState = true;
					return;
				}
			}
			
			LastActiveTimestamp = NextState.timestamp;

			//Lerp To State
			//Our start state may have been created after the lerp start time, so choose whatever is latest
			float lerpBeginTime = LerpStartState.timestamp;
			float lerpPercent = FMath::Clamp(GetPercentBetweenValues(ServerTime, lerpBeginTime, NextState.localtimestamp), 0.0f, 1.0f);
			FVector NewPosition = UKismetMathLibrary::VLerp(LerpStartState.position, NextState.position, lerpPercent);
			FRotator NewRotation = UKismetMathLibrary::RLerp(LerpStartState.rotation, NextState.rotation, lerpPercent, true);
			SetVehicleLocation(NewPosition, NewRotation);

			if(lerpPercent >= 0.99f || lerpBeginTime > NextState.localtimestamp)
			{
				ApplyExactNetState(NextState);
				StateQueue.RemoveAt(0);
				CreateNewStartState = true;
			}
		}
	}
}

void AVehicleSystemBase::LerpToNetState(FNetState NextState, float CurrentServerTime)
{
	//Our start state may have been created after the lerp start time, so choose whatever is latest
	float lerpBeginTime = FMath::Max(LerpStartState.timestamp, (NextState.timestamp - NetLerpStart));

	float lerpPercent = FMath::Clamp(GetPercentBetweenValues(CurrentServerTime, lerpBeginTime, NextState.timestamp), 0.0f, 1.0f);

	FVector NewPosition = UKismetMathLibrary::VLerp(LerpStartState.position, NextState.position, lerpPercent);
	FRotator NewRotation = UKismetMathLibrary::RLerp(LerpStartState.rotation, NextState.rotation, lerpPercent, true);
	SetVehicleLocation(NewPosition, NewRotation);
}

void AVehicleSystemBase::ApplyExactNetState(FNetState State)
{
	SetVehicleLocation(State.position, State.rotation);
	VehicleMesh->SetPhysicsLinearVelocity(State.velocity);
	VehicleMesh->SetPhysicsAngularVelocityInDegrees(State.angularVelocity);
}

//Note: SetActorLocationAndRotation is twice as fast as calling SetActorLocation and SetActorRotation separately
//Which is why this is structured this way
void AVehicleSystemBase::SetVehicleLocation(FVector NewPosition, FRotator NewRotation)
{
	//Teleports to new location instantly if over 3000cm
	if(FVector::DistXY(VehicleMesh->GetComponentLocation(), NewPosition) <= 3000)
	{
		//Move vehicle chassis
		FVector SmoothPos = UKismetMathLibrary::VInterpTo(VehicleMesh->GetComponentLocation(), NewPosition, TickDeltaTime, NetSmoothing);
		FRotator SmoothRot = UKismetMathLibrary::RInterpTo(VehicleMesh->GetComponentRotation(), NewRotation, TickDeltaTime, NetSmoothing);
		if (SyncLocation && SyncRotation)
		{
			SetActorLocationAndRotation(SmoothPos, SmoothRot, false, nullptr, TeleportFlagToEnum(false));
		}
		else
		{
			if(SyncLocation)
			{
				SetActorLocation(SmoothPos, false, nullptr, TeleportFlagToEnum(false));
			}
			if(SyncRotation)
			{
				SetActorRotation(SmoothRot, TeleportFlagToEnum(false));
			}
		}
	}
	else
	{
		//Teleport Vehicle chassis
		if (SyncLocation && SyncRotation)
		{
			SetActorLocationAndRotation(NewPosition, NewRotation, false, nullptr, TeleportFlagToEnum(true));
		}
		else
		{
			if(SyncLocation)
			{
				SetActorLocation(NewPosition, false, nullptr, TeleportFlagToEnum(true));
			}
			if(SyncRotation)
			{
				SetActorRotation(NewRotation, TeleportFlagToEnum(true));
			}
		}
		VehicleMesh->SetPhysicsLinearVelocity(FVector::ZeroVector);
		VehicleMesh->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);

		//Reset the wheel positions
		TeleportWheels();
	}
}