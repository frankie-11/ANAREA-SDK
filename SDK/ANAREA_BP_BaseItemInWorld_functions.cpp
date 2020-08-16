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

// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.CreateDynMatIfNecessary
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseItemInWorld_C::CreateDynMatIfNecessary()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.CreateDynMatIfNecessary");

	ABP_BaseItemInWorld_C_CreateDynMatIfNecessary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetHighlightColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           ItemTag                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseItemInWorld_C::SetHighlightColor(struct FGameplayTag* ItemTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetHighlightColor");

	ABP_BaseItemInWorld_C_SetHighlightColor_Params params;
	params.ItemTag = ItemTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseItemInWorld_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ReceiveBeginPlay");

	ABP_BaseItemInWorld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetStaticMesh
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemInstance*          ItemInstance                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseItemInWorld_C::SetStaticMesh(struct FItemInstance* ItemInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.SetStaticMesh");

	ABP_BaseItemInWorld_C_SetStaticMesh_Params params;
	params.ItemInstance = ItemInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.InitRotAndLocFromSocketIfPossible
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseItemInWorld_C::InitRotAndLocFromSocketIfPossible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.InitRotAndLocFromSocketIfPossible");

	ABP_BaseItemInWorld_C_InitRotAndLocFromSocketIfPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_ShowOulines
// (Event, Public, BlueprintEvent)

void ABP_BaseItemInWorld_C::BP_ShowOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_ShowOulines");

	ABP_BaseItemInWorld_C_BP_ShowOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.PlaceItemWithPhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseItemInWorld_C::PlaceItemWithPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.PlaceItemWithPhysics");

	ABP_BaseItemInWorld_C_PlaceItemWithPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_HideOulines
// (Event, Public, BlueprintEvent)

void ABP_BaseItemInWorld_C::BP_HideOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.BP_HideOulines");

	ABP_BaseItemInWorld_C_BP_HideOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.K2_Init
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemInstance*          InItem                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseItemInWorld_C::K2_Init(struct FItemInstance* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.K2_Init");

	ABP_BaseItemInWorld_C_K2_Init_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ExecuteUbergraph_BP_BaseItemInWorld
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseItemInWorld_C::ExecuteUbergraph_BP_BaseItemInWorld(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseItemInWorld.BP_BaseItemInWorld_C.ExecuteUbergraph_BP_BaseItemInWorld");

	ABP_BaseItemInWorld_C_ExecuteUbergraph_BP_BaseItemInWorld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
