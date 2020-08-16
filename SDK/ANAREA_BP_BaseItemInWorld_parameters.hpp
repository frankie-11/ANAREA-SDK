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

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.CreateDynMatIfNecessary
struct ABP_BaseItemInWorld_C_CreateDynMatIfNecessary_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetHighlightColor
struct ABP_BaseItemInWorld_C_SetHighlightColor_Params
{
	struct FGameplayTag*                               ItemTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ReceiveBeginPlay
struct ABP_BaseItemInWorld_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetStaticMesh
struct ABP_BaseItemInWorld_C_SetStaticMesh_Params
{
	struct FItemInstance*                              ItemInstance;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.InitRotAndLocFromSocketIfPossible
struct ABP_BaseItemInWorld_C_InitRotAndLocFromSocketIfPossible_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_ShowOulines
struct ABP_BaseItemInWorld_C_BP_ShowOulines_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.PlaceItemWithPhysics
struct ABP_BaseItemInWorld_C_PlaceItemWithPhysics_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_HideOulines
struct ABP_BaseItemInWorld_C_BP_HideOulines_Params
{
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.K2_Init
struct ABP_BaseItemInWorld_C_K2_Init_Params
{
	struct FItemInstance*                              InItem;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ExecuteUbergraph_BP_BaseItemInWorld
struct ABP_BaseItemInWorld_C_ExecuteUbergraph_BP_BaseItemInWorld_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
