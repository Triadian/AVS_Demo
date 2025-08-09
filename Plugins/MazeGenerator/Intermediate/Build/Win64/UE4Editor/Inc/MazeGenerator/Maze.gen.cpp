// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MazeGenerator/Public/Maze.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze() {}
// Cross Module References
	MAZEGENERATOR_API UEnum* Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm();
	UPackage* Z_Construct_UPackage__Script_MazeGenerator();
	MAZEGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMazeCoordinates();
	MAZEGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNeighborLetter();
	MAZEGENERATOR_API UScriptStruct* Z_Construct_UScriptStruct_FMazeSize();
	MAZEGENERATOR_API UClass* Z_Construct_UClass_AMaze_NoRegister();
	MAZEGENERATOR_API UClass* Z_Construct_UClass_AMaze();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static UEnum* EGenerationAlgorithm_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm, Z_Construct_UPackage__Script_MazeGenerator(), TEXT("EGenerationAlgorithm"));
		}
		return Singleton;
	}
	template<> MAZEGENERATOR_API UEnum* StaticEnum<EGenerationAlgorithm>()
	{
		return EGenerationAlgorithm_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGenerationAlgorithm(EGenerationAlgorithm_StaticEnum, TEXT("/Script/MazeGenerator"), TEXT("EGenerationAlgorithm"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Hash() { return 1653882470U; }
	UEnum* Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MazeGenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGenerationAlgorithm"), 0, Get_Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGenerationAlgorithm::BinaryDFS", (int64)EGenerationAlgorithm::BinaryDFS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BinaryDFS.Name", "EGenerationAlgorithm::BinaryDFS" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Maze.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MazeGenerator,
				nullptr,
				"EGenerationAlgorithm",
				"EGenerationAlgorithm",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMazeCoordinates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAZEGENERATOR_API uint32 Get_Z_Construct_UScriptStruct_FMazeCoordinates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeCoordinates, Z_Construct_UPackage__Script_MazeGenerator(), TEXT("MazeCoordinates"), sizeof(FMazeCoordinates), Get_Z_Construct_UScriptStruct_FMazeCoordinates_Hash());
	}
	return Singleton;
}
template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<FMazeCoordinates>()
{
	return FMazeCoordinates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMazeCoordinates(FMazeCoordinates::StaticStruct, TEXT("/Script/MazeGenerator"), TEXT("MazeCoordinates"), false, nullptr, nullptr);
static struct FScriptStruct_MazeGenerator_StaticRegisterNativesFMazeCoordinates
{
	FScriptStruct_MazeGenerator_StaticRegisterNativesFMazeCoordinates()
	{
		UScriptStruct::DeferCppStructOps<FMazeCoordinates>(FName(TEXT("MazeCoordinates")));
	}
} ScriptStruct_MazeGenerator_StaticRegisterNativesFMazeCoordinates;
	struct Z_Construct_UScriptStruct_FMazeCoordinates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCoordinates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeCoordinates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCoordinates, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "NoSpinbox", "TRUE" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeCoordinates, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeCoordinates_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeCoordinates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
		nullptr,
		&NewStructOps,
		"MazeCoordinates",
		sizeof(FMazeCoordinates),
		alignof(FMazeCoordinates),
		Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeCoordinates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMazeCoordinates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMazeCoordinates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MazeGenerator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MazeCoordinates"), sizeof(FMazeCoordinates), Get_Z_Construct_UScriptStruct_FMazeCoordinates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMazeCoordinates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMazeCoordinates_Hash() { return 1345071533U; }
class UScriptStruct* FNeighborLetter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAZEGENERATOR_API uint32 Get_Z_Construct_UScriptStruct_FNeighborLetter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeighborLetter, Z_Construct_UPackage__Script_MazeGenerator(), TEXT("NeighborLetter"), sizeof(FNeighborLetter), Get_Z_Construct_UScriptStruct_FNeighborLetter_Hash());
	}
	return Singleton;
}
template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<FNeighborLetter>()
{
	return FNeighborLetter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNeighborLetter(FNeighborLetter::StaticStruct, TEXT("/Script/MazeGenerator"), TEXT("NeighborLetter"), false, nullptr, nullptr);
static struct FScriptStruct_MazeGenerator_StaticRegisterNativesFNeighborLetter
{
	FScriptStruct_MazeGenerator_StaticRegisterNativesFNeighborLetter()
	{
		UScriptStruct::DeferCppStructOps<FNeighborLetter>(FName(TEXT("NeighborLetter")));
	}
} ScriptStruct_MazeGenerator_StaticRegisterNativesFNeighborLetter;
	struct Z_Construct_UScriptStruct_FNeighborLetter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Letter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Letter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeighborLetter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// C++\n" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "C++" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeighborLetter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeighborLetter, Direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Letter_MetaData[] = {
		{ "Comment", "// \"N\", \"E\", \"S\", \"W\"\n" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "\"N\", \"E\", \"S\", \"W\"" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Letter = { "Letter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeighborLetter, Letter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Letter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Letter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeighborLetter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeighborLetter_Statics::NewProp_Letter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeighborLetter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
		nullptr,
		&NewStructOps,
		"NeighborLetter",
		sizeof(FNeighborLetter),
		alignof(FNeighborLetter),
		Z_Construct_UScriptStruct_FNeighborLetter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeighborLetter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeighborLetter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeighborLetter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeighborLetter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNeighborLetter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MazeGenerator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NeighborLetter"), sizeof(FNeighborLetter), Get_Z_Construct_UScriptStruct_FNeighborLetter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNeighborLetter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNeighborLetter_Hash() { return 1285495675U; }
class UScriptStruct* FMazeSize::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAZEGENERATOR_API uint32 Get_Z_Construct_UScriptStruct_FMazeSize_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMazeSize, Z_Construct_UPackage__Script_MazeGenerator(), TEXT("MazeSize"), sizeof(FMazeSize), Get_Z_Construct_UScriptStruct_FMazeSize_Hash());
	}
	return Singleton;
}
template<> MAZEGENERATOR_API UScriptStruct* StaticStruct<FMazeSize>()
{
	return FMazeSize::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMazeSize(FMazeSize::StaticStruct, TEXT("/Script/MazeGenerator"), TEXT("MazeSize"), false, nullptr, nullptr);
static struct FScriptStruct_MazeGenerator_StaticRegisterNativesFMazeSize
{
	FScriptStruct_MazeGenerator_StaticRegisterNativesFMazeSize()
	{
		UScriptStruct::DeferCppStructOps<FMazeSize>(FName(TEXT("MazeSize")));
	}
} ScriptStruct_MazeGenerator_StaticRegisterNativesFMazeSize;
	struct Z_Construct_UScriptStruct_FMazeSize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeSize_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMazeSize_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMazeSize>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "101" },
		{ "UIMin", "5" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeSize, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Maze" },
		{ "ClampMax", "9999" },
		{ "ClampMin", "3" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
		{ "UIMax", "101" },
		{ "UIMin", "5" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMazeSize, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMazeSize_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMazeSize_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
		nullptr,
		&NewStructOps,
		"MazeSize",
		sizeof(FMazeSize),
		alignof(FMazeSize),
		Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMazeSize_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMazeSize_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMazeSize()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMazeSize_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MazeGenerator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MazeSize"), sizeof(FMazeSize), Get_Z_Construct_UScriptStruct_FMazeSize_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMazeSize_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMazeSize_Hash() { return 1755652764U; }
	DEFINE_FUNCTION(AMaze::execRandomize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Randomize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execUpdateMaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMaze::execSpawnAndNameActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnAndNameActor(Z_Param_ActorClass,Z_Param_Out_SpawnTransform,Z_Param_X,Z_Param_Y,Z_Param_NameFormat);
		P_NATIVE_END;
	}
	static FName NAME_AMaze_OnMazeActorsSpawned = FName(TEXT("OnMazeActorsSpawned"));
	void AMaze::OnMazeActorsSpawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMaze_OnMazeActorsSpawned),NULL);
	}
	void AMaze::StaticRegisterNativesAMaze()
	{
		UClass* Class = AMaze::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Randomize", &AMaze::execRandomize },
			{ "SpawnAndNameActor", &AMaze::execSpawnAndNameActor },
			{ "UpdateMaze", &AMaze::execUpdateMaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "OnMazeActorsSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_OnMazeActorsSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_OnMazeActorsSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_Randomize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_Randomize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Maze" },
		{ "Comment", "/**\n\x09 * Generate Maze with random size, seed and \n\x09 * algorithm with path connecting top-left and bottom-right corners.\n\x09 */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ShortTooltip", "Generate an arbitrary maze." },
		{ "ToolTip", "Generate Maze with random size, seed and\nalgorithm with path connecting top-left and bottom-right corners." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_Randomize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "Randomize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_Randomize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_Randomize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_Randomize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_Randomize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics
	{
		struct Maze_eventSpawnAndNameActor_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			FTransform SpawnTransform;
			int32 X;
			int32 Y;
			FString NameFormat;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameFormat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, Y), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_NameFormat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_NameFormat = { "NameFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, NameFormat), METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_NameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_NameFormat_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Maze_eventSpawnAndNameActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_NameFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maze" },
		{ "Comment", "// C++\n// C++\n" },
		{ "CPP_Default_NameFormat", "RoadTile_%d_%d" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "C++\nC++" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "SpawnAndNameActor", nullptr, nullptr, sizeof(Maze_eventSpawnAndNameActor_Parms), Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_SpawnAndNameActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_SpawnAndNameActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_UpdateMaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_UpdateMaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maze" },
		{ "Comment", "// Update Maze according to pre-set parameters: Size, Generation Algorithm, Seed and Path-related params.\n" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "Update Maze according to pre-set parameters: Size, Generation Algorithm, Seed and Path-related params." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_UpdateMaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze, nullptr, "UpdateMaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_UpdateMaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMaze_UpdateMaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_UpdateMaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_UpdateMaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaze_NoRegister()
	{
		return AMaze::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomStream;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerationAlgorithm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationAlgorithm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GenerationAlgorithm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MazeSize;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoadLetterGrid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadLetterGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoadLetterGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoadSystemBlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RoadSystemBlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel1BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel1BlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel2BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel2BlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel3BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel3BlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel4BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel4BlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel5BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel5BlueprintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parcel6BlueprintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Parcel6BlueprintClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedRoadComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoadComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedRoadComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedRoadActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedRoadActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedRoadActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGeneratePath_MetaData[];
#endif
		static void NewProp_bGeneratePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGeneratePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCollision_MetaData[];
#endif
		static void NewProp_bUseCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloorCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineWallCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutlineWallCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFloorCells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFloorCells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeCellSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MazeCellSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MazeGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_OnMazeActorsSpawned, "OnMazeActorsSpawned" }, // 142774339
		{ &Z_Construct_UFunction_AMaze_Randomize, "Randomize" }, // 1378777494
		{ &Z_Construct_UFunction_AMaze_SpawnAndNameActor, "SpawnAndNameActor" }, // 2138952197
		{ &Z_Construct_UFunction_AMaze_UpdateMaze, "UpdateMaze" }, // 435333149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Maze.h" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_RandomStream_MetaData[] = {
		{ "Category", "Maze" },
		{ "Comment", "// C++\n" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "C++" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_RandomStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_RandomStream_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "0" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm = { "GenerationAlgorithm", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, GenerationAlgorithm), Z_Construct_UEnum_MazeGenerator_EGenerationAlgorithm, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "1" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Seed), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize_MetaData[] = {
		{ "Category", "Maze" },
		{ "DisplayPriority", "2" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize = { "MazeSize", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, MazeSize), Z_Construct_UScriptStruct_FMazeSize, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid_Inner = { "RoadLetterGrid", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid = { "RoadLetterGrid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, RoadLetterGrid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_RoadSystemBlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "Comment", "// C++\n" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "C++" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_RoadSystemBlueprintClass = { "RoadSystemBlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, RoadSystemBlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_RoadSystemBlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_RoadSystemBlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel1BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel1BlueprintClass = { "Parcel1BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel1BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel1BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel1BlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel2BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel2BlueprintClass = { "Parcel2BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel2BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel2BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel2BlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel3BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel3BlueprintClass = { "Parcel3BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel3BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel3BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel3BlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel4BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel4BlueprintClass = { "Parcel4BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel4BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel4BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel4BlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel5BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel5BlueprintClass = { "Parcel5BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel5BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel5BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel5BlueprintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_Parcel6BlueprintClass_MetaData[] = {
		{ "Category", "Maze|Blueprints" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_Parcel6BlueprintClass = { "Parcel6BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, Parcel6BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel6BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_Parcel6BlueprintClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents_Inner = { "SpawnedRoadComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents_MetaData[] = {
		{ "Comment", "// C++\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "ToolTip", "C++" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents = { "SpawnedRoadComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, SpawnedRoadComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors_Inner = { "SpawnedRoadActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors = { "SpawnedRoadActors", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, SpawnedRoadActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Floor" },
		{ "DisplayPriority", "0" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh = { "FloorStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, FloorStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Wall" },
		{ "DisplayPriority", "1" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh = { "WallStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, WallStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "DisplayName", "Outline Wall" },
		{ "DisplayPriority", "2" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh = { "OutlineStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, OutlineStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bGeneratePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath = { "bGeneratePath", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_PathStart_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0011000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, PathStart), Z_Construct_UScriptStruct_FMazeCoordinates, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_PathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_PathStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0011000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, PathEnd), Z_Construct_UScriptStruct_FMazeCoordinates, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "DisplayName", "Path Floor" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh = { "PathStaticMesh", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, PathStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_PathLength_MetaData[] = {
		{ "Category", "Maze|Pathfinder" },
		{ "EditCondition", "bGeneratePath" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, PathLength), METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_PathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_PathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	void Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_SetBit(void* Obj)
	{
		((AMaze*)Obj)->bUseCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision = { "bUseCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMaze), &Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells = { "FloorCells", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, FloorCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_WallCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_WallCells = { "WallCells", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, WallCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_WallCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_WallCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells = { "OutlineWallCells", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, OutlineWallCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells = { "PathFloorCells", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, PathFloorCells), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize_MetaData[] = {
		{ "Category", "Maze|Cells" },
		{ "ModuleRelativePath", "Public/Maze.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize = { "MazeCellSize", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMaze, MazeCellSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_RandomStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_GenerationAlgorithm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_RoadLetterGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_RoadSystemBlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel1BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel2BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel3BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel4BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel5BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_Parcel6BlueprintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_SpawnedRoadActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_FloorStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_WallStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_OutlineStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bGeneratePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_bUseCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_FloorCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_WallCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_OutlineWallCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_PathFloorCells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_Statics::NewProp_MazeCellSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_Statics::ClassParams = {
		&AMaze::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMaze_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMaze_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze, 2644858195);
	template<> MAZEGENERATOR_API UClass* StaticClass<AMaze>()
	{
		return AMaze::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze(Z_Construct_UClass_AMaze, &AMaze::StaticClass, TEXT("/Script/MazeGenerator"), TEXT("AMaze"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
