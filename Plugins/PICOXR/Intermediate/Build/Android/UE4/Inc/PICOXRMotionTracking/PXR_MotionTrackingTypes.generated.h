// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRMOTIONTRACKING_PXR_MotionTrackingTypes_generated_h
#error "PXR_MotionTrackingTypes.generated.h already included, missing '#pragma once' in PXR_MotionTrackingTypes.h"
#endif
#define PICOXRMOTIONTRACKING_PXR_MotionTrackingTypes_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyePupilInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyePupilInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_285_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyeTrackingData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyeTrackingData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRPerEyeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRPerEyeData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_240_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyeTrackingDataGetInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyeTrackingDataGetInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyeTrackingStopInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyeTrackingStopInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyeTrackingStartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyeTrackingStartInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXREyeTrackingState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXREyeTrackingState>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRFaceTrackingData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRFaceTrackingData>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRFaceTrackingDataGetInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRFaceTrackingDataGetInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRFaceTrackingStopInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRFaceTrackingStopInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRFaceTrackingStartInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRFaceTrackingStartInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPXRFaceTrackingState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMOTIONTRACKING_API UScriptStruct* StaticStruct<struct FPXRFaceTrackingState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRMotionTracking_Public_PXR_MotionTrackingTypes_h


#define FOREACH_ENUM_EPXREYETRACKINGMODE(op) \
	op(EPXREyeTrackingMode::PXR_ETM_BOTH) \
	op(EPXREyeTrackingMode::PXR_ETM_NONE) 

enum class EPXREyeTrackingMode : uint8;
template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXREyeTrackingMode>();

#define FOREACH_ENUM_EPICOEYE(op) \
	op(EPICOEye::Left) \
	op(EPICOEye::Right) \
	op(EPICOEye::Center) \
	op(EPICOEye::COUNT) 

enum class EPICOEye : uint8;
template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPICOEye>();

#define FOREACH_ENUM_EPXRFACETRACKINGMODE(op) \
	op(EPXRFaceTrackingMode::PXR_FTM_NONE) \
	op(EPXRFaceTrackingMode::PXR_FTM_FACE) \
	op(EPXRFaceTrackingMode::PXR_FTM_LIPS) \
	op(EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_VIS) \
	op(EPXRFaceTrackingMode::PXR_FTM_FACE_LIPS_BS) 

enum class EPXRFaceTrackingMode : uint8;
template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceTrackingMode>();

