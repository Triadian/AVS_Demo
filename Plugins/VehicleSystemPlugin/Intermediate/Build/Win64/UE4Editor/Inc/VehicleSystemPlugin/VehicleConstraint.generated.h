// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLESYSTEMPLUGIN_VehicleConstraint_generated_h
#error "VehicleConstraint.generated.h already included, missing '#pragma once' in VehicleConstraint.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleConstraint_generated_h

#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_SPARSE_DATA
#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLinearSoftConstraint);


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLinearSoftConstraint);


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleConstraint(); \
	friend struct Z_Construct_UClass_UVehicleConstraint_Statics; \
public: \
	DECLARE_CLASS(UVehicleConstraint, UPhysicsConstraintComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleConstraint)


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleConstraint(); \
	friend struct Z_Construct_UClass_UVehicleConstraint_Statics; \
public: \
	DECLARE_CLASS(UVehicleConstraint, UPhysicsConstraintComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleConstraint)


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleConstraint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleConstraint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleConstraint(UVehicleConstraint&&); \
	NO_API UVehicleConstraint(const UVehicleConstraint&); \
public:


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleConstraint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleConstraint(UVehicleConstraint&&); \
	NO_API UVehicleConstraint(const UVehicleConstraint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleConstraint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleConstraint)


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_PRIVATE_PROPERTY_OFFSET
#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_13_PROLOG
#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_PRIVATE_PROPERTY_OFFSET \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_SPARSE_DATA \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_RPC_WRAPPERS \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_INCLASS \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_PRIVATE_PROPERTY_OFFSET \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_SPARSE_DATA \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_INCLASS_NO_PURE_DECLS \
	AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class UVehicleConstraint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AVS_DemoSrc_426min_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
