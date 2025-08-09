// Copyright LowkeyMe. All Rights Reserved. 2022


#include "Maze.h"

#include "Algorithms/Algorithm.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"

DEFINE_LOG_CATEGORY(LogMaze);

FMazeSize::FMazeSize(): X(5), Y(5)
{
}

FMazeSize::operator FIntVector2() const
{
	return FIntVector2{X, Y};
}


void FMazeCoordinates::ClampByMazeSize(const FMazeSize& MazeSize)
{
	if (X >= MazeSize.X)
	{
		X = MazeSize.X - 1;
	}
	if (Y >= MazeSize.Y)
	{
		Y = MazeSize.Y - 1;
	}
}

bool FMazeCoordinates::operator==(const FMazeCoordinates& Other) const
{
	return X == Other.X && Y == Other.Y;
}

bool FMazeCoordinates::operator!=(const FMazeCoordinates& Other) const
{
	return !(*this == Other);
}

FMazeCoordinates::operator TTuple<int, int>() const
{
	return TPair<int32, int32>{X, Y};
}

AMaze::AMaze()
{
	PrimaryActorTick.bCanEverTick = false;

	

	//TMap<EGenerationAlgorithm, TSharedPtr<Algorithm>> GenerationAlgorithms;
	GenerationAlgorithms.Add(EGenerationAlgorithm::BinaryDFS, MakeShareable(new Algorithm()));

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent->SetMobility(EComponentMobility::Static);

	FloorCells = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorCells"));
	if (FloorCells)
	{
		FloorCells->SetupAttachment(GetRootComponent());
	}

	PathFloorCells = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("PathFloorCells"));
	if (PathFloorCells)
	{
		PathFloorCells->SetupAttachment(GetRootComponent());
	}

	WallCells = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("WallCells"));
	if (WallCells)
	{
		WallCells->SetupAttachment(GetRootComponent());
	}

	OutlineWallCells = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("OutlineWallCells"));
	if (OutlineWallCells)
	{
		OutlineWallCells->SetupAttachment(GetRootComponent());
	}
}
// C++
AActor* AMaze::SpawnAndNameActor(
	TSubclassOf<AActor> ActorClass,
	const FTransform& SpawnTransform,
	int32 X,
	int32 Y,
	const FString& NameFormat
)
{
	if (!ActorClass) return nullptr;

	AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(ActorClass, SpawnTransform);
	if (SpawnedActor)
	{
		FString CustomName = FString::Format(*NameFormat, { X, Y });

		SpawnedActor->Rename(*CustomName);
		SpawnedActor->SetActorLabel(CustomName);
	}
	return SpawnedActor;
}


