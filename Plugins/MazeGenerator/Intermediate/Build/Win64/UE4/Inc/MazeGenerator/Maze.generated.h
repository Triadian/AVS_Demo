// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZEGENERATOR_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define MAZEGENERATOR_Maze_generated_h

#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeCoordinates_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeCoordinates>();

#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeSize_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeSize>();

#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_SPARSE_DATA
#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execUpdateMaze);


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execUpdateMaze);


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGenerator"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGenerator"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public:


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorCells() { return STRUCT_OFFSET(AMaze, FloorCells); } \
	FORCEINLINE static uint32 __PPO__WallCells() { return STRUCT_OFFSET(AMaze, WallCells); } \
	FORCEINLINE static uint32 __PPO__OutlineWallCells() { return STRUCT_OFFSET(AMaze, OutlineWallCells); } \
	FORCEINLINE static uint32 __PPO__PathFloorCells() { return STRUCT_OFFSET(AMaze, PathFloorCells); } \
	FORCEINLINE static uint32 __PPO__MazeCellSize() { return STRUCT_OFFSET(AMaze, MazeCellSize); }


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_72_PROLOG
#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_SPARSE_DATA \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_RPC_WRAPPERS \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_INCLASS \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_SPARSE_DATA \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGENERATOR_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h


#define FOREACH_ENUM_EGENERATIONALGORITHM(op) \
	op(EGenerationAlgorithm::Backtracker) \
	op(EGenerationAlgorithm::Division) \
	op(EGenerationAlgorithm::HaK) \
	op(EGenerationAlgorithm::Sidewinder) \
	op(EGenerationAlgorithm::Kruskal) \
	op(EGenerationAlgorithm::Eller) \
	op(EGenerationAlgorithm::Prim) 

enum class EGenerationAlgorithm : uint8;
template<> MAZEGENERATOR_API UEnum* StaticEnum<EGenerationAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