#define FOREACH_ENUM_EPXRFACEBLENDSHAPE(op) \
	op(EPXRFaceBlendShape::BrowInnerUp) \
	op(EPXRFaceBlendShape::BrowDown_R) \
	op(EPXRFaceBlendShape::BrowDown_L) \
	op(EPXRFaceBlendShape::BrowOuterUp_L) \
	op(EPXRFaceBlendShape::BrowOuterUp_R) \
	op(EPXRFaceBlendShape::CheekSquint_L) \
	op(EPXRFaceBlendShape::CheekSquint_R) \
	op(EPXRFaceBlendShape::CheekPuff) \
	op(EPXRFaceBlendShape::EyeLookDown_L) \
	op(EPXRFaceBlendShape::EyeLookIn_L) \
	op(EPXRFaceBlendShape::EyeLookIn_R) \
	op(EPXRFaceBlendShape::EyeLookDown_R) \
	op(EPXRFaceBlendShape::EyeSquint_L) \
	op(EPXRFaceBlendShape::EyeBlink_L) \
	op(EPXRFaceBlendShape::EyeLookUp_L) \
	op(EPXRFaceBlendShape::EyeLookUp_R) \
	op(EPXRFaceBlendShape::EyeBlink_R) \
	op(EPXRFaceBlendShape::EyeSquint_R) \
	op(EPXRFaceBlendShape::EyeLookOut_L) \
	op(EPXRFaceBlendShape::EyeLookOut_R) \
	op(EPXRFaceBlendShape::EyeWide_R) \
	op(EPXRFaceBlendShape::EyeWide_L) \
	op(EPXRFaceBlendShape::JawOpen) \
	op(EPXRFaceBlendShape::JawRight) \
	op(EPXRFaceBlendShape::JawForward) \
	op(EPXRFaceBlendShape::JawLeft) \
	op(EPXRFaceBlendShape::MouthClose) \
	op(EPXRFaceBlendShape::MouthLowerDown_R) \
	op(EPXRFaceBlendShape::MouthUpperUp_R) \
	op(EPXRFaceBlendShape::MouthShrugUpper) \
	op(EPXRFaceBlendShape::MouthFunnel) \
	op(EPXRFaceBlendShape::MouthRollUpper) \
	op(EPXRFaceBlendShape::MouthShrugLower) \
	op(EPXRFaceBlendShape::MouthRollLower) \
	op(EPXRFaceBlendShape::MouthSmile_L) \
	op(EPXRFaceBlendShape::MouthPress_L) \
	op(EPXRFaceBlendShape::MouthSmile_R) \
	op(EPXRFaceBlendShape::MouthPress_R) \
	op(EPXRFaceBlendShape::MouthDimple_R) \
	op(EPXRFaceBlendShape::MouthLeft) \
	op(EPXRFaceBlendShape::MouthFrown_L) \
	op(EPXRFaceBlendShape::MouthStretch_L) \
	op(EPXRFaceBlendShape::MouthPucker) \
	op(EPXRFaceBlendShape::MouthUpperUp_L) \
	op(EPXRFaceBlendShape::MouthFrown_R) \
	op(EPXRFaceBlendShape::MouthStretch_R) \
	op(EPXRFaceBlendShape::MouthRight) \
	op(EPXRFaceBlendShape::MouthDimple_L) \
	op(EPXRFaceBlendShape::MouthLowerDown_L) \
	op(EPXRFaceBlendShape::NoseSneer_L) \
	op(EPXRFaceBlendShape::NoseSneer_R) \
	op(EPXRFaceBlendShape::TongueOut) \
	op(EPXRFaceBlendShape::PP) \
	op(EPXRFaceBlendShape::CH) \
	op(EPXRFaceBlendShape::o) \
	op(EPXRFaceBlendShape::O) \
	op(EPXRFaceBlendShape::I) \
	op(EPXRFaceBlendShape::u) \
	op(EPXRFaceBlendShape::RR) \
	op(EPXRFaceBlendShape::XX) \
	op(EPXRFaceBlendShape::aa) \
	op(EPXRFaceBlendShape::i) \
	op(EPXRFaceBlendShape::FF) \
	op(EPXRFaceBlendShape::U) \
	op(EPXRFaceBlendShape::TH) \
	op(EPXRFaceBlendShape::kk) \
	op(EPXRFaceBlendShape::SS) \
	op(EPXRFaceBlendShape::e) \
	op(EPXRFaceBlendShape::DD) \
	op(EPXRFaceBlendShape::E) \
	op(EPXRFaceBlendShape::nn) \
	op(EPXRFaceBlendShape::sil) \
	op(EPXRFaceBlendShape::COUNT) 

enum class EPXRFaceBlendShape : uint8;
template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRFaceBlendShape>();

#define FOREACH_ENUM_EPXRTRACKINGSTATECODE(op) \
	op(EPXRTrackingStateCode::PXR_MT_SUCCESS) \
	op(EPXRTrackingStateCode::PXR_MT_FAILURE) \
	op(EPXRTrackingStateCode::PXR_MT_MODE_NONE) \
	op(EPXRTrackingStateCode::PXR_MT_DEVICE_NOT_SUPPORT) \
	op(EPXRTrackingStateCode::PXR_MT_SERVICE_NEED_START) \
	op(EPXRTrackingStateCode::PXR_MT_ET_PERMISSION_DENIED) \
	op(EPXRTrackingStateCode::PXR_MT_FT_PERMISSION_DENIED) \
	op(EPXRTrackingStateCode::PXR_MT_MIC_PERMISSION_DENIED) \
	op(EPXRTrackingStateCode::PXR_MT_SYSTEM_DENIED) \
	op(EPXRTrackingStateCode::PXR_MT_UNKNOW_ERROR) 

enum class EPXRTrackingStateCode : uint8;
template<> PICOXRMOTIONTRACKING_API UEnum* StaticEnum<EPXRTrackingStateCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
