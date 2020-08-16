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

// Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMagicLeapHandTrackingSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.LiveLinkMagicLeapHandTrackingSourceFactory");
		return ptr;
	}

};


// Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapHandTracking.MagicLeapHandTrackingFunctionLibrary");
		return ptr;
	}


	void STATIC_SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture* Gesture, float* Confidence);
	bool STATIC_SetConfiguration(TArray<EMagicLeapHandTrackingGesture>* StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
	float STATIC_GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture* Gesture);
	bool STATIC_GetMagicLeapHandTrackingLiveLinkSource(struct FLiveLinkSourceHandle* SourceHandle);
	bool STATIC_GetHandThumbTip(EControllerHand* Hand, EMagicLeapGestureTransformSpace* TransformSpace, struct FTransform* Secondary);
	bool STATIC_GetHandIndexFingerTip(EControllerHand* Hand, EMagicLeapGestureTransformSpace* TransformSpace, struct FTransform* Pointer);
	bool STATIC_GetHandCenterNormalized(EControllerHand* Hand, struct FVector* HandCenterNormalized);
	bool STATIC_GetHandCenter(EControllerHand* Hand, struct FTransform* HandCenter);
	bool STATIC_GetGestureKeypointTransform(EControllerHand* Hand, EMagicLeapHandTrackingKeypoint* Keypoint, EMagicLeapGestureTransformSpace* TransformSpace, struct FTransform* Transform);
	bool STATIC_GetGestureKeypoints(EControllerHand* Hand, TArray<struct FTransform>* Keypoints);
	bool STATIC_GetCurrentGestureConfidence(EControllerHand* Hand, float* Confidence);
	bool STATIC_GetCurrentGesture(EControllerHand* Hand, EMagicLeapHandTrackingGesture* Gesture);
	bool STATIC_GetConfiguration(TArray<EMagicLeapHandTrackingGesture>* ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel* KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel* GestureFilterLevel, bool* bTrackingEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
