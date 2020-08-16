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

// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryGetMagazineMeshComponent
struct ABP_BaseShootingWeapon_C_TryGetMagazineMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryLaunchAnimationByTag
struct ABP_BaseShootingWeapon_C_TryLaunchAnimationByTag_Params
{
	struct FGameplayTag*                               Tag;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ReceiveWeaponSkinChanged
struct ABP_BaseShootingWeapon_C_ReceiveWeaponSkinChanged_Params
{
};

// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ExecuteUbergraph_BP_BaseShootingWeapon
struct ABP_BaseShootingWeapon_C_ExecuteUbergraph_BP_BaseShootingWeapon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
