// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBodyTrackingBoneLength;
enum class ESwiftMode : uint8;
struct FFitnessBandConnectState;
enum class EPxrBodyTrackerRole : uint8;
struct FPxrBodyTrackingTransform;
struct FPHFJsonData;
enum class EPICOXRVibrateController : uint8;
enum class EPICOXRChannelFlip : uint8;
enum class EPICOXRActiveInputDevice : uint8;
enum class EPICOXRHandType : uint8;
enum class EPICOXRHandTrackingConfidence : uint8;
struct FTransform;
enum class EPICOXRHandJoint : uint8;
struct FVector;
struct FQuat;
class USoundWave;
enum class EPICOXRCacheConfig : uint8;
enum class EPxrControllerKeyMap : uint8;
enum class EControllerHand : uint8;
struct FRotator;
enum class EPICOXRControllerType : uint8;
enum class EPICOXRHandedness : uint8;
enum class EPICOXRGazeBehavior : uint8;
enum class EPICOXRArmModelJoint : uint8;
enum class EPICOXRControllerDeviceType : uint8;
#ifdef PICOXRINPUT_PXR_InputFunctionLibrary_generated_h
#error "PXR_InputFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_InputFunctionLibrary.h"
#endif
#define PICOXRINPUT_PXR_InputFunctionLibrary_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_384_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPHFJsonData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPHFJsonData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_367_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPHFJsonFrameData_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPHFJsonFrameData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPHFData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPHFData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_347_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPHFDataContent_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPHFDataContent>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioClipData_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FAudioClipData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyTrackingBoneLength_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FBodyTrackingBoneLength>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_250_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPxrBodyTrackingTransform_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPxrBodyTrackingTransform>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFitnessBandConnectState_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FFitnessBandConnectState>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPxrBodyTrackingImu_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPxrBodyTrackingImu>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_SPARSE_DATA
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingBoneLength); \
	DECLARE_FUNCTION(execPXR_SetSwiftMode); \
	DECLARE_FUNCTION(execPXR_LaunchFitnessBandCalibrationAPP); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandCalibState); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandBattery); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandConnectState); \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingMode); \
	DECLARE_FUNCTION(execPXR_GetBodyTrackingPoseByRole); \
	DECLARE_FUNCTION(execPXR_GetBodyTrackingPose); \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingStaticCalibState); \
	DECLARE_FUNCTION(execPXR_GetPHFHapticSpeed); \
	DECLARE_FUNCTION(execPXR_SetPHFHapticSpeed); \
	DECLARE_FUNCTION(execPXR_GetCurrentFrameSequence); \
	DECLARE_FUNCTION(execPXR_WriteHapticStream); \
	DECLARE_FUNCTION(execPXR_StopPHFHaptic); \
	DECLARE_FUNCTION(execPXR_StartPHFHaptic); \
	DECLARE_FUNCTION(execPXR_RemovePHFHaptic); \
	DECLARE_FUNCTION(execPXR_CreateHapticStream); \
	DECLARE_FUNCTION(execPXR_UpdateVibrateParams); \
	DECLARE_FUNCTION(execPXR_ResumeVibrate); \
	DECLARE_FUNCTION(execPXR_PauseVibrate); \
	DECLARE_FUNCTION(execPXR_StartVibrateByPHF); \
	DECLARE_FUNCTION(execGetActiveInputDevice); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetPinchStrength); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsPinchValid); \
	DECLARE_FUNCTION(execIsRayValid); \
	DECLARE_FUNCTION(execIsComputed); \
	DECLARE_FUNCTION(execGetRayPose); \
	DECLARE_FUNCTION(execGetHandRootPose); \
	DECLARE_FUNCTION(execIsBonePositionTracked); \
	DECLARE_FUNCTION(execIsBoneOrientationTracked); \
	DECLARE_FUNCTION(execIsBonePositionValid); \
	DECLARE_FUNCTION(execIsBoneOrientationValid); \
	DECLARE_FUNCTION(execGetBoneRadii); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execPXR_ClearVibrateByCache); \
	DECLARE_FUNCTION(execPXR_StartVibrateByCache); \
	DECLARE_FUNCTION(execPXR_SaveVibrateByCache); \
	DECLARE_FUNCTION(execPXR_SetControllerEnableKey); \
	DECLARE_FUNCTION(execPXR_StartVibrateBySharem); \
	DECLARE_FUNCTION(execPXR_SetControllerVibrationEvent); \
	DECLARE_FUNCTION(execPXR_StopControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_SetControllerAmp); \
	DECLARE_FUNCTION(execPXR_StartControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_GetControllerPredictedLocationAndRotation); \
	DECLARE_FUNCTION(execPXR_SetControllerOriginOffset); \
	DECLARE_FUNCTION(execPXR_GetControllerEnableHomekey); \
	DECLARE_FUNCTION(execPXR_GetHandedness); \
	DECLARE_FUNCTION(execPXR_SetArmModelParameters); \
	DECLARE_FUNCTION(execPXR_ResetController); \
	DECLARE_FUNCTION(execPXR_GetControllerDeviceType); \
	DECLARE_FUNCTION(execPXR_VibrateController); \
	DECLARE_FUNCTION(execPXR_GetControllerLinearVelocity); \
	DECLARE_FUNCTION(execPXR_GetControllerAcceleration); \
	DECLARE_FUNCTION(execPXR_GetControllerAngularVelocity); \
	DECLARE_FUNCTION(execPXR_SetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetControllerConnectionState); \
	DECLARE_FUNCTION(execPXR_GetControllerPower);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingBoneLength); \
	DECLARE_FUNCTION(execPXR_SetSwiftMode); \
	DECLARE_FUNCTION(execPXR_LaunchFitnessBandCalibrationAPP); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandCalibState); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandBattery); \
	DECLARE_FUNCTION(execPXR_GetFitnessBandConnectState); \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingMode); \
	DECLARE_FUNCTION(execPXR_GetBodyTrackingPoseByRole); \
	DECLARE_FUNCTION(execPXR_GetBodyTrackingPose); \
	DECLARE_FUNCTION(execPXR_SetBodyTrackingStaticCalibState); \
	DECLARE_FUNCTION(execPXR_GetPHFHapticSpeed); \
	DECLARE_FUNCTION(execPXR_SetPHFHapticSpeed); \
	DECLARE_FUNCTION(execPXR_GetCurrentFrameSequence); \
	DECLARE_FUNCTION(execPXR_WriteHapticStream); \
	DECLARE_FUNCTION(execPXR_StopPHFHaptic); \
	DECLARE_FUNCTION(execPXR_StartPHFHaptic); \
	DECLARE_FUNCTION(execPXR_RemovePHFHaptic); \
	DECLARE_FUNCTION(execPXR_CreateHapticStream); \
	DECLARE_FUNCTION(execPXR_UpdateVibrateParams); \
	DECLARE_FUNCTION(execPXR_ResumeVibrate); \
	DECLARE_FUNCTION(execPXR_PauseVibrate); \
	DECLARE_FUNCTION(execPXR_StartVibrateByPHF); \
	DECLARE_FUNCTION(execGetActiveInputDevice); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetPinchStrength); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsPinchValid); \
	DECLARE_FUNCTION(execIsRayValid); \
	DECLARE_FUNCTION(execIsComputed); \
	DECLARE_FUNCTION(execGetRayPose); \
	DECLARE_FUNCTION(execGetHandRootPose); \
	DECLARE_FUNCTION(execIsBonePositionTracked); \
	DECLARE_FUNCTION(execIsBoneOrientationTracked); \
	DECLARE_FUNCTION(execIsBonePositionValid); \
	DECLARE_FUNCTION(execIsBoneOrientationValid); \
	DECLARE_FUNCTION(execGetBoneRadii); \
	DECLARE_FUNCTION(execGetBoneLocation); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execPXR_ClearVibrateByCache); \
	DECLARE_FUNCTION(execPXR_StartVibrateByCache); \
	DECLARE_FUNCTION(execPXR_SaveVibrateByCache); \
	DECLARE_FUNCTION(execPXR_SetControllerEnableKey); \
	DECLARE_FUNCTION(execPXR_StartVibrateBySharem); \
	DECLARE_FUNCTION(execPXR_SetControllerVibrationEvent); \
	DECLARE_FUNCTION(execPXR_StopControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_SetControllerAmp); \
	DECLARE_FUNCTION(execPXR_StartControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_GetControllerPredictedLocationAndRotation); \
	DECLARE_FUNCTION(execPXR_SetControllerOriginOffset); \
	DECLARE_FUNCTION(execPXR_GetControllerEnableHomekey); \
	DECLARE_FUNCTION(execPXR_GetHandedness); \
	DECLARE_FUNCTION(execPXR_SetArmModelParameters); \
	DECLARE_FUNCTION(execPXR_ResetController); \
	DECLARE_FUNCTION(execPXR_GetControllerDeviceType); \
	DECLARE_FUNCTION(execPXR_VibrateController); \
	DECLARE_FUNCTION(execPXR_GetControllerLinearVelocity); \
	DECLARE_FUNCTION(execPXR_GetControllerAcceleration); \
	DECLARE_FUNCTION(execPXR_GetControllerAngularVelocity); \
	DECLARE_FUNCTION(execPXR_SetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetControllerConnectionState); \
	DECLARE_FUNCTION(execPXR_GetControllerPower);


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPICOXRInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRInputFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_INCLASS \
private: \
	static void StaticRegisterNativesUPICOXRInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPICOXRInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPICOXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PICOXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPICOXRInputFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPICOXRInputFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPICOXRInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRInputFunctionLibrary(UPICOXRInputFunctionLibrary&&); \
	NO_API UPICOXRInputFunctionLibrary(const UPICOXRInputFunctionLibrary&); \
