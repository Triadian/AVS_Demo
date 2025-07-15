// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleConstraint() {}
// Cross Module References
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleConstraint_NoRegister();
	VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleConstraint();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
	UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleConstraint::execSetLinearSoftConstraint)
	{
		P_GET_UBOOL(Z_Param_SoftConstraint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinearSoftConstraint(Z_Param_SoftConstraint,Z_Param_Stiffness,Z_Param_Damping);
		P_NATIVE_END;
	}
	void UVehicleConstraint::StaticRegisterNativesUVehicleConstraint()
	{
		UClass* Class = UVehicleConstraint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLinearSoftConstraint", &UVehicleConstraint::execSetLinearSoftConstraint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics
	{
		struct VehicleConstraint_eventSetLinearSoftConstraint_Parms
		{
			bool SoftConstraint;
			float Stiffness;
			float Damping;
		};
		static void NewProp_SoftConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SoftConstraint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint_SetBit(void* Obj)
	{
		((VehicleConstraint_eventSetLinearSoftConstraint_Parms*)Obj)->SoftConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint = { "SoftConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleConstraint_eventSetLinearSoftConstraint_Parms), &Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleConstraint_eventSetLinearSoftConstraint_Parms, Stiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleConstraint_eventSetLinearSoftConstraint_Parms, Damping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Damping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleConstraint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleConstraint, nullptr, "SetLinearSoftConstraint", nullptr, nullptr, sizeof(VehicleConstraint_eventSetLinearSoftConstraint_Parms), Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleConstraint_NoRegister()
	{
		return UVehicleConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsConstraintComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleConstraint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint, "SetLinearSoftConstraint" }, // 1342423753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "VehicleSystem" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "VehicleConstraint.h" },
		{ "ModuleRelativePath", "Public/VehicleConstraint.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleConstraint_Statics::ClassParams = {
		&UVehicleConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleConstraint, 3605611295);
	template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleConstraint>()
	{
		return UVehicleConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleConstraint(Z_Construct_UClass_UVehicleConstraint, &UVehicleConstraint::StaticClass, TEXT("/Script/VehicleSystemPlugin"), TEXT("UVehicleConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
