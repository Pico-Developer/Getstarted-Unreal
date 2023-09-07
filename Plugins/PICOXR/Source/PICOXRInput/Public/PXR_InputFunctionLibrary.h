// Copyright® 2015-2023 PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2023, Epic Games, Inc. All rights reserved. 

#pragma once
#include "CoreMinimal.h"
#include "SampleBuffer.h"
#include <AudioDevice.h>

#include "Sound/SampleBufferIO.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "PXR_InputFunctionLibrary.generated.h"

UENUM(BlueprintType)
enum class EPICOXRHandTrackingConfidence : uint8
{
	Low,
	High
};

UENUM(BlueprintType)
enum class EPICOXRActiveInputDevice: uint8
{
	NoneActive,
	ControllerActive,
	HandTrackingActive,
};

UENUM(BlueprintType)
enum class EPICOXRHandFinger :uint8
{
	None,
	Index,
	Middle,
	Ring,
	Pinky
};

UENUM(BlueprintType)
enum class EPICOXRHandJoint : uint8
{
	Palm,
	Wrist,
	ThumbMetacarpal,
	ThumbProximal,
	ThumbDistal,
	ThumbTip,
	IndexMetacarpal,
	IndexProximal,
	IndexIntermediate,
	IndexDistal,
	IndexTip,
	MiddleMetacarpal,
	MiddleProximal,
	MiddleIntermediate,
	MiddleDistal,
	MiddleTip,
	RingMetacarpal,
	RingProximal,
	RingIntermediate,
	RingDistal,
	RingTip,
	LittleMetacarpal,
	LittleProximal,
	LittleIntermediate,
	LittleDistal,
	LittleTip
};

constexpr int32 EHandJointCount = static_cast<int32>(EPICOXRHandJoint::LittleTip) + 1;

UENUM(BlueprintType)
enum class EPICOXRHandType : uint8
{
	None,
	HandLeft,
	HandRight,
};

UENUM(BlueprintType)
enum class EPICOXRHandedness :uint8
{
	LeftHand,
	RightHand,
};

UENUM(BlueprintType)
enum class EPICOXRControllerType :uint8
{
	LeftHand UMETA(DisplayName = "PICO LeftHand"),
	RightHand UMETA(DisplayName = "PICO RightHand"),
	G2Hand UMETA(DisplayName = "PICO G2 Hand"),
};

UENUM(BlueprintType)
enum class EPICOXRArmModelJoint : uint8
{
	Controller,
	Wrist,
	Elbow,
	Shoulder
};

UENUM(BlueprintType)
enum class EPICOXRGazeBehavior : uint8
{
	Never,
	DuringMotion,
	Always
};

UENUM(BlueprintType)
enum class EPICOXRControllerDeviceType : uint8
{
	UnKnown = 0 UMETA(DisplayName = "Unknown Controller"),
	G2      = 3 UMETA(DisplayName = "PICO G2"),
	Neo2    = 4 UMETA(DisplayName = "PICO Neo2"),
	Neo3    = 5 UMETA(DisplayName = "PICO Neo3"),
	PICO_4  = 6 UMETA(DisplayName = "PICO 4"),
	G3 = 7 UMETA(DisplayName = "PICO G3"),
};

UENUM(BlueprintType)
enum class EPICOXRVibrateController : uint8
{
	No = 0,
	Left = 1,
	Right = 2,
	LeftAndRight = 3
};

UENUM(BlueprintType)
enum class EPICOXRChannelFlip : uint8
{
	No = 0,
	Yes = 1
};

UENUM(BlueprintType)
enum class EPICOXRCacheConfig : uint8
{
	CacheAndVibrate,
	CacheNoVibrate
};

UENUM(BlueprintType)
enum class EBodyActionList: uint8
{
	PxrNoneAction,
	PxrTouchGround,
	PxrKeepStatic
};

UENUM(BlueprintType)
enum class EPxrControllerKeyMap : uint8
{
	PXR_CONTROLLER_KEY_HOME = 0,
	PXR_CONTROLLER_KEY_AX = 1,
	PXR_CONTROLLER_KEY_BY = 2,
	PXR_CONTROLLER_KEY_BACK = 3,
	PXR_CONTROLLER_KEY_TRIGGER = 4,
	PXR_CONTROLLER_KEY_VOL_UP = 5,
	PXR_CONTROLLER_KEY_VOL_DOWN = 6,
	PXR_CONTROLLER_KEY_ROCKER = 7,
	PXR_CONTROLLER_KEY_GRIP = 8,
	PXR_CONTROLLER_KEY_TOUCHPAD = 9,
	PXR_CONTROLLER_KEY_LASTONE = 127,

	PXR_CONTROLLER_TOUCH_AX = 128,
	PXR_CONTROLLER_TOUCH_BY = 129,
	PXR_CONTROLLER_TOUCH_ROCKER = 130,
	PXR_CONTROLLER_TOUCH_TRIGGER = 131,
	PXR_CONTROLLER_TOUCH_THUMB = 132,
	PXR_CONTROLLER_TOUCH_LASTONE = 255
};

