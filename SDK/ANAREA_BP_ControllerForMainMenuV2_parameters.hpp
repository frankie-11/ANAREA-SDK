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

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveTick
struct ABP_ControllerForMainMenuV2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveBeginPlay
struct ABP_ControllerForMainMenuV2_C_ReceiveBeginPlay_Params
{
};

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.MoveCamToLocation
struct ABP_ControllerForMainMenuV2_C_MoveCamToLocation_Params
{
	int*                                               Frame;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MainMenuCamLocations>*               CamLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ReceiveCamReachLocation
struct ABP_ControllerForMainMenuV2_C_ReceiveCamReachLocation_Params
{
	TEnumAsByte<E_MainMenuCamLocations>*               CamLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.ExecuteUbergraph_BP_ControllerForMainMenuV2
struct ABP_ControllerForMainMenuV2_C_ExecuteUbergraph_BP_ControllerForMainMenuV2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C.OnCameraReachedLocation__DelegateSignature
struct ABP_ControllerForMainMenuV2_C_OnCameraReachedLocation__DelegateSignature_Params
{
	TEnumAsByte<E_MainMenuCamLocations>*               CamLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
