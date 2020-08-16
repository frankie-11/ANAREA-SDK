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

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.ApplyAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PreviewPlayerIdleAnimType>* Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreviewPlayerInMenus_C::ApplyAnim(TEnumAsByte<E_PreviewPlayerIdleAnimType>* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.ApplyAnim");

	ABP_PreviewPlayerInMenus_C_ApplyAnim_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipCharacterModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FName, class UMaterialInterface*>* Materials                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PreviewPlayerInMenus_C::EquipCharacterModel(class USkeletalMesh** SkeletalMesh, TMap<struct FName, class UMaterialInterface*>* Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipCharacterModel");

	ABP_PreviewPlayerInMenus_C_EquipCharacterModel_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.Materials = Materials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipBackpack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface**     Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreviewPlayerInMenus_C::EquipBackpack(class USkeletalMesh** Mesh, class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipBackpack");

	ABP_PreviewPlayerInMenus_C_EquipBackpack_Params params;
	params.Mesh = Mesh;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Panning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreviewPlayerInMenus_C::Panning(struct FVector2D* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Panning");

	ABP_PreviewPlayerInMenus_C_Panning_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Zoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ZoomDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreviewPlayerInMenus_C::Zoom(float* ZoomDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Zoom");

	ABP_PreviewPlayerInMenus_C_Zoom_Params params;
	params.ZoomDelta = ZoomDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Rotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaYaw                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PreviewPlayerInMenus_C::Rotate(float* DeltaYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Rotate");

	ABP_PreviewPlayerInMenus_C_Rotate_Params params;
	params.DeltaYaw = DeltaYaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
