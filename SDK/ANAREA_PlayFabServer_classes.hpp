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

// Class PlayFabServer.PlayFabGameModeBase
// 0x0000 (0x02B8 - 0x02B8)
class APlayFabGameModeBase : public AGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabServer.PlayFabGameModeBase");
		return ptr;
	}


	void RequestExit();
};


// Class PlayFabServer.PlayFabPlayerController
// 0x0030 (0x0598 - 0x0568)
class APlayFabPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0568(0x0010) MISSED OFFSET
	struct FString                                     PlayFabId;                                                // 0x0578(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnReceivedLoggedInDelegate;                               // 0x0588(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0588(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabServer.PlayFabPlayerController");
		return ptr;
	}

};


// Class PlayFabServer.PlayFabServerSubsystem
// 0x0090 (0x00C0 - 0x0030)
class UPlayFabServerSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabServer.PlayFabServerSubsystem");
		return ptr;
	}


	void StopBackfilling();
	bool StartBackfilling();
	struct FString GetMatchID();
	bool GetIsBackfilling();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
