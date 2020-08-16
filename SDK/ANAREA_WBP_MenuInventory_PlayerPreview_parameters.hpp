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

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseWheel
struct UWBP_MenuInventory_PlayerPreview_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragOver
struct UWBP_MenuInventory_PlayerPreview_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragDetected
struct UWBP_MenuInventory_PlayerPreview_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseButtonDown
struct UWBP_MenuInventory_PlayerPreview_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.Construct
struct UWBP_MenuInventory_PlayerPreview_C_Construct_Params
{
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ApplyAnimOnPreviewPlayer
struct UWBP_MenuInventory_PlayerPreview_C_ApplyAnimOnPreviewPlayer_Params
{
	TEnumAsByte<E_PreviewPlayerIdleAnimType>*          AnimType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ExecuteUbergraph_WBP_MenuInventory_PlayerPreview
struct UWBP_MenuInventory_PlayerPreview_C_ExecuteUbergraph_WBP_MenuInventory_PlayerPreview_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
