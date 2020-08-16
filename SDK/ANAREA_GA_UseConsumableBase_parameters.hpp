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

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.DummyMatchDelegateFunction
struct UGA_UseConsumableBase_C_DummyMatchDelegateFunction_Params
{
	struct FActiveGameplayEffect*                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetSlotIndex
struct UGA_UseConsumableBase_C_TryGetSlotIndex_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent*                         LinkedEquipmentInventory;                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableGameplayEffectClass
struct UGA_UseConsumableBase_C_TryGetConsumableGameplayEffectClass_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      GameplayEffectClass;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FirstWaitTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.TryGetConsumableItemOnSlot
struct UGA_UseConsumableBase_C_TryGetConsumableItemOnSlot_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FItemInstance                               outItem;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CanActivateAbility
struct UGA_UseConsumableBase_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE
struct UGA_UseConsumableBase_C_OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE_Params
{
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE
struct UGA_UseConsumableBase_C_OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE
struct UGA_UseConsumableBase_C_OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE
struct UGA_UseConsumableBase_C_OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE
struct UGA_UseConsumableBase_C_OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnFinish_E21EBB5943095B823CA63F8739B6D5B7
struct UGA_UseConsumableBase_C_OnFinish_E21EBB5943095B823CA63F8739B6D5B7_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B
struct UGA_UseConsumableBase_C_OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4
struct UGA_UseConsumableBase_C_OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealCanceled
struct UGA_UseConsumableBase_C_ClientCallOnHealCanceled_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealEndApply
struct UGA_UseConsumableBase_C_ClientCallOnHealEndApply_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_CommitExecute
struct UGA_UseConsumableBase_C_K2_CommitExecute_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_OnEndAbility
struct UGA_UseConsumableBase_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.PlayAnim
struct UGA_UseConsumableBase_C_PlayAnim_Params
{
	class UClass**                                     UsedGameplayEffect;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.K2_ActivateAbility
struct UGA_UseConsumableBase_C_K2_ActivateAbility_Params
{
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnConsumableEffectBeginWait
struct UGA_UseConsumableBase_C_ClientCallOnConsumableEffectBeginWait_Params
{
	float*                                             WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     UsedGameplayEffect;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ClientCallOnHealBeginApply
struct UGA_UseConsumableBase_C_ClientCallOnHealBeginApply_Params
{
	float*                                             ApplicationTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     UsedGameplayEffect;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_UseConsumableBase.GA_UseConsumableBase_C.ExecuteUbergraph_GA_UseConsumableBase
struct UGA_UseConsumableBase_C_ExecuteUbergraph_GA_UseConsumableBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
