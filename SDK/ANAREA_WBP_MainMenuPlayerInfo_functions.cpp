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

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_MainMenuPlayerInfo_C::SetPlayerName(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerName");

	UWBP_MainMenuPlayerInfo_C_SetPlayerName_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuPlayerInfo_C::SetPlayerLevel(int* PlayerLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerLevel");

	UWBP_MainMenuPlayerInfo_C_SetPlayerLevel_Params params;
	params.PlayerLevel = PlayerLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerXP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerXP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuPlayerInfo_C::SetPlayerXP(int* PlayerXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerXP");

	UWBP_MainMenuPlayerInfo_C_SetPlayerXP_Params params;
	params.PlayerXP = PlayerXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerCoins
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerCoins                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuPlayerInfo_C::SetPlayerCoins(int* PlayerCoins)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerCoins");

	UWBP_MainMenuPlayerInfo_C_SetPlayerCoins_Params params;
	params.PlayerCoins = PlayerCoins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuPlayerInfo_C::SetPlayerIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerIcon");

	UWBP_MainMenuPlayerInfo_C_SetPlayerIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.ExecuteUbergraph_WBP_MainMenuPlayerInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuPlayerInfo_C::ExecuteUbergraph_WBP_MainMenuPlayerInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.ExecuteUbergraph_WBP_MainMenuPlayerInfo");

	UWBP_MainMenuPlayerInfo_C_ExecuteUbergraph_WBP_MainMenuPlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
