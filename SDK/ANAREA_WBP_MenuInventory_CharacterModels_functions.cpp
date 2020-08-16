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

// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          SelectAll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECosmeticsRarity*              SelectedRarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature(bool* SelectAll, ECosmeticsRarity* SelectedRarity, struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature");

	UWBP_MenuInventory_CharacterModels_C_BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature_Params params;
	params.SelectAll = SelectAll;
	params.SelectedRarity = SelectedRarity;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.Construct");

	UWBP_MenuInventory_CharacterModels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.UpdateDisplayedSlots
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::UpdateDisplayedSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.UpdateDisplayedSlots");

	UWBP_MenuInventory_CharacterModels_C_UpdateDisplayedSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SelectCosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CosmeticName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::SelectCosmetic(struct FName* CosmeticName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SelectCosmetic");

	UWBP_MenuInventory_CharacterModels_C_SelectCosmetic_Params params;
	params.CosmeticName = CosmeticName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_MenuInventory_CharacterModels_C_BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_MenuInventory_CharacterModels_C_BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SetModels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCosmeticsManagerInMenus** CosmeticsManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::SetModels(class UCosmeticsManagerInMenus** CosmeticsManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SetModels");

	UWBP_MenuInventory_CharacterModels_C_SetModels_Params params;
	params.CosmeticsManager = CosmeticsManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SetModel_CosmeticsManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCosmeticsManagerInMenus** CosmeticsManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::SetModel_CosmeticsManager(class UCosmeticsManagerInMenus** CosmeticsManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.SetModel_CosmeticsManager");

	UWBP_MenuInventory_CharacterModels_C_SetModel_CosmeticsManager_Params params;
	params.CosmeticsManager = CosmeticsManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BindToCosmeticsManager
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::BindToCosmeticsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.BindToCosmeticsManager");

	UWBP_MenuInventory_CharacterModels_C_BindToCosmeticsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.UnbindFromCosmeticsManager
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::UnbindFromCosmeticsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.UnbindFromCosmeticsManager");

	UWBP_MenuInventory_CharacterModels_C_UnbindFromCosmeticsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.Destruct");

	UWBP_MenuInventory_CharacterModels_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnBackpackEquipped
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  backpackName                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::OnBackpackEquipped(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnBackpackEquipped");

	UWBP_MenuInventory_CharacterModels_C_OnBackpackEquipped_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnAllWeaponSkinsModified
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::OnAllWeaponSkinsModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnAllWeaponSkinsModified");

	UWBP_MenuInventory_CharacterModels_C_OnAllWeaponSkinsModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.InitSelection
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::InitSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.InitSelection");

	UWBP_MenuInventory_CharacterModels_C_InitSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.ExecuteUbergraph_WBP_MenuInventory_CharacterModels
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::ExecuteUbergraph_WBP_MenuInventory_CharacterModels(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.ExecuteUbergraph_WBP_MenuInventory_CharacterModels");

	UWBP_MenuInventory_CharacterModels_C_ExecuteUbergraph_WBP_MenuInventory_CharacterModels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnChangeCharacterModelPreviewRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  backpackName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_CharacterModels_C::OnChangeCharacterModelPreviewRequested__DelegateSignature(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnChangeCharacterModelPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_CharacterModels_C_OnChangeCharacterModelPreviewRequested__DelegateSignature_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnCloseRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_CharacterModels_C::OnCloseRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_CharacterModels.WBP_MenuInventory_CharacterModels_C.OnCloseRequested__DelegateSignature");

	UWBP_MenuInventory_CharacterModels_C_OnCloseRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
