#include "Algorithm.h"
#include <Maze.h>

#include "CoreMinimal.h"

FMazeCoordinates::FMazeCoordinates() : X(0), Y(0)
{
}

TArray<TArray<uint8>> Algorithm::GetGrid(const FIntVector2& Size, int32 Seed, FMazeCoordinates Start, FMazeCoordinates End, bool GenPath)
{
    FRandomStream RandomStream(Seed);

    // Create grid: 0 = unfilled, 1 = wall, 2 = passage
    TArray<TArray<uint8>> Grid = CreateFilledGrid(Size, 0);
    Grid[Start.Y][Start.X] = 2; // Start
    Grid[End.Y][End.X] = 2; // End
    Grid[0][9] = 2; // Bridge
    Grid[0][13] = 1; // Bridge
    Grid[0][14] = 1; // Bridge
    Grid[0][15] = 1; // Bridge
    Grid[0][16] = 1; // Bridge
    Grid[0][17] = 1; // Bridge
    Grid[0][18] = 1; // Bridge
    Grid[0][12] = 1; // Bridge

    // Collect unfilled coordinates
    TArray<FIntPoint> Unfilled;
    for (int32 Y = 0; Y < Size.Y -1; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 0)
                Unfilled.Add(FIntPoint(X, Y));
        }
    }

    ShuffleTArray<FIntPoint>(Unfilled, RandomStream);

    

    // Reset passages to unfilled
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 2)
                Grid[Y][X] = 0;
        }
    }
    FString LastRowString = TEXT("1111000000011111111");
    int32 LastRowIndex = Size.Y - 1;
    Grid[LastRowIndex].SetNum(LastRowString.Len());
    for (int32 i = 0; i < LastRowString.Len(); ++i)
    {
        Grid[LastRowIndex][i] = LastRowString[i] == '1' ? 1 : 0;
    }
    // Maze fill loop
    for (const FIntPoint& Coord : Unfilled)
    {
        Grid[Coord.Y][Coord.X] = 1;
        //PrintGrid(Grid); // Display current state
        TArray<TArray<uint8>> TestGrid = FloodFill(Grid, FIntPoint(Start.X, Start.Y), 1); // Cardinal-only fill
        TArray<FIntPoint> SolutionPath = FindPath(Grid, FIntPoint(Start.X, Start.Y), FIntPoint(End.X, End.Y), GenPath);
        int32 Turns = CountTurns(SolutionPath);
		// check if turns are greather seed * 2
        if (Turns > Seed * 2)
		{
            Grid[Coord.Y][Coord.X] = 0;
		}
        if (HasUnreachable(TestGrid) || !IsEndReachable(Grid, FIntPoint(Start.X, Start.Y), FIntPoint(End.X, End.Y)))
        {
            Grid[Coord.Y][Coord.X] = 0;
        }
    }
    TArray<FIntPoint> SolutionPath = FindPath(Grid, FIntPoint(Start.X, Start.Y), FIntPoint(End.X, End.Y),GenPath);
    int32 Turns = CountTurns(SolutionPath);
    UE_LOG(LogTemp, Log, TEXT("DEBUG: Turns = %d"), Turns); // First debug line

    for (const FIntPoint& Coord : SolutionPath)
    {
        Grid[Coord.Y][Coord.X] = 2;
    }
    //PrintGrid(Grid); // Display current state
    // Finalize passages
    
    // C++
    

    return (Grid);
}


