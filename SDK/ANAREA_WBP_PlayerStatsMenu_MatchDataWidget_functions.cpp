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

// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           KillCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_MatchDataWidget_C::Init(int* KillCount, int* Placement, int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Init");

	UWBP_PlayerStatsMenu_MatchDataWidget_C_Init_Params params;
	params.KillCount = KillCount;
	params.Placement = Placement;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatsMenu_MatchDataWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.Clear");

	UWBP_PlayerStatsMenu_MatchDataWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_MatchDataWidget_C::ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu_MatchDataWidget.WBP_PlayerStatsMenu_MatchDataWidget_C.ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget");

	UWBP_PlayerStatsMenu_MatchDataWidget_C_ExecuteUbergraph_WBP_PlayerStatsMenu_MatchDataWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
