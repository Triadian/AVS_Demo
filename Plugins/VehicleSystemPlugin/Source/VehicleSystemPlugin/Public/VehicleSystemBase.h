// Copyright 2019-2023 Seven47 Software. All Rights Reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited

#pragma once

#include "CoreMinimal.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Components/PrimitiveComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/GameStateBase.h"
#include "VehicleSystemBase.generated.h"

USTRUCT(BlueprintType)
struct FNetState
{
	GENERATED_BODY()

	UPROPERTY()
	float timestamp;
	UPROPERTY(NotReplicated)
	float localtimestamp;
	UPROPERTY()
	FVector position;
	UPROPERTY()
	FRotator rotation;
	UPROPERTY()
	FVector velocity;
	UPROPERTY()
	FVector angularVelocity;

	FNetState()
	{
		timestamp = 0.0f;
		localtimestamp = 0.0f;
		position = FVector::ZeroVector;
		rotation = FRotator::ZeroRotator;
		velocity = FVector::ZeroVector;
		angularVelocity = FVector::ZeroVector;
	}
};

UENUM(BlueprintType)
enum class NetworkRoles : uint8
{
	None, Owner, Server, Client, ClientSpawned
};

USTRUCT(BlueprintType)
struct FVehicleGear
{
	GENERATED_BODY()

	/** Determines the amount of torque multiplication*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float EndSpeed = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float StartSpeed = 0.0f;

	/** Determines the amount of torque multiplication*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float UpShift = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float DownShift = 0.0f;

	/** Determines the amount of torque multiplication*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float HighRPM = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float LowRPM = 0.0f;

	/** Determines the amount of torque multiplication*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float MaxTorque = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	float MinTorque = 0.0f;
};

UCLASS(Blueprintable)
class VEHICLESYSTEMPLUGIN_API AVehicleSystemBase : public APawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
	bool DeterminePassiveState();

	UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
	void PassiveStateChanged(bool NewPassiveState);

public:
	AVehicleSystemBase();
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const override;
	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;

	float TickDeltaTime = 0;
	void PassiveTick();
	void NetworkTick();

	// Tick used for internal AVS functions
	UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
	void AVS_Tick(float DeltaTime);

	// Called while the normal Tick function is disabled due to gatekeeping
	UFUNCTION(BlueprintImplementableEvent, Category = "Vehicle - General", meta=(DisplayName = "AVS_PassiveTick"))
	void PassiveTickBP();
	
	// Low resource mode, should be active when vehicle is completely idle
	UPROPERTY(BlueprintReadOnly, Category = "Vehicle - General")
	bool PassiveMode = false;

	// Should passive mode gatekeep the standard Tick event, highly recommended to keep this true.
	// You can use the "AVS_PassiveTick" function for things that need to always tick
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - General", AdvancedDisplay)
	bool PassiveTickGatekeeping = true;

	// Vehicle is at rest locally (not tied to networking)
	UPROPERTY(BlueprintReadOnly, Category = "Vehicle - General")
	bool VehicleAtRest = false;

	void DetermineRestState();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Vehicle - General")
	UStaticMeshComponent* VehicleMesh;
	
	/** Steering relative to speed*/
	UPROPERTY(EditAnywhere, Category = "Vehicle - General", meta=(XAxisName="Speed",YAxisName="Steering" ))
	FRuntimeFloatCurve SteeringCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - General")
	float SteeringSpeed = 2.5f;

	UFUNCTION(BlueprintPure, Category = "VehicleSystemPlugin")
	float GetSteeringFromCurve(float Speed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Transmission")
	TArray<FVehicleGear> Gears;

	static float GetPercentBetweenValues(float Value, float Begin, float End)
	{
		return (Value - Begin)/(End - Begin);
	}

	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "VehicleSystemPlugin")
	void SetVehicleLocation(FVector NewPosition, FRotator NewRotation);

	UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
	void TeleportWheels();

	//Networking
	float GetLocalWorldTime()
	{
		return GetWorld()->GetTimeSeconds();
	}

