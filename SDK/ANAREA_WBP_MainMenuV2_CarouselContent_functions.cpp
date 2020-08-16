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

// Function WBP_MainMenuV2_CarouselContent.WBP_MainMenuV2_CarouselContent_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewsText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenuV2_CarouselContent_C::Init(struct FText* NewsText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MainMenuV2_CarouselContent.WBP_MainMenuV2_CarouselContent_C.Init");

	UWBP_MainMenuV2_CarouselContent_C_Init_Params params;
	params.NewsText = NewsText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
