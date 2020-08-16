#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayFabClient.PlayFabClientSubsystem.StartPlayFabMatchmaking
struct UPlayFabClientSubsystem_StartPlayFabMatchmaking_Params
{
	EMatchmakingType*                                  QueueType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayFabMatchmakingRegion*                         Region;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayFabClient.PlayFabClientSubsystem.GetIsPlayFabMatchmaking
struct UPlayFabClientSubsystem_GetIsPlayFabMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayFabClient.PlayFabClientSubsystem.ConnectToMatch
struct UPlayFabClientSubsystem_ConnectToMatch_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMatchmakingResult*                         Match;                                                    // (Parm)
};

// Function PlayFabClient.PlayFabClientSubsystem.CancelPlayFabMatchmaking
struct UPlayFabClientSubsystem_CancelPlayFabMatchmaking_Params
{
};

// Function PlayFabClient.PlayFabPlayerControllerInMainMenu.ReceiveLoginSuccess
struct APlayFabPlayerControllerInMainMenu_ReceiveLoginSuccess_Params
{
	struct FString*                                    PlayerTitleID;                                            // (Parm, ZeroConstructor)
};

// DelegateFunction PlayFabClient.PlayFabPlayerControllerInMainMenu.OnReceivedLoggedIn_DelegateSignature__DelegateSignature
struct APlayFabPlayerControllerInMainMenu_OnReceivedLoggedIn_DelegateSignature__DelegateSignature_Params
{
};

// Function PlayFabClient.PurchaseMicrotransaction.PurchaseMicrotransaction
struct UPurchaseMicrotransaction_PurchaseMicrotransaction_Params
{
	struct FString*                                    ItemId;                                                   // (Parm, ZeroConstructor)
	class UPurchaseMicrotransaction*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayFabClient.SteamUtilities.OpenWebsite
struct USteamUtilities_OpenWebsite_Params
{
	struct FString*                                    URL;                                                      // (Parm, ZeroConstructor)
};

// Function PlayFabClient.SteamUtilities.OpenSteamFriendsOverlay
struct USteamUtilities_OpenSteamFriendsOverlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
