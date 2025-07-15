// Copyright LowkeyMe. All Rights Reserved. 2025

#pragma once

#include "CoreMinimal.h"
#include "Math/RandomStream.h"

struct FIntVector2
{
	int32 X{};
	int32 Y{};

	FIntVector2() = default;

	FIntVector2(int32 InX, int32 InY) : X{ InX }, Y{ InY }
	{
	}
};

class Algorithm
{
public:
	virtual ~Algorithm() = default;

	/** Generates a binary grid (0 = path, 1 = wall) seeded by level number */
	TArray<TArray<uint8>> GetGrid(const FIntVector2& Size, int32 Seed, int32 StartX, int32 StartY);
	static int32 CountAdjacentPaths(const TArray<TArray<uint8>>& Grid, int32 X, int32 Y);
	static TArray<TArray<uint8>> FloodFill(const TArray<TArray<uint8>>& Grid, const FIntPoint& Start, uint8 FillValue);
	static bool HasUnreachable(const TArray<TArray<uint8>>& Grid);


protected:
	/** Creates a grid filled with a specified value (usually 1 = wall) */
	static TArray<TArray<uint8>> CreateFilledGrid(const FIntVector2& Size, uint8 FillValue);

	/** Carves paths into a binary maze grid using recursive DFS */
	static void CarveBinaryPaths(int32 X, int32 Y, TArray<TArray<uint8>>& Grid, FRandomStream& RandomStream);

private:
	template <typename T>
	static void ShuffleTArray(TArray<T>& Array, FRandomStream& RandomStream);

};