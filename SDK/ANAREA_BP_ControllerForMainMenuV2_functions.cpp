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

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControllerForMainMenuV2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveTick");

	ABP_ControllerForMainMenuV2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ControllerForMainMenuV2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveBeginPlay");

	ABP_ControllerForMainMenuV2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.MoveCamToLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Frame                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MainMenuCamLocations>* CamLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControllerForMainMenuV2_C::MoveCamToLocation(int* Frame, TEnumAsByte<E_MainMenuCamLocations>* CamLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.MoveCamToLocation");

	ABP_ControllerForMainMenuV2_C_MoveCamToLocation_Params params;
	params.Frame = Frame;
	params.CamLocation = CamLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveCamReachLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MainMenuCamLocations>* CamLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControllerForMainMenuV2_C::ReceiveCamReachLocation(TEnumAsByte<E_MainMenuCamLocations>* CamLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveCamReachLocation");

	ABP_ControllerForMainMenuV2_C_ReceiveCamReachLocation_Params params;
	params.CamLocation = CamLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ExecuteUbergraph_BP_ControllerForMainMenuV2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControllerForMainMenuV2_C::ExecuteUbergraph_BP_ControllerForMainMenuV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ExecuteUbergraph_BP_ControllerForMainMenuV2");

	ABP_ControllerForMainMenuV2_C_ExecuteUbergraph_BP_ControllerForMainMenuV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.OnCameraReachedLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MainMenuCamLocations>* CamLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControllerForMainMenuV2_C::OnCameraReachedLocation__DelegateSignature(TEnumAsByte<E_MainMenuCamLocations>* CamLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.OnCameraReachedLocation__DelegateSignature");

	ABP_ControllerForMainMenuV2_C_OnCameraReachedLocation__DelegateSignature_Params params;
	params.CamLocation = CamLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