UENUM(BlueprintType)
enum class EPxrBodyTrackerRole : uint8
{
	PxrPelvis = 0 UMETA(DisplayName = "Pelvis"),
	Pxr_LEFT_HIP = 1 UMETA(DisplayName = "LEFT_HIP"),
	Pxr_RIGHT_HIP = 2 UMETA(DisplayName = "RIGHT_HIP"),
	Pxr_SPINE1 = 3 UMETA(DisplayName = "SPINE1"),
	Pxr_LEFT_KNEE = 4 UMETA(DisplayName = "LEFT_KNEE"),
	Pxr_RIGHT_KNEE = 5 UMETA(DisplayName = "RIGHT_KNEE"),
	Pxr_SPINE2 = 6 UMETA(DisplayName = "SPINE2"),
	Pxr_LEFT_ANKLE = 7 UMETA(DisplayName = "LEFT_ANKLE"),
	Pxr_RIGHT_ANKLE = 8 UMETA(DisplayName = "RIGHT_ANKLE"),
	Pxr_SPINE3 = 9 UMETA(DisplayName = "SPINE3"),
	Pxr_LEFT_FOOT = 10 UMETA(DisplayName = "LEFT_FOOT"),
	Pxr_RIGHT_FOOT = 11 UMETA(DisplayName = "RIGHT_FOOT"),
	Pxr_NECK = 12 UMETA(DisplayName = "NECK"),
	Pxr_LEFT_COLLAR = 13 UMETA(DisplayName = "LEFT_COLLAR"),
	Pxr_RIGHT_COLLAR = 14 UMETA(DisplayName = "RIGHT_COLLAR"),
	Pxr_HEAD = 15 UMETA(DisplayName = "HEAD"),
	Pxr_LEFT_SHOULDER = 16 UMETA(DisplayName = "LEFT_SHOULDER"),
	Pxr_RIGHT_SHOULDER = 17 UMETA(DisplayName = "RIGHT_SHOULDER"),
	Pxr_LEFT_ELBOW = 18 UMETA(DisplayName = "LEFT_ELBOW"),
	Pxr_RIGHT_ELBOW = 19 UMETA(DisplayName = "RIGHT_ELBOW"),
	Pxr_LEFT_WRIST = 20 UMETA(DisplayName = "LEFT_WRIST"),
	Pxr_RIGHT_WRIST = 21 UMETA(DisplayName = "RIGHT_WRIST"),
	Pxr_LEFT_HAND = 22 UMETA(DisplayName = "LEFT_HAND"),
	Pxr_RIGHT_HAND = 23 UMETA(DisplayName = "RIGHT_HAND"),
	Pxr_ROLE_COUNT = 24 UMETA(DisplayName = "Pxr_ROLE_COUNT")
};

UENUM(BlueprintType)
enum class EPxrBodyActionList : uint8
{
	NoneAction  = 0,
	TouchGround = 1,
	KeepStatic  = 2,
	TouchGroundAndKeepStatic=3
};
// imu data
USTRUCT(BlueprintType)
struct FPxrBodyTrackingImu
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	int64 TimeStamp;                // time stamp of imu
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float    temperature;              // temperature of imu
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector    GyroData;              // gyroscope data, x,y,z
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector    AccData;               // Accelerometer data, x,y,z
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector    MagData;               // magnetometer data, x,y,z
};


USTRUCT(BlueprintType)
struct FFitnessBandConnectState
{
	GENERATED_USTRUCT_BODY()
	/** The number of trackers currently connected  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	uint8 Num;
	/** The Array of trackers ID currently connected */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	TArray<uint8> TrackerIDArray;
};

USTRUCT(BlueprintType)
struct FPxrBodyTrackingTransform
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	int64 TimeStamp;
	/** bone name. if bone == NONE_ROLE, this bone is not calculated */
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "PXR|BodyTrackingData")
	EPxrBodyTrackerRole bone;
	/** bone local transform */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FTransform LocalPose;					
	/** velocity of x,y,z */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector velo;                     
	/** acceleration of x,y,z */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector acce;                     
	/** angular velocity of x,y,z */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector wvelo;                    
	/** angular acceleration of x,y,z */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	FVector wacce;                    // 
	/** multiple actions can be supported at the same time by means of OR BodyActionList */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	EPxrBodyActionList  bodyAction;              

	FPxrBodyTrackingTransform()
		:TimeStamp(0),
		bone(EPxrBodyTrackerRole::PxrPelvis),
		  LocalPose(FTransform()),
		  velo(FVector::ZeroVector),
		  acce(FVector::ZeroVector),
		  wvelo(FVector::ZeroVector),
		  wacce(FVector::ZeroVector),
		  bodyAction(EPxrBodyActionList::NoneAction)
	{
	}
};

UENUM(BlueprintType)
enum class ESwiftMode: uint8
{
	SWIFT_DEFAULT = 0 UMETA(DisplayName = "Default"),
	SWIFT_FULLBODY = 1 UMETA(DisplayName = "Full Body"),
};


USTRUCT(BlueprintType)
struct FBodyTrackingBoneLength
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float headLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float neckLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float torsoLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float hipLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float upperLegLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float lowerLegLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float footLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float shoulderLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float upperArmLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float lowerArmLen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|BodyTrackingData")
	float handLen;
};

USTRUCT(BlueprintType)
struct FAudioClipData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 delaytag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 slot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 buffersize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 sampleRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 channelMask;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
	int32 bitrate;
};

USTRUCT(BlueprintType)
struct FPHFDataContent
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		FString data;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		int size;
};

USTRUCT(BlueprintType)
struct PICOXRINPUT_API FPHFData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		FPHFDataContent PHFDataContent;
};

