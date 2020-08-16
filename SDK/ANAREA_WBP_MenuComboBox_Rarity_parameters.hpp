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

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ReceiveComboBoxSelectionChanged
struct UWBP_MenuComboBox_Rarity_C_ReceiveComboBoxSelectionChanged_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.PreConstruct
struct UWBP_MenuComboBox_Rarity_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnInitialized
struct UWBP_MenuComboBox_Rarity_C_OnInitialized_Params
{
};

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.ExecuteUbergraph_WBP_MenuComboBox_Rarity
struct UWBP_MenuComboBox_Rarity_C_ExecuteUbergraph_WBP_MenuComboBox_Rarity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C.OnRaritySelected__DelegateSignature
struct UWBP_MenuComboBox_Rarity_C_OnRaritySelected__DelegateSignature_Params
{
	bool*                                              SelectAll;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECosmeticsRarity*                                  SelectedRarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
