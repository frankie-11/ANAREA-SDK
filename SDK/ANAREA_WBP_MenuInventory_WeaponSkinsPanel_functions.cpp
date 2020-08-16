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

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          SelectAll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECosmeticsRarity*              SelectedRarity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature(bool* SelectAll, ECosmeticsRarity* SelectedRarity, struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature_Params params;
	params.SelectAll = SelectAll;
	params.SelectedRarity = SelectedRarity;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Construct");

	UWBP_MenuInventory_WeaponSkinsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UpdateDisplayedSlots
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  SelectedWeapon                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::UpdateDisplayedSlots(struct FName* SelectedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UpdateDisplayedSlots");

	UWBP_MenuInventory_WeaponSkinsPanel_C_UpdateDisplayedSlots_Params params;
	params.SelectedWeapon = SelectedWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SelectCosmetic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CosmeticName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::SelectCosmetic(struct FName* CosmeticName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SelectCosmetic");

	UWBP_MenuInventory_WeaponSkinsPanel_C_SelectCosmetic_Params params;
	params.CosmeticName = CosmeticName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCosmeticsManagerInMenus** CosmeticsManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::SetModels(class UCosmeticsManagerInMenus** CosmeticsManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModels");

	UWBP_MenuInventory_WeaponSkinsPanel_C_SetModels_Params params;
	params.CosmeticsManager = CosmeticsManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModel_CosmeticsManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCosmeticsManagerInMenus** CosmeticsManager               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::SetModel_CosmeticsManager(class UCosmeticsManagerInMenus** CosmeticsManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModel_CosmeticsManager");

	UWBP_MenuInventory_WeaponSkinsPanel_C_SetModel_CosmeticsManager_Params params;
	params.CosmeticsManager = CosmeticsManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BindToCosmeticsManager
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::BindToCosmeticsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BindToCosmeticsManager");

	UWBP_MenuInventory_WeaponSkinsPanel_C_BindToCosmeticsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UnbindFromCosmeticsManager
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::UnbindFromCosmeticsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UnbindFromCosmeticsManager");

	UWBP_MenuInventory_WeaponSkinsPanel_C_UnbindFromCosmeticsManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Destruct");

	UWBP_MenuInventory_WeaponSkinsPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnWeaponSkinEquipped
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::OnWeaponSkinEquipped(struct FName* weaponName, struct FName* skinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnWeaponSkinEquipped");

	UWBP_MenuInventory_WeaponSkinsPanel_C_OnWeaponSkinEquipped_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnAllWeaponSkinsModified
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::OnAllWeaponSkinsModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnAllWeaponSkinsModified");

	UWBP_MenuInventory_WeaponSkinsPanel_C_OnAllWeaponSkinsModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.InitSelection
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::InitSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.InitSelection");

	UWBP_MenuInventory_WeaponSkinsPanel_C_InitSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel");

	UWBP_MenuInventory_WeaponSkinsPanel_C_ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponPreviewRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  weaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::OnChangeWeaponPreviewRequested__DelegateSignature(struct FName* weaponName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_OnChangeWeaponPreviewRequested__DelegateSignature_Params params;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponSkinPreviewRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WeaponSkinName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  weaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_WeaponSkinsPanel_C::OnChangeWeaponSkinPreviewRequested__DelegateSignature(struct FName* WeaponSkinName, struct FName* weaponName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponSkinPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_OnChangeWeaponSkinPreviewRequested__DelegateSignature_Params params;
	params.WeaponSkinName = WeaponSkinName;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnCloseRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_WeaponSkinsPanel_C::OnCloseRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnCloseRequested__DelegateSignature");

	UWBP_MenuInventory_WeaponSkinsPanel_C_OnCloseRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
