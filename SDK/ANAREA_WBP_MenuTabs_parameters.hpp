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

// Function WBP_MenuTabs.WBP_MenuTabs_C.PreConstruct
struct UWBP_MenuTabs_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnUnhovered
struct UWBP_MenuTabs_C_OnBtnUnhovered_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnHovered
struct UWBP_MenuTabs_C_OnBtnHovered_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuTabs.WBP_MenuTabs_C.OnBtnClicked
struct UWBP_MenuTabs_C_OnBtnClicked_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuTabs.WBP_MenuTabs_C.ExecuteUbergraph_WBP_MenuTabs
struct UWBP_MenuTabs_C_ExecuteUbergraph_WBP_MenuTabs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
