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

// Function WBP_MenuInventory.WBP_MenuInventory_C.OnDragOver
struct UWBP_MenuInventory_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C
struct UWBP_MenuInventory_C_OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      weaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.Construct
struct UWBP_MenuInventory_C_Construct_Params
{
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      WeaponSkinName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      weaponName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      backpackName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature
struct UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature_Params
{
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature
struct UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature_Params
{
	struct FName*                                      characterModelName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.ExecuteUbergraph_WBP_MenuInventory
struct UWBP_MenuInventory_C_ExecuteUbergraph_WBP_MenuInventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory.WBP_MenuInventory_C.OnCloseRequested__DelegateSignature
struct UWBP_MenuInventory_C_OnCloseRequested__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
