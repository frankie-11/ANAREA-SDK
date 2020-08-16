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

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnPlayFabResponse_EEA09C06409DCDAACDCF0999045536F4
struct UWBP_MainMenu_V2_C_OnPlayFabResponse_EEA09C06409DCDAACDCF0999045536F4_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnPlayFabResponse_A492DCF347E7B4BBA7674EACF5DB1DD6
struct UWBP_MainMenu_V2_C_OnPlayFabResponse_A492DCF347E7B4BBA7674EACF5DB1DD6_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnPlayFabResponse_DF6A737A4BF3B64E373DA19F3C93D55F
struct UWBP_MainMenu_V2_C_OnPlayFabResponse_DF6A737A4BF3B64E373DA19F3C93D55F_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnPlayFabResponse_8F2818F44BCE6D1F83E84297C71D90BB
struct UWBP_MainMenu_V2_C_OnPlayFabResponse_8F2818F44BCE6D1F83E84297C71D90BB_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnLoaded_B33A2A76466E45A8C136E4BF61385268
struct UWBP_MainMenu_V2_C_OnLoaded_B33A2A76466E45A8C136E4BF61385268_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.PreConstruct
struct UWBP_MainMenu_V2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.LaunchMatchmaking
struct UWBP_MainMenu_V2_C_LaunchMatchmaking_Params
{
	TEnumAsByte<EMatchType>*                           MatchType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.CancelMatchmaking
struct UWBP_MainMenu_V2_C_CancelMatchmaking_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.MoveCamToLocation
struct UWBP_MainMenu_V2_C_MoveCamToLocation_Params
{
	TEnumAsByte<E_MainMenuCamLocations>*               CamLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnInitialized
struct UWBP_MainMenu_V2_C_OnInitialized_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.CloseSettingsMenu
struct UWBP_MainMenu_V2_C_CloseSettingsMenu_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.CloseInventoryMenu
struct UWBP_MainMenu_V2_C_CloseInventoryMenu_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.RefreshAllPlayerInfosFromBackend
struct UWBP_MainMenu_V2_C_RefreshAllPlayerInfosFromBackend_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryResult_GetAXCoin
struct UWBP_MainMenu_V2_C_QueryResult_GetAXCoin_Params
{
	struct FClientGetUserInventoryResult*              Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryError_GetAXCoin
struct UWBP_MainMenu_V2_C_QueryError_GetAXCoin_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryResult_GetPlayerName
struct UWBP_MainMenu_V2_C_QueryResult_GetPlayerName_Params
{
	struct FClientGetAccountInfoResult*                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryError_GetPlayerName
struct UWBP_MainMenu_V2_C_QueryError_GetPlayerName_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.Construct
struct UWBP_MainMenu_V2_C_Construct_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__WBP_MainMenuV2_ChooseMatchType_K2Node_ComponentBoundEvent_0_OnMatchTypeChosen__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__WBP_MainMenuV2_ChooseMatchType_K2Node_ComponentBoundEvent_0_OnMatchTypeChosen__DelegateSignature_Params
{
	TEnumAsByte<EMatchType>*                           MatchType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.LaunchTrainingMap
struct UWBP_MainMenu_V2_C_LaunchTrainingMap_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.ReceiveCamLocationReached
struct UWBP_MainMenu_V2_C_ReceiveCamLocationReached_Params
{
	TEnumAsByte<E_MainMenuCamLocations>*               CamLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnLogin
struct UWBP_MainMenu_V2_C_OnLogin_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryResult_GetXPAndLevel
struct UWBP_MainMenu_V2_C_QueryResult_GetXPAndLevel_Params
{
	struct FClientGetPlayerStatisticsResult*           Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryError_GetXPAndLevel
struct UWBP_MainMenu_V2_C_QueryError_GetXPAndLevel_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnClose_DisplayLastMatchInfo
struct UWBP_MainMenu_V2_C_OnClose_DisplayLastMatchInfo_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnClose_WelcomeScreen
struct UWBP_MainMenu_V2_C_OnClose_WelcomeScreen_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.UpdateNameAndRegionLocally
struct UWBP_MainMenu_V2_C_UpdateNameAndRegionLocally_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnClose_StatsMenu
struct UWBP_MainMenu_V2_C_OnClose_StatsMenu_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Play_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Play_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Stats_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Stats_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Leaderboards_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Leaderboards_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Customize_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Customize_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Shop_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Shop_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Exit_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Patchnotes_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Patchnotes_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Friends_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Friends_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_Settings_2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_Settings_2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.BndEvt__Btn_SearchingMatch_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UWBP_MainMenu_V2_C_BndEvt__Btn_SearchingMatch_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnMatchmakingStarted_
struct UWBP_MainMenu_V2_C_OnMatchmakingStarted__Params
{
	struct FMatchmakingResult*                         MatchResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnMatchmakingCancelled_
struct UWBP_MainMenu_V2_C_OnMatchmakingCancelled__Params
{
	struct FMatchmakingResult*                         MatchResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnMatchFound_
struct UWBP_MainMenu_V2_C_OnMatchFound__Params
{
	struct FMatchmakingResult*                         MatchResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnMatchError_
struct UWBP_MainMenu_V2_C_OnMatchError__Params
{
	struct FMatchmakingResult*                         MatchResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString*                                    Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.DisplaySearchingMatch
struct UWBP_MainMenu_V2_C_DisplaySearchingMatch_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.HideSearchingMatch
struct UWBP_MainMenu_V2_C_HideSearchingMatch_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.ApplyPlayerIcon
struct UWBP_MainMenu_V2_C_ApplyPlayerIcon_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryResult_GetPreferredRegion
struct UWBP_MainMenu_V2_C_QueryResult_GetPreferredRegion_Params
{
	struct FClientGetUserDataResult*                   Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.QueryError_GetPreferredRegion
struct UWBP_MainMenu_V2_C_QueryError_GetPreferredRegion_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.OnClose_DisconnectReason
struct UWBP_MainMenu_V2_C_OnClose_DisconnectReason_Params
{
};

// Function WBP_MainMenu_V2.WBP_MainMenu_V2_C.ExecuteUbergraph_WBP_MainMenu_V2
struct UWBP_MainMenu_V2_C_ExecuteUbergraph_WBP_MainMenu_V2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
