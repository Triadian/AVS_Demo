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

#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeCoordinates_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeCoordinates>();

#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMazeSize_Statics; \
	MAZEGENERATOR_API static class UScriptStruct* StaticStruct();


template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<struct FMazeSize>();

#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_SPARSE_DATA
#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execUpdateMaze);


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRandomize); \
	DECLARE_FUNCTION(execUpdateMaze);


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGenerator"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MazeGenerator"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_STANDARD_CONSTRUCTORS \
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


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorCells() { return STRUCT_OFFSET(AMaze, FloorCells); } \
	FORCEINLINE static uint32 __PPO__WallCells() { return STRUCT_OFFSET(AMaze, WallCells); } \
	FORCEINLINE static uint32 __PPO__OutlineWallCells() { return STRUCT_OFFSET(AMaze, OutlineWallCells); } \
	FORCEINLINE static uint32 __PPO__PathFloorCells() { return STRUCT_OFFSET(AMaze, PathFloorCells); } \
	FORCEINLINE static uint32 __PPO__MazeCellSize() { return STRUCT_OFFSET(AMaze, MazeCellSize); }


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_67_PROLOG
#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_PRIVATE_PROPERTY_OFFSET \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_SPARSE_DATA \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_RPC_WRAPPERS \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_INCLASS \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_PRIVATE_PROPERTY_OFFSET \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_SPARSE_DATA \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_INCLASS_NO_PURE_DECLS \
	AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAZEGENERATOR_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AVS_DemoSrc_426min_Plugins_MazeGenerator_Source_MazeGenerator_Public_Maze_h


#define FOREACH_ENUM_EGENERATIONALGORITHM(op) \
	op(EGenerationAlgorithm::BinaryDFS) 

enum class EGenerationAlgorithm : uint8;
template<> MAZEGENERATOR_API UEnum* StaticEnum<EGenerationAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
