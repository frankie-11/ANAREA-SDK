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

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF
struct UWBP_PlayerStatsMenu_C_OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8
struct UWBP_PlayerStatsMenu_C_OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.Init
struct UWBP_PlayerStatsMenu_C_Init_Params
{
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_BestMatches
struct UWBP_PlayerStatsMenu_C_QueryResult_BestMatches_Params
{
	struct FClientGetUserDataResult*                   Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_BestMatches
struct UWBP_PlayerStatsMenu_C_QueryError_BestMatches_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_AllData
struct UWBP_PlayerStatsMenu_C_QueryResult_AllData_Params
{
	struct FClientGetPlayerStatisticsResult*           Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_AllData
struct UWBP_PlayerStatsMenu_C_QueryError_AllData_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_PlayerStatsMenu_C_BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryBackendData
struct UWBP_PlayerStatsMenu_C_QueryBackendData_Params
{
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnLogin
struct UWBP_PlayerStatsMenu_C_OnLogin_Params
{
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.PreConstruct
struct UWBP_PlayerStatsMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.ExecuteUbergraph_WBP_PlayerStatsMenu
struct UWBP_PlayerStatsMenu_C_ExecuteUbergraph_WBP_PlayerStatsMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnClose__DelegateSignature
struct UWBP_PlayerStatsMenu_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
