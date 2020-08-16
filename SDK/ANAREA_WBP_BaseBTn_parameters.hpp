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

// Function WBP_BaseBTn.WBP_BaseBtn_C.SetLabelColorAndOpacity
struct UWBP_BaseBtn_C_SetLabelColorAndOpacity_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BaseBTn.WBP_BaseBtn_C.OnUnhovered__DelegateSignature
struct UWBP_BaseBtn_C_OnUnhovered__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BaseBTn.WBP_BaseBtn_C.OnHovered__DelegateSignature
struct UWBP_BaseBtn_C_OnHovered__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BaseBTn.WBP_BaseBtn_C.OnClicked__DelegateSignature
struct UWBP_BaseBtn_C_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
