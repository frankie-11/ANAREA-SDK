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

// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryGetMagazineMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_BaseShootingWeapon_C::TryGetMagazineMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryGetMagazineMeshComponent");

	ABP_BaseShootingWeapon_C_TryGetMagazineMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryLaunchAnimationByTag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag*           Tag                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseShootingWeapon_C::TryLaunchAnimationByTag(struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.TryLaunchAnimationByTag");

	ABP_BaseShootingWeapon_C_TryLaunchAnimationByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ReceiveWeaponSkinChanged
// (Event, Public, BlueprintEvent)

void ABP_BaseShootingWeapon_C::ReceiveWeaponSkinChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ReceiveWeaponSkinChanged");

	ABP_BaseShootingWeapon_C_ReceiveWeaponSkinChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ExecuteUbergraph_BP_BaseShootingWeapon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseShootingWeapon_C::ExecuteUbergraph_BP_BaseShootingWeapon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseShootingWeapon.BP_BaseShootingWeapon_C.ExecuteUbergraph_BP_BaseShootingWeapon");

	ABP_BaseShootingWeapon_C_ExecuteUbergraph_BP_BaseShootingWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
