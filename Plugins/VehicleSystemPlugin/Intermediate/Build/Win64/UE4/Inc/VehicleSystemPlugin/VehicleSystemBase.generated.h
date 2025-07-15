// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNetState;
#ifdef VEHICLESYSTEMPLUGIN_VehicleSystemBase_generated_h
#error "VehicleSystemBase.generated.h already included, missing '#pragma once' in VehicleSystemBase.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleSystemBase_generated_h

#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleGear_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FVehicleGear>();

#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetState_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FNetState>();

#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_SPARSE_DATA
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_RPC_WRAPPERS \
	virtual bool Multicast_ChangedOwner_Validate(); \
	virtual void Multicast_ChangedOwner_Implementation(); \
	virtual bool Server_ReceiveRestState_Validate(FNetState ); \
	virtual void Server_ReceiveRestState_Implementation(FNetState State); \
	virtual bool Client_ReceiveNetState_Validate(FNetState ); \
	virtual void Client_ReceiveNetState_Implementation(FNetState State); \
	virtual bool Server_ReceiveNetState_Validate(FNetState ); \
	virtual void Server_ReceiveNetState_Implementation(FNetState State); \
 \
	DECLARE_FUNCTION(execMulticast_ChangedOwner); \
	DECLARE_FUNCTION(execServer_ReceiveRestState); \
	DECLARE_FUNCTION(execClient_ReceiveNetState); \
	DECLARE_FUNCTION(execServer_ReceiveNetState); \
	DECLARE_FUNCTION(execSetShouldSyncWithServer); \
	DECLARE_FUNCTION(execNetStateSend); \
	DECLARE_FUNCTION(execOnRep_RestState); \
	DECLARE_FUNCTION(execGetSteeringFromCurve);


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulticast_ChangedOwner); \
	DECLARE_FUNCTION(execServer_ReceiveRestState); \
	DECLARE_FUNCTION(execClient_ReceiveNetState); \
	DECLARE_FUNCTION(execServer_ReceiveNetState); \
	DECLARE_FUNCTION(execSetShouldSyncWithServer); \
	DECLARE_FUNCTION(execNetStateSend); \
	DECLARE_FUNCTION(execOnRep_RestState); \
	DECLARE_FUNCTION(execGetSteeringFromCurve);


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_EVENT_PARMS \
	struct VehicleSystemBase_eventAVS_Tick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct VehicleSystemBase_eventBlueprintDebugMessage_Parms \
	{ \
		FString text; \
	}; \
	struct VehicleSystemBase_eventClient_ReceiveNetState_Parms \
	{ \
		FNetState State; \
	}; \
	struct VehicleSystemBase_eventDeterminePassiveState_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VehicleSystemBase_eventDeterminePassiveState_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VehicleSystemBase_eventPassiveStateChanged_Parms \
	{ \
		bool NewPassiveState; \
	}; \
	struct VehicleSystemBase_eventServer_ReceiveNetState_Parms \
	{ \
		FNetState State; \
	}; \
	struct VehicleSystemBase_eventServer_ReceiveRestState_Parms \
	{ \
		FNetState State; \
	};


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_CALLBACK_WRAPPERS
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleSystemBase(); \
	friend struct Z_Construct_UClass_AVehicleSystemBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleSystemBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVehicleSystemBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RestState=NETFIELD_REP_START, \
		NETFIELD_REP_END=RestState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleSystemBase(); \
	friend struct Z_Construct_UClass_AVehicleSystemBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleSystemBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVehicleSystemBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RestState=NETFIELD_REP_START, \
		NETFIELD_REP_END=RestState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleSystemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleSystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleSystemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleSystemBase(AVehicleSystemBase&&); \
	NO_API AVehicleSystemBase(const AVehicleSystemBase&); \
public:


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleSystemBase(AVehicleSystemBase&&); \
	NO_API AVehicleSystemBase(const AVehicleSystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleSystemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicleSystemBase)


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_81_PROLOG \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_EVENT_PARMS


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_SPARSE_DATA \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_RPC_WRAPPERS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_INCLASS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_SPARSE_DATA \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class AVehicleSystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h


#define FOREACH_ENUM_NETWORKROLES(op) \
	op(NetworkRoles::None) \
	op(NetworkRoles::Owner) \
	op(NetworkRoles::Server) \
	op(NetworkRoles::Client) \
	op(NetworkRoles::ClientSpawned) 

enum class NetworkRoles : uint8;
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<NetworkRoles>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
