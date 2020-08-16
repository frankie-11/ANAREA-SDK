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

// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t
{
	ELuminARLineTraceChannel__None = 0,
	ELuminARLineTraceChannel__FeaturePoint = 1,
	ELuminARLineTraceChannel__InfinitePlane = 2,
	ELuminARLineTraceChannel__PlaneUsingExtent = 3,
	ELuminARLineTraceChannel__PlaneUsingBoundaryPolygon = 4,
	ELuminARLineTraceChannel__FeaturePointWithSurfaceNormal = 5,
	ELuminARLineTraceChannel__ELuminARLineTraceChannel_MAX = 6
};


// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t
{
	ELuminARTrackingState__Tracking = 0,
	ELuminARTrackingState__NotTracking = 1,
	ELuminARTrackingState__StoppedTracking = 2,
	ELuminARTrackingState__ELuminARTrackingState_MAX = 3
};


// Enum MagicLeapAR.ELuminARFunctionStatus
enum class ELuminARFunctionStatus : uint8_t
{
	ELuminARFunctionStatus__Success = 0,
	ELuminARFunctionStatus__Fatal  = 1,
	ELuminARFunctionStatus__SessionPaused = 2,
	ELuminARFunctionStatus__NotTracking = 3,
	ELuminARFunctionStatus__ResourceExhausted = 4,
	ELuminARFunctionStatus__NotAvailable = 5,
	ELuminARFunctionStatus__InvalidType = 6,
	ELuminARFunctionStatus__Unknown = 7,
	ELuminARFunctionStatus__ELuminARFunctionStatus_MAX = 8
};


// Enum MagicLeapAR.ELuminARAvailability
enum class ELuminARAvailability : uint8_t
{
	ELuminARAvailability__UnknownError = 0,
	ELuminARAvailability__SupportedInstalled = 1,
	ELuminARAvailability__ELuminARAvailability_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapAR.LuminARLightEstimate
// 0x0014
struct FLuminARLightEstimate
{
	unsigned char                                      bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PixelIntensity;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RGBScaleFactor;                                           // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