USTRUCT(BlueprintType)
struct FPHFJsonFrameData
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		int64 frameseq;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		int play;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		int frequency;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		int loop;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFDataContent")
		float gain;
};

USTRUCT(BlueprintType)
struct PICOXRINPUT_API FPHFJsonData : public FTableRowBase
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		FString phfVersion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		int frameDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		TArray<FPHFJsonFrameData> patternData_L;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|FPHFData")
		TArray<FPHFJsonFrameData> patternData_R;
	
	FPHFJsonData()
	{
		Name = "FPHFJsonData";
		phfVersion = "V0.0";
		frameDuration = 20;
		patternData_L.Empty();
		patternData_R.Empty();
	}
};

UCLASS()
class PICOXRINPUT_API UPICOXRInputFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UPICOXRInputFunctionLibrary();

	/// <summary>Gets the current battery level of the controller.</summary>
    /// <param name ="ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the battery level for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="Power">(Out) Int, the battery level of the specified controller, value range: [1, 5].
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerPower(EPICOXRControllerType ControllerType, int32& Power);

	/// <summary>Gets the connection state of the specified controller.</summary>
    /// <param name ="ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="Status">(Out) Int, the  connection state of the specified controller.
    /// <ul>
    /// <li>`true`: connected</li>
    /// <li>`false`: not connected</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerConnectionState(EPICOXRControllerType ControllerType, bool& Status);

	/**
	* Get the main controller.
	* @param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController).
	*/
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetMainControllerHandle(EPICOXRHandedness& Handedness);

	/**
	* Set the main controller.
	* @param Handedness     (In) Main handedness(Neo LeftController/Neo RightController).
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_SetMainControllerHandle(EPICOXRHandedness Handedness);

	/// <summary>Gets the angular velocity of the specified controller.</summary>
    /// <param name ="ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the connection state for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="AngularVelocity">(Out) FVector, the angular velocity of the specified controller (in rad/s). </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerAngularVelocity(EPICOXRControllerType ControllerType, FVector& AngularVelocity);

	/// <summary>Gets the acceleration of the specified controller.</summary>
    /// <param name ="ControllerType>(In)(EPICOXRControllerType)Enum, the controller to get the acceleration for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="Acceleration">(Out) FVector, the acceleration of the specified controller (in cm/s). </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerAcceleration(EPICOXRControllerType ControllerType, FVector& Acceleration);


	/// <summary>Gets the acceleration of the specified controller.</summary>
    /// <param name ="ControllerType>(In) (EPICOXRControllerType)Enum, the controller to get the acceleration for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="LinearVelocity">(Out)  FVector, the linear velocity of the specified controller (in cm/s). </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerLinearVelocity(EPICOXRControllerType ControllerType, FVector& LinearVelocity);

	/**
	* Vibration the controller.
	* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Strength          (In) Vibration strength.
	* @param Time              (In) Vibration time.
	*/
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_VibrateController(EPICOXRControllerType ControllerType, float Strength, int Time);

	/// <summary>Gets the device model that the currently connected controller belongs to.</summary>
    /// <param name ="ControllerType">(Out)(EPICOXRControllerDeviceType) Enum, the controller to get the acceleration for:
    /// <ul>
    /// <li>`UnKnown`: UnKnown</li>
    /// <li>`G2`: PICO G2</li>
	/// <li>`Neo2`: PICO Neo 2</li>
	/// <li>`Neo3`: PICO Neo 3</li>
	/// <li>`PICO_4`: PICO 4</li>
    /// </ul>
	/// </param>
	/// <returns>None </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static void PXR_GetControllerDeviceType(EPICOXRControllerDeviceType& ControllerType);

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_ResetController(int Device);

	/**
	* Set controller arm model parameter.
	* @param GazeType          (In) The gaze type(Never/DuringMotion/Always).
	* @param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).
	* @param ElbowHeight       (In) The Height of the elbow(cm).Min=0.0f, Max=20.0f.
	* @param ElbowDepth        (In) The Depth of the elbow(cm).Min=0.0f, Max=20.0f.
	* @param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).Min=0.0f, Max=30.0f.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput", meta = (GazeType = "DuringMotion", ArmJoint = "Controller", ElbowHeight = "0.0", ElbowDepth = "0.0", PointerTiltAngle = "0.0"))
	static int PXR_SetArmModelParameters(EPICOXRGazeBehavior GazeType, EPICOXRArmModelJoint ArmJoint, float ElbowHeight, float ElbowDepth, float PointerTiltAngle);

	/**
	* Get handedness.
	* @param  Handedness        (Out) Handedness.
	* @return True if get succeed.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_GetHandedness(EPICOXRHandedness& Handedness);

	/**
	* Get controller enable homeKey.
	* @return True if home key enable.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_GetControllerEnableHomekey();

	/// <summary>Sets the origin offset for a specified controller.</summary>
    /// <param name ="ControllerType>(In) (EPICOXRControllerType)Enum, the controller to set the origin offset for:
    /// <ul>
    /// <li>`LeftHand`: left controller</li>
    /// <li>`RightHand`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="Offset">(In) Vector, the origin offset (in meters). </param>
	/// <returns>None </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static void PXR_SetControllerOriginOffset(EPICOXRControllerType Controller, FVector Offset);

	/// <summary>Gets the predicted location and rotation of the specified controller after a certain period of time.</summary>
    /// <param name ="DeviceHand">(In)(EControllerHand) Enum, the controller to get the predicted location and rotation for:
    /// <ul>
    /// <li>`Left`: left controller</li>
    /// <li>`Right`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="PredictedTime">(In) Float, the time for prediction (in milliseconds), value range: [0, 100]. </param>
    /// <param name ="OutLocation">(Out) FVector, the predicted location of the specified controller after the given time. </param>
    /// <param name ="OutRotation">(Out) FRotator, the predicted rotation of the specified controller after the given time. </param>
	/// <returns>None </returns>
	UFUNCTION(BlueprintCallable, Category="PXR|PXRInput")
	static bool PXR_GetControllerPredictedLocationAndRotation(EControllerHand DeviceHand, float PredictedTime, FVector& OutLocation, FRotator& OutRotation);

	/// <summary>Enables audio-based vibration through audio file path.</summary>
    /// <param name ="file">(In) audio file path. </param>
    /// <param name ="slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartControllerVCMotor(FString file, EPICOXRVibrateController slot);

	/// <summary>Sets the amplitude of audio-based vibration. You can change the vibration amplitude during audio playback.</summary>
    /// <param name ="mode">(In) Vibration amplitude level. The range is 0.0 to 2.0:
    /// <ul>
    /// <li>`0.0`: for no vibration</li>
    /// <li>`1.0`: for standard amplitude</li>
	/// <li>`2.0`: for double the standard amplitude</li>
    /// </ul>
	/// </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SetControllerAmp(float mode);

	/// <summary>Stops audio-based vibration.</summary>
    /// <param name ="clientId">(In) a reserved parameter, set it to the `sourceId` returned by another vibration control API to stop the corresponding vibration, or set it to `0` to stop all vibrations.
	/// </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StopControllerVCMotor(int clientId);

	/// <summary>Enables event-based vibration (with customizable vibration frequency).</summary>
    /// <param name ="deviceID">(In) specifies which controller to enable event-based vibration:
    /// <ul>
    /// <li>`0`: left controller</li>
    /// <li>`1`: right controller</li>
    /// </ul>
	/// </param>
    /// <param name ="frequency">(In) Vibration frequency. `50` to `500` Hz </param>
    /// <param name ="strength">(In)  Vibration amplitude. `0` to `1`. The higher the value, the stronger the vibration amplitude. </param>
    /// <param name ="time">(In) Vibration duration, `0` to `65535` ms. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	/// <summary>
    /// **Notes**
    /// <ul>
    /// <li> To disable event-based vibration, you can call `PXR_SetControllerVibrationEvent`, and set `Strength` and `time` to `0`.</li>
    /// <li>Set the vibration frequency according to the scene. Low frequency for soft object collisions, and high frequency for hard object collisions, refer to the table below.</li>
    /// </ul>
	/// |  Scenes | Recommended frequency |
	/// | --- | --- |
	/// |  Playing drums, playing basketball | Low frequencies, 50~100 Hz |
	/// |  Using pistols, playing ping pong | Medium frequency, approx. 170Hz |
	/// |  Stones collision | High frequency, approx. 300Hz |
	/// <summary>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SetControllerVibrationEvent(int deviceID, int frequency, float strength, int time);

    /// <summary>Enables audio-based vibration through the audio asset passed into the engine.</summary>
    /// <param name ="InSoundWave">(In) audio asset ("SoundWave" Asset type) </param>
    /// <param name ="slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// </param>
    /// <param name ="slotConfig">(In) Specifies whether to enable audio channel inversion.
    /// <ul>
    /// <li>`No`: disable</li>
    /// <li>`Yes`: enable</li>
    /// </ul>
	/// </param>
	/// <summary>
    /// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.
	/// </summary>
    /// <param name ="SourceId">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartVibrateBySharem(USoundWave* InSoundWave, EPICOXRVibrateController slot, EPICOXRChannelFlip slotConfig, int& SourceId);

	//UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static void PXR_GetVibrateDelayTime(FString& data);
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SetControllerEnableKey(bool isEnable, EPxrControllerKeyMap Key);

    /// <summary>Caches audio-based vibration data. You can set whether to keep the controller vibrating while caching the data. Cached audio data can be extracted from the cache directory and then transmitted, which reduces resource consumption and improves service performance.</summary>
    /// <param name ="InSoundWave">(In) audio asset ("SoundWave" Asset type) </param>
    /// <param name ="slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// </param>
    /// <param name ="slotConfig">(In) Specifies whether to enable audio channel inversion.
    /// <ul>
    /// <li>`No`: disable</li>
    /// <li>`Yes`: enable</li>
    /// </ul>
	/// </param>
	/// <summary>
    /// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.
	/// </summary>
    /// <param name ="enableV">(In) defines whether to keep the controller vibrating while caching audio-based vibration data
    /// <ul>
    /// <li>`CacheAndVibrate`: caches and keeps vibrating</li>
    /// <li>`CacheNoVibrate`: caches and stops vibrating</li>
    /// </ul>
	/// </param>
    /// <param name ="SourceId">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.
	/// </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SaveVibrateByCache(USoundWave* InSoundWave, EPICOXRVibrateController slot, EPICOXRChannelFlip slotConfig, EPICOXRCacheConfig enableV, int& SourceId);

    /// <summary>Plays the cached audio vibration data.</summary>
    /// <param name ="SourceId">(In) the ID returned by another vibration control API. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartVibrateByCache(int SourceId);

    /// <summary>Clears the cached audio vibration data.</summary>
    /// <param name ="SourceId">(In) the ID returned by another vibration control API. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_ClearVibrateByCache(int SourceId);

    /// <summary>Returns the rotational pose of the skeletal node for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
    /// <param name ="Key">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.
    /// <ul>
    /// <li>`Palm`</li>
	/// <li>`Wrist`</li>
	/// <li>`ThumbMetacarpal`</li>
	/// <li>`ThumbProximal`</li>
	/// <li>`ThumbDistal`</li>
	/// <li>`ThumbTip`</li>
	/// <li>`IndexMetacarpal`</li>
	/// <li>`IndexProximal`</li>
	/// <li>`IndexIntermediate`</li>
	/// <li>`IndexDistal`</li>
	/// <li>`IndexTip`</li>
	/// <li>`MiddleMetacarpal`</li>
	/// <li>`MiddleProximal`</li>
	/// <li>`MiddleIntermediate`</li>
	/// <li>`MiddleDistal`</li>
	/// <li>`MiddleTip`</li>
	/// <li>`RingMetacarpal`</li>
	/// <li>`RingProximal`</li>
	/// <li>`RingIntermediate`</li>
	/// <li>`RingDistal`</li>
	/// <li>`RingTip`</li>
	/// <li>`LittleMetacarpal`</li>
	/// <li>`LittleProximal`</li>
	/// <li>`LittleIntermediate`</li>
	/// <li>`LittleDistal`</li>
	/// <li>`LittleTip`</li>
    /// </ul>
	/// </param>
	/// <returns> FRotator, rotational pose of the skeletal node. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static FQuat GetBoneRotation(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);

    /// <summary>Returns the position of the skeletal node for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
    /// <param name ="Key">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.
    /// <ul>
    /// <li>`Palm`</li>
	/// <li>`Wrist`</li>
	/// <li>`ThumbMetacarpal`</li>
	/// <li>`ThumbProximal`</li>
	/// <li>`ThumbDistal`</li>
	/// <li>`ThumbTip`</li>
	/// <li>`IndexMetacarpal`</li>
	/// <li>`IndexProximal`</li>
	/// <li>`IndexIntermediate`</li>
	/// <li>`IndexDistal`</li>
	/// <li>`IndexTip`</li>
	/// <li>`MiddleMetacarpal`</li>
	/// <li>`MiddleProximal`</li>
	/// <li>`MiddleIntermediate`</li>
	/// <li>`MiddleDistal`</li>
	/// <li>`MiddleTip`</li>
	/// <li>`RingMetacarpal`</li>
	/// <li>`RingProximal`</li>
	/// <li>`RingIntermediate`</li>
	/// <li>`RingDistal`</li>
	/// <li>`RingTip`</li>
	/// <li>`LittleMetacarpal`</li>
	/// <li>`LittleProximal`</li>
	/// <li>`LittleIntermediate`</li>
	/// <li>`LittleDistal`</li>
	/// <li>`LittleTip`</li>
    /// </ul>
	/// </param>
	/// <returns> FVector, the coordinates of the skeletal node. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static FVector GetBoneLocation(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);

    /// <summary>Returns the radius of the skeletal node for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
    /// <param name ="Key">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.
    /// <ul>
    /// <li>`Palm`</li>
	/// <li>`Wrist`</li>
	/// <li>`ThumbMetacarpal`</li>
	/// <li>`ThumbProximal`</li>
	/// <li>`ThumbDistal`</li>
	/// <li>`ThumbTip`</li>
	/// <li>`IndexMetacarpal`</li>
	/// <li>`IndexProximal`</li>
	/// <li>`IndexIntermediate`</li>
	/// <li>`IndexDistal`</li>
	/// <li>`IndexTip`</li>
	/// <li>`MiddleMetacarpal`</li>
	/// <li>`MiddleProximal`</li>
	/// <li>`MiddleIntermediate`</li>
	/// <li>`MiddleDistal`</li>
	/// <li>`MiddleTip`</li>
	/// <li>`RingMetacarpal`</li>
	/// <li>`RingProximal`</li>
	/// <li>`RingIntermediate`</li>
	/// <li>`RingDistal`</li>
	/// <li>`RingTip`</li>
	/// <li>`LittleMetacarpal`</li>
	/// <li>`LittleProximal`</li>
	/// <li>`LittleIntermediate`</li>
	/// <li>`LittleDistal`</li>
	/// <li>`LittleTip`</li>
    /// </ul>
	/// </param>
	/// <returns> FVector, the coordinates of the skeletal node. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static float GetBoneRadii(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);

    /// <summary>Determine the validity of the rotation data for hand joints.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
    /// <param name ="Key">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.
    /// <ul>
    /// <li>`Palm`</li>
	/// <li>`Wrist`</li>
	/// <li>`ThumbMetacarpal`</li>
	/// <li>`ThumbProximal`</li>
	/// <li>`ThumbDistal`</li>
	/// <li>`ThumbTip`</li>
	/// <li>`IndexMetacarpal`</li>
	/// <li>`IndexProximal`</li>
	/// <li>`IndexIntermediate`</li>
	/// <li>`IndexDistal`</li>
	/// <li>`IndexTip`</li>
	/// <li>`MiddleMetacarpal`</li>
	/// <li>`MiddleProximal`</li>
	/// <li>`MiddleIntermediate`</li>
	/// <li>`MiddleDistal`</li>
	/// <li>`MiddleTip`</li>
	/// <li>`RingMetacarpal`</li>
	/// <li>`RingProximal`</li>
	/// <li>`RingIntermediate`</li>
	/// <li>`RingDistal`</li>
	/// <li>`RingTip`</li>
	/// <li>`LittleMetacarpal`</li>
	/// <li>`LittleProximal`</li>
	/// <li>`LittleIntermediate`</li>
	/// <li>`LittleDistal`</li>
	/// <li>`LittleTip`</li>
    /// </ul>
	/// </param>
	/// <returns>Bool: 
    /// <ul>
    /// <li>`true`: The rotation data of the current skeletal node is valid.</li>
    /// <li>`false`: The rotation data of the current skeletal node is invalid.</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsBoneOrientationValid(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);
	/**
	 * Check if the specific HandJoint is Bone Position Valid
	 *
	 * @param DeviceHand          (in) The hand to get the Position Valid status from
	 * @param Key              (in) The HandJoint to get the Position Valid status from
	 */

    /// <summary>Determine the validity of the position data for hand joints.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
    /// <param name ="Key">(In) EPicoXRHandJoint, specifies which skeletal nodes to identify.
    /// <ul>
    /// <li>`Palm`</li>
	/// <li>`Wrist`</li>
	/// <li>`ThumbMetacarpal`</li>
	/// <li>`ThumbProximal`</li>
	/// <li>`ThumbDistal`</li>
	/// <li>`ThumbTip`</li>
	/// <li>`IndexMetacarpal`</li>
	/// <li>`IndexProximal`</li>
	/// <li>`IndexIntermediate`</li>
	/// <li>`IndexDistal`</li>
	/// <li>`IndexTip`</li>
	/// <li>`MiddleMetacarpal`</li>
	/// <li>`MiddleProximal`</li>
	/// <li>`MiddleIntermediate`</li>
	/// <li>`MiddleDistal`</li>
	/// <li>`MiddleTip`</li>
	/// <li>`RingMetacarpal`</li>
	/// <li>`RingProximal`</li>
	/// <li>`RingIntermediate`</li>
	/// <li>`RingDistal`</li>
	/// <li>`RingTip`</li>
	/// <li>`LittleMetacarpal`</li>
	/// <li>`LittleProximal`</li>
	/// <li>`LittleIntermediate`</li>
	/// <li>`LittleDistal`</li>
	/// <li>`LittleTip`</li>
    /// </ul>
	/// </param>
	/// <returns>Bool: 
    /// <ul>
    /// <li>`true`: The position data of the current skeletal node is valid.</li>
    /// <li>`false`: The position data of the current skeletal node is invalid.</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsBonePositionValid(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);
	/**
	 * Check if the specific HandJoint is Bone Orientation Tracked
	 *
	 * @param DeviceHand          (in) The hand to get the Orientation Tracked status from
	 * @param Key              (in) The HandJoint to get the Orientation Tracked status from
	 */
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsBoneOrientationTracked(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);
	/**
	 * Check if the specific HandJoint is Bone Position Tracked
	 *
	 * @param DeviceHand          (in) The hand to get the Position Tracked status from
	 * @param Key              (in) The HandJoint to get the Position Tracked status from
	 */
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsBonePositionTracked(const EPICOXRHandType DeviceHand, const EPICOXRHandJoint Key);

    /// <summary>Returns the root node's pose transformation for the specific hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>FTranform, transformation value. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static FTransform GetHandRootPose(const EPICOXRHandType DeviceHand);

    /// <summary>Returns the laser pointer pose for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: The position data of the current skeletal node is valid.</li>
    /// <li>`false`: The position data of the current skeletal node is invalid.</li>
    /// </ul>
	/// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static FTransform GetRayPose(const EPICOXRHandType DeviceHand);

    /// <summary>Determines whether the specified hand component has been successfully tracked.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: Tracked successfully.</li>
    /// <li>`false`: Failed to track.</li>
    /// </ul>
	/// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsComputed(const EPICOXRHandType DeviceHand);

    /// <summary>Determines whether the laser pointer for the specified hand component is "displayed".</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: "displayed" </li>
    /// <li>`false`: "not displayed" </li>
    /// </ul>
	/// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsRayValid(const EPICOXRHandType DeviceHand);

    /// <summary>Determines if the laser pointer for the specified hand component is in the "click" position.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: in the "click" position </li>
    /// <li>`false`: not in the "click" position </li>
    /// </ul>
	/// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsPinchValid(const EPICOXRHandType DeviceHand);
	/**
	 * Get the tracking confidence of the hand
	 *
	 * @param DeviceHand				(in) The hand to get tracking confidence of
	 */
    /// <summary>Returns the tracking confidence for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>EPicoXRHandTrackingConfidence
    /// <ul>
    /// <li>`High`: High confidence level </li>
    /// <li>`Low`: Low confidence level </li>
    /// </ul>
	/// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static EPICOXRHandTrackingConfidence GetTrackingConfidence(const EPICOXRHandType DeviceHand);

    /// <summary>Returns the scaling factor of the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Float, the scaling factor. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static float GetHandScale(const EPICOXRHandType DeviceHand);

    /// <summary>Returns the click strength for the specified hand component.</summary>
    /// <param name ="DeviceHand">(In) EPICOXRHandType, specifies which hand component to identify.
    /// <ul>
    /// <li>`None`: No identification is performed, and the return value is always `false`</li>
    /// <li>`Left`: Left hand</li>
	/// <li>`Right`: Right hand</li>
    /// </ul>
	/// </param>
	/// <returns>Float, click strength. </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static float GetPinchStrength(const EPICOXRHandType DeviceHand);

    /// <summary>Determines the on/off status of the hand tracking feature.</summary>
	/// <returns>Bool:
    /// <ul>
    /// <li>`true`: Hand tracking is enabled</li>
    /// <li>`false`: Hand tracking is disabled</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static bool IsHandTrackingEnabled();
	/**
     * Get the active input device
     */
	UFUNCTION(BlueprintPure, Category = "PXR|PXRHandTracking")
	static EPICOXRActiveInputDevice GetActiveInputDevice();
	
	static class UDataTable* PHFDataTable;

	/// <summary>Plays PHF vibration data. You need put your *.phf files in the "/Plugins/PICOXR/Content/Phf/" folder.</summary>
    /// <param name ="DataName">(In) PHF file resource name. It is in the path "/Plugins/PICOXR/Content/Blueprint/PHFDataTable.uasset". </param>
    /// <param name ="slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// </param>
    /// <param name ="slotConfig">(In) Specifies whether to enable audio channel inversion.
    /// <ul>
    /// <li>`No`: disable</li>
    /// <li>`Yes`: enable</li>
    /// </ul>
	/// </param>
	/// <summary>
    /// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.
	/// </summary>
    /// <param name ="ampValue">(In) Vibration amplitude level. The range is 0.0 to 2.0:
    /// <ul>
    /// <li>`0.0`: for no vibration</li>
    /// <li>`1.0`: for standard amplitude</li>
	/// <li>`2.0`: for double the standard amplitude</li>
    /// </ul>
	/// </param>
    /// <param name ="SourceID">(Out) returns a unique ID for controlling the corresponding vibration, which can be used for subsequent APIs, such as PXR_SaveVibrateByCache, PXR_ClearVibrateByCache and PXR_StopControllerVCMotor.
	/// </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartVibrateByPHF(FName DataName,EPICOXRVibrateController slot, EPICOXRChannelFlip slotConfig,float ampValue , int& SourceID);
	
	/// <summary>Pauses the PHF vibration data.</summary>
    /// <param name ="SourceID">(In) ID returned by another vibration control API. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_PauseVibrate(int SourceID);

	/// <summary>Resumes PHF vibration data.</summary>
    /// <param name ="SourceID">(In) ID returned by another vibration control API. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_ResumeVibrate(int SourceID);

	/// <summary>Dynamically modifies PHF and AudioClip vibration data.</summary>
    /// <param name ="SourceID">(In) ID returned by another vibration control API. </param>
    /// <param name ="slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// </param>
    /// <param name ="slotConfig">(In) Specifies whether to enable audio channel inversion.
    /// <ul>
    /// <li>`No`: disable</li>
    /// <li>`Yes`: enable</li>
    /// </ul>
	/// </param>
	/// <summary>
    /// @note When slotConfig = `1`, the left controller vibrates with the audio source from right soundtrack, and vice versa.
	/// </summary>
    /// <param name ="AmpValue">(In) Vibration amplitude level. The range is 0.0 to 2.0:
    /// <ul>
    /// <li>`0.0`: for no vibration</li>
    /// <li>`1.0`: for standard amplitude</li>
	/// <li>`2.0`: for double the standard amplitude</li>
    /// </ul>
	/// </param>
   	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_UpdateVibrateParams(int SourceID, EPICOXRVibrateController slot, EPICOXRChannelFlip slotConfig, float AmpValue);

    /// <summary>Creates a haptic stream.</summary>
    /// <param name ="PHFVersion">(In) Fstring, the version of the PHF ( PICO Haptic File). </param>
	/// <param name ="FrameDurationMs">(In) Int, interval of each frame. </param>
    /// <param name ="Slot">(In) specifies which controller to vibrate with the audio.
    /// <ul>
    /// <li>`No`: none</li>
    /// <li>`Left`: left controller</li>
	/// <li>`Right`: right controller</li>
	/// <li>`LeftAndRight`: both</li>
    /// </ul>
	/// </param>
    /// <param name ="Reversal">(In) Not used currently. Set to 0 by default. </param>
    /// <param name ="Amp">(In) Float, vibration gain data. The range is 0.0 to 2.0:
    /// <ul>
    /// <li>`0.0`: for no vibration</li>
    /// <li>`1.0`: for standard amplitude</li>
	/// <li>`2.0`: for double the standard amplitude</li>
    /// </ul>
	/// </param>
    /// <param name ="Speed">(In) Speed of the haptic stream. </param>
    /// <param name ="SourceID">(Out) Int, returns a unique control ID for the corresponding vibration. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_CreateHapticStream(FString PHFVersion, int FrameDurationMs, int Slot, int Reversal, float Amp, float Speed, int& SourceID);

	/// <summary>Removes PHF haptic.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_RemovePHFHaptic(int SourceID);

	/// <summary>Starts PHF haptic.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_StartPHFHaptic(int SourceID);

	/// <summary>Stops PHF haptic.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_StopPHFHaptic(int SourceID);

    /// <summary>Writes vibration data in the corresponding stream.</summary>
    /// <param name ="SourceID">(In) Int, ID returned by another vibration control API. </param>
    /// <param name ="frames">(In) PHF data. </param>
	/// <param name ="From">(In) Int, specifies from which element of the array to start sending from. </param>
    /// <param name ="NumFrames">(In) Int, specifies how many elements to send. </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_WriteHapticStream(int SourceID, const FPHFJsonData& frames, int From, int NumFrames);

    /// <summary>Gets the current frame sequence.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
    /// <param name ="FrameSequence">(Out) Returns the current frame's sequence No.
	/// </param>
	/// <returns>
    /// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_GetCurrentFrameSequence(int SourceID, int& FrameSequence);

    /// <summary>Sets the PHF haptic speed.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
    /// <param name ="Speed">(In) Speed of the haptic stream. </param>
	/// <returns>
	/// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_SetPHFHapticSpeed(int SourceID, float Speed);

    /// <summary>Gets the PHF haptic speed.</summary>
    /// <param name ="SourceID">(In) Int, a unique control ID for the corresponding vibration. </param>
    /// <param name ="Speed">(Out) Speed of the haptic stream. </param>
	/// <returns>
	/// <ul>
    /// <li>`0`: success</li>
    /// <li>`-1`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static int PXR_GetPHFHapticSpeed(int SourceID, float& Speed);

	//BodyTracking
	/**
	* SetBodyTrackingStaticCalibState
	* @param calibstate		(In)  Calibration state set to system
	* @return true to indicate that the function call was successful.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_SetBodyTrackingStaticCalibState(int calibstate);

	/**
	* GetBodyTrackingImuData
	* @param deviceId		(In) Tracking device Id.
	* @param res			(Out) ImuData got by deviceId.
	* @return true to indicate that the function call was successful.
	*/
	//UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_GetBodyTrackingImuData(int deviceId, FPxrBodyTrackingImu& res);

    /// <summary>Get all the available body tracking data.</summary>
    /// <param name ="BodyTrackingData">(Out) An array of body tracking data. The index of an element in the array corresponds to a tracking node. You can see the enumeration of the class `EPxrBodyTrackerRole` for correspondence. Only the first 16 elements, from "Pelvis" to "Head", have data. </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_GetBodyTrackingPose(TArray<FPxrBodyTrackingTransform>& BodyTrackingData,float WorldToMetersScale = 1);

    /// <summary>Get the specified body tracking data.</summary>
    /// <param name ="RoleType">(In) Enum, the role to be tracked. Currently, only the first 16 types, from "Pelvis" to "Head", have data. </param>
    /// <param name ="RoleBodyTrackingData">(Out) The selected role's body tracking data. </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static bool PXR_GetBodyTrackingPoseByRole(EPxrBodyTrackerRole RoleType,FPxrBodyTrackingTransform& RoleBodyTrackingData,float WorldToMetersScale = 1);

    /// <summary>Sets the body tracking mode.</summary>
    /// <param name ="Mode">(In)(In)  Body tracking mode. </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static bool PXR_SetBodyTrackingMode(int32 Mode);

    /// <summary>Gets the connected states of both Motion Trackers.</summary>
    /// <param name ="State">(Out) The current connected state. </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static bool PXR_GetFitnessBandConnectState(FFitnessBandConnectState& State);

    /// <summary>Gets the specified tracker's battery power.</summary>
	/// <param name ="TrackerId">(In) The ID for the tracker that you are querying. Can be `0` or `1`. </param>
    /// <param name ="Battery">(Out) Int, the battery level of the tracker, value range: [1, 5]. </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static bool PXR_GetFitnessBandBattery(int32 TrackerId, int32& Battery);

    /// <summary>Gets the current calibration state of the trackers.</summary>
	/// <param name ="CalibrateState">(Out) Int, the current calibration state of the trackers.
	/// <ul>
    /// <li>`0`: Not calibrated</li>
    /// <li>`1`: Calibrated</li>
    /// </ul>
	/// </param>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static bool PXR_GetFitnessBandCalibState(int32& CalibrateState);

    /// <summary>Launches trackers' calibration app.</summary>
	/// <returns>Bool:
	/// <ul>
    /// <li>`true`: success</li>
    /// <li>`false`: failure</li>
    /// </ul>
    /// </returns>
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static bool PXR_LaunchFitnessBandCalibrationAPP();
	/**
	* Set Swift Tracking Mode
	* @param Mode		(In)An enum representing the Swift Tracking Mode
	* @param OtherMode  (In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of the enum
	* @return true to indicate that the function call was successful.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput",meta = (AdvancedDisplay="OtherMode"))
	static bool PXR_SetSwiftMode(ESwiftMode Mode,int32 OtherMode = -1);
	/**
	* Set BodyTracking BoneLength
	* @param BoneLength		(In)Bone Length,such as head or neck
	* @param OtherMode		(In)An additional Swift Tracking Mode, If this value is not -1, use this parameter instead of default mode
	* @return true to indicate that the function call was successful.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput",meta = (AdvancedDisplay="OtherMode"))
	static bool PXR_SetBodyTrackingBoneLength(const FBodyTrackingBoneLength& BoneLength,int32 OtherMode = -1);
};