// C++
TArray<TArray<TCHAR>> Algorithm::ConvertGridToRoadLetters(const TArray<TArray<uint8>>& Grid)
{
    int32 Height = Grid.Num();
    int32 Width = (Height > 0) ? Grid[0].Num() : 0;
    TArray<TArray<TCHAR>> LetterGrid;
    LetterGrid.SetNum(Height);

    for (int32 Y = 0; Y < Height; ++Y)
    {
        LetterGrid[Y].SetNum(Width);
        for (int32 X = 0; X < Width; ++X)
        {
            if (Grid[Y][X] == 1)
            {
                LetterGrid[Y][X] = '1'; // Wall, keep as '1' or any symbol you want
                continue;
            }

            // Check connections
            bool North = (Y > 0) && (Grid[Y - 1][X] == 0 || Grid[Y - 1][X] == 2);
            bool South = (Y < Height - 1) && (Grid[Y + 1][X] == 0 || Grid[Y + 1][X] == 2);
            bool East = (X < Width - 1) && (Grid[Y][X + 1] == 0 || Grid[Y][X + 1] == 2);
            bool West = (X > 0) && (Grid[Y][X - 1] == 0 || Grid[Y][X - 1] == 2);
            // if x = 0 and y = 11 set west to true
            
            if (X == 0 && Y == 11)
            {
                West = true;
            }
            if (X == 18 && Y == 11)
            {
                East = true;
            }
            if (X == 9 && Y == 0)
            {
                North = true;
            }

            // Map to letter
            if (East && West && !North && !South)
                LetterGrid[Y][X] = 'A';
            else if (North && South && !East && !West)
                LetterGrid[Y][X] = 'B';
            else if (North && East && !South && !West)
                LetterGrid[Y][X] = 'C';
            else if (North && West && !South && !East)
                LetterGrid[Y][X] = 'D';
            else if (South && East && !North && !West)
                LetterGrid[Y][X] = 'E';
            else if (South && West && !North && !East)
                LetterGrid[Y][X] = 'F';
            else if (North && South && West && !East)
                LetterGrid[Y][X] = 'G';
            else if (North && East && West && !South)
                LetterGrid[Y][X] = 'H';
            else if (South && East && West && !North)
                LetterGrid[Y][X] = 'I';
            else if (North && South && East && !West)
                LetterGrid[Y][X] = 'J';
            else if (North && South && East && West)
                LetterGrid[Y][X] = 'K';
            else if (North && !South && !East && !West)
                LetterGrid[Y][X] = 'L';
            else if (South && !North && !East && !West)
                LetterGrid[Y][X] = 'M';
            else if (East && !North && !South && !West)
                LetterGrid[Y][X] = 'N';
            else if (West && !North && !South && !East)
                LetterGrid[Y][X] = 'O';
            else
                LetterGrid[Y][X] = '0'; // Isolated or error
        }
    }

    return LetterGrid;
}



// C++
TArray<FIntPoint> Algorithm::FindPath(const TArray<TArray<uint8>>& Grid, const FIntPoint& Start, const FIntPoint& End, bool GenPath)
{
    TMap<FIntPoint, FIntPoint> CameFrom;
    TQueue<FIntPoint> Queue;
    Queue.Enqueue(Start);
    CameFrom.Add(Start, Start);

    while (!Queue.IsEmpty())
    {
        FIntPoint Current;
        Queue.Dequeue(Current);

        if (Current == End)
            break;

        const TArray<FIntPoint> Directions = {
            FIntPoint(0, -1), FIntPoint(0, 1),
            FIntPoint(-1, 0), FIntPoint(1, 0)
        };

        for (const FIntPoint& Dir : Directions)
        {
            FIntPoint Next(Current.X + Dir.X, Current.Y + Dir.Y);
            if (Next.Y >= 0 && Next.Y < Grid.Num() && Next.X >= 0 && Next.X < Grid[0].Num())
            {
                if (Grid[Next.Y][Next.X] == 0 && !CameFrom.Contains(Next))
                {
                    Queue.Enqueue(Next);
                    CameFrom.Add(Next, Current);
                }
            }
        }
    }

    // Reconstruct path
    TArray<FIntPoint> Path;
    
        FIntPoint Current = End;
        while (Current != Start)
        {
            Path.Insert(Current, 0);
            if (!CameFrom.Contains(Current)) break;
            Current = CameFrom[Current];
        }
        Path.Insert(Start, 0);
   
    return Path;
}
// C++
int32 Algorithm::CountTurns(const TArray<FIntPoint>& Path)
{
    //UE_LOG(LogTemp, Log, TEXT("DEBUG: Path.Num() = %d"), Path.Num()); // First debug line

    if (Path.Num() < 3) return 0;

    //UE_LOG(LogTemp, Log, TEXT("DEBUG: Passed Path.Num() check")); // Second debug line
    int32 Turns = 0;
    for (int32 i = 2; i < Path.Num(); ++i)
    {
        FIntPoint PrevDir = Path[i - 1] - Path[i - 2];
        FIntPoint CurrDir = Path[i] - Path[i - 1];
        if (PrevDir != CurrDir)
            ++Turns;
    }
    return Turns;
}

