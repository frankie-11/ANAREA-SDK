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

// Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.Init
// (BlueprintCallable, BlueprintEvent)

void UWBP_DisplayLastMatchInfo_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.Init");

	UWBP_DisplayLastMatchInfo_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DisplayLastMatchInfo_C::BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_DisplayLastMatchInfo_C_BndEvt__WBP_MenuBtn_WithImg_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.ExecuteUbergraph_WBP_DisplayLastMatchInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_DisplayLastMatchInfo_C::ExecuteUbergraph_WBP_DisplayLastMatchInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.ExecuteUbergraph_WBP_DisplayLastMatchInfo");

	UWBP_DisplayLastMatchInfo_C_ExecuteUbergraph_WBP_DisplayLastMatchInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.OnRequestClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_DisplayLastMatchInfo_C::OnRequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_DisplayLastMatchInfo.WBP_DisplayLastMatchInfo_C.OnRequestClose__DelegateSignature");

	UWBP_DisplayLastMatchInfo_C_OnRequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
