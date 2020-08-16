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

// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.PreConstruct
struct UWBP_MainMenuV2_Carousel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNews
struct UWBP_MainMenuV2_Carousel_C_DisplayNews_Params
{
	int*                                               NewsIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNextNews
struct UWBP_MainMenuV2_Carousel_C_DisplayNextNews_Params
{
};

// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.ExecuteUbergraph_WBP_MainMenuV2_Carousel
struct UWBP_MainMenuV2_Carousel_C_ExecuteUbergraph_WBP_MainMenuV2_Carousel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
