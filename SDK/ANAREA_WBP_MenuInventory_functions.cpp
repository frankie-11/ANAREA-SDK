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

// Function WBP_MenuInventory.WBP_MenuInventory_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MenuInventory_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.OnDragOver");

	UWBP_MenuInventory_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C");

	UWBP_MenuInventory_C_OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  weaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature(struct FName* weaponName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature_Params params;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.Construct");

	UWBP_MenuInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  WeaponSkinName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  weaponName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature(struct FName* WeaponSkinName, struct FName* weaponName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature_Params params;
	params.WeaponSkinName = WeaponSkinName;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  backpackName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature
// (BlueprintEvent)

void UWBP_MenuInventory_C::BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature");

	UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  characterModelName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature(struct FName* characterModelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature");

	UWBP_MenuInventory_C_BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature_Params params;
	params.characterModelName = characterModelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.ExecuteUbergraph_WBP_MenuInventory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_C::ExecuteUbergraph_WBP_MenuInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.ExecuteUbergraph_WBP_MenuInventory");

	UWBP_MenuInventory_C_ExecuteUbergraph_WBP_MenuInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory.WBP_MenuInventory_C.OnCloseRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MenuInventory_C::OnCloseRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory.WBP_MenuInventory_C.OnCloseRequested__DelegateSignature");

	UWBP_MenuInventory_C_OnCloseRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