public:


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPICOXRInputFunctionLibrary(UPICOXRInputFunctionLibrary&&); \
	NO_API UPICOXRInputFunctionLibrary(const UPICOXRInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPICOXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPICOXRInputFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPICOXRInputFunctionLibrary)


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_PRIVATE_PROPERTY_OFFSET
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_407_PROLOG
#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_RPC_WRAPPERS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_INCLASS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_PRIVATE_PROPERTY_OFFSET \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_SPARSE_DATA \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_RPC_WRAPPERS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_INCLASS_NO_PURE_DECLS \
	DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h_410_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRINPUT_API UClass* StaticClass<class UPICOXRInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRInput_Public_PXR_InputFunctionLibrary_h


#define FOREACH_ENUM_ESWIFTMODE(op) \
	op(ESwiftMode::SWIFT_DEFAULT) \
	op(ESwiftMode::SWIFT_FULLBODY) 

enum class ESwiftMode : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<ESwiftMode>();

#define FOREACH_ENUM_EPXRBODYACTIONLIST(op) \
	op(EPxrBodyActionList::NoneAction) \
	op(EPxrBodyActionList::TouchGround) \
	op(EPxrBodyActionList::KeepStatic) \
	op(EPxrBodyActionList::TouchGroundAndKeepStatic) 

