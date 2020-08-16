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

// Function WBP_MenuTabs.WBP_MenuTabs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuTabs_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuTabs.WBP_MenuTabs_C.PreConstruct");

	UWBP_MenuTabs_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuTabs_C::OnBtnUnhovered(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnUnhovered");

	UWBP_MenuTabs_C_OnBtnUnhovered_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuTabs_C::OnBtnHovered(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnHovered");

	UWBP_MenuTabs_C_OnBtnHovered_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuTabs_C::OnBtnClicked(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnClicked");

	UWBP_MenuTabs_C_OnBtnClicked_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuTabs.WBP_MenuTabs_C.ExecuteUbergraph_WBP_MenuTabs
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuTabs_C::ExecuteUbergraph_WBP_MenuTabs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuTabs.WBP_MenuTabs_C.ExecuteUbergraph_WBP_MenuTabs");

	UWBP_MenuTabs_C_ExecuteUbergraph_WBP_MenuTabs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
