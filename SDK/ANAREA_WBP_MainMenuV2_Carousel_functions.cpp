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

// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuV2_Carousel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.PreConstruct");

	UWBP_MainMenuV2_Carousel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNews
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewsIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuV2_Carousel_C::DisplayNews(int* NewsIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNews");

	UWBP_MainMenuV2_Carousel_C_DisplayNews_Params params;
	params.NewsIndex = NewsIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNextNews
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenuV2_Carousel_C::DisplayNextNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.DisplayNextNews");

	UWBP_MainMenuV2_Carousel_C_DisplayNextNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.ExecuteUbergraph_WBP_MainMenuV2_Carousel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MainMenuV2_Carousel_C::ExecuteUbergraph_WBP_MainMenuV2_Carousel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuV2_Carousel.WBP_MainMenuV2_Carousel_C.ExecuteUbergraph_WBP_MainMenuV2_Carousel");

	UWBP_MainMenuV2_Carousel_C_ExecuteUbergraph_WBP_MainMenuV2_Carousel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