enum class EPxrBodyActionList : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrBodyActionList>();

#define FOREACH_ENUM_EPXRBODYTRACKERROLE(op) \
	op(EPxrBodyTrackerRole::PxrPelvis) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_HIP) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_HIP) \
	op(EPxrBodyTrackerRole::Pxr_SPINE1) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_KNEE) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_KNEE) \
	op(EPxrBodyTrackerRole::Pxr_SPINE2) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_ANKLE) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_ANKLE) \
	op(EPxrBodyTrackerRole::Pxr_SPINE3) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_FOOT) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_FOOT) \
	op(EPxrBodyTrackerRole::Pxr_NECK) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_COLLAR) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_COLLAR) \
	op(EPxrBodyTrackerRole::Pxr_HEAD) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_SHOULDER) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_SHOULDER) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_ELBOW) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_ELBOW) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_WRIST) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_WRIST) \
	op(EPxrBodyTrackerRole::Pxr_LEFT_HAND) \
	op(EPxrBodyTrackerRole::Pxr_RIGHT_HAND) \
	op(EPxrBodyTrackerRole::Pxr_ROLE_COUNT) 

enum class EPxrBodyTrackerRole : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrBodyTrackerRole>();

#define FOREACH_ENUM_EPXRCONTROLLERKEYMAP(op) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE) 

enum class EPxrControllerKeyMap : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrControllerKeyMap>();

#define FOREACH_ENUM_EBODYACTIONLIST(op) \
	op(EBodyActionList::PxrNoneAction) \
	op(EBodyActionList::PxrTouchGround) \
	op(EBodyActionList::PxrKeepStatic) 

enum class EBodyActionList : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EBodyActionList>();

#define FOREACH_ENUM_EPICOXRCACHECONFIG(op) \
	op(EPICOXRCacheConfig::CacheAndVibrate) \
	op(EPICOXRCacheConfig::CacheNoVibrate) 

enum class EPICOXRCacheConfig : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRCacheConfig>();

#define FOREACH_ENUM_EPICOXRCHANNELFLIP(op) \
	op(EPICOXRChannelFlip::No) \
	op(EPICOXRChannelFlip::Yes) 

enum class EPICOXRChannelFlip : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRChannelFlip>();

#define FOREACH_ENUM_EPICOXRVIBRATECONTROLLER(op) \
	op(EPICOXRVibrateController::No) \
	op(EPICOXRVibrateController::Left) \
	op(EPICOXRVibrateController::Right) \
	op(EPICOXRVibrateController::LeftAndRight) 

enum class EPICOXRVibrateController : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRVibrateController>();

#define FOREACH_ENUM_EPICOXRCONTROLLERDEVICETYPE(op) \
	op(EPICOXRControllerDeviceType::UnKnown) \
	op(EPICOXRControllerDeviceType::G2) \
	op(EPICOXRControllerDeviceType::Neo2) \
	op(EPICOXRControllerDeviceType::Neo3) \
	op(EPICOXRControllerDeviceType::PICO_4) \
	op(EPICOXRControllerDeviceType::G3) 

