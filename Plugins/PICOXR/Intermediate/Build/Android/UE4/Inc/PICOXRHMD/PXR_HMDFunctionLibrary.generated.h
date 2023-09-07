// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFoveationRenderingMode : uint8;
enum class EPICOXRCoordinateType : uint8;
struct FVector;
struct FRotator;
struct FVector2D;
enum class EPICOXRAndroidSurface3DType : uint8;
enum class EPICOXRDeviceAbilities : uint8;
struct FPxrSensorState;
enum class EPICOXRFoveationLevel : uint8;
enum class EPICOXRBoundaryType : uint8;
enum class EPICOXRNodeType : uint8;
struct FLinearColor;
enum class EPerformanceSettingTypes : uint8;
enum class EPerfSettingsLevel : uint8;
class UPICOXREventManager;
enum class EPICOXREyeType : uint8;
struct FQuat;
#ifdef PICOXRHMD_PXR_HMDFunctionLibrary_generated_h
#error "PXR_HMDFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_HMDFunctionLibrary.h"
#endif
#define PICOXRHMD_PXR_HMDFunctionLibrary_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOXREyeTrackingData_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FPICOXREyeTrackingData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPxrSensorState_Statics; \
	PICOXRHMD_API static class UScriptStruct* StaticStruct();


template<> PICOXRHMD_API UScriptStruct* StaticStruct<struct FPxrSensorState>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_200_DELEGATE \
struct _Script_PICOXRHMD_eventPICOXRIPDChangedDelegate_Parms \
{ \
	float Ipd; \
}; \
static inline void FPICOXRIPDChangedDelegate_DelegateWrapper(const FScriptDelegate& PICOXRIPDChangedDelegate, float Ipd) \
{ \
	_Script_PICOXRHMD_eventPICOXRIPDChangedDelegate_Parms Parms; \
	Parms.Ipd=Ipd; \
	PICOXRIPDChangedDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_GetTrackingOriginHeight); \
	DECLARE_FUNCTION(execPXR_SetFoveatedRenderingMode); \
	DECLARE_FUNCTION(execPXR_SelectCoordinateSpace); \
	DECLARE_FUNCTION(execPXR_DestroyExternalSurface); \
	DECLARE_FUNCTION(execPXR_SetExternalSurface); \
	DECLARE_FUNCTION(execPXR_GetHmdBatteryLevel); \
	DECLARE_FUNCTION(execPXR_GetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execPXR_SetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execPXR_SetLateLatchingEnable); \
	DECLARE_FUNCTION(execPXR_QueryDeviceAbilities); \
	DECLARE_FUNCTION(execPXR_GetPredictedMainSensorState); \
	DECLARE_FUNCTION(execPXR_SetExtraLatencyMode); \
	DECLARE_FUNCTION(execPXR_GetDisplayFrequenciesAvailable); \
	DECLARE_FUNCTION(execPXR_SetSensorLostCMST); \
	DECLARE_FUNCTION(execPXR_SetSensorLostCustomMode); \
	DECLARE_FUNCTION(execPXR_SetFoveationParameter); \
	DECLARE_FUNCTION(execPXR_SetFoveationLevel); \
	DECLARE_FUNCTION(execPXR_GetFoveationLevel); \
	DECLARE_FUNCTION(execPXR_SetSeeThroughBackground); \
	DECLARE_FUNCTION(execPXR_GetBoundaryDimensions); \
	DECLARE_FUNCTION(execPXR_GetBoundaryGeometry); \
	DECLARE_FUNCTION(execPXR_BoundaryTestPoint); \
	DECLARE_FUNCTION(execPXR_BoundaryTestNode); \
	DECLARE_FUNCTION(execPXR_GetBoundaryVisible); \
	DECLARE_FUNCTION(execPXR_SetBoundaryVisible); \
	DECLARE_FUNCTION(execPXR_GetBoundaryEnabled); \
	DECLARE_FUNCTION(execPXR_GetBoundaryConfigured); \
	DECLARE_FUNCTION(execGetFocusState); \
	DECLARE_FUNCTION(execPXR_SetColorScaleAndOffset); \
	DECLARE_FUNCTION(execPXR_SetSystemDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetSystemDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetPerformanceLevel); \
	DECLARE_FUNCTION(execPXR_SetPerformanceLevel); \
	DECLARE_FUNCTION(execPXR_GetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPXR_SetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPXR_GetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetDeviceModel); \
	DECLARE_FUNCTION(execPXR_GetEventManager); \
	DECLARE_FUNCTION(execPXR_IPDChangedDelegates); \
	DECLARE_FUNCTION(execPXR_GetIPD); \
	DECLARE_FUNCTION(execPXR_GetHFov); \
	DECLARE_FUNCTION(execPXR_GetVFov); \
	DECLARE_FUNCTION(execPXR_SetFieldOfView); \
	DECLARE_FUNCTION(execPXR_GetFieldOfView); \
	DECLARE_FUNCTION(execPXR_ResetHMDSensor); \
	DECLARE_FUNCTION(execPXR_GetHMDWornState); \
	DECLARE_FUNCTION(execPXR_GetAngularAcceleration); \
	DECLARE_FUNCTION(execPXR_GetVelocity); \
	DECLARE_FUNCTION(execPXR_GetAcceleration); \
	DECLARE_FUNCTION(execPXR_GetAngularVelocity); \
	DECLARE_FUNCTION(execPXR_DoesSupportPositionalTracking); \
	DECLARE_FUNCTION(execPXR_GetCurrentPosition); \
	DECLARE_FUNCTION(execPXR_GetCurrentOrientation);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_GetTrackingOriginHeight); \
	DECLARE_FUNCTION(execPXR_SetFoveatedRenderingMode); \
	DECLARE_FUNCTION(execPXR_SelectCoordinateSpace); \
	DECLARE_FUNCTION(execPXR_DestroyExternalSurface); \
	DECLARE_FUNCTION(execPXR_SetExternalSurface); \
	DECLARE_FUNCTION(execPXR_GetHmdBatteryLevel); \
	DECLARE_FUNCTION(execPXR_GetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execPXR_SetBaseRotationAndBaseOffsetInMeters); \
	DECLARE_FUNCTION(execPXR_SetLateLatchingEnable); \
	DECLARE_FUNCTION(execPXR_QueryDeviceAbilities); \
	DECLARE_FUNCTION(execPXR_GetPredictedMainSensorState); \
	DECLARE_FUNCTION(execPXR_SetExtraLatencyMode); \
	DECLARE_FUNCTION(execPXR_GetDisplayFrequenciesAvailable); \
	DECLARE_FUNCTION(execPXR_SetSensorLostCMST); \
	DECLARE_FUNCTION(execPXR_SetSensorLostCustomMode); \
	DECLARE_FUNCTION(execPXR_SetFoveationParameter); \
	DECLARE_FUNCTION(execPXR_SetFoveationLevel); \
	DECLARE_FUNCTION(execPXR_GetFoveationLevel); \
	DECLARE_FUNCTION(execPXR_SetSeeThroughBackground); \
	DECLARE_FUNCTION(execPXR_GetBoundaryDimensions); \
	DECLARE_FUNCTION(execPXR_GetBoundaryGeometry); \
	DECLARE_FUNCTION(execPXR_BoundaryTestPoint); \
	DECLARE_FUNCTION(execPXR_BoundaryTestNode); \
	DECLARE_FUNCTION(execPXR_GetBoundaryVisible); \
	DECLARE_FUNCTION(execPXR_SetBoundaryVisible); \
	DECLARE_FUNCTION(execPXR_GetBoundaryEnabled); \
	DECLARE_FUNCTION(execPXR_GetBoundaryConfigured); \
	DECLARE_FUNCTION(execGetFocusState); \
	DECLARE_FUNCTION(execPXR_SetColorScaleAndOffset); \
	DECLARE_FUNCTION(execPXR_SetSystemDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetSystemDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetPerformanceLevel); \
	DECLARE_FUNCTION(execPXR_SetPerformanceLevel); \
	DECLARE_FUNCTION(execPXR_GetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPXR_SetCPUAndGPULevels); \
	DECLARE_FUNCTION(execPXR_GetCurrentDisplayFrequency); \
	DECLARE_FUNCTION(execPXR_GetDeviceModel); \
	DECLARE_FUNCTION(execPXR_GetEventManager); \
	DECLARE_FUNCTION(execPXR_IPDChangedDelegates); \
	DECLARE_FUNCTION(execPXR_GetIPD); \
	DECLARE_FUNCTION(execPXR_GetHFov); \
	DECLARE_FUNCTION(execPXR_GetVFov); \
	DECLARE_FUNCTION(execPXR_SetFieldOfView); \
	DECLARE_FUNCTION(execPXR_GetFieldOfView); \
	DECLARE_FUNCTION(execPXR_ResetHMDSensor); \
	DECLARE_FUNCTION(execPXR_GetHMDWornState); \
	DECLARE_FUNCTION(execPXR_GetAngularAcceleration); \
	DECLARE_FUNCTION(execPXR_GetVelocity); \
	DECLARE_FUNCTION(execPXR_GetAcceleration); \
	DECLARE_FUNCTION(execPXR_GetAngularVelocity); \
	DECLARE_FUNCTION(execPXR_DoesSupportPositionalTracking); \
	DECLARE_FUNCTION(execPXR_GetCurrentPosition); \
	DECLARE_FUNCTION(execPXR_GetCurrentOrientation);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRHMDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRHMDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRHMDFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRHMDFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRHMDFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRHMDFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRHMDFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRHMDFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRHMDFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRHMDFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRHMDFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRHMDFunctionLibrary(UPICOXRHMDFunctionLibrary&&); \
	NO_API UPICOXRHMDFunctionLibrary(const UPICOXRHMDFunctionLibrary&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRHMDFunctionLibrary(UPICOXRHMDFunctionLibrary&&); \
	NO_API UPICOXRHMDFunctionLibrary(const UPICOXRHMDFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRHMDFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRHMDFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPICOXRHMDFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_202_PROLOG
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRHMD_API UClass* StaticClass<class UPICOXRHMDFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRHMD_Public_PXR_HMDFunctionLibrary_h


#define FOREACH_ENUM_EPERFORMANCESETTINGTYPES(op) \
	op(EPerformanceSettingTypes::CPULevel) \
	op(EPerformanceSettingTypes::GPULevel) 

enum class EPerformanceSettingTypes : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPerformanceSettingTypes>();

#define FOREACH_ENUM_EPERFSETTINGSLEVEL(op) \
	op(EPerfSettingsLevel::XR_PERF_SETTINGS_LEVEL_POWER_SAVINGS_EXT) \
	op(EPerfSettingsLevel::XR_PERF_SETTINGS_LEVEL_SUSTAINED_LOW_EXT) \
	op(EPerfSettingsLevel::XR_PERF_SETTINGS_LEVEL_SUSTAINED_HIGH_EXT) \
	op(EPerfSettingsLevel::XR_PERF_SETTINGS_LEVEL_BOOST_EXT) 

enum class EPerfSettingsLevel : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPerfSettingsLevel>();

#define FOREACH_ENUM_EPICOXRDEVICEABILITIES(op) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_ROTATION_BIT) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_POSITION_BIT) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_EYE_BIT) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_FACE_BIT) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_VCMOTOR_BIT) \
	op(EPICOXRDeviceAbilities::TRACKING_MODE_HAND_BIT) 

enum class EPICOXRDeviceAbilities : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRDeviceAbilities>();

#define FOREACH_ENUM_EPICOXREYETYPE(op) \
	op(EPICOXREyeType::LeftEye) \
	op(EPICOXREyeType::RightEye) \
	op(EPICOXREyeType::BothEye) 

enum class EPICOXREyeType : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXREyeType>();

#define FOREACH_ENUM_EPICOXRFOVEATIONLEVEL(op) \
	op(EPICOXRFoveationLevel::None) \
	op(EPICOXRFoveationLevel::Low) \
	op(EPICOXRFoveationLevel::Medium) \
	op(EPICOXRFoveationLevel::High) \
	op(EPICOXRFoveationLevel::TopHigh) 

enum class EPICOXRFoveationLevel : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRFoveationLevel>();

#define FOREACH_ENUM_EPICOXRCAMERATYPE(op) \
	op(EPICOXRCameraType::Left) \
	op(EPICOXRCameraType::Right) 

enum class EPICOXRCameraType : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRCameraType>();

#define FOREACH_ENUM_EPICOXRNODETYPE(op) \
	op(EPICOXRNodeType::LeftHand) \
	op(EPICOXRNodeType::RightHand) \
	op(EPICOXRNodeType::Head) 

enum class EPICOXRNodeType : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRNodeType>();

#define FOREACH_ENUM_EPICOXRTRACKEDDEVICETYPE(op) \
	op(EPICOXRTrackedDeviceType::None) \
	op(EPICOXRTrackedDeviceType::HMD) \
	op(EPICOXRTrackedDeviceType::LTouch) \
	op(EPICOXRTrackedDeviceType::RTouch) \
	op(EPICOXRTrackedDeviceType::Touch) \
	op(EPICOXRTrackedDeviceType::All) 

enum class EPICOXRTrackedDeviceType : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRTrackedDeviceType>();

#define FOREACH_ENUM_EPICOXRBOUNDARYSTATE(op) \
	op(EPICOXRBoundaryState::GobackDialog) \
	op(EPICOXRBoundaryState::ToofarDialog) \
	op(EPICOXRBoundaryState::LostDialog) \
	op(EPICOXRBoundaryState::LostNoReason) \
	op(EPICOXRBoundaryState::LostCamera) \
	op(EPICOXRBoundaryState::LostHighLight) \
	op(EPICOXRBoundaryState::LostLowLight) \
	op(EPICOXRBoundaryState::LostLowFeatureCount) \
	op(EPICOXRBoundaryState::LostReLocation) \
	op(EPICOXRBoundaryState::LostInitialization) \
	op(EPICOXRBoundaryState::LostNoCamera) \
	op(EPICOXRBoundaryState::LostNoIMU) \
	op(EPICOXRBoundaryState::LostIMUJitter) \
	op(EPICOXRBoundaryState::LostUnknown) \
	op(EPICOXRBoundaryState::NothingDialog) \
	op(EPICOXRBoundaryState::LostNoDialog) 

enum class EPICOXRBoundaryState : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRBoundaryState>();

#define FOREACH_ENUM_EPICOXRBOUNDARYTYPE(op) \
	op(EPICOXRBoundaryType::Outer) \
	op(EPICOXRBoundaryType::PlayArea) 

enum class EPICOXRBoundaryType : uint8;
template<> PICOXRHMD_API UEnum* StaticEnum<EPICOXRBoundaryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
