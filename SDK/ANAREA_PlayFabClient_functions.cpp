// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayFabClient.PlayFabClientSubsystem.StartPlayFabMatchmaking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMatchmakingType*              QueueType                      (Parm, ZeroConstructor, IsPlainOldData)
// EPlayFabMatchmakingRegion*     Region                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayFabClientSubsystem::StartPlayFabMatchmaking(EMatchmakingType* QueueType, EPlayFabMatchmakingRegion* Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PlayFabClientSubsystem.StartPlayFabMatchmaking");

	UPlayFabClientSubsystem_StartPlayFabMatchmaking_Params params;
	params.QueueType = QueueType;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabClient.PlayFabClientSubsystem.GetIsPlayFabMatchmaking
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayFabClientSubsystem::GetIsPlayFabMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PlayFabClientSubsystem.GetIsPlayFabMatchmaking");

	UPlayFabClientSubsystem_GetIsPlayFabMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabClient.PlayFabClientSubsystem.ConnectToMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FMatchmakingResult*     Match                          (Parm)

void UPlayFabClientSubsystem::ConnectToMatch(class APlayerController** Player, struct FMatchmakingResult* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PlayFabClientSubsystem.ConnectToMatch");

	UPlayFabClientSubsystem_ConnectToMatch_Params params;
	params.Player = Player;
	params.Match = Match;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabClient.PlayFabClientSubsystem.CancelPlayFabMatchmaking
// (Final, Native, Public, BlueprintCallable)

void UPlayFabClientSubsystem::CancelPlayFabMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PlayFabClientSubsystem.CancelPlayFabMatchmaking");

	UPlayFabClientSubsystem_CancelPlayFabMatchmaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabClient.PlayFabPlayerControllerInMainMenu.ReceiveLoginSuccess
// (Final, Native, Private)
// Parameters:
// struct FString*                PlayerTitleID                  (Parm, ZeroConstructor)

void APlayFabPlayerControllerInMainMenu::ReceiveLoginSuccess(struct FString* PlayerTitleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PlayFabPlayerControllerInMainMenu.ReceiveLoginSuccess");

	APlayFabPlayerControllerInMainMenu_ReceiveLoginSuccess_Params params;
	params.PlayerTitleID = PlayerTitleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction PlayFabClient.PlayFabPlayerControllerInMainMenu.OnReceivedLoggedIn_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void APlayFabPlayerControllerInMainMenu::OnReceivedLoggedIn_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction PlayFabClient.PlayFabPlayerControllerInMainMenu.OnReceivedLoggedIn_DelegateSignature__DelegateSignature");

	APlayFabPlayerControllerInMainMenu_OnReceivedLoggedIn_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabClient.PurchaseMicrotransaction.PurchaseMicrotransaction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                ItemId                         (Parm, ZeroConstructor)
// class UPurchaseMicrotransaction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPurchaseMicrotransaction* UPurchaseMicrotransaction::STATIC_PurchaseMicrotransaction(struct FString* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.PurchaseMicrotransaction.PurchaseMicrotransaction");

	UPurchaseMicrotransaction_PurchaseMicrotransaction_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabClient.SteamUtilities.OpenWebsite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                URL                            (Parm, ZeroConstructor)

void USteamUtilities::STATIC_OpenWebsite(struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.SteamUtilities.OpenWebsite");

	USteamUtilities_OpenWebsite_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabClient.SteamUtilities.OpenSteamFriendsOverlay
// (Final, Native, Static, Public, BlueprintCallable)

void USteamUtilities::STATIC_OpenSteamFriendsOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabClient.SteamUtilities.OpenSteamFriendsOverlay");

	USteamUtilities_OpenSteamFriendsOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
