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

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsUnlocked
struct UWBP_CosmeticItemWidget_C_SetIsUnlocked_Params
{
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsEquipped
struct UWBP_CosmeticItemWidget_C_SetIsEquipped_Params
{
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.UnSelect
struct UWBP_CosmeticItemWidget_C_UnSelect_Params
{
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.Select
struct UWBP_CosmeticItemWidget_C_Select_Params
{
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseButtonDown
struct UWBP_CosmeticItemWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromWeaponSkin
struct UWBP_CosmeticItemWidget_C_InitFromWeaponSkin_Params
{
	struct FWeaponSkinBackendInfo*                     WeaponSkinInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.PreConstruct
struct UWBP_CosmeticItemWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitBase
struct UWBP_CosmeticItemWidget_C_InitBase_Params
{
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	ECosmeticsRarity*                                  Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromBackpackInfo
struct UWBP_CosmeticItemWidget_C_InitFromBackpackInfo_Params
{
	struct FBackpackBackendInfo*                       BackpackInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromCharacterModelInfo
struct UWBP_CosmeticItemWidget_C_InitFromCharacterModelInfo_Params
{
	struct FCharacterModelBackendInfo*                 CharacterModelInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseEnter
struct UWBP_CosmeticItemWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.ExecuteUbergraph_WBP_CosmeticItemWidget
struct UWBP_CosmeticItemWidget_C_ExecuteUbergraph_WBP_CosmeticItemWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnClicked__DelegateSignature
struct UWBP_CosmeticItemWidget_C_OnClicked__DelegateSignature_Params
{
	struct FName*                                      CosmeticName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
