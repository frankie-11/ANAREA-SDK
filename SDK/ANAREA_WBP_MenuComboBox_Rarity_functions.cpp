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

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ReceiveComboBoxSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuComboBox_Rarity_C::ReceiveComboBoxSelectionChanged(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ReceiveComboBoxSelectionChanged");

	UWBP_MenuComboBox_Rarity_C_ReceiveComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuComboBox_Rarity_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.PreConstruct");

	UWBP_MenuComboBox_Rarity_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuComboBox_Rarity_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnInitialized");

	UWBP_MenuComboBox_Rarity_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ExecuteUbergraph_WBP_MenuComboBox_Rarity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuComboBox_Rarity_C::ExecuteUbergraph_WBP_MenuComboBox_Rarity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ExecuteUbergraph_WBP_MenuComboBox_Rarity");

	UWBP_MenuComboBox_Rarity_C_ExecuteUbergraph_WBP_MenuComboBox_Rarity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnRaritySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SelectAll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECosmeticsRarity*              SelectedRarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuComboBox_Rarity_C::OnRaritySelected__DelegateSignature(bool* SelectAll, ECosmeticsRarity* SelectedRarity, struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnRaritySelected__DelegateSignature");

	UWBP_MenuComboBox_Rarity_C_OnRaritySelected__DelegateSignature_Params params;
	params.SelectAll = SelectAll;
	params.SelectedRarity = SelectedRarity;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
