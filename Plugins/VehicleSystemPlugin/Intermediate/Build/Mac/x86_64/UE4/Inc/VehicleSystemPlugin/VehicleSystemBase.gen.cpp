// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleSystemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSystemBase() {}
// Cross Module References
	VEHICLESYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles();
	UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
	VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleGear();
	VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNetState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_AVehicleSystemBase_NoRegister();
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_AVehicleSystemBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	static UEnum* NetworkRoles_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles, Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("NetworkRoles"));
		}
		return Singleton;
	}
	template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<NetworkRoles>()
	{
		return NetworkRoles_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NetworkRoles(NetworkRoles_StaticEnum, TEXT("/Script/VehicleSystemPlugin"), TEXT("NetworkRoles"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Hash() { return 885781490U; }
	UEnum* Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleSystemPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NetworkRoles"), 0, Get_Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NetworkRoles::None", (int64)NetworkRoles::None },
				{ "NetworkRoles::Owner", (int64)NetworkRoles::Owner },
				{ "NetworkRoles::Server", (int64)NetworkRoles::Server },
				{ "NetworkRoles::Client", (int64)NetworkRoles::Client },
				{ "NetworkRoles::ClientSpawned", (int64)NetworkRoles::ClientSpawned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Client.Name", "NetworkRoles::Client" },
				{ "ClientSpawned.Name", "NetworkRoles::ClientSpawned" },
				{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
				{ "None.Name", "NetworkRoles::None" },
				{ "Owner.Name", "NetworkRoles::Owner" },
				{ "Server.Name", "NetworkRoles::Server" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
				nullptr,
				"NetworkRoles",
				"NetworkRoles",
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
class UScriptStruct* FVehicleGear::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLESYSTEMPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVehicleGear_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleGear, Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("VehicleGear"), sizeof(FVehicleGear), Get_Z_Construct_UScriptStruct_FVehicleGear_Hash());
	}
	return Singleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FVehicleGear>()
{
	return FVehicleGear::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleGear(FVehicleGear::StaticStruct, TEXT("/Script/VehicleSystemPlugin"), TEXT("VehicleGear"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFVehicleGear
{
	FScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFVehicleGear()
	{
		UScriptStruct::DeferCppStructOps<FVehicleGear>(FName(TEXT("VehicleGear")));
	}
} ScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFVehicleGear;
	struct Z_Construct_UScriptStruct_FVehicleGear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpShift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownShift_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowRPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowRPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleGear_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleGear>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Determines the amount of torque multiplication*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed = { "EndSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, EndSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed = { "StartSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, StartSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Determines the amount of torque multiplication*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift = { "UpShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, UpShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift = { "DownShift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, DownShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Determines the amount of torque multiplication*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM = { "HighRPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, HighRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM = { "LowRPM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, LowRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Determines the amount of torque multiplication*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Determines the amount of torque multiplication" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque = { "MaxTorque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, MaxTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque = { "MinTorque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleGear, MinTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleGear_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
		nullptr,
		&NewStructOps,
		"VehicleGear",
		sizeof(FVehicleGear),
		alignof(FVehicleGear),
		Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleGear_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleGear()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleGear_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleSystemPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleGear"), sizeof(FVehicleGear), Get_Z_Construct_UScriptStruct_FVehicleGear_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleGear_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleGear_Hash() { return 3835186986U; }
class UScriptStruct* FNetState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLESYSTEMPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FNetState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetState, Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("NetState"), sizeof(FNetState), Get_Z_Construct_UScriptStruct_FNetState_Hash());
	}
	return Singleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FNetState>()
{
	return FNetState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetState(FNetState::StaticStruct, TEXT("/Script/VehicleSystemPlugin"), TEXT("NetState"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFNetState
{
	FScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFNetState()
	{
		UScriptStruct::DeferCppStructOps<FNetState>(FName(TEXT("NetState")));
	}
} ScriptStruct_VehicleSystemPlugin_StaticRegisterNativesFNetState;
	struct Z_Construct_UScriptStruct_FNetState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localtimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_localtimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_angularVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_timestamp = { "timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, timestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_localtimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_localtimestamp = { "localtimestamp", nullptr, (EPropertyFlags)0x0010000080000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, localtimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_localtimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_localtimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNetState, angularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_localtimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
		nullptr,
		&NewStructOps,
		"NetState",
		sizeof(FNetState),
		alignof(FNetState),
		Z_Construct_UScriptStruct_FNetState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleSystemPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetState"), sizeof(FNetState), Get_Z_Construct_UScriptStruct_FNetState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetState_Hash() { return 1732202418U; }
	DEFINE_FUNCTION(AVehicleSystemBase::execMulticast_ChangedOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_ChangedOwner_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_ChangedOwner_Validate"));
			return;
		}
		P_THIS->Multicast_ChangedOwner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execServer_ReceiveRestState)
	{
		P_GET_STRUCT(FNetState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ReceiveRestState_Validate(Z_Param_State))
		{
			RPC_ValidateFailed(TEXT("Server_ReceiveRestState_Validate"));
			return;
		}
		P_THIS->Server_ReceiveRestState_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execClient_ReceiveNetState)
	{
		P_GET_STRUCT(FNetState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_ReceiveNetState_Validate(Z_Param_State))
		{
			RPC_ValidateFailed(TEXT("Client_ReceiveNetState_Validate"));
			return;
		}
		P_THIS->Client_ReceiveNetState_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execServer_ReceiveNetState)
	{
		P_GET_STRUCT(FNetState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ReceiveNetState_Validate(Z_Param_State))
		{
			RPC_ValidateFailed(TEXT("Server_ReceiveNetState_Validate"));
			return;
		}
		P_THIS->Server_ReceiveNetState_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execSetShouldSyncWithServer)
	{
		P_GET_UBOOL(Z_Param_ShouldSync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldSyncWithServer(Z_Param_ShouldSync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execNetStateSend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetStateSend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execOnRep_RestState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RestState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleSystemBase::execGetSteeringFromCurve)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteeringFromCurve(Z_Param_Speed);
		P_NATIVE_END;
	}
	static FName NAME_AVehicleSystemBase_AVS_Tick = FName(TEXT("AVS_Tick"));
	void AVehicleSystemBase::AVS_Tick(float DeltaTime)
	{
		VehicleSystemBase_eventAVS_Tick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_AVS_Tick),&Parms);
	}
	static FName NAME_AVehicleSystemBase_BlueprintDebugMessage = FName(TEXT("BlueprintDebugMessage"));
	void AVehicleSystemBase::BlueprintDebugMessage(const FString& text)
	{
		VehicleSystemBase_eventBlueprintDebugMessage_Parms Parms;
		Parms.text=text;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_BlueprintDebugMessage),&Parms);
	}
	static FName NAME_AVehicleSystemBase_Client_ReceiveNetState = FName(TEXT("Client_ReceiveNetState"));
	void AVehicleSystemBase::Client_ReceiveNetState(FNetState State)
	{
		VehicleSystemBase_eventClient_ReceiveNetState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_Client_ReceiveNetState),&Parms);
	}
	static FName NAME_AVehicleSystemBase_DeterminePassiveState = FName(TEXT("DeterminePassiveState"));
	bool AVehicleSystemBase::DeterminePassiveState()
	{
		VehicleSystemBase_eventDeterminePassiveState_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_DeterminePassiveState),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AVehicleSystemBase_Multicast_ChangedOwner = FName(TEXT("Multicast_ChangedOwner"));
	void AVehicleSystemBase::Multicast_ChangedOwner()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_Multicast_ChangedOwner),NULL);
	}
	static FName NAME_AVehicleSystemBase_OwnerChanged = FName(TEXT("OwnerChanged"));
	void AVehicleSystemBase::OwnerChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_OwnerChanged),NULL);
	}
	static FName NAME_AVehicleSystemBase_PassiveStateChanged = FName(TEXT("PassiveStateChanged"));
	void AVehicleSystemBase::PassiveStateChanged(bool NewPassiveState)
	{
		VehicleSystemBase_eventPassiveStateChanged_Parms Parms;
		Parms.NewPassiveState=NewPassiveState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_PassiveStateChanged),&Parms);
	}
	static FName NAME_AVehicleSystemBase_PassiveTickBP = FName(TEXT("PassiveTickBP"));
	void AVehicleSystemBase::PassiveTickBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_PassiveTickBP),NULL);
	}
	static FName NAME_AVehicleSystemBase_Server_ReceiveNetState = FName(TEXT("Server_ReceiveNetState"));
	void AVehicleSystemBase::Server_ReceiveNetState(FNetState State)
	{
		VehicleSystemBase_eventServer_ReceiveNetState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_Server_ReceiveNetState),&Parms);
	}
	static FName NAME_AVehicleSystemBase_Server_ReceiveRestState = FName(TEXT("Server_ReceiveRestState"));
	void AVehicleSystemBase::Server_ReceiveRestState(FNetState State)
	{
		VehicleSystemBase_eventServer_ReceiveRestState_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_Server_ReceiveRestState),&Parms);
	}
	static FName NAME_AVehicleSystemBase_TeleportWheels = FName(TEXT("TeleportWheels"));
	void AVehicleSystemBase::TeleportWheels()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVehicleSystemBase_TeleportWheels),NULL);
	}
	void AVehicleSystemBase::StaticRegisterNativesAVehicleSystemBase()
	{
		UClass* Class = AVehicleSystemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_ReceiveNetState", &AVehicleSystemBase::execClient_ReceiveNetState },
			{ "GetSteeringFromCurve", &AVehicleSystemBase::execGetSteeringFromCurve },
			{ "Multicast_ChangedOwner", &AVehicleSystemBase::execMulticast_ChangedOwner },
			{ "NetStateSend", &AVehicleSystemBase::execNetStateSend },
			{ "OnRep_RestState", &AVehicleSystemBase::execOnRep_RestState },
			{ "Server_ReceiveNetState", &AVehicleSystemBase::execServer_ReceiveNetState },
			{ "Server_ReceiveRestState", &AVehicleSystemBase::execServer_ReceiveRestState },
			{ "SetShouldSyncWithServer", &AVehicleSystemBase::execSetShouldSyncWithServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventAVS_Tick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Tick used for internal AVS functions\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Tick used for internal AVS functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "AVS_Tick", nullptr, nullptr, sizeof(VehicleSystemBase_eventAVS_Tick_Parms), Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventBlueprintDebugMessage_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "BlueprintDebugMessage", nullptr, nullptr, sizeof(VehicleSystemBase_eventBlueprintDebugMessage_Parms), Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventClient_ReceiveNetState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Client_ReceiveNetState", nullptr, nullptr, sizeof(VehicleSystemBase_eventClient_ReceiveNetState_Parms), Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleSystemBase_eventDeterminePassiveState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemBase_eventDeterminePassiveState_Parms), &Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "DeterminePassiveState", nullptr, nullptr, sizeof(VehicleSystemBase_eventDeterminePassiveState_Parms), Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics
	{
		struct VehicleSystemBase_eventGetSteeringFromCurve_Parms
		{
			float Speed;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetSteeringFromCurve_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetSteeringFromCurve_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "GetSteeringFromCurve", nullptr, nullptr, sizeof(VehicleSystemBase_eventGetSteeringFromCurve_Parms), Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Multicast_ChangedOwner", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "NetStateSend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_NetStateSend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "OnRep_RestState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Called when the owning client changes (Possessed or UnPossessed) */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Called when the owning client changes (Possessed or UnPossessed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "OwnerChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics
	{
		static void NewProp_NewPassiveState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewPassiveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit(void* Obj)
	{
		((VehicleSystemBase_eventPassiveStateChanged_Parms*)Obj)->NewPassiveState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState = { "NewPassiveState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemBase_eventPassiveStateChanged_Parms), &Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "PassiveStateChanged", nullptr, nullptr, sizeof(VehicleSystemBase_eventPassiveStateChanged_Parms), Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Called while the normal Tick function is disabled due to gatekeeping\n" },
		{ "DisplayName", "AVS_PassiveTick" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Called while the normal Tick function is disabled due to gatekeeping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "PassiveTickBP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventServer_ReceiveNetState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*UFUNCTION(BlueprintImplementableEvent, Category = \"VehicleSystemPlugin\")\n\x09\x09void DebugReceivedNetState(float timestamp, float serverDelta, FVector position, FRotator rotation); // Used for development */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent, Category = \"VehicleSystemPlugin\")\n               void DebugReceivedNetState(float timestamp, float serverDelta, FVector position, FRotator rotation); // Used for development" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Server_ReceiveNetState", nullptr, nullptr, sizeof(VehicleSystemBase_eventServer_ReceiveNetState_Parms), Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemBase_eventServer_ReceiveRestState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Server_ReceiveRestState", nullptr, nullptr, sizeof(VehicleSystemBase_eventServer_ReceiveRestState_Parms), Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics
	{
		struct VehicleSystemBase_eventSetShouldSyncWithServer_Parms
		{
			bool ShouldSync;
		};
		static void NewProp_ShouldSync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldSync;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync_SetBit(void* Obj)
	{
		((VehicleSystemBase_eventSetShouldSyncWithServer_Parms*)Obj)->ShouldSync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync = { "ShouldSync", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemBase_eventSetShouldSyncWithServer_Parms), &Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/**Used to temporarily disable movement replication, does not change ReplicateMovement */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Used to temporarily disable movement replication, does not change ReplicateMovement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "SetShouldSyncWithServer", nullptr, nullptr, sizeof(VehicleSystemBase_eventSetShouldSyncWithServer_Parms), Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "TeleportWheels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehicleSystemBase_NoRegister()
	{
		return AVehicleSystemBase::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleSystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveMode_MetaData[];
#endif
		static void NewProp_PassiveMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassiveMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveTickGatekeeping_MetaData[];
#endif
		static void NewProp_PassiveTickGatekeeping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PassiveTickGatekeeping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleAtRest_MetaData[];
#endif
		static void NewProp_VehicleAtRest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VehicleAtRest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gears_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gears;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicateMovement_MetaData[];
#endif
		static void NewProp_ReplicateMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplicateMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncLocation_MetaData[];
#endif
		static void NewProp_SyncLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncRotation_MetaData[];
#endif
		static void NewProp_SyncRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetSendRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetTimeBehind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetTimeBehind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetLerpStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetLerpStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetPositionTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetPositionTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSmoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkAtRest_MetaData[];
#endif
		static void NewProp_NetworkAtRest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NetworkAtRest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RestTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleSystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicleSystemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick, "AVS_Tick" }, // 2770272937
		{ &Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage, "BlueprintDebugMessage" }, // 2998590894
		{ &Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState, "Client_ReceiveNetState" }, // 3941400386
		{ &Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState, "DeterminePassiveState" }, // 1081778744
		{ &Z_Construct_UFunction_AVehicleSystemBase_GetSteeringFromCurve, "GetSteeringFromCurve" }, // 2645397842
		{ &Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner, "Multicast_ChangedOwner" }, // 3133448780
		{ &Z_Construct_UFunction_AVehicleSystemBase_NetStateSend, "NetStateSend" }, // 2417628646
		{ &Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState, "OnRep_RestState" }, // 764898313
		{ &Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged, "OwnerChanged" }, // 1515250353
		{ &Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged, "PassiveStateChanged" }, // 193695097
		{ &Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP, "PassiveTickBP" }, // 1242907355
		{ &Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState, "Server_ReceiveNetState" }, // 4182780518
		{ &Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState, "Server_ReceiveRestState" }, // 2739115405
		{ &Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer, "SetShouldSyncWithServer" }, // 1873793890
		{ &Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels, "TeleportWheels" }, // 2037584462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VehicleSystemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Low resource mode, should be active when vehicle is completely idle\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Low resource mode, should be active when vehicle is completely idle" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->PassiveMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode = { "PassiveMode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Should passive mode gatekeep the standard Tick event, highly recommended to keep this true.\n// You can use the \"AVS_PassiveTick\" function for things that need to always tick\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Should passive mode gatekeep the standard Tick event, highly recommended to keep this true.\nYou can use the \"AVS_PassiveTick\" function for things that need to always tick" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->PassiveTickGatekeeping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping = { "PassiveTickGatekeeping", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Vehicle is at rest locally (not tied to networking)\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Vehicle is at rest locally (not tied to networking)" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->VehicleAtRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest = { "VehicleAtRest", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh = { "VehicleMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, VehicleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "/** Steering relative to speed*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Steering relative to speed" },
		{ "XAxisName", "Speed" },
		{ "YAxisName", "Steering" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringCurve = { "SteeringCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed = { "SteeringSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringSpeed), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_Inner = { "Gears", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVehicleGear, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears = { "Gears", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, Gears), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->ReplicateMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement = { "ReplicateMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->SyncLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation = { "SyncLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->SyncRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation = { "SyncRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate = { "NetSendRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, NetSendRate), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind = { "NetTimeBehind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, NetTimeBehind), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart = { "NetLerpStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, NetLerpStart), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance = { "NetPositionTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, NetPositionTolerance), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing = { "NetSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, NetSmoothing), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState = { "RestState", "OnRep_RestState", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, RestState), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Vehicle is considered at rest for network purposes\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Vehicle is considered at rest for network purposes" },
	};
#endif
	void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_SetBit(void* Obj)
	{
		((AVehicleSystemBase*)Obj)->NetworkAtRest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest = { "NetworkAtRest", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer = { "RestTimer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVehicleSystemBase, RestTimer), METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleAtRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleSystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleSystemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleSystemBase_Statics::ClassParams = {
		&AVehicleSystemBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleSystemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleSystemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleSystemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleSystemBase, 464492813);
	template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<AVehicleSystemBase>()
	{
		return AVehicleSystemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleSystemBase(Z_Construct_UClass_AVehicleSystemBase, &AVehicleSystemBase::StaticClass, TEXT("/Script/VehicleSystemPlugin"), TEXT("AVehicleSystemBase"), false, nullptr, nullptr, nullptr);

	void AVehicleSystemBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RestState(TEXT("RestState"));

		const bool bIsValid = true
			&& Name_RestState == ClassReps[(int32)ENetFields_Private::RestState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AVehicleSystemBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleSystemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
