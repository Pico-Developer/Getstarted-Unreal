// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRMR_PXR_MRTypes_generated_h
#error "PXR_MRTypes.generated.h already included, missing '#pragma once' in PXR_MRTypes.h"
#endif
#define PICOXRMR_PXR_MRTypes_generated_h

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnchorLoadResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FAnchorLoadResult>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchorLoadInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchorLoadInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchorVolumeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchorVolumeInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchorPlanePolygonInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchorPlanePolygonInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchorPlaneBoundaryInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchorPlaneBoundaryInfo>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchorUUID_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchorUUID>();

#define DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPICOAnchor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRMR_API UScriptStruct* StaticStruct<struct FPICOAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeveloperScene_Plugins_PICOXR_Source_PICOXRMR_Public_PXR_MRTypes_h


#define FOREACH_ENUM_EPICOSPATIALSCENECAPTURESTATUS(op) \
	op(EPICOSpatialSceneCaptureStatus::SpatialSceneCaptureStatus_NotDefined) 

enum class EPICOSpatialSceneCaptureStatus : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneCaptureStatus>();

#define FOREACH_ENUM_EPICOLOADFILTERTYPE(op) \
	op(EPICOLoadFilterType::LoadFilterType_None) \
	op(EPICOLoadFilterType::LoadFilterType_UUID) \
	op(EPICOLoadFilterType::LoadFilterType_SpatialSceneData) 

enum class EPICOLoadFilterType : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOLoadFilterType>();

#define FOREACH_ENUM_EPICOPERSISTLOCATION(op) \
	op(EPICOPersistLocation::PersistLocation_None) \
	op(EPICOPersistLocation::PersistLocation_Local) \
	op(EPICOPersistLocation::PersistLocation_Remote) 

enum class EPICOPersistLocation : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOPersistLocation>();

#define FOREACH_ENUM_EPICOANCHORSCENELABEL(op) \
	op(EPICOAnchorSceneLabel::SceneLabel_Unknown) \
	op(EPICOAnchorSceneLabel::SceneLabel_Floor) \
	op(EPICOAnchorSceneLabel::SceneLabel_Ceiling) \
	op(EPICOAnchorSceneLabel::SceneLabel_Wall) \
	op(EPICOAnchorSceneLabel::SceneLabel_Door) \
	op(EPICOAnchorSceneLabel::SceneLabel_Window) \
	op(EPICOAnchorSceneLabel::SceneLabel_Opening) \
	op(EPICOAnchorSceneLabel::SceneLabel_Table) \
	op(EPICOAnchorSceneLabel::SceneLabel_Sofa) 

enum class EPICOAnchorSceneLabel : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorSceneLabel>();

#define FOREACH_ENUM_EPICOSPATIALSCENEDATATYPEFLAGS(op) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_None) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Unknown) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Floor) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Ceiling) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Wall) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Door) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Window) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Opening) \
	op(EPICOSpatialSceneDataTypeFlags::SpatialSceneDataTypeFlag_Object) 

enum class EPICOSpatialSceneDataTypeFlags : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialSceneDataTypeFlags>();

#define FOREACH_ENUM_EPICOANCHORCOMPONENTTYPEFLAG(op) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_None) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_Pose) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_Persistence) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_SceneLabel) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_Plane) \
	op(EPICOAnchorComponentTypeFlag::ComponentFlag_Volume) 

enum class EPICOAnchorComponentTypeFlag : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOAnchorComponentTypeFlag>();

#define FOREACH_ENUM_EPICOSPATIALTRACKINGSTATEMESSAGE(op) \
	op(EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_Unknown) \
	op(EPICOSpatialTrackingStateMessage::SpatialTrackingStateMessage_InternalError) 

enum class EPICOSpatialTrackingStateMessage : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingStateMessage>();

#define FOREACH_ENUM_EPICOSPATIALTRACKINGSTATE(op) \
	op(EPICOSpatialTrackingState::SpatialTrackingState_Invalid) \
	op(EPICOSpatialTrackingState::SpatialTrackingState_Valid) \
	op(EPICOSpatialTrackingState::SpatialTrackingState_Limited) 

enum class EPICOSpatialTrackingState : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOSpatialTrackingState>();

#define FOREACH_ENUM_EPICORESULT(op) \
	op(EPICOResult::PXR_Success) \
	op(EPICOResult::PXR_TimeoutExpired) \
	op(EPICOResult::PXR_Error_ValidationFailure) \
	op(EPICOResult::PXR_Error_RuntimeFailure) \
	op(EPICOResult::PXR_Error_OutOfMemory) \
	op(EPICOResult::PXR_Error_APIVersionUnsupported) \
	op(EPICOResult::PXR_Error_InitializationFailed) \
	op(EPICOResult::PXR_Error_FunctionUnsupported) \
	op(EPICOResult::PXR_Error_FeatureUnsupported) \
	op(EPICOResult::PXR_Error_LimitReached) \
	op(EPICOResult::PXR_Error_SizeInsufficient) \
	op(EPICOResult::PXR_Error_HandleInvalid) \
	op(EPICOResult::PXR_Error_SpatialLocalizationRunning) \
	op(EPICOResult::PXR_Error_SpatialLocalizationNotRunning) \
	op(EPICOResult::PXR_Error_SpatialMapCreated) \
	op(EPICOResult::PXR_Error_SpatialMapNotCreated) \
	op(EPICOResult::PXR_Error_ComponentNotSupported) \
	op(EPICOResult::PXR_Error_ComponentConflict) \
	op(EPICOResult::PXR_Error_ComponentNotAdded) \
	op(EPICOResult::PXR_Error_ComponentAdded) \
	op(EPICOResult::PXR_Error_AnchorEntityNotFound) \
	op(EPICOResult::PXR_Error_Unknow) 

enum class EPICOResult : uint8;
template<> PICOXRMR_API UEnum* StaticEnum<EPICOResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