enum class EPICOXRControllerDeviceType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerDeviceType>();

#define FOREACH_ENUM_EPICOXRGAZEBEHAVIOR(op) \
	op(EPICOXRGazeBehavior::Never) \
	op(EPICOXRGazeBehavior::DuringMotion) \
	op(EPICOXRGazeBehavior::Always) 

enum class EPICOXRGazeBehavior : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRGazeBehavior>();

#define FOREACH_ENUM_EPICOXRARMMODELJOINT(op) \
	op(EPICOXRArmModelJoint::Controller) \
	op(EPICOXRArmModelJoint::Wrist) \
	op(EPICOXRArmModelJoint::Elbow) \
	op(EPICOXRArmModelJoint::Shoulder) 

enum class EPICOXRArmModelJoint : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRArmModelJoint>();

#define FOREACH_ENUM_EPICOXRCONTROLLERTYPE(op) \
	op(EPICOXRControllerType::LeftHand) \
	op(EPICOXRControllerType::RightHand) \
	op(EPICOXRControllerType::G2Hand) 

enum class EPICOXRControllerType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRControllerType>();

#define FOREACH_ENUM_EPICOXRHANDEDNESS(op) \
	op(EPICOXRHandedness::LeftHand) \
	op(EPICOXRHandedness::RightHand) 

enum class EPICOXRHandedness : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandedness>();

#define FOREACH_ENUM_EPICOXRHANDTYPE(op) \
	op(EPICOXRHandType::None) \
	op(EPICOXRHandType::HandLeft) \
	op(EPICOXRHandType::HandRight) 

enum class EPICOXRHandType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandType>();

#define FOREACH_ENUM_EPICOXRHANDJOINT(op) \
	op(EPICOXRHandJoint::Palm) \
	op(EPICOXRHandJoint::Wrist) \
	op(EPICOXRHandJoint::ThumbMetacarpal) \
	op(EPICOXRHandJoint::ThumbProximal) \
	op(EPICOXRHandJoint::ThumbDistal) \
	op(EPICOXRHandJoint::ThumbTip) \
	op(EPICOXRHandJoint::IndexMetacarpal) \
	op(EPICOXRHandJoint::IndexProximal) \
	op(EPICOXRHandJoint::IndexIntermediate) \
	op(EPICOXRHandJoint::IndexDistal) \
	op(EPICOXRHandJoint::IndexTip) \
	op(EPICOXRHandJoint::MiddleMetacarpal) \
	op(EPICOXRHandJoint::MiddleProximal) \
	op(EPICOXRHandJoint::MiddleIntermediate) \
	op(EPICOXRHandJoint::MiddleDistal) \
	op(EPICOXRHandJoint::MiddleTip) \
	op(EPICOXRHandJoint::RingMetacarpal) \
	op(EPICOXRHandJoint::RingProximal) \
	op(EPICOXRHandJoint::RingIntermediate) \
	op(EPICOXRHandJoint::RingDistal) \
	op(EPICOXRHandJoint::RingTip) \
	op(EPICOXRHandJoint::LittleMetacarpal) \
	op(EPICOXRHandJoint::LittleProximal) \
	op(EPICOXRHandJoint::LittleIntermediate) \
	op(EPICOXRHandJoint::LittleDistal) \
	op(EPICOXRHandJoint::LittleTip) 

enum class EPICOXRHandJoint : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandJoint>();

#define FOREACH_ENUM_EPICOXRHANDFINGER(op) \
	op(EPICOXRHandFinger::None) \
	op(EPICOXRHandFinger::Index) \
	op(EPICOXRHandFinger::Middle) \
	op(EPICOXRHandFinger::Ring) \
	op(EPICOXRHandFinger::Pinky) 

enum class EPICOXRHandFinger : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandFinger>();

#define FOREACH_ENUM_EPICOXRACTIVEINPUTDEVICE(op) \
	op(EPICOXRActiveInputDevice::NoneActive) \
	op(EPICOXRActiveInputDevice::ControllerActive) \
	op(EPICOXRActiveInputDevice::HandTrackingActive) 

enum class EPICOXRActiveInputDevice : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRActiveInputDevice>();

#define FOREACH_ENUM_EPICOXRHANDTRACKINGCONFIDENCE(op) \
	op(EPICOXRHandTrackingConfidence::Low) \
	op(EPICOXRHandTrackingConfidence::High) 

enum class EPICOXRHandTrackingConfidence : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPICOXRHandTrackingConfidence>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