void AMaze::UpdateMaze()
{
	
	// C++
	RandomStream.Initialize(Seed); // Use your Seed property or any int32 seed

	//return;
	for (AActor* Actor : SpawnedRoadActors)
	{
		if (Actor)
		{
			Actor->Destroy();
		}
	}
	SpawnedRoadActors.Empty();
	ClearMaze();

	if (!(FloorStaticMesh && WallStaticMesh))
	{
		UE_LOG(LogMaze, Warning, TEXT("To create maze specify FloorStaticMesh and WallStaticMesh."));
		return;
	}

	FloorCells->SetStaticMesh(FloorStaticMesh);
	WallCells->SetStaticMesh(WallStaticMesh);
	if (OutlineStaticMesh)
	{
		OutlineWallCells->SetStaticMesh(OutlineStaticMesh);
	}
	if (PathStaticMesh)
	{
		PathFloorCells->SetStaticMesh(PathStaticMesh);
	}

	MazeCellSize = GetMaxCellSize();

	if (OutlineStaticMesh)
	{
		CreateMazeOutline();
	}
	auto& MazeGen = GenerationAlgorithms[EGenerationAlgorithm::BinaryDFS];
	auto GeneratedMazeGrid = MazeGen->GetGrid(MazeSize, Seed,PathStart,PathEnd, bGeneratePath);
	
	TArray<TArray<TCHAR>> RoadLetterGrid = MazeGen->ConvertGridToRoadLetters(GeneratedMazeGrid);

	AMaze::Label4x4WallBlocks(RoadLetterGrid, RandomStream);
	AMaze::Label2x2WallBlocks(RoadLetterGrid, RandomStream,Seed);

	// print the roadletter grid
	for (const auto& Row : RoadLetterGrid)
	{
		FString RowString;
		for (const auto& Cell : Row)
		{
			RowString.AppendChar(Cell);
		}
		UE_LOG(LogMaze, Log, TEXT("%s"), *RowString);
		OutputDebugStringW(*RowString);
		OutputDebugStringW(L"\n"); // For a new line
	}



	//MazeGrid = GenerationAlgorithms[GenerationAlgorithm]->GetGrid(MazeSize, Seed);
	//MazeGrid[PathStart.Y][PathStart.X] = 1;
	//MazeGrid[PathEnd.Y][PathEnd.X] = 1;
	

	for (int32 Y = 0; Y < MazeSize.Y -1 ; ++Y)
	{
		for (int32 X = 0; X < MazeSize.X; ++X)
		{
			TCHAR Letter = RoadLetterGrid[Y][X];
			if (Letter != '1' && Letter != '2' && Letter != '3' && Letter != '4' && Letter != '5' && Letter != '6' && Letter != '7' && Letter != '8' && Letter != '9')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (RoadSystemBlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(RoadSystemBlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("Road_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							FString RoadLetter = FString::Chr(RoadLetterGrid[Y][X]);
							SpawnedActor->SetActorLabel(FString::Printf(TEXT("Road_%d_%d_%s"), X, Y, *RoadLetter));
						}




					}
				}
			}
			// if y = 0 and x>11 set letter to ""
			if (Y == 0 && X > 11)
			{
				Letter = ' ';
			}
			if (Y == 1 && X == 18)
			{
				Letter = ' ';
			}
			if (Letter == '1')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				FString RoadLetter = GetRandomNeighborRoadLetter(RoadLetterGrid, X, Y);

				if (Parcel1BlueprintClass && RoadLetter.Len() > 0)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel1BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						
						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							FString RoadLetter2 = GetRandomNeighborRoadLetter(RoadLetterGrid, X, Y);

							SpawnedActor->SetActorLabel(FString::Printf(TEXT("House_%d_%d_%s"), X, Y, *RoadLetter2));
						}




					}
				}
				else if (Parcel2BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel2BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						// pick a random letter w x y or z 
						// C++
						FString Possibles = TEXT("WXYZ");
						int32 RandomIndex = RandomStream.RandRange(0, 3);
						RoadLetter = Possibles.Mid(RandomIndex, 1);


						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							SpawnedActor->SetActorLabel(FString::Printf(TEXT("Park_%d_%d_%s"), X, Y, *RoadLetter));
						}




					}
				}
			}
			if (Letter == '2')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel1BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("House_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							FString RoadLetter = GetRandomNeighborRoadLetter(RoadLetterGrid, X, Y);

							SpawnedActor->SetActorLabel(FString::Printf(TEXT("Road_%d_%d_%s"), X, Y, *RoadLetter));
						}
					}
				}
			}
			if (Letter == '3')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel5BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("BigShop_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						
					}
				}
			}
			if (Letter == '4')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel6BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("Field_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						
					}
				}
			}
			if (Letter == '5')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel3BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("Hospital_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
					}
				}
			}
			if (Letter == '6')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel4BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("Farm_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						
					}
				}
			}
			if (Letter == '7')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel4BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("House_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							FString RoadLetter = GetRandomNeighborRoadLetter(RoadLetterGrid, X, Y);

							SpawnedActor->SetActorLabel(FString::Printf(TEXT("Road_%d_%d_%s"), X, Y, *RoadLetter));
						}
					}
				}
			}
			if (Letter == '8')
			{
				const FVector Location((X * 2400) - 16800.0, (Y * 2400) - 26400.0 + 1200, 0.f);
				//PathFloorCells->AddInstance(FTransform(Location));
				FVector SpawnLocation = Location;
				// C++
				if (Parcel1BlueprintClass)
				{
					// Spawn the blueprint directly as an actor
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Parcel4BlueprintClass, FTransform(SpawnLocation));

					if (SpawnedActor)
					{
						// Attach the spawned actor to BP_Maze's Root Component
						SpawnedActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
						// rename the spawned actor based on the x and y coordinates
						SpawnedActor->SetActorLabel(FString::Printf(TEXT("House_%d_%d"), X, Y));

						// Optionally, track the spawned actor for later use
						SpawnedRoadActors.Add(SpawnedActor);
						// loop thropugh the RoadLetterGrid and set the name to have road letter on the end
						if (RoadLetterGrid.IsValidIndex(Y) && RoadLetterGrid[Y].IsValidIndex(X))
						{
							FString RoadLetter = GetRandomNeighborRoadLetter(RoadLetterGrid, X, Y);

							SpawnedActor->SetActorLabel(FString::Printf(TEXT("Road_%d_%d_%s"), X, Y, *RoadLetter));
						}
					}
				}
			}
		}
	}
	UE_LOG(LogTemp, Log, TEXT("DEBUG: starting blueprint")); // First debug line
	OnMazeActorsSpawned();
	UE_LOG(LogTemp, Log, TEXT("DEBUG: blueprint finished")); // First debug line
	EnableCollision(bUseCollision);
}

