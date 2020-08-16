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

// Class MagicLeapAR.LuminARUObjectManager
// 0x0100 (0x0128 - 0x0028)
class ULuminARUObjectManager : public UObject
{
public:
	TArray<class UARPin*>                              AllAnchors;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0038(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARUObjectManager");
		return ptr;
	}

};


// Class MagicLeapAR.LuminARSessionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionFunctionLibrary");
		return ptr;
	}


	void STATIC_StartLuminARSession(class UObject** WorldContextObject, struct FLatentActionInfo* LatentInfo, class ULuminARSessionConfig** Configuration);
};


// Class MagicLeapAR.LuminARFrameFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARFrameFunctionLibrary");
		return ptr;
	}


	bool STATIC_LuminARLineTrace(class UObject** WorldContextObject, struct FVector2D* ScreenPosition, TArray<struct FARTraceResult>* OutHitResults);
	ELuminARTrackingState STATIC_GetTrackingState();
	void STATIC_GetLightEstimation(struct FLuminARLightEstimate* OutLightEstimate);
};


// Class MagicLeapAR.LuminARSessionConfig
// 0x0030 (0x00D8 - 0x00A8)
class ULuminARSessionConfig : public UARSessionConfig
{
public:
	int                                                MaxPlaneQueryResults;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinPlaneArea;                                             // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bArbitraryOrientationPlaneDetection;                      // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlaneSearchExtents;                                       // 0x00B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneQueryFlags;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bDiscardZeroExtentPlanes;                                 // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAR.LuminARSessionConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
