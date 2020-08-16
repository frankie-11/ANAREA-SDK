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

// Function BP_Base_Rifle.BP_Base_Rifle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Base_Rifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Rifle.BP_Base_Rifle_C.ReceiveBeginPlay");

	ABP_Base_Rifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_Rifle.BP_Base_Rifle_C.ExecuteUbergraph_BP_Base_Rifle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Rifle_C::ExecuteUbergraph_BP_Base_Rifle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Rifle.BP_Base_Rifle_C.ExecuteUbergraph_BP_Base_Rifle");

	ABP_Base_Rifle_C_ExecuteUbergraph_BP_Base_Rifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
