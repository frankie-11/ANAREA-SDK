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

// Class PlayFabClient.PlayFabClientSubsystem
// 0x0120 (0x0150 - 0x0030)
class UPlayFabClientSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnMatchFound;                                             // 0x0030(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMatchmakingStarted;                                     // 0x0040(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0040(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMatchmakingError;                                       // 0x0050(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0050(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMatchmakingCancelled;                                   // 0x0060(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0060(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSuccessfulLogin;                                        // 0x0078(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0070(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnLoginFailure;                                           // 0x0088(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0088(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData07[0x20];                                      // 0x0098(0x0020) MISSED OFFSET
	unsigned char                                      bPlayFabLoggedIn;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bIsNewPlayer;                                             // 0x00B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x16];                                      // 0x00BA(0x0016) MISSED OFFSET
	struct FString                                     PlayFabPlayerTitleID;                                     // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayFabPlayerMasterID;                                    // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData09[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	class UPlayFabAuthenticationContext*               PlayerAuthenticationContext;                              // 0x0100(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x48];                                      // 0x0108(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabClient.PlayFabClientSubsystem");
		return ptr;
	}


	void StartPlayFabMatchmaking(EMatchmakingType* QueueType, EPlayFabMatchmakingRegion* Region);
	bool GetIsPlayFabMatchmaking();
	void ConnectToMatch(class APlayerController** Player, struct FMatchmakingResult* Match);
	void CancelPlayFabMatchmaking();
};


// Class PlayFabClient.PlayFabPlayerControllerInMainMenu
// 0x0020 (0x0588 - 0x0568)
class APlayFabPlayerControllerInMainMenu : public APlayerController
{
public:
	struct FString                                     PlayFabId;                                                // 0x0568(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnReceivedLoggedInDelegate;                               // 0x0578(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0578(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabClient.PlayFabPlayerControllerInMainMenu");
		return ptr;
	}


	void ReceiveLoginSuccess(struct FString* PlayerTitleID);
	void OnReceivedLoggedIn_DelegateSignature__DelegateSignature();
};


// Class PlayFabClient.PurchaseMicrotransaction
// 0x0060 (0x0090 - 0x0030)
class UPurchaseMicrotransaction : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    onSuccess;                                                // 0x0030(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0030(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    onFailure;                                                // 0x0040(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0040(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x40];                                      // 0x0050(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabClient.PurchaseMicrotransaction");
		return ptr;
	}


	class UPurchaseMicrotransaction* STATIC_PurchaseMicrotransaction(struct FString* ItemId);
};


// Class PlayFabClient.SteamUtilities
// 0x0000 (0x0028 - 0x0028)
class USteamUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFabClient.SteamUtilities");
		return ptr;
	}


	void STATIC_OpenWebsite(struct FString* URL);
	void STATIC_OpenSteamFriendsOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
