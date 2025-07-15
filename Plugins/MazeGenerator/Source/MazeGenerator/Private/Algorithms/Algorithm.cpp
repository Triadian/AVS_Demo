#include "Algorithm.h"
#include <Maze.h>
TArray<TArray<uint8>> Algorithm::GetGrid(const FIntVector2& Size, int32 Seed, int32 StartX, int32 StartY)
{
    FRandomStream RandomStream(Seed);

    // Create grid: 0 = unfilled, 1 = wall, 2 = passage
    TArray<TArray<uint8>> Grid = CreateFilledGrid(Size, 0);
    Grid[0][1] = 2; // Start
    Grid[Size.Y - 1][Size.X - 2] = 2; // End

    // Collect unfilled coordinates
    TArray<FIntPoint> Unfilled;
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 0)
                Unfilled.Add(FIntPoint(X, Y));
        }
    }

    ShuffleTArray<FIntPoint>(Unfilled, RandomStream);

    // Find start coordinate
    FIntPoint Start;
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 2)
            {
                Start = FIntPoint(X, Y);
                break;
            }
        }
    }

    // Reset passages to unfilled
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 2)
                Grid[Y][X] = 0;
        }
    }

    // Maze fill loop
    for (const FIntPoint& Coord : Unfilled)
    {
        Grid[Coord.Y][Coord.X] = 1;

        TArray<TArray<uint8>> TestGrid = FloodFill(Grid, Start, 1); // Cardinal-only fill
        if (HasUnreachable(TestGrid))
        {
            Grid[Coord.Y][Coord.X] = 0;
        }
    }

    // Finalize passages
    for (int32 Y = 0; Y < Size.Y; ++Y)
    {
        for (int32 X = 0; X < Size.X; ++X)
        {
            if (Grid[Y][X] == 0)
                Grid[Y][X] = 2;
        }
    }

    return Grid;
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

        Filled[Y][X] = FillValue;

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