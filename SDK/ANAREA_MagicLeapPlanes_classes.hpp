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

// Class MagicLeapPlanes.MagicLeapPlanesComponent
// 0x0040 (0x0230 - 0x01F0)
class UMagicLeapPlanesComponent : public USceneComponent
{
public:
	TArray<EMagicLeapPlaneQueryFlags>                  QueryFlags;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBoxComponent*                               SearchVolume;                                             // 0x0200(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHolePerimeter;                                         // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaneArea;                                             // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlanesQueryResult;                                      // 0x0218(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0214(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesComponent");
		return ptr;
	}


	bool RequestPlanesAsync();
};


// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapPlanesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary");
		return ptr;
	}


	void STATIC_ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags>* InPriority, TArray<EMagicLeapPlaneQueryFlags>* InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags);
	void STATIC_RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags>* InQueryFlags, TArray<EMagicLeapPlaneQueryFlags>* InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags);
	bool STATIC_PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery* Query, struct FScriptDelegate* ResultDelegate);
	bool STATIC_IsTrackerValid();
	struct FTransform STATIC_GetContentScale(class AActor** ContentActor, struct FMagicLeapPlaneResult* PlaneResult);
	bool STATIC_DestroyTracker();
	bool STATIC_CreateTracker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
