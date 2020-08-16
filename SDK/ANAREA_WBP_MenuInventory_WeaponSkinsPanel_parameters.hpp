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

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuComboBox_K2Node_ComponentBoundEvent_0_OnComboBoxSelectionChanged__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuComboBox_Rarity_K2Node_ComponentBoundEvent_1_OnRaritySelected__DelegateSignature_Params
{
	bool*                                              SelectAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECosmeticsRarity*                                  SelectedRarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Construct
struct UWBP_MenuInventory_WeaponSkinsPanel_C_Construct_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UpdateDisplayedSlots
struct UWBP_MenuInventory_WeaponSkinsPanel_C_UpdateDisplayedSlots_Params
{
	struct FName*                                      SelectedWeapon;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SelectCosmetic
struct UWBP_MenuInventory_WeaponSkinsPanel_C_SelectCosmetic_Params
{
	struct FName*                                      CosmeticName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__WBP_MenuBtn_WithImg_407_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_BndEvt__btn_Equip_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModels
struct UWBP_MenuInventory_WeaponSkinsPanel_C_SetModels_Params
{
	class UCosmeticsManagerInMenus**                   CosmeticsManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.SetModel_CosmeticsManager
struct UWBP_MenuInventory_WeaponSkinsPanel_C_SetModel_CosmeticsManager_Params
{
	class UCosmeticsManagerInMenus**                   CosmeticsManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.BindToCosmeticsManager
struct UWBP_MenuInventory_WeaponSkinsPanel_C_BindToCosmeticsManager_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.UnbindFromCosmeticsManager
struct UWBP_MenuInventory_WeaponSkinsPanel_C_UnbindFromCosmeticsManager_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.Destruct
struct UWBP_MenuInventory_WeaponSkinsPanel_C_Destruct_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnWeaponSkinEquipped
struct UWBP_MenuInventory_WeaponSkinsPanel_C_OnWeaponSkinEquipped_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnAllWeaponSkinsModified
struct UWBP_MenuInventory_WeaponSkinsPanel_C_OnAllWeaponSkinsModified_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.InitSelection
struct UWBP_MenuInventory_WeaponSkinsPanel_C_InitSelection_Params
{
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel
struct UWBP_MenuInventory_WeaponSkinsPanel_C_ExecuteUbergraph_WBP_MenuInventory_WeaponSkinsPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_OnChangeWeaponPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      weaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnChangeWeaponSkinPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_OnChangeWeaponSkinPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      WeaponSkinName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      weaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_WeaponSkinsPanel.WBP_MenuInventory_WeaponSkinsPanel_C.OnCloseRequested__DelegateSignature
struct UWBP_MenuInventory_WeaponSkinsPanel_C_OnCloseRequested__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
