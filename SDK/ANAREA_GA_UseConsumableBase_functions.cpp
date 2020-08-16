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

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.DummyMatchDelegateFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffect*  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           NewParam1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::DummyMatchDelegateFunction(struct FActiveGameplayEffect* NewParam, bool* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.DummyMatchDelegateFunction");

	UGA_UseConsumableBase_C_DummyMatchDelegateFunction_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent*     LinkedEquipmentInventory       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::TryGetSlotIndex(class UInventoryComponent** Inventory, bool* valid, class UInventoryComponent** LinkedEquipmentInventory, int* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetSlotIndex");

	UGA_UseConsumableBase_C_TryGetSlotIndex_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (valid != nullptr)
		*valid = params.valid;
	if (LinkedEquipmentInventory != nullptr)
		*LinkedEquipmentInventory = params.LinkedEquipmentInventory;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableGameplayEffectClass
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  GameplayEffectClass            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FirstWaitTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_UseConsumableBase_C::TryGetConsumableGameplayEffectClass(class UInventoryComponent** Inventory, class UClass** GameplayEffectClass, float* FirstWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableGameplayEffectClass");

	UGA_UseConsumableBase_C_TryGetConsumableGameplayEffectClass_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayEffectClass != nullptr)
		*GameplayEffectClass = params.GameplayEffectClass;
	if (FirstWaitTime != nullptr)
		*FirstWaitTime = params.FirstWaitTime;

	return params.ReturnValue;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableItemOnSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FItemInstance           outItem                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_UseConsumableBase_C::TryGetConsumableItemOnSlot(class UInventoryComponent** Inventory, struct FItemInstance* outItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableItemOnSlot");

	UGA_UseConsumableBase_C_TryGetConsumableItemOnSlot_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outItem != nullptr)
		*outItem = params.outItem;

	return params.ReturnValue;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_UseConsumableBase_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CanActivateAbility");

	UGA_UseConsumableBase_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE");

	UGA_UseConsumableBase_C_OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE");

	UGA_UseConsumableBase_C_OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE");

	UGA_UseConsumableBase_C_OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE");

	UGA_UseConsumableBase_C_OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE");

	UGA_UseConsumableBase_C_OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnFinish_E21EBB5943095B823CA63F8739B6D5B7
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnFinish_E21EBB5943095B823CA63F8739B6D5B7()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnFinish_E21EBB5943095B823CA63F8739B6D5B7");

	UGA_UseConsumableBase_C_OnFinish_E21EBB5943095B823CA63F8739B6D5B7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B");

	UGA_UseConsumableBase_C_OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4
// (BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4");

	UGA_UseConsumableBase_C_OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealCanceled
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::ClientCallOnHealCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealCanceled");

	UGA_UseConsumableBase_C_ClientCallOnHealCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealEndApply
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void UGA_UseConsumableBase_C::ClientCallOnHealEndApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealEndApply");

	UGA_UseConsumableBase_C_ClientCallOnHealEndApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_UseConsumableBase_C::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CommitExecute");

	UGA_UseConsumableBase_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_OnEndAbility");

	UGA_UseConsumableBase_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.PlayAnim
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 UsedGameplayEffect             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::PlayAnim(class UClass** UsedGameplayEffect, float* WaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.PlayAnim");

	UGA_UseConsumableBase_C_PlayAnim_Params params;
	params.UsedGameplayEffect = UsedGameplayEffect;
	params.WaitTime = WaitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_UseConsumableBase_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_ActivateAbility");

	UGA_UseConsumableBase_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnConsumableEffectBeginWait
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         WaitTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 UsedGameplayEffect             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::ClientCallOnConsumableEffectBeginWait(float* WaitTime, class UClass** UsedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnConsumableEffectBeginWait");

	UGA_UseConsumableBase_C_ClientCallOnConsumableEffectBeginWait_Params params;
	params.WaitTime = WaitTime;
	params.UsedGameplayEffect = UsedGameplayEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealBeginApply
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ApplicationTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 UsedGameplayEffect             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::ClientCallOnHealBeginApply(float* ApplicationTime, class UClass** UsedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealBeginApply");

	UGA_UseConsumableBase_C_ClientCallOnHealBeginApply_Params params;
	params.ApplicationTime = ApplicationTime;
	params.UsedGameplayEffect = UsedGameplayEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ExecuteUbergraph_GA_UseConsumableBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_UseConsumableBase_C::ExecuteUbergraph_GA_UseConsumableBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_UseConsumableBase.GA_UseConsumableBase_C.ExecuteUbergraph_GA_UseConsumableBase");

	UGA_UseConsumableBase_C_ExecuteUbergraph_GA_UseConsumableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
