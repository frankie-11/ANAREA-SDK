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

// Function BP_MaleLoopAnimation.BP_MaleLoopAnimation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MaleLoopAnimation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaleLoopAnimation.BP_MaleLoopAnimation_C.ReceiveBeginPlay");

	ABP_MaleLoopAnimation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MaleLoopAnimation.BP_MaleLoopAnimation_C.ExecuteUbergraph_BP_MaleLoopAnimation
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaleLoopAnimation_C::ExecuteUbergraph_BP_MaleLoopAnimation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MaleLoopAnimation.BP_MaleLoopAnimation_C.ExecuteUbergraph_BP_MaleLoopAnimation");

	ABP_MaleLoopAnimation_C_ExecuteUbergraph_BP_MaleLoopAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
