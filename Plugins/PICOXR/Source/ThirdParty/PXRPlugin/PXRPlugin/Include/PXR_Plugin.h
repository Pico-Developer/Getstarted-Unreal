// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#ifndef PXR_API_H
#define PXR_API_H

#include "PXR_Plugin_Types.h"

#if defined(__cplusplus)
extern "C" {
#endif

PVRP_EXPORT int Pxr_SetGraphicOption(PxrGraphicOption graphic);
PVRP_EXPORT int Pxr_SetPlatformOption(PxrPlatformOption platform);
PVRP_EXPORT bool Pxr_IsInitialized();
PVRP_EXPORT int Pxr_SetInitializeData(PxrInitParamData* params);
PVRP_EXPORT int Pxr_Initialize();
PVRP_EXPORT int Pxr_Shutdown();
PVRP_EXPORT int Pxr_GetDeviceExtensionsVk(const char** extensionNamesArray, uint32_t* extensionCount);
PVRP_EXPORT int Pxr_GetInstanceExtensionsVk(const char** extensionNamesArray, uint32_t* extensionCount);
PVRP_EXPORT int Pxr_CreateVulkanSystem(const PxrVulkanBinding* vulkanBinding);
PVRP_EXPORT bool Pxr_GetFeatureSupported(PxrFeatureType feature);
PVRP_EXPORT int Pxr_CreateLayer(const PxrLayerParam* layerParam);
PVRP_EXPORT int Pxr_GetLayerImageCount(int layerId, PxrEyeType eye, uint32_t* imageCount);
PVRP_EXPORT int Pxr_GetLayerImage(int layerId, PxrEyeType eye, int imageIndex, uint64_t* image);
PVRP_EXPORT int Pxr_GetLayerImageExt(int layerId,PxrEyeType eye,int imageIndex,uint64_t* image,PxrLayerImageTypes type);
PVRP_EXPORT int Pxr_GetLayerNextImageIndex(int layerId, int* imageIndex);
PVRP_EXPORT int Pxr_GetLayerFoveationImage(int layerId, PxrEyeType eye, uint64_t* foveationImage, uint32_t* width, uint32_t* height);
#if PLATFORM_ANDROID
#include "Android/AndroidJNI.h"
PVRP_EXPORT int Pxr_GetLayerAndroidSurface(int layerId, PxrEyeType eye, jobject* androidSurface);
#endif
PVRP_EXPORT int Pxr_DestroyLayer(int layerId);
PVRP_EXPORT bool Pxr_IsRunning();
PVRP_EXPORT int Pxr_BeginXr();
PVRP_EXPORT int Pxr_EndXr();
PVRP_EXPORT int Pxr_GetPredictedDisplayTime(double* predictedDisplayTimeMs);
PVRP_EXPORT int Pxr_GetPredictedMainSensorState(double predictTimeMs, PxrSensorState* sensorState, int* sensorFrameIndex);
PVRP_EXPORT int Pxr_GetPredictedMainSensorState2(double predictTimeMs, PxrSensorState2* sensorState, int* sensorFrameIndex);
PVRP_EXPORT int Pxr_GetPredictedMainSensorStateWithEyePose(double predictTimeMs, PxrSensorState* sensorState, int* sensorFrameIndex, int eyeCount, PxrPosef* eyePoses);
PVRP_EXPORT int Pxr_ResetSensor(PxrResetSensorOption option);
PVRP_EXPORT int Pxr_WaitFrame();
PVRP_EXPORT int Pxr_BeginFrame();
PVRP_EXPORT int Pxr_SubmitLayer(const PxrLayerHeader* layer);
PVRP_EXPORT int Pxr_SubmitLayer2(const PxrLayerHeader2* layer);
PVRP_EXPORT int Pxr_EndFrame();
PVRP_EXPORT bool Pxr_PollEvent(int eventCountMAX,int* eventDataCountOutput, PxrEventDataBuffer** eventDataPtr);
PVRP_EXPORT void Pxr_LogPrint(int priority, const char * tag, const char * fmt, ...);
PVRP_EXPORT int Pxr_GetFov(PxrEyeType eye, float* fovLeft, float* fovRight, float* fovUp, float* fovDown);
PVRP_EXPORT int Pxr_GetFrustum(PxrEyeType eye,float* left, float* right, float* top, float* bottom, float *near, float* far);
PVRP_EXPORT int Pxr_SetPerformanceLevels(PxrPerfSettings which,int level);
PVRP_EXPORT int Pxr_GetPerformanceLevels(PxrPerfSettings which,int* level);
PVRP_EXPORT int Pxr_SetColorSpace(PxrColorSpace colorSpace);
PVRP_EXPORT PxrFoveationLevel Pxr_GetFoveationLevel();
PVRP_EXPORT int Pxr_SetFoveationLevel(PxrFoveationLevel level);
PVRP_EXPORT int Pxr_SetFoveationParams(PxrFoveationParams params);
PVRP_EXPORT int Pxr_SetTrackingMode(PxrTrackingModeFlags trackingMode);
PVRP_EXPORT int Pxr_GetTrackingMode(PxrTrackingModeFlags* trackingMode);
PVRP_EXPORT int Pxr_GetEyeTrackingData(PxrEyeTrackingData* eyeTrackingData);
PVRP_EXPORT int Pxr_GetEyeOpenness(float* leftEyeOpenness, float* rightEyeOpenness);
PVRP_EXPORT int Pxr_GetEyePupilInfo(PxrEyePupilInfo* eyePupilInfo);
PVRP_EXPORT int Pxr_GetFaceTrackingData(int64_t ts, int flags, PxrFTInfo *data);
PVRP_EXPORT int Pxr_SetTrackingOrigin(PxrTrackingOrigin trackingOrigin);
PVRP_EXPORT int Pxr_GetTrackingOrigin(PxrTrackingOrigin* trackingOrigin);
PVRP_EXPORT float Pxr_GetIPD();
PVRP_EXPORT int Pxr_GetEyeOrientation(int eyeIndex,PxrQuaternionf *orientation);
PVRP_EXPORT bool Pxr_GetAppHasFocus();
PVRP_EXPORT int Pxr_GetConfigInt(PxrConfigType configIndex, int* configData);
PVRP_EXPORT int Pxr_GetConfigFloat(PxrConfigType configIndex, float* configData);
PVRP_EXPORT int Pxr_SetConfigFloatArray(PxrConfigType configIndex, float configSetData[], int dataCount);
PVRP_EXPORT int Pxr_SetConfigInt(PxrConfigType configSetIndex, int configSetData);
PVRP_EXPORT int Pxr_SetConfigString(PxrConfigType configIndex, const char* configSetData);
PVRP_EXPORT int Pxr_SetConfigUint64(PxrConfigType configIndex, uint64_t configSetData);
PVRP_EXPORT bool Pxr_GetBoundaryConfigured();
PVRP_EXPORT bool Pxr_GetBoundaryEnabled();
PVRP_EXPORT int Pxr_SetBoundaryVisible(bool value);
PVRP_EXPORT int Pxr_SetSeeThroughBackground(bool value);
PVRP_EXPORT bool Pxr_GetBoundaryVisible();
PVRP_EXPORT int Pxr_TestNodeIsInBoundary(PxrBoundaryTestNode node, bool isPlayArea, PxrBoundaryTriggerInfo* info);
PVRP_EXPORT int Pxr_TestPointIsInBoundary(const PxrVector3f* point, bool isPlayArea, PxrBoundaryTriggerInfo* info);
PVRP_EXPORT int Pxr_GetBoundaryGeometry(bool isPlayArea, uint32_t pointsCountInput, uint32_t* pointsCountOutput, PxrVector3f* outPoints);
PVRP_EXPORT int Pxr_GetBoundaryDimensions(bool isPlayArea, PxrVector3f* dimension);
PVRP_EXPORT bool Pxr_EnableMultiview(bool enable);
PVRP_EXPORT int Pxr_GetMrcPose(PxrPosef* pose);
PVRP_EXPORT int Pxr_SetMrcPose(const PxrPosef* pose);
PVRP_EXPORT int Pxr_SetIsSupportMovingMrc(bool support);
PVRP_EXPORT int Pxr_SetSensorLostCustomMode(bool value);
PVRP_EXPORT int Pxr_SetSensorLostCMST(bool value);
PVRP_EXPORT int Pxr_GetDisplayRefreshRatesAvailable(uint32_t* count, float** rateArray);
PVRP_EXPORT int Pxr_SetDisplayRefreshRate(float refreshRate);
PVRP_EXPORT int Pxr_GetDisplayRefreshRate(float* refreshRate);
PVRP_EXPORT bool Pxr_SetExtraLatencyMode(int mode);
PVRP_EXPORT int Pxr_getPsensorState();
PVRP_EXPORT int Pxr_GetControllerCapabilities(uint32_t deviceID, PxrControllerCapability* capability);
PVRP_EXPORT int Pxr_GetControllerConnectStatus(uint32_t deviceID);
PVRP_EXPORT int Pxr_GetControllerTrackingState(uint32_t deviceID, double predictTime, float headSensorData[],PxrControllerTracking* tracking);
PVRP_EXPORT int Pxr_GetControllerInputState(uint32_t deviceID, PxrControllerInputState* state);
PVRP_EXPORT int Pxr_SetControllerVibration(uint32_t deviceID, float strength, int time);
PVRP_EXPORT int Pxr_SetControllerVibrationEvent(uint32_t deviceID, int frequency, float strength, int time);
PVRP_EXPORT int Pxr_SetControllerEnableKey(bool isEnable, PxrControllerKeyMap Key);
PVRP_EXPORT int Pxr_SetControllerMainInputHandle(uint32_t deviceID);
PVRP_EXPORT int Pxr_GetControllerMainInputHandle(uint32_t* deviceID);
PVRP_EXPORT int Pxr_StopControllerVCMotor(int clientId);
PVRP_EXPORT int Pxr_StartControllerVCMotor(char* file, int slot);
PVRP_EXPORT int Pxr_SetControllerAmp(float mode);
PVRP_EXPORT int Pxr_SetControllerDelay(int delay);
PVRP_EXPORT char* Pxr_GetVibrateDelayTime(int* length);
PVRP_EXPORT int Pxr_StartVibrateBySharemF(float* data, PxrVibrate_config* parameter, int32_t* source_id);
PVRP_EXPORT int Pxr_StartVibrateBySharemU(uint8_t* data, PxrVibrate_config* parameter, int32_t* source_id);
PVRP_EXPORT int Pxr_StartVibrateByCache(int source_id);
PVRP_EXPORT int Pxr_ClearVibrateByCache(int source_id);
PVRP_EXPORT int Pxr_StartVibrateByPHF(char* data, int buffersize, int32_t* source_id, PxrVibrate_info* config);
PVRP_EXPORT int Pxr_PauseVibrate(int32_t source_id);
PVRP_EXPORT int Pxr_ResumeVibrate(int32_t source_id);
PVRP_EXPORT int Pxr_UpdateVibrateParams(int32_t source_id, PxrVibrate_info* config);
PVRP_EXPORT int Pxr_CreateHapticStream(char* phfVersion, uint32_t frameDurationMs, PxrVibrate_info* hapticInfo, float speed, int32_t* id);
PVRP_EXPORT int Pxr_WriteHapticStream(int32_t id, PxrPhf_params* frames, uint32_t numFrames);
PVRP_EXPORT int Pxr_SetPHFHapticSpeed(int32_t id, float speed);
PVRP_EXPORT int Pxr_GetPHFHapticSpeed(int32_t id, float* speed);
PVRP_EXPORT int Pxr_GetCurrentFrameSequence(int32_t id, uint64_t* frameSequence);
PVRP_EXPORT int Pxr_StartPHFHaptic(int32_t source_id);
PVRP_EXPORT int Pxr_StopPHFHaptic(int32_t source_id);
PVRP_EXPORT int Pxr_RemovePHFHaptic(int32_t source_id);
PVRP_EXPORT int Pxr_SetAppHandTrackingEnabled(bool  bHandTrackingEnabled);
PVRP_EXPORT int Pxr_GetHandTrackerSettingState(bool* enable);
PVRP_EXPORT int Pxr_GetHandTrackerActiveInputType(PxrActiveInputDeviceType* ActiveInputType);
PVRP_EXPORT int Pxr_GetHandTrackerJointLocations(int hand, PxrHandJointsLocations* JointsLocations);
PVRP_EXPORT int Pxr_GetHandTrackerAimState(int hand, PxrHandAimState* aimstate);
PVRP_EXPORT int Pxr_GetHandTrackerJointLocationsWithPT(int hand,double predictTime,PxrHandJointsLocations * JointsLocations);
PVRP_EXPORT int Pxr_GetHandTrackerAimStateWithPT(int hand,double predictTime,PxrHandAimState * aimstate);
PVRP_EXPORT int Pxr_GetHandTrackerJointLocationsWithPTFG(int hand,double predictTime,PxrHandJointsLocations * JointsLocations);
PVRP_EXPORT int Pxr_GetHandTrackerAimStateWithPTFG(int hand,double predictTime,PxrHandAimState * aimstate);
//----------------G3 device-------
PVRP_EXPORT int Pxr_ResetController(uint32_t device);
PVRP_EXPORT int Pxr_SetArmModelParameters(PxrGazeType gazetype, PxrArmmodelType armmodeltype, float elbowHeight, float elbowDepth, float pointerTiltAngle);
PVRP_EXPORT int Pxr_GetControllerHandness(int* handness);
//----------------G3 device-------

//----------------Body Tracking-------
PVRP_EXPORT int Pxr_SetBodyTrackingStaticCalibState(int calibstate);
PVRP_EXPORT int Pxr_SetBodyTrackingMode(int mode);
PVRP_EXPORT int Pxr_GetBodyTrackingPose(double predictTime,PxrBodyTrackingResult * res);
PVRP_EXPORT int Pxr_GetBodyTrackingImuData(int deviceId, PxrBodyTrackingImu * res);

PVRP_EXPORT int Pxr_GetFitnessBandConnectState(PxrFitnessBandConnectState * state);
PVRP_EXPORT int Pxr_GetFitnessBandBattery(int trackerId, int *battery);
PVRP_EXPORT int Pxr_GetFitnessBandCalibState(int *calibrated);
//Swift 2.0
PVRP_EXPORT int Pxr_SetBodyTrackingAlgParam(BodyTrackingAlgParamType AlgParamType, const BodyTrackingAlgParam* Param);
	
//----------------Body Tracking-------

//----------------Eye Tracking-------
PVRP_EXPORT int Pxr_WantEyeTrackingService();
PVRP_EXPORT int Pxr_GetEyeTrackingSupported(bool* supported, int* supportedModesCount, PxrEyeTrackingMode* supportedModes);
PVRP_EXPORT int Pxr_StartEyeTracking1(const PxrEyeTrackingStartInfo* startInfo);
PVRP_EXPORT int Pxr_StopEyeTracking1(const PxrEyeTrackingStopInfo* stopInfo);
PVRP_EXPORT int Pxr_GetEyeTrackingState(bool* isTracking, PxrEyeTrackingState* state);
PVRP_EXPORT int Pxr_GetEyeTrackingData1(const PxrEyeTrackingDataGetInfo* getInfo, PxrEyeTrackingData1* data);
//----------------Eye Tracking-------

//----------------Face Tracking-------
PVRP_EXPORT int Pxr_WantFaceTrackingService();
PVRP_EXPORT int Pxr_GetFaceTrackingSupported(bool* supported, int* supportedModesCount, PxrFaceTrackingMode* supportedModes);
PVRP_EXPORT int Pxr_StartFaceTracking(const PxrFaceTrackingStartInfo* startInfo);
PVRP_EXPORT int Pxr_StopFaceTracking(const PxrFaceTrackingStopInfo* stopInfo);
PVRP_EXPORT int Pxr_GetFaceTrackingState(bool* isTracking, PxrFaceTrackingState* state);
PVRP_EXPORT int Pxr_GetFaceTrackingData1(const PxrFaceTrackingDataGetInfo* getInfo, PxrFaceTrackingData* data);
//----------------Face Tracking-------

//----------------New Body Tracking-------
PVRP_EXPORT int Pxr_WantBodyTrackingService();
PVRP_EXPORT int Pxr_GetBodyTrackingSupported(bool* supported, int* supportedModesCount, PxrBodyTrackingMode* supportedModes);
PVRP_EXPORT int Pxr_StartBodyTracking(const PxrBodyTrackingStartInfo* startInfo);
PVRP_EXPORT int Pxr_StopBodyTracking(const PxrBodyTrackingStopInfo* stopInfo);
PVRP_EXPORT int Pxr_GetBodyTrackingState(bool* isTracking, PxrBodyTrackingState* state);
PVRP_EXPORT int Pxr_GetBodyTrackingData(const PxrBodyTrackingGetDataInfo* getInfo, PxrBodyTrackingData* data);
//----------------New Body Tracking-------
//----------------MR------------------
//bd_anchor_entity
PVRP_EXPORT PxrResult Pxr_CreateAnchorEntity(const PxrAnchorEntityCreateInfo* info, uint64_t* reqId);
PVRP_EXPORT PxrResult Pxr_DestroyAnchorEntity(const PxrAnchorEntityDestroyInfo* info);
PVRP_EXPORT PxrResult Pxr_GetAnchorPose(uint64_t anchor, PxrTrackingOrigin pxrTrackingOrigin, PxrPosef* pose);
PVRP_EXPORT PxrResult Pxr_GetAnchorEntityUuid(uint64_t anchor, PxrUUid* uuid);
PVRP_EXPORT PxrResult Pxr_GetAnchorComponentFlags(uint64_t anchor, PxrAnchorComponentTypeFlags* componentTypeFlags);
PVRP_EXPORT PxrResult Pxr_GetAnchorSceneLabel(uint64_t anchor, PxrSceneLabel* label);
PVRP_EXPORT PxrResult Pxr_GetAnchorPlaneBoundaryInfo(uint64_t anchor, PxrAnchorPlaneBoundaryInfo* boundaryInfo);
PVRP_EXPORT PxrResult Pxr_GetAnchorPlanePolygonInfo(uint64_t anchor, PxrAnchorPlanePolygonInfo* planePolygonInfo);
PVRP_EXPORT PxrResult Pxr_GetAnchorBoxInfo(uint64_t anchor, PxrAnchorBoxInfo* boxInfo);
//bd_anchor_entity_persistence
PVRP_EXPORT PxrResult Pxr_PersistAnchorEntity(const PxrAnchorEntityPersistInfo* info, uint64_t* taskId);
PVRP_EXPORT PxrResult Pxr_UnpersistAnchorEntity(const PxrAnchorEntityUnpersistInfo* info, uint64_t* taskId);
PVRP_EXPORT PxrResult Pxr_ClearPersistedAnchorEntity(const PxrAnchorEntityClearInfo* info, uint64_t* taskId);
PVRP_EXPORT PxrResult Pxr_LoadAnchorEntity(const PxrAnchorEntityLoadInfo* info, uint64_t* taskId);
PVRP_EXPORT PxrResult Pxr_GetAnchorEntityLoadResults(uint64_t taskId, PxrAnchorEntityLoadResults* results);
//bd_spatial_scene
PVRP_EXPORT PxrResult Pxr_StartSpatialSceneCapture(uint64_t* taskId);
//----------------MR------------------
//----------------ETFR------------------
PVRP_EXPORT int Pxr_GetEyeTrackingFoveationRenderingSupported(bool* bSupported);
PVRP_EXPORT int Pxr_GetEyeTrackingFoveationRenderingState(bool* bEnable);
PVRP_EXPORT int Pxr_SetEyeTrackingFoveationRenderingState(bool bEnable);
PVRP_EXPORT int Pxr_GetEyeTrackingFoveationRenderingCenter(PxrVector2f* Center);
//----------------ETFR------------------
//----------------Adaptive Resolution-------
/*
 * Updates the current resolution scale based on the current state of the system.
 */
PVRP_EXPORT int Pxr_UpdateAdaptiveResolution(PxrExtent2Di* dimensions, PxrAdaptiveResolutionPowerSetting powerSetting);
//----------------Adaptive Resolution-------
#if defined(__cplusplus)
} // extern "C"
#endif

#endif  // PXR_API_H