	bool ShouldSyncWithServer = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	bool ReplicateMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	bool SyncLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	bool SyncRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	float NetSendRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	float NetTimeBehind;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	float NetLerpStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	float NetPositionTolerance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vehicle - Network")
	float NetSmoothing;

	UPROPERTY(ReplicatedUsing=OnRep_RestState)
	FNetState RestState;

	UFUNCTION()
	void OnRep_RestState()
	{
		NetworkAtRest = (RestState.position != FVector::ZeroVector);
	}

	// Vehicle is considered at rest for network purposes
	UPROPERTY(BlueprintReadOnly, Category = "Vehicle - General")
	bool NetworkAtRest = false;
	UPROPERTY(BlueprintReadOnly, Category = "Vehicle - General")
	float RestTimer = 0.0f;
	
	TArray<FNetState> StateQueue;
	FNetState LerpStartState;
	bool CreateNewStartState = true;
	float LastActiveTimestamp = 0;
	
	FTimerHandle NetSendTimer;
	UFUNCTION()
	void NetStateSend();
	
	/**Used to temporarily disable movement replication, does not change ReplicateMovement */
	UFUNCTION(BlueprintCallable, Category = "VehicleSystemPlugin")
	void SetShouldSyncWithServer(bool ShouldSync);
	
	void SetReplicationTimer(bool Enabled);
	FNetState CreateNetStateForNow();
	void AddStateToQueue(FNetState StateToAdd);
	void ClearQueue();
	void CalculateTimestamps();
	void SyncPhysics();
	void LerpToNetState(FNetState NextState, float CurrentServerTime);
	void ApplyExactNetState(FNetState State);

	bool isServer()
	{
		UWorld* World = GetWorld();
		return World ? (World->GetNetMode() != NM_Client) : false;
	}
	
	NetworkRoles GetNetworkRole()
	{
		if(IsLocallyControlled())
		{
			//I'm controlling this
			return NetworkRoles::Owner;
		}
		else if(isServer())
		{
			if(IsPlayerControlled())
			{
				//I'm the server, and a client is controlling this
				return NetworkRoles::Server;
			}
			else
			{
				//I'm the server, and I'm controlling this because it's unpossessed
				return NetworkRoles::Owner;
			}
		}
		else if(GetLocalRole() == ROLE_Authority)
		{
			//I'm not the server, I'm not controlling this, and I have authority.
			return NetworkRoles::ClientSpawned;
		}
		else
		{
			//I'm a client and I'm not controlling this
			return NetworkRoles::Client;
		}
		return NetworkRoles::None;
	}

	UFUNCTION(BlueprintImplementableEvent)
	void BlueprintDebugMessage(const FString &text);

	/*UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
		void DebugReceivedNetState(float timestamp, float serverDelta, FVector position, FRotator rotation); // Used for development */

	UFUNCTION(Server, unreliable, WithValidation)
		void Server_ReceiveNetState(FNetState State);
		virtual bool Server_ReceiveNetState_Validate(FNetState State);
		virtual void Server_ReceiveNetState_Implementation(FNetState State);
	UFUNCTION(NetMulticast, unreliable, WithValidation)
		void Client_ReceiveNetState(FNetState State);
		virtual bool Client_ReceiveNetState_Validate(FNetState State);
		virtual void Client_ReceiveNetState_Implementation(FNetState State);
	UFUNCTION(Server, reliable, WithValidation)
		void Server_ReceiveRestState(FNetState State);
		virtual bool Server_ReceiveRestState_Validate(FNetState State);
		virtual void Server_ReceiveRestState_Implementation(FNetState State);
	UFUNCTION(NetMulticast, reliable, WithValidation)
		void Multicast_ChangedOwner();
		virtual bool Multicast_ChangedOwner_Validate();
		virtual void Multicast_ChangedOwner_Implementation();

	/** Called when the owning client changes (Possessed or UnPossessed) */
	UFUNCTION(BlueprintImplementableEvent, Category = "VehicleSystemPlugin")
	void OwnerChanged();
	//Networking End
};