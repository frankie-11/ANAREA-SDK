#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_UseConsumableBase.GA_UseConsumableBase_C
// 0x0096 (0x049E - 0x0408)
class UGA_UseConsumableBase_C : public UMontageBasedAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                ConsumableSlotTag;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SlotToUse;                                                // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UseLocationThreshold;                                     // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPawnVelocityToAllowActivation;                         // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApplicationTime;                                          // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      UsedGameplayEffect;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UInventoryComponent*                         LinkedInventory;                                          // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LocationThresholdToAllowActivation;                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UseEquipmentInventory;                                    // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ForceDontUseAnimations;                                   // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, class UAnimMontage*>           MontagePerGameplayEffect;                                 // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle                 CurrentEffectHandle;                                      // 0x0490(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WaitTime;                                                 // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DontRemoveEffectWhenAbilityEnds;                          // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      DontEndAbilityWhenMoving;                                 // 0x049D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_UseConsumableBase.GA_UseConsumableBase_C");
		return ptr;
	}


	void DummyMatchDelegateFunction(struct FActiveGameplayEffect* NewParam, bool* NewParam1);
	void TryGetSlotIndex(class UInventoryComponent** Inventory, bool* valid, class UInventoryComponent** LinkedEquipmentInventory, int* Output);
	bool TryGetConsumableGameplayEffectClass(class UInventoryComponent** Inventory, class UClass** GameplayEffectClass, float* FirstWaitTime);
	bool TryGetConsumableItemOnSlot(class UInventoryComponent** Inventory, struct FItemInstance* outItem);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void OnInventorySlotContextReceived_76195F6F47A5C155E7CCEC8B671038DE(class UInventoryComponent** Inventory, int* slotIndex);
	void OnCancelled_6AFD10864362D6E83076B0A8B0EE9BBE();
	void OnInterrupted_6AFD10864362D6E83076B0A8B0EE9BBE();
	void OnBlendOut_6AFD10864362D6E83076B0A8B0EE9BBE();
	void OnCompleted_6AFD10864362D6E83076B0A8B0EE9BBE();
	void OnFinish_E21EBB5943095B823CA63F8739B6D5B7();
	void OnVelocityThresholdReached_AC4FDD494B6AB0BA17AE8F92409BB50B();
	void OnLocationThresholdReached_2D04383D40B2F23B49E6E7A2CAC6AFA4();
	void ClientCallOnHealCanceled();
	void ClientCallOnHealEndApply();
	void K2_CommitExecute();
	void K2_OnEndAbility(bool* bWasCancelled);
	void PlayAnim(class UClass** UsedGameplayEffect, float* WaitTime);
	void K2_ActivateAbility();
	void ClientCallOnConsumableEffectBeginWait(float* WaitTime, class UClass** UsedGameplayEffect);
	void ClientCallOnHealBeginApply(float* ApplicationTime, class UClass** UsedGameplayEffect);
	void ExecuteUbergraph_GA_UseConsumableBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
