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

// Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.BndEvt__WBP_MenuSettings_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenuSettings_C::BndEvt__WBP_MenuSettings_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.BndEvt__WBP_MenuSettings_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UWBP_MainMenuSettings_C_BndEvt__WBP_MenuSettings_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.ExecuteUbergraph_WBP_MainMenuSettings
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuSettings_C::ExecuteUbergraph_WBP_MainMenuSettings(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.ExecuteUbergraph_WBP_MainMenuSettings");

	UWBP_MainMenuSettings_C_ExecuteUbergraph_WBP_MainMenuSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenuSettings_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuSettings.WBP_MainMenuSettings_C.OnClose__DelegateSignature");

	UWBP_MainMenuSettings_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
