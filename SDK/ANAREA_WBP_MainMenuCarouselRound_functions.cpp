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

// Function WBP_MainMenuCarouselRound.WBP_MainMenuCarouselRound_C.Unhighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenuCarouselRound_C::Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuCarouselRound.WBP_MainMenuCarouselRound_C.Unhighlight");

	UWBP_MainMenuCarouselRound_C_Unhighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MainMenuCarouselRound.WBP_MainMenuCarouselRound_C.Highlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenuCarouselRound_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuCarouselRound.WBP_MainMenuCarouselRound_C.Highlight");

	UWBP_MainMenuCarouselRound_C_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
