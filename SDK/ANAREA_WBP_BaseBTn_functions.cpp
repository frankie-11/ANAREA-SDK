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

// Function WBP_BaseBTn.WBP_BaseBtn_C.SetLabelColorAndOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BaseBtn_C::SetLabelColorAndOpacity(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BaseBTn.WBP_BaseBtn_C.SetLabelColorAndOpacity");

	UWBP_BaseBtn_C_SetLabelColorAndOpacity_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BaseBTn.WBP_BaseBtn_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BaseBtn_C::OnUnhovered__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BaseBTn.WBP_BaseBtn_C.OnUnhovered__DelegateSignature");

	UWBP_BaseBtn_C_OnUnhovered__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BaseBTn.WBP_BaseBtn_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BaseBtn_C::OnHovered__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BaseBTn.WBP_BaseBtn_C.OnHovered__DelegateSignature");

	UWBP_BaseBtn_C_OnHovered__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BaseBTn.WBP_BaseBtn_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BaseBtn_C::OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BaseBTn.WBP_BaseBtn_C.OnClicked__DelegateSignature");

	UWBP_BaseBtn_C_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
