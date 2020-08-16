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

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.ApplyAnim
struct ABP_PreviewPlayerInMenus_C_ApplyAnim_Params
{
	TEnumAsByte<E_PreviewPlayerIdleAnimType>*          Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipCharacterModel
struct ABP_PreviewPlayerInMenus_C_EquipCharacterModel_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>*     Materials;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.EquipBackpack
struct ABP_PreviewPlayerInMenus_C_EquipBackpack_Params
{
	class USkeletalMesh**                              Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Panning
struct ABP_PreviewPlayerInMenus_C_Panning_Params
{
	struct FVector2D*                                  Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Zoom
struct ABP_PreviewPlayerInMenus_C_Zoom_Params
{
	float*                                             ZoomDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C.Rotate
struct ABP_PreviewPlayerInMenus_C_Rotate_Params
{
	float*                                             DeltaYaw;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
