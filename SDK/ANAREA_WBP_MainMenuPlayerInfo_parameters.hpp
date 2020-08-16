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

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerName
struct UWBP_MainMenuPlayerInfo_C_SetPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerLevel
struct UWBP_MainMenuPlayerInfo_C_SetPlayerLevel_Params
{
	int*                                               PlayerLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerXP
struct UWBP_MainMenuPlayerInfo_C_SetPlayerXP_Params
{
	int*                                               PlayerXP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerCoins
struct UWBP_MainMenuPlayerInfo_C_SetPlayerCoins_Params
{
	int*                                               PlayerCoins;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.SetPlayerIcon
struct UWBP_MainMenuPlayerInfo_C_SetPlayerIcon_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuPlayerInfo.WBP_MainMenuPlayerInfo_C.ExecuteUbergraph_WBP_MainMenuPlayerInfo
struct UWBP_MainMenuPlayerInfo_C_ExecuteUbergraph_WBP_MainMenuPlayerInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
