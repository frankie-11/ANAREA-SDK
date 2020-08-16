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

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.GetRegionName
struct UWBP_WelcomeScreen_C_GetRegionName_Params
{
	EPlayFabMatchmakingRegion*                         Region;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CheckPlayerNameValidity
struct UWBP_WelcomeScreen_C_CheckPlayerNameValidity_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616
struct UWBP_WelcomeScreen_C_OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A
struct UWBP_WelcomeScreen_C_OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A
struct UWBP_WelcomeScreen_C_OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74
struct UWBP_WelcomeScreen_C_OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74_Params
{
	struct FPlayFabBaseModel*                          response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              successful;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.PreConstruct
struct UWBP_WelcomeScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_WelcomeScreen_C_BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Success
struct UWBP_WelcomeScreen_C_NameUpdated_Success_Params
{
	struct FClientUpdateUserTitleDisplayNameResult*    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Error
struct UWBP_WelcomeScreen_C_NameUpdated_Error_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.Init
struct UWBP_WelcomeScreen_C_Init_Params
{
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPlayerName
struct UWBP_WelcomeScreen_C_QueryResult_GetPlayerName_Params
{
	struct FClientGetAccountInfoResult*                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPlayerName
struct UWBP_WelcomeScreen_C_QueryError_GetPlayerName_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPreferredRegion
struct UWBP_WelcomeScreen_C_QueryResult_GetPreferredRegion_Params
{
	struct FClientGetUserDataResult*                   Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPreferredRegion
struct UWBP_WelcomeScreen_C_QueryError_GetPreferredRegion_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_1
struct UWBP_WelcomeScreen_C_CustomEvent_1_Params
{
	struct FClientUpdateUserDataResult*                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_2
struct UWBP_WelcomeScreen_C_CustomEvent_2_Params
{
	struct FPlayFabError*                              Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    customData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnLogin
struct UWBP_WelcomeScreen_C_OnLogin_Params
{
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryBackendData
struct UWBP_WelcomeScreen_C_QueryBackendData_Params
{
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.ExecuteUbergraph_WBP_WelcomeScreen
struct UWBP_WelcomeScreen_C_ExecuteUbergraph_WBP_WelcomeScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnClose__DelegateSignature
struct UWBP_WelcomeScreen_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
