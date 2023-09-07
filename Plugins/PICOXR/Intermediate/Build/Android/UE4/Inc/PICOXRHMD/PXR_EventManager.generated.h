// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRHMD_PXR_EventManager_generated_h
#error "PXR_EventManager.generated.h already included, missing '#pragma once' in PXR_EventManager.h"
#endif
#define PICOXRHMD_PXR_EventManager_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_28_DELEGATE \
static inline void FPXRDeviceFitnessRecalibrationBandDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceFitnessRecalibrationBandDelegate) \
{ \
	PXRDeviceFitnessRecalibrationBandDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_27_DELEGATE \
struct _Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms \
{ \
	int32 Count; \
	int32 ConnectionState; \
}; \
static inline void FPXRDeviceFitnessBandConnectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceFitnessBandConnectionDelegate, int32 Count, int32 ConnectionState) \
{ \
	_Script_PICOXRHMD_eventPXRDeviceFitnessBandConnectionDelegate_Parms Parms; \
	Parms.Count=Count; \
	Parms.ConnectionState=ConnectionState; \
	PXRDeviceFitnessBandConnectionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_26_DELEGATE \
struct _Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms \
{ \
	int32 Id; \
	int32 BatteryState; \
}; \
static inline void FPXRDeviceFitnessBandBatteryDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceFitnessBandBatteryDelegate, int32 Id, int32 BatteryState) \
{ \
	_Script_PICOXRHMD_eventPXRDeviceFitnessBandBatteryDelegate_Parms Parms; \
	Parms.Id=Id; \
	Parms.BatteryState=BatteryState; \
	PXRDeviceFitnessBandBatteryDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_24_DELEGATE \
struct _Script_PICOXRHMD_eventPXRRefreshRateChanged_Parms \
{ \
	float NewRate; \
}; \
static inline void FPXRRefreshRateChanged_DelegateWrapper(const FMulticastScriptDelegate& PXRRefreshRateChanged, float NewRate) \
{ \
	_Script_PICOXRHMD_eventPXRRefreshRateChanged_Parms Parms; \
	Parms.NewRate=NewRate; \
	PXRRefreshRateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_22_DELEGATE \
struct _Script_PICOXRHMD_eventPXRIpdChanged_Parms \
{ \
	float NewIpd; \
}; \
static inline void FPXRIpdChanged_DelegateWrapper(const FMulticastScriptDelegate& PXRIpdChanged, float NewIpd) \
{ \
	_Script_PICOXRHMD_eventPXRIpdChanged_Parms Parms; \
	Parms.NewIpd=NewIpd; \
	PXRIpdChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_20_DELEGATE \
static inline void FPXRResume_DelegateWrapper(const FMulticastScriptDelegate& PXRResume) \
{ \
	PXRResume.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_18_DELEGATE \
static inline void FPXRLongHomeKey_DelegateWrapper(const FMulticastScriptDelegate& PXRLongHomeKey) \
{ \
	PXRLongHomeKey.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_16_DELEGATE \
struct _Script_PICOXRHMD_eventPXRBatteryStateChangedDelegate_Parms \
{ \
	int32 State; \
}; \
static inline void FPXRBatteryStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRBatteryStateChangedDelegate, int32 State) \
{ \
	_Script_PICOXRHMD_eventPXRBatteryStateChangedDelegate_Parms Parms; \
	Parms.State=State; \
	PXRBatteryStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_15_DELEGATE \
struct _Script_PICOXRHMD_eventPXRInputDeviceChangedDelegate_Parms \
{ \
	int32 State; \
}; \
static inline void FPXRInputDeviceChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRInputDeviceChangedDelegate, int32 State) \
{ \
	_Script_PICOXRHMD_eventPXRInputDeviceChangedDelegate_Parms Parms; \
	Parms.State=State; \
	PXRInputDeviceChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_14_DELEGATE \
struct _Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms \
{ \
	int32 Handness; \
	int32 State; \
}; \
static inline void FPXRDeviceConnectChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceConnectChangedDelegate, int32 Handness, int32 State) \
{ \
	_Script_PICOXRHMD_eventPXRDeviceConnectChangedDelegate_Parms Parms; \
	Parms.Handness=Handness; \
	Parms.State=State; \
	PXRDeviceConnectChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_13_DELEGATE \
struct _Script_PICOXRHMD_eventPXRHandnessChangedDelegate_Parms \
{ \
	int32 Handness; \
}; \
static inline void FPXRHandnessChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRHandnessChangedDelegate, int32 Handness) \
{ \
	_Script_PICOXRHMD_eventPXRHandnessChangedDelegate_Parms Parms; \
	Parms.Handness=Handness; \
	PXRHandnessChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_12_DELEGATE \
struct _Script_PICOXRHMD_eventPXRDeviceMainChangedDelegate_Parms \
{ \
	int32 Handness; \
}; \
static inline void FPXRDeviceMainChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceMainChangedDelegate, int32 Handness) \
{ \
	_Script_PICOXRHMD_eventPXRDeviceMainChangedDelegate_Parms Parms; \
	Parms.Handness=Handness; \
	PXRDeviceMainChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_RPC_WRAPPERS
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXREventManager(); \
	friend struct Z_Construct_UClass_UPICOXREventManager_Statics; \
public: \
	DECLARE_CLASS(UPICOXREventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXREventManager)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXREventManager(); \
	friend struct Z_Construct_UClass_UPICOXREventManager_Statics; \
public: \
	DECLARE_CLASS(UPICOXREventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXREventManager)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXREventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXREventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXREventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXREventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXREventManager(UPICOXREventManager&&); \
	NO_API UPICOXREventManager(const UPICOXREventManager&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXREventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXREventManager(UPICOXREventManager&&); \
	NO_API UPICOXREventManager(const UPICOXREventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXREventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXREventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXREventManager)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_30_PROLOG
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRHMD_API UClass* StaticClass<class UPICOXREventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Private_PXR_EventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
