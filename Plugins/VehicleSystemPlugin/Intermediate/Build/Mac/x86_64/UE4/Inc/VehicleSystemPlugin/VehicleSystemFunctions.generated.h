// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLinearColor;
class UPrimitiveComponent;
struct FVector;
#ifdef VEHICLESYSTEMPLUGIN_VehicleSystemFunctions_generated_h
#error "VehicleSystemFunctions.generated.h already included, missing '#pragma once' in VehicleSystemFunctions.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleSystemFunctions_generated_h

#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_SPARSE_DATA
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunningInGame_World); \
	DECLARE_FUNCTION(execRunningInPIE_World); \
	DECLARE_FUNCTION(execRunningInEditor_World); \
	DECLARE_FUNCTION(execPrintToScreenWithTag); \
	DECLARE_FUNCTION(execGetMeshCenterOfMass); \
	DECLARE_FUNCTION(execGetBoneBounds); \
	DECLARE_FUNCTION(execGetMeshRadius); \
	DECLARE_FUNCTION(execGetMeshDiameter); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetUnrealEngineVersion); \
	DECLARE_FUNCTION(execGetPluginVersion);


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunningInGame_World); \
	DECLARE_FUNCTION(execRunningInPIE_World); \
	DECLARE_FUNCTION(execRunningInEditor_World); \
	DECLARE_FUNCTION(execPrintToScreenWithTag); \
	DECLARE_FUNCTION(execGetMeshCenterOfMass); \
	DECLARE_FUNCTION(execGetBoneBounds); \
	DECLARE_FUNCTION(execGetMeshRadius); \
	DECLARE_FUNCTION(execGetMeshDiameter); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetUnrealEngineVersion); \
	DECLARE_FUNCTION(execGetPluginVersion);


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleSystemFunctions(); \
	friend struct Z_Construct_UClass_UVehicleSystemFunctions_Statics; \
public: \
	DECLARE_CLASS(UVehicleSystemFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSystemFunctions)


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleSystemFunctions(); \
	friend struct Z_Construct_UClass_UVehicleSystemFunctions_Statics; \
public: \
	DECLARE_CLASS(UVehicleSystemFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSystemFunctions)


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleSystemFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSystemFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSystemFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSystemFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleSystemFunctions(UVehicleSystemFunctions&&); \
	NO_API UVehicleSystemFunctions(const UVehicleSystemFunctions&); \
public:


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleSystemFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleSystemFunctions(UVehicleSystemFunctions&&); \
	NO_API UVehicleSystemFunctions(const UVehicleSystemFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSystemFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSystemFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSystemFunctions)


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_27_PROLOG
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_SPARSE_DATA \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_RPC_WRAPPERS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_INCLASS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_SPARSE_DATA \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VehicleSystemFunctions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class UVehicleSystemFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