void Algorithm::PrintGrid(const TArray<TArray<uint8>>& Grid)
{
    for (int32 Y = 0; Y < Grid.Num(); ++Y)
    {
        FString Line;
        for (int32 X = 0; X < Grid[Y].Num(); ++X)
        {
            if (Grid[Y][X] == 1)
                Line += TEXT("1");
            else if (Grid[Y][X] == 2)
                Line += TEXT("2");
            else
                Line += TEXT("0");
        }
        UE_LOG(LogTemp, Log, TEXT("%s"), *Line);
    }
    UE_LOG(LogTemp, Log, TEXT("")); // Blank line between steps
}
bool Algorithm::IsEndReachable(const TArray<TArray<uint8>>& Grid, const FIntPoint& Start, const FIntPoint& End)
{
    TArray<TArray<uint8>> Filled = FloodFill(Grid, Start, 1);
    return Filled[End.Y][End.X] == 1;
}

TArray<TArray<uint8>> Algorithm::FloodFill(const TArray<TArray<uint8>>& Grid, const FIntPoint& Start, uint8 FillValue)
{
    TArray<TArray<uint8>> Filled = Grid;
    TQueue<FIntPoint> Queue;
    Queue.Enqueue(Start);

    while (!Queue.IsEmpty())
    {
        FIntPoint Current;
        Queue.Dequeue(Current);

        int32 X = Current.X;
        int32 Y = Current.Y;

        if (Y < 0 || Y >= Grid.Num() || X < 0 || X >= Grid[0].Num())
            continue;

        if (Filled[Y][X] != 0)
            continue;
        if (Y >= 0 && Y < Filled.Num() && X >= 0 && X < Filled[Y].Num())
        {
            Filled[Y][X] = FillValue;
        }
        Queue.Enqueue(FIntPoint(X + 1, Y));
        Queue.Enqueue(FIntPoint(X - 1, Y));
        Queue.Enqueue(FIntPoint(X, Y + 1));
        Queue.Enqueue(FIntPoint(X, Y - 1));
    }

    return Filled;
}

bool Algorithm::HasUnreachable(const TArray<TArray<uint8>>& Grid)
{
    for (int32 Y = 0; Y < Grid.Num(); ++Y)
    {
        for (int32 X = 0; X < Grid[Y].Num(); ++X)
        {
            if (Grid[Y][X] == 0)
                return true;
        }
    }
    return false;
}




int32 Algorithm::CountAdjacentPaths(const TArray<TArray<uint8>>& Grid, int32 X, int32 Y)
{
    int32 Count = 0;
    const TArray<FIntPoint> Directions = {
        FIntPoint(0, -1), FIntPoint(0, 1),
        FIntPoint(-1, 0), FIntPoint(1, 0)
    };

    for (const FIntPoint& Dir : Directions)
    {
        int32 NX = X + Dir.X;
        int32 NY = Y + Dir.Y;

        if (NY >= 0 && NY < Grid.Num() && NX >= 0 && NX < Grid[0].Num())
        {
            if (Grid[NY][NX] == 0)
            {
                Count++;
            }
        }
    }

    return Count;
}


TArray<TArray<uint8>> Algorithm::CreateFilledGrid(const FIntVector2& Size, uint8 FillValue)
{
    TArray<TArray<uint8>> Grid;
    Grid.SetNum(Size.Y);
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        Grid[Y].SetNum(Size.X);
        for (int32 X = 0; X < Size.X; ++X)
        {
            Grid[Y][X] = FillValue;
        }
    }
    return Grid;
}
template <typename T>
void Algorithm::ShuffleTArray(TArray<T>& Array, FRandomStream& RandomStream)
{
    for (int32 i = Array.Num() - 1; i > 0; --i)
    {
        const int32 j = RandomStream.RandRange(0, i);
        if (i != j)
        {
            Array.Swap(i, j);
        }
    }
}
void Algorithm::CarveBinaryPaths(int32 X, int32 Y, TArray<TArray<uint8>>& Grid, FRandomStream& RandomStream)
{
    Grid[Y][X] = 0; // Mark current cell as path

    TArray<FIntPoint> Directions = {
        FIntPoint(0, -2), FIntPoint(0, 2),
        FIntPoint(-2, 0), FIntPoint(2, 0)
    };
    ShuffleTArray<FIntPoint>(Directions, RandomStream);

    for (FIntPoint Dir : Directions)
    {
        int32 NX = X + Dir.X;
        int32 NY = Y + Dir.Y;

        if (NY > 0 && NX > 0 && NY < Grid.Num() - 1 && NX < Grid[0].Num() - 1)
        {
            if (Grid[NY][NX] == 1)
            {
                Grid[Y + Dir.Y / 2][X + Dir.X / 2] = 0; // Carve through wall
                CarveBinaryPaths(NX, NY, Grid, RandomStream);
            }
        }
    }
}