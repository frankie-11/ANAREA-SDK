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

// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF");

	UWBP_PlayerStatsMenu_C_OnPlayFabResponse_3B7A473A475EE64A98BCF2850BAF67BF_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabBaseModel*      response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          successful                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8");

	UWBP_PlayerStatsMenu_C_OnPlayFabResponse_9AC15F7F468E263105DDACB85181EEB8_Params params;
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatsMenu_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.Init");

	UWBP_PlayerStatsMenu_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_BestMatches
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetUserDataResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::QueryResult_BestMatches(struct FClientGetUserDataResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_BestMatches");

	UWBP_PlayerStatsMenu_C_QueryResult_BestMatches_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_BestMatches
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::QueryError_BestMatches(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_BestMatches");

	UWBP_PlayerStatsMenu_C_QueryError_BestMatches_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_AllData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetPlayerStatisticsResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::QueryResult_AllData(struct FClientGetPlayerStatisticsResult* Result, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryResult_AllData");

	UWBP_PlayerStatsMenu_C_QueryResult_AllData_Params params;
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_AllData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabError*          Error                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                customData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::QueryError_AllData(struct FPlayFabError* Error, class UObject** customData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryError_AllData");

	UWBP_PlayerStatsMenu_C_QueryError_AllData_Params params;
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_PlayerStatsMenu_C_BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryBackendData
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatsMenu_C::QueryBackendData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.QueryBackendData");

	UWBP_PlayerStatsMenu_C_QueryBackendData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnLogin
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatsMenu_C::OnLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnLogin");

	UWBP_PlayerStatsMenu_C_OnLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.PreConstruct");

	UWBP_PlayerStatsMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.ExecuteUbergraph_WBP_PlayerStatsMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatsMenu_C::ExecuteUbergraph_WBP_PlayerStatsMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.ExecuteUbergraph_WBP_PlayerStatsMenu");

	UWBP_PlayerStatsMenu_C_ExecuteUbergraph_WBP_PlayerStatsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatsMenu_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatsMenu.WBP_PlayerStatsMenu_C.OnClose__DelegateSignature");

	UWBP_PlayerStatsMenu_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
