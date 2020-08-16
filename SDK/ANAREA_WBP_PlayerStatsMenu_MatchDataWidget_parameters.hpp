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

// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Init
struct UWBP_PlayerStatsMenu_MatchDataWidget_C_Init_Params
{
	int*                                               KillCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Clear
struct UWBP_PlayerStatsMenu_MatchDataWidget_C_Clear_Params
{
};

// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget
struct UWBP_PlayerStatsMenu_MatchDataWidget_C_ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