// C++
FString AMaze::GetRandomNeighborRoadLetter(const TArray<TArray<TCHAR>>& RoadLetterGrid, int32 X, int32 Y) const
{
	// check if the roadlettergrid
	TArray<TCHAR> NeighborLetters;
	const int32 DX[4] = { 0, 1, 0, -1 };
	const int32 DY[4] = { -1, 0, 1, 0 };

	const TCHAR Directions[4] = { 'W', 'X', 'Y', 'Z' };
	for (int32 Dir = 0; Dir < 4; ++Dir)
	{
		int32 NX = X + DX[Dir];
		int32 NY = Y + DY[Dir];
		if (RoadLetterGrid.IsValidIndex(NY) && RoadLetterGrid[NY].IsValidIndex(NX))
		{
			TCHAR Neighbor = RoadLetterGrid[NY][NX];
			if (Neighbor < '0' || Neighbor > '9') // Not a number
			{
				NeighborLetters.Add(Directions[Dir]);

			}
		}
	}
	if (NeighborLetters.Num() >= 3)
	{
		
		return FString();
	}
	if (NeighborLetters.Num() > 0)
	{
		int32 RandomIdx = RandomStream.RandRange(0, NeighborLetters.Num() - 1);
		return FString::Chr(NeighborLetters[RandomIdx]);
	}
	
	return FString();
}

void AMaze::Label4x4WallBlocks(TArray<TArray<TCHAR>>& LetterGrid, FRandomStream& Stream)
{
	int32 Height = LetterGrid.Num();
	int32 Width = (Height > 0) ? LetterGrid[0].Num() : 0;

	struct FBlockPos { int32 X, Y; };
	TArray<FBlockPos> BoundaryBlocks;
	TArray<FBlockPos> MiddleBlocks;

	// 1. Collect all valid 4x4 blocks
	for (int32 y = 0; y <= Height - 4; ++y)
	{
		for (int32 x = 0; x <= Width - 4; ++x)
		{
			bool IsBlock = true;
			for (int32 dy = 0; dy < 4 && IsBlock; ++dy)
			{
				for (int32 dx = 0; dx < 4; ++dx)
				{
					if (LetterGrid[y + dy][x + dx] != '1')
					{
						IsBlock = false;
						break;
					}
				}
			}
			if (IsBlock)
			{
				bool OnBoundary = (x == 0 || y == 0 || x + 4 == Width || y + 4 == Height);
				if (OnBoundary)
					BoundaryBlocks.Add({ x, y });
				else
					MiddleBlocks.Add({ x, y });
			}
		}
	}

	// 2. Randomly select one from each (if any)
	if (BoundaryBlocks.Num() > 0)
	{
		const FBlockPos& Block = BoundaryBlocks[Stream.RandRange(0, BoundaryBlocks.Num() - 1)];
		for (int32 dy = 0; dy < 4; ++dy)
		{
			for (int32 dx = 0; dx < 4; ++dx)
			{
				if (dx == 0 && dy == 3)
				{
					LetterGrid[Block.Y + dy][Block.X + dx] = '6';
				}
				else
				{
					LetterGrid[Block.Y + dy][Block.X + dx] = '9';
				}
			}
		}
	}
	if (MiddleBlocks.Num() > 0)
	{
		const FBlockPos& Block = MiddleBlocks[Stream.RandRange(0, MiddleBlocks.Num() - 1)];
		for (int32 dy = 0; dy < 4; ++dy)
		{
			for (int32 dx = 0; dx < 4; ++dx)
			{
				if (dx == 0 && dy == 3)
				{
					LetterGrid[Block.Y + dy][Block.X + dx] = '5';
				}
				else
				{
					LetterGrid[Block.Y + dy][Block.X + dx] = '9';
				}
			}
		}
	}
}
// C++
void AMaze::Label2x2WallBlocks(TArray<TArray<TCHAR>>& LetterGrid, FRandomStream& Stream, int32 Seed)
{
	int32 Height = LetterGrid.Num();
	int32 Width = (Height > 0) ? LetterGrid[0].Num() : 0;

	struct FBlockPos { int32 X, Y; };

	for (int32 y = 0; y <= Height - 2; ++y)
	{
		for (int32 x = 0; x <= Width - 2; ++x)
		{
			// Check if this is a valid 2x2 block of '1's
			bool IsBlock = true;
			// using Randomstream change isblock to false 30% of the time
			float ChanceOfFalse = 0.5f - 0.5f * (static_cast<float>(Seed) / 100.0f);
			if (ChanceOfFalse < 0.0f) ChanceOfFalse = 0.0f;
			if (ChanceOfFalse > 0.5f) ChanceOfFalse = 0.5f;

			if (Stream.FRand() < ChanceOfFalse)
			{
				IsBlock = false;
			}

			
			for (int32 dy = 0; dy < 2 && IsBlock; ++dy)
			{
				for (int32 dx = 0; dx < 2; ++dx)
				{
					if (LetterGrid[y + dy][x + dx] != '1')
					{
						IsBlock = false;
						break;
					}
				}
			}
			if (IsBlock)
			{
				bool OnBoundary = (x == 0 || y == 0 || x + 2 == Width || y + 2 == Height);
				for (int32 dy = 0; dy < 2; ++dy)
				{
					for (int32 dx = 0; dx < 2; ++dx)
					{
						if (dx == 0 && dy == 1)
						{
							LetterGrid[y + dy][x + dx] = OnBoundary ? '4' : '3';
						}
						else
						{
							LetterGrid[y + dy][x + dx] = '9';
						}
					}
				}
			}
		}
	}
}

