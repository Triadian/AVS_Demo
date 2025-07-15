// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleSystemFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSystemFunctions() {}
// Cross Module References
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleSystemFunctions_NoRegister();
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleSystemFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInGame_World)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInGame_World(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInPIE_World)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInPIE_World(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInEditor_World)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInEditor_World(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execPrintToScreenWithTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_PROPERTY(FIntProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehicleSystemFunctions::PrintToScreenWithTag(Z_Param_InString,Z_Param_TextColor,Z_Param_Duration,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshCenterOfMass)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVehicleSystemFunctions::GetMeshCenterOfMass(Z_Param_target,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetBoneBounds)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVehicleSystemFunctions::GetBoneBounds(Z_Param_target,Z_Param_BoneName,Z_Param_Out_Origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshRadius)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVehicleSystemFunctions::GetMeshRadius(Z_Param_target,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshDiameter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVehicleSystemFunctions::GetMeshDiameter(Z_Param_target,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execSetAngularDamping)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehicleSystemFunctions::SetAngularDamping(Z_Param_target,Z_Param_InDamping,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execSetLinearDamping)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehicleSystemFunctions::SetLinearDamping(Z_Param_target,Z_Param_InDamping,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetUnrealEngineVersion)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Patch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehicleSystemFunctions::GetUnrealEngineVersion(Z_Param_Out_Major,Z_Param_Out_Minor,Z_Param_Out_Patch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleSystemFunctions::execGetPluginVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVehicleSystemFunctions::GetPluginVersion();
		P_NATIVE_END;
	}
	void UVehicleSystemFunctions::StaticRegisterNativesUVehicleSystemFunctions()
	{
		UClass* Class = UVehicleSystemFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneBounds", &UVehicleSystemFunctions::execGetBoneBounds },
			{ "GetMeshCenterOfMass", &UVehicleSystemFunctions::execGetMeshCenterOfMass },
			{ "GetMeshDiameter", &UVehicleSystemFunctions::execGetMeshDiameter },
			{ "GetMeshRadius", &UVehicleSystemFunctions::execGetMeshRadius },
			{ "GetPluginVersion", &UVehicleSystemFunctions::execGetPluginVersion },
			{ "GetUnrealEngineVersion", &UVehicleSystemFunctions::execGetUnrealEngineVersion },
			{ "PrintToScreenWithTag", &UVehicleSystemFunctions::execPrintToScreenWithTag },
			{ "RunningInEditor_World", &UVehicleSystemFunctions::execRunningInEditor_World },
			{ "RunningInGame_World", &UVehicleSystemFunctions::execRunningInGame_World },
			{ "RunningInPIE_World", &UVehicleSystemFunctions::execRunningInPIE_World },
			{ "SetAngularDamping", &UVehicleSystemFunctions::execSetAngularDamping },
			{ "SetLinearDamping", &UVehicleSystemFunctions::execSetLinearDamping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics
	{
		struct VehicleSystemFunctions_eventGetBoneBounds_Parms
		{
			UPrimitiveComponent* target;
			FName BoneName;
			FVector Origin;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetBoneBounds_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetBoneBounds_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetBoneBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetBoneBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetBoneBounds", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetBoneBounds_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics
	{
		struct VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms
		{
			UPrimitiveComponent* target;
			FName BoneName;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the Center of Mass for a body (In Relative Space) */" },
		{ "CPP_Default_BoneName", "None" },
		{ "Keywords", "COM" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the Center of Mass for a body (In Relative Space)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshCenterOfMass", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics
	{
		struct VehicleSystemFunctions_eventGetMeshDiameter_Parms
		{
			UPrimitiveComponent* target;
			FName BoneName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the height of this body. */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the height of this body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshDiameter", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetMeshDiameter_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics
	{
		struct VehicleSystemFunctions_eventGetMeshRadius_Parms
		{
			UPrimitiveComponent* target;
			FName BoneName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the half height of this body. */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the half height of this body." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshRadius", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetMeshRadius_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics
	{
		struct VehicleSystemFunctions_eventGetPluginVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetPluginVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the version of Advanced Vehicle System you are running, this function is expensive and not meant to be run on tick! */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the version of Advanced Vehicle System you are running, this function is expensive and not meant to be run on tick!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetPluginVersion", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetPluginVersion_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics
	{
		struct VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms
		{
			int32 Major;
			int32 Minor;
			int32 Patch;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Major;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Minor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Patch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Major), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Minor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Patch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Major,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Minor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Patch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** AVS Simple Get Unreal Engine Version */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "AVS Simple Get Unreal Engine Version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetUnrealEngineVersion", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics
	{
		struct VehicleSystemFunctions_eventPrintToScreenWithTag_Parms
		{
			FString InString;
			FLinearColor TextColor;
			float Duration;
			int32 Tag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Sets the angular damping of this component on the named bone, or entire primitive if not specified */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Sets the angular damping of this component on the named bone, or entire primitive if not specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "PrintToScreenWithTag", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics
	{
		struct VehicleSystemFunctions_eventRunningInEditor_World_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInEditor_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleSystemFunctions_eventRunningInEditor_World_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInEditor_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in the Editor world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in the Editor world?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInEditor_World", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventRunningInEditor_World_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics
	{
		struct VehicleSystemFunctions_eventRunningInGame_World_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInGame_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleSystemFunctions_eventRunningInGame_World_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInGame_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in an actual independent game instance? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in an actual independent game instance?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInGame_World", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventRunningInGame_World_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics
	{
		struct VehicleSystemFunctions_eventRunningInPIE_World_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInPIE_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleSystemFunctions_eventRunningInPIE_World_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInPIE_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in the PIE world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in the PIE world?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInPIE_World", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventRunningInPIE_World_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics
	{
		struct VehicleSystemFunctions_eventSetAngularDamping_Parms
		{
			UPrimitiveComponent* target;
			float InDamping;
			FName BoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDamping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, InDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_InDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Sets the angular damping of this component on the named bone, or entire primitive if not specified */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Sets the angular damping of this component on the named bone, or entire primitive if not specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "SetAngularDamping", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventSetAngularDamping_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics
	{
		struct VehicleSystemFunctions_eventSetLinearDamping_Parms
		{
			UPrimitiveComponent* target;
			float InDamping;
			FName BoneName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDamping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, InDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_InDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Sets the linear damping of this component on the named bone, or entire primitive if not specified */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Sets the linear damping of this component on the named bone, or entire primitive if not specified" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "SetLinearDamping", nullptr, nullptr, sizeof(VehicleSystemFunctions_eventSetLinearDamping_Parms), Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleSystemFunctions_NoRegister()
	{
		return UVehicleSystemFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleSystemFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleSystemFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleSystemFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetBoneBounds, "GetBoneBounds" }, // 3867854464
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass, "GetMeshCenterOfMass" }, // 1571292428
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter, "GetMeshDiameter" }, // 1614094502
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius, "GetMeshRadius" }, // 4084765464
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion, "GetPluginVersion" }, // 4020314850
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion, "GetUnrealEngineVersion" }, // 4120510059
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag, "PrintToScreenWithTag" }, // 2805322307
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World, "RunningInEditor_World" }, // 3384370903
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World, "RunningInGame_World" }, // 3397439065
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World, "RunningInPIE_World" }, // 3836566925
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping, "SetAngularDamping" }, // 365596028
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping, "SetLinearDamping" }, // 653803153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleSystemFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "VehicleSystemFunctions.h" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleSystemFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleSystemFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleSystemFunctions_Statics::ClassParams = {
		&UVehicleSystemFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleSystemFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleSystemFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleSystemFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleSystemFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleSystemFunctions, 91086665);
	template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleSystemFunctions>()
	{
		return UVehicleSystemFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleSystemFunctions(Z_Construct_UClass_UVehicleSystemFunctions, &UVehicleSystemFunctions::StaticClass, TEXT("/Script/VehicleSystemPlugin"), TEXT("UVehicleSystemFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleSystemFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
