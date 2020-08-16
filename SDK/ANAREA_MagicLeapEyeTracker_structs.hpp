#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	EMagicLeapEyeTrackingCalibrationStatus__None = 0,
	EMagicLeapEyeTrackingCalibrationStatus__Bad = 1,
	EMagicLeapEyeTrackingCalibrationStatus__Good = 2,
	EMagicLeapEyeTrackingCalibrationStatus__EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
};


// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	EMagicLeapEyeTrackingStatus__NotConnected = 0,
	EMagicLeapEyeTrackingStatus__Disabled = 1,
	EMagicLeapEyeTrackingStatus__UserNotPresent = 2,
	EMagicLeapEyeTrackingStatus__UserPresent = 3,
	EMagicLeapEyeTrackingStatus__UserPresentAndWatchingWindow = 4,
	EMagicLeapEyeTrackingStatus__EMagicLeapEyeTrackingStatus_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapEyeTracker.MagicLeapFixationComfort
// 0x0008
struct FMagicLeapFixationComfort
{
	unsigned char                                      FixationDepthIsUncomfortable;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FixationDepthViolationHasOccurred;                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTimeAtUncomfortableDepth;                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeapEyeTracker.MagicLeapEyeBlinkState
// 0x0002
struct FMagicLeapEyeBlinkState
{
	unsigned char                                      LeftEyeBlinked;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RightEyeBlinked;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