void AMaze::CreateMazeOutline() const
{
	FVector Location1{0.f};
	FVector Location2{0.f};

	Location1.Y = -MazeCellSize.Y;
	Location2.Y = MazeCellSize.Y * MazeSize.Y;
	for (int32 X = -1; X < MazeSize.X + 1; ++X)
	{
		Location1.X = Location2.X = X * MazeCellSize.X;
		OutlineWallCells->AddInstance(FTransform{Location1});
		OutlineWallCells->AddInstance(FTransform{Location2});
	}

	Location1.X = -MazeCellSize.X;
	Location2.X = MazeCellSize.X * MazeSize.X;
	for (int32 Y = 0; Y < MazeSize.Y; ++Y)
	{
		Location1.Y = Location2.Y = Y * MazeCellSize.Y;
		OutlineWallCells->AddInstance(FTransform{Location1});
		OutlineWallCells->AddInstance(FTransform{Location2});
	}
}

TArray<TArray<uint8>> AMaze::GetMazePath(const FMazeCoordinates& Start, const FMazeCoordinates& End, int32& OutLength)
{
	TArray<TArray<int32>> Graph;
	Graph.Reserve(MazeGrid.Num() * MazeGrid[0].Num());

	// Graph creation.
	for (int32 GraphVertex,
	           Y = 0; Y < MazeGrid.Num(); ++Y)
	{
		for (int32 X = 0; X < MazeGrid[Y].Num(); ++X)
		{
			GraphVertex = Y * MazeGrid[Y].Num() + X;

			Graph.Emplace(TArray<int32>());
			if (!MazeGrid[Y][X])
			{
				continue;
			}

			Graph[GraphVertex].Reserve(4); // There are only 4 directions possible.

			if (X > 0 && MazeGrid[Y][X - 1]) // West direction.
			{
				Graph[GraphVertex].Emplace(GraphVertex - 1);
			}
			if (X + 1 < MazeGrid[Y].Num() && MazeGrid[Y][X + 1]) // East direction.
			{
				Graph[GraphVertex].Emplace(GraphVertex + 1);
			}
			if (Y > 0 && MazeGrid[Y - 1][X]) // North direction.
			{
				Graph[GraphVertex].Emplace(GraphVertex - MazeGrid[Y].Num());
			}
			if (Y + 1 < MazeGrid.Num() && MazeGrid[Y + 1][X]) // South direction.
			{
				Graph[GraphVertex].Emplace(GraphVertex + MazeGrid[Y].Num());
			}

			Graph[GraphVertex].Shrink();
		}
	}

	const int32 StartVertex = Start.Y * MazeGrid[0].Num() + Start.X;
	const int32 EndVertex = End.Y * MazeGrid[0].Num() + End.X;


	TQueue<int32> Vertices;

	const int32 VerticesAmount = MazeGrid.Num() * MazeGrid[0].Num();

	TArray<bool> Visited;
	Visited.Init(false, VerticesAmount);

	TArray<int32> Parents;
	Parents.Init(-1, VerticesAmount);

	TArray<int32> Distances;
	Distances.Init(0, VerticesAmount);

	int32 Vertex;
	Vertices.Enqueue(StartVertex);
	Visited[StartVertex] = true;
	while (Vertices.Dequeue(Vertex))
	{
		for (int32 i = 0; i < Graph[Vertex].Num(); ++i)
		{
			const int32 Adjacent = Graph[Vertex][i];
			if (!Visited[Adjacent])
			{
				Visited[Adjacent] = true;
				Vertices.Enqueue(Adjacent);
				Distances[Adjacent] = Distances[Vertex] + 1;
				Parents[Adjacent] = Vertex;
			}
		}
	}

	TArray<int32> GraphPath;
	if (!Visited[EndVertex])
	{
		UE_LOG(LogMaze, Warning, TEXT("Path is not reachable."));
		return TArray<TArray<uint8>>();
	}

	for (int VertexNumber = EndVertex; VertexNumber != -1; VertexNumber = Parents[VertexNumber])
	{
		GraphPath.Emplace(VertexNumber);
	}

	Algo::Reverse(GraphPath);

	TArray<TArray<uint8>> Path;
	Path.Init(TArray<uint8>(), MazeGrid.Num());
	for (int Y = 0; Y < MazeGrid.Num(); ++Y)
	{
		Path[Y].SetNumZeroed(MazeGrid[Y].Num());
	}

	for (int32 VertexNumber, i = 0; i < GraphPath.Num(); ++i)
	{
		VertexNumber = GraphPath[i];

		Path[VertexNumber / MazeGrid[0].Num()][VertexNumber % MazeGrid[0].Num()] = 1;
	}


	OutLength = Distances[EndVertex] + 1;
	return Path;
}

