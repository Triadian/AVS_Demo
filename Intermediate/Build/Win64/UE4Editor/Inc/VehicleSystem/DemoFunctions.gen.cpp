// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystem/Public/DemoFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoFunctions() {}
// Cross Module References
	VEHICLESYSTEM_API UClass* Z_Construct_UClass_UDemoFunctions_NoRegister();
	VEHICLESYSTEM_API UClass* Z_Construct_UClass_UDemoFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VehicleSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDemoFunctions::execGetProjectVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDemoFunctions::GetProjectVersion();
		P_NATIVE_END;
	}
	void UDemoFunctions::StaticRegisterNativesUDemoFunctions()
	{
		UClass* Class = UDemoFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectVersion", &UDemoFunctions::execGetProjectVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics
	{
		struct DemoFunctions_eventGetProjectVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemoFunctions_eventGetProjectVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project" },
		{ "Comment", "//Returns the project version set in the 'Project Settings' > 'Description' section of the editor\n" },
		{ "ModuleRelativePath", "Public/DemoFunctions.h" },
		{ "ToolTip", "Returns the project version set in the 'Project Settings' > 'Description' section of the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemoFunctions, nullptr, "GetProjectVersion", nullptr, nullptr, sizeof(DemoFunctions_eventGetProjectVersion_Parms), Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemoFunctions_GetProjectVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemoFunctions_GetProjectVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemoFunctions_NoRegister()
	{
		return UDemoFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UDemoFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemoFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemoFunctions_GetProjectVersion, "GetProjectVersion" }, // 814155711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoFunctions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DemoFunctions.h" },
		{ "ModuleRelativePath", "Public/DemoFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoFunctions_Statics::ClassParams = {
		&UDemoFunctions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDemoFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoFunctions, 4158154797);
	template<> VEHICLESYSTEM_API UClass* StaticClass<UDemoFunctions>()
	{
		return UDemoFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoFunctions(Z_Construct_UClass_UDemoFunctions, &UDemoFunctions::StaticClass, TEXT("/Script/VehicleSystem"), TEXT("UDemoFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
