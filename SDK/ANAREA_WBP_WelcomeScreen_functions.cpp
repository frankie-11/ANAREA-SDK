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

// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.GetRegionName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPlayFabMatchmakingRegion*     Region                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UWBP_WelcomeScreen_C::GetRegionName(EPlayFabMatchmakingRegion* Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.GetRegionName");

	UWBP_WelcomeScreen_C_GetRegionName_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CheckPlayerNameValidity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::CheckPlayerNameValidity(struct FString* playerName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CheckPlayerNameValidity");

	UWBP_WelcomeScreen_C_CheckPlayerNameValidity_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616");

	UWBP_WelcomeScreen_C_OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A");

	UWBP_WelcomeScreen_C_OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A");

	UWBP_WelcomeScreen_C_OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74");

	UWBP_WelcomeScreen_C_OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.PreConstruct");

	UWBP_WelcomeScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_WelcomeScreen_C_BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserTitleDisplayNameResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::NameUpdated_Success(struct FClientUpdateUserTitleDisplayNameResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Success");

	UWBP_WelcomeScreen_C_NameUpdated_Success_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::NameUpdated_Error(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.NameUpdated_Error");

	UWBP_WelcomeScreen_C_NameUpdated_Error_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWBP_WelcomeScreen_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.Init");

	UWBP_WelcomeScreen_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetAccountInfoResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::QueryResult_GetPlayerName(struct FClientGetAccountInfoResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPlayerName");

	UWBP_WelcomeScreen_C_QueryResult_GetPlayerName_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPlayerName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::QueryError_GetPlayerName(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPlayerName");

	UWBP_WelcomeScreen_C_QueryError_GetPlayerName_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPreferredRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetUserDataResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::QueryResult_GetPreferredRegion(struct FClientGetUserDataResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryResult_GetPreferredRegion");

	UWBP_WelcomeScreen_C_QueryResult_GetPreferredRegion_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPreferredRegion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::QueryError_GetPreferredRegion(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryError_GetPreferredRegion");

	UWBP_WelcomeScreen_C_QueryError_GetPreferredRegion_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientUpdateUserDataResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::CustomEvent_1(struct FClientUpdateUserDataResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_1");

	UWBP_WelcomeScreen_C_CustomEvent_1_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::CustomEvent_2(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.CustomEvent_2");

	UWBP_WelcomeScreen_C_CustomEvent_2_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnLogin
// (BlueprintCallable, BlueprintEvent)

void UWBP_WelcomeScreen_C::OnLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnLogin");

	UWBP_WelcomeScreen_C_OnLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryBackendData
// (BlueprintCallable, BlueprintEvent)

void UWBP_WelcomeScreen_C::QueryBackendData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.QueryBackendData");

	UWBP_WelcomeScreen_C_QueryBackendData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.ExecuteUbergraph_WBP_WelcomeScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_WelcomeScreen_C::ExecuteUbergraph_WBP_WelcomeScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.ExecuteUbergraph_WBP_WelcomeScreen");

	UWBP_WelcomeScreen_C_ExecuteUbergraph_WBP_WelcomeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_WelcomeScreen_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_WelcomeScreen.WBP_WelcomeScreen_C.OnClose__DelegateSignature");

	UWBP_WelcomeScreen_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