void AMaze::EnableCollision(const bool bShouldEnable)
{
	if (bShouldEnable)
	{
		FloorCells->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		WallCells->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		OutlineWallCells->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		PathFloorCells->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		FloorCells->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		WallCells->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		OutlineWallCells->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		PathFloorCells->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}


void AMaze::ClearMaze() const
{
	FloorCells->ClearInstances();
	WallCells->ClearInstances();
	OutlineWallCells->ClearInstances();
	PathFloorCells->ClearInstances();
}

FVector2D AMaze::GetMaxCellSize() const
{
	const FVector FloorSize3D = FloorStaticMesh->GetBoundingBox().GetSize();
	const FVector WallSize3D = WallStaticMesh->GetBoundingBox().GetSize();

	const FVector2D FloorSize2D{FloorSize3D.X, FloorSize3D.Y};
	const FVector2D WallSize2D{WallSize3D.X, WallSize3D.Y};

	const FVector2D MaxCellSize = FVector2D::Max(FloorSize2D, WallSize2D);
	if (OutlineStaticMesh)
	{
		const FVector OutlineSize3D = OutlineStaticMesh->GetBoundingBox().GetSize();
		const FVector2D OutlineSize2D{OutlineSize3D.X, OutlineSize3D.Y};
		if (OutlineSize2D.X > MaxCellSize.X && OutlineSize2D.Y > MaxCellSize.Y)
		{
			return OutlineSize2D;
		}
	}
	return MaxCellSize;
}

void AMaze::Randomize()
{
	//MazeSize.X = FMath::RandRange(3, 101) | 1; // | 1 to make odd.
	//MazeSize.Y = FMath::RandRange(3, 101) | 1;

	TArray<EGenerationAlgorithm> Algorithms;
	const int32 Num = GenerationAlgorithms.GetKeys(Algorithms);
	//GenerationAlgorithm = Algorithms[FMath::RandRange(0, Num - 1)];

	//Seed = FMath::RandRange(1, 10100);
	// how do i set the seed to todays date
	Seed = FDateTime::Now().GetDayOfYear();

	UpdateMaze();
}


void AMaze::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

#if WITH_EDITOR
	if (Transform.Equals(LastMazeTransform))
	{
#endif
		UpdateMaze();
#if WITH_EDITOR
	}
	LastMazeTransform = Transform;
#endif
}
