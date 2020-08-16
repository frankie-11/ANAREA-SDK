#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MagicLeapController.MagicLeapControllerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapControllerFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetMotionSourceForHand(EControllerHand* Hand, struct FName* MotionSource);
	bool STATIC_SetControllerTrackingMode(EMagicLeapControllerTrackingMode* TrackingMode);
	bool STATIC_PlayLEDPattern(struct FName* MotionSource, EMagicLeapControllerLEDPattern* LEDPattern, EMagicLeapControllerLEDColor* LEDColor, float* DurationInSec);
	bool STATIC_PlayLEDEffect(struct FName* MotionSource, EMagicLeapControllerLEDEffect* LEDEffect, EMagicLeapControllerLEDSpeed* LEDSpeed, EMagicLeapControllerLEDPattern* LEDPattern, EMagicLeapControllerLEDColor* LEDColor, float* DurationInSec);
	bool STATIC_PlayHapticPattern(struct FName* MotionSource, EMagicLeapControllerHapticPattern* HapticPattern, EMagicLeapControllerHapticIntensity* Intensity);
	bool STATIC_PlayControllerLEDEffect(EControllerHand* Hand, EMagicLeapControllerLEDEffect* LEDEffect, EMagicLeapControllerLEDSpeed* LEDSpeed, EMagicLeapControllerLEDPattern* LEDPattern, EMagicLeapControllerLEDColor* LEDColor, float* DurationInSec);
	bool STATIC_PlayControllerLED(EControllerHand* Hand, EMagicLeapControllerLEDPattern* LEDPattern, EMagicLeapControllerLEDColor* LEDColor, float* DurationInSec);
	bool STATIC_PlayControllerHapticFeedback(EControllerHand* Hand, EMagicLeapControllerHapticPattern* HapticPattern, EMagicLeapControllerHapticIntensity* Intensity);
	int STATIC_MaxSupportedMagicLeapControllers();
	bool STATIC_IsMLControllerConnected(struct FName* MotionSource);
	void STATIC_InvertControllerMapping();
	struct FName STATIC_GetMotionSourceForHand(EControllerHand* Hand);
	EMagicLeapControllerType STATIC_GetMLControllerType(EControllerHand* Hand);
	EControllerHand STATIC_GetHandForMotionSource(struct FName* MotionSource);
	EMagicLeapControllerType STATIC_GetControllerType(struct FName* MotionSource);
	EMagicLeapControllerTrackingMode STATIC_GetControllerTrackingMode();
	bool STATIC_GetControllerMapping(int* ControllerIndex, EControllerHand* Hand);
};


// Class MagicLeapController.MagicLeapTouchpadGesturesComponent
// 0x0090 (0x0140 - 0x00B0)
class UMagicLeapTouchpadGesturesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTouchpadGestureStart;                                   // 0x00B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnTouchpadGestureContinue;                                // 0x00C8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00C8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnTouchpadGestureEnd;                                     // 0x00D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x58];                                      // 0x00E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapController.MagicLeapTouchpadGesturesComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
