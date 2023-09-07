// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#pragma once

#include "PXR_MotionTrackingTypes.h"
#include "PXR_MotionTrackingFunctionLibrary.generated.h"

UCLASS()
class  PICOXRMOTIONTRACKING_API UPICOXRMotionTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PXR|FaceTracking")
		static bool GetFaceTrackingSupported(bool& Supported, TArray<EPXRFaceTrackingMode>& SupportedModes);

	UFUNCTION(BlueprintCallable, Category = "PXR|FaceTracking")
		static bool GetFaceTrackingState(bool& IsTracking, FPXRFaceTrackingState& TrackingState);

	UFUNCTION(BlueprintCallable, Category = "PXR|FaceTracking")
		static bool StartFaceTracking(const FPXRFaceTrackingStartInfo& StartInfo);

	UFUNCTION(BlueprintCallable, Category = "PXR|FaceTracking")
		static bool StopFaceTracking(const FPXRFaceTrackingStopInfo& StopInfo);

	UFUNCTION(BlueprintCallable, Category = "PXR|FaceTracking")
		static bool GetFaceTrackingData(const FPXRFaceTrackingDataGetInfo& GetInfo, FPXRFaceTrackingData& OutFaceTrackingData);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool GetEyeTrackingSupported(bool& Supported, TArray<EPXREyeTrackingMode>& SupportedModes);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool GetEyeTrackingState(bool& IsTracking, FPXREyeTrackingState& TrackingState);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool StartEyeTracking(const FPXREyeTrackingStartInfo& StartInfo);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool StopEyeTracking(const FPXREyeTrackingStopInfo& StopInfo);

	/// <summary>Gets eye tracking data. Supported by PICO Neo3 Pro Eye, PICO 4 Pro/Enterprise.
    /// @note Currently, only Pico Neo 3 Pro Eye and PICO 4 Pro support Get eye tracking data. To call this API, you need to enable eye tracking for your project.
    /// </summary>
	/// <returns>A structure containing the following details:
    /// <ul>
    /// <li>`LeftEyePoseStatus`: Int, the current pose status of the left eye: `0` - data available; `1` - data not available</li>
    /// <li>`RightEyePoseStatus`: Int, the current pose status of the right eye: `0` - data available; `1` - data not available
	/// <li>`CombinedEyePoseStatus`: Int, the current combined pose status of the left and right eye: : 0 - data available; 1 - data not available</li>
	/// <li>`CombinedEyeGazePoint`: Vector, the current combined gaze point of the left and right eye</li>
	/// <li>`CombinedEyeGazeVector`: Vector, the current combined gaze direction of the left and right eye (from the midpoint between two eyes to the gaze point）</li>
	/// <li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>
	/// <li>`RightEyeOpenness`: Float, the current openness of the right eye: `0.0` - eye closed; `1.0` - eye open</li>
	/// <li>`LeftEyeOpenness`: Float, the current openness of the left eye: `0.0` - eye closed; `1.0` - eye open</li>
	/// <li>`LeftEyePositionGuide`: Vector, the position guide for the left eye</li>
	/// <li>`RightEyePositionGuide`: Vector, the position guide for the right eye</li>
    /// <li>`FoveatedGazeDirection`: Vector, the gazing ray direction (the center of FFR implemented)</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking", meta = (WorldToMetersScale = "100.0"))
		static bool GetEyeTrackingData(float WorldToMetersScale, const FPXREyeTrackingDataGetInfo& GetInfo, FPXREyeTrackingData& OutEyeTrackingData);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool GetEyeOpenness(float& LeftEyeOpenness, float& RightEyeOpenness);

	UFUNCTION(BlueprintCallable, Category = "PXR|EyeTracking")
		static bool GetEyePupilInfo(FPXREyePupilInfo& EyePupilInfo);

};
