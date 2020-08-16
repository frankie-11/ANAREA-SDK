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

// Function Anarea.ItemDataAsset.MakeItemBaseData
struct UItemDataAsset_MakeItemBaseData_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FItemBaseData                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.AnareaGameInstance.SetFOV
struct UAnareaGameInstance_SetFOV_Params
{
	float*                                             InFov;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnareaGameInstance.ResetDisconnectReason
struct UAnareaGameInstance_ResetDisconnectReason_Params
{
};

// Function Anarea.AnareaGameInstance.ReceiveLevelStreamingUnloaded
struct UAnareaGameInstance_ReceiveLevelStreamingUnloaded_Params
{
};

// Function Anarea.AnareaGameInstance.ReceiveLevelStreamingLoaded
struct UAnareaGameInstance_ReceiveLevelStreamingLoaded_Params
{
};

// DelegateFunction Anarea.AnareaGameInstance.OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature
struct UAnareaGameInstance_OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature_Params
{
};

// DelegateFunction Anarea.AnareaGameInstance.OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature
struct UAnareaGameInstance_OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature_Params
{
};

// DelegateFunction Anarea.AnareaGameInstance.OnFOVSettingChanged_DelegateSignature__DelegateSignature
struct UAnareaGameInstance_OnFOVSettingChanged_DelegateSignature__DelegateSignature_Params
{
};

// DelegateFunction Anarea.AnareaGameInstance.OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature
struct UAnareaGameInstance_OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature_Params
{
};

// DelegateFunction Anarea.AnareaGameInstance.OnCrosshairChanged_DelegateSignature__DelegateSignature
struct UAnareaGameInstance_OnCrosshairChanged_DelegateSignature__DelegateSignature_Params
{
};

// Function Anarea.AnareaGameInstance.GetHasDisconnectReason
struct UAnareaGameInstance_GetHasDisconnectReason_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobbyTimeoutFallback
struct AAnareaGameModeBase_OnPlayerFullyJoinLobbyTimeoutFallback_Params
{
	class ABasePlayerController**                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobby
struct AAnareaGameModeBase_OnPlayerFullyJoinLobby_Params
{
	class ABasePlayerController**                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameModeBase.GetPhaseDuration
struct AAnareaGameModeBase_GetPhaseDuration_Params
{
	EGamePhase*                                        gamePhase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnareaGameStateBase.OnRep_WinnerID
struct AAnareaGameStateBase_OnRep_WinnerID_Params
{
};

// Function Anarea.AnareaGameStateBase.OnRep_ReplicatedGamePhaseInfo
struct AAnareaGameStateBase_OnRep_ReplicatedGamePhaseInfo_Params
{
	struct FGamePhaseReplicatedInfo*                   prevGamePhase;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.AnareaGameStateBase.OnRep_RemainingPlayersInMatch
struct AAnareaGameStateBase_OnRep_RemainingPlayersInMatch_Params
{
};

// Function Anarea.AnareaGameStateBase.OnRep_MatchID
struct AAnareaGameStateBase_OnRep_MatchID_Params
{
};

// Function Anarea.AnareaGameStateBase.AddKillfeedEntry
struct AAnareaGameStateBase_AddKillfeedEntry_Params
{
	struct FKillfeedEntryInfo*                         killfeedInfo;                                             // (Parm)
};

// Function Anarea.AnareaGameUserSettings.SetWantHideHUD
struct UAnareaGameUserSettings_SetWantHideHUD_Params
{
	bool*                                              inWantHideHUD;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetVoicesVolume
struct UAnareaGameUserSettings_SetVoicesVolume_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetToggleSprint
struct UAnareaGameUserSettings_SetToggleSprint_Params
{
	bool*                                              inToggleSprint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetMusicVolume
struct UAnareaGameUserSettings_SetMusicVolume_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetMasterVolume
struct UAnareaGameUserSettings_SetMasterVolume_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetFOV
struct UAnareaGameUserSettings_SetFOV_Params
{
	float*                                             InFov;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetEnableCSM
struct UAnareaGameUserSettings_SetEnableCSM_Params
{
	bool*                                              inEnableCSM;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetEffectsVolume
struct UAnareaGameUserSettings_SetEffectsVolume_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.SetCrosshairShape
struct UAnareaGameUserSettings_SetCrosshairShape_Params
{
	ECrosshairToUse*                                   inCrosshairToUse;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnareaGameUserSettings.GetAnareaGameUserSettings
struct UAnareaGameUserSettings_GetAnareaGameUserSettings_Params
{
	class UAnareaGameUserSettings*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnimBPInterface.SetIsAiming
struct UAnimBPInterface_SetIsAiming_Params
{
	bool*                                              isAiming;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnimBPInterface.ChangeWeaponSetDetail
struct UAnimBPInterface_ChangeWeaponSetDetail_Params
{
	EWeaponSetDetail*                                  weaponSetDetail;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnimBPInterface.ChangeUpperbodyAnimMode
struct UAnimBPInterface_ChangeUpperbodyAnimMode_Params
{
	EWeaponSet*                                        animMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnimationHandler.Server_SetIsAiming
struct UAnimationHandler_Server_SetIsAiming_Params
{
	bool*                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnimationHandler.Server_ChangeUpperbodyAnimMode
struct UAnimationHandler_Server_ChangeUpperbodyAnimMode_Params
{
	EWeaponSet*                                        newWeaponSet;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponSetDetail*                                  newWeaponSetDetail;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.AnimationHandler.OnRep_WeaponSetDetail
struct UAnimationHandler_OnRep_WeaponSetDetail_Params
{
};

// Function Anarea.AnimationHandler.OnRep_UpperbodyAnimMode
struct UAnimationHandler_OnRep_UpperbodyAnimMode_Params
{
};

// Function Anarea.AnimationHandler.OnRep_IsAiming
struct UAnimationHandler_OnRep_IsAiming_Params
{
};

// Function Anarea.AnimationHandler.GetNamedAnimation
struct UAnimationHandler_GetNamedAnimation_Params
{
	struct FGameplayTag*                               animName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              forTPSMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnimationHandler.GetLinkedAnimBP
struct UAnimationHandler_GetLinkedAnimBP_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AnimNotifyReceiverInterface.ReceiveAnimNotify
struct UAnimNotifyReceiverInterface_ReceiveAnimNotify_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.BaseAbilitySystemComponent.ReceiveHealthChanged
struct UBaseAbilitySystemComponent_ReceiveHealthChanged_Params
{
};

// Function Anarea.BaseAbilitySystemComponent.OnRep_IsAlive
struct UBaseAbilitySystemComponent_OnRep_IsAlive_Params
{
};

// Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputReleased
struct UBaseAbilitySystemComponent_BP_FakeAbilityLocalInputReleased_Params
{
	struct FString*                                    InputName;                                                // (Parm, ZeroConstructor)
};

// Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputPressed
struct UBaseAbilitySystemComponent_BP_FakeAbilityLocalInputPressed_Params
{
	struct FString*                                    InputName;                                                // (Parm, ZeroConstructor)
};

// Function Anarea.BaseAbilitySystemComponent.BP_CancelAbilityWithClass
struct UBaseAbilitySystemComponent_BP_CancelAbilityWithClass_Params
{
	class UClass**                                     abilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerAnimBP.PlayPawnDeathAnim
struct UBasePlayerAnimBP_PlayPawnDeathAnim_Params
{
	struct FDamageCauseInfo*                           deathCauseInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BaseAttributeSet.OnRep_Stamina
struct UBaseAttributeSet_OnRep_Stamina_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_Shield
struct UBaseAttributeSet_OnRep_Shield_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_MoveSpeed
struct UBaseAttributeSet_OnRep_MoveSpeed_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_MaxStamina
struct UBaseAttributeSet_OnRep_MaxStamina_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_MaxShield
struct UBaseAttributeSet_OnRep_MaxShield_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_MaxHealth
struct UBaseAttributeSet_OnRep_MaxHealth_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_Health
struct UBaseAttributeSet_OnRep_Health_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_AttackSpeed
struct UBaseAttributeSet_OnRep_AttackSpeed_Params
{
};

// Function Anarea.BaseAttributeSet.OnRep_Armor
struct UBaseAttributeSet_OnRep_Armor_Params
{
};

// Function Anarea.BaseAttributeSet.CheckResistantSkillApplication
struct UBaseAttributeSet_CheckResistantSkillApplication_Params
{
};

// Function Anarea.BaseInventoryPanel.UpdateSlotLinkedToItemInWorld
struct UBaseInventoryPanel_UpdateSlotLinkedToItemInWorld_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.UpdateSlot
struct UBaseInventoryPanel_UpdateSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.TryGetSlot
struct UBaseInventoryPanel_TryGetSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        owningInventory;                                          // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotWidgetBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.SetModels
struct UBaseInventoryPanel_SetModels_Params
{
	TArray<class UInventoryComponent*>*                inventoryModels;                                          // (Parm, ZeroConstructor)
	class UItemUserComponent**                         itemUserModel;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNearbyItemDetector**                        NearbyItemDetector;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveRightClickOnSlot
struct UBaseInventoryPanel_ReceiveRightClickOnSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveOnSlotUnlocked
struct UBaseInventoryPanel_ReceiveOnSlotUnlocked_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        owningInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveOnSlotLocked
struct UBaseInventoryPanel_ReceiveOnSlotLocked_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        owningInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveMouseLeaveSlot
struct UBaseInventoryPanel_ReceiveMouseLeaveSlot_Params
{
};

// Function Anarea.BaseInventoryPanel.ReceiveMouseEnterSlot
struct UBaseInventoryPanel_ReceiveMouseEnterSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveMouseDoubleClick
struct UBaseInventoryPanel_ReceiveMouseDoubleClick_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveLootboxRemovedInNearbyDetector
struct UBaseInventoryPanel_ReceiveLootboxRemovedInNearbyDetector_Params
{
	class ALootbox**                                   Lootbox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveLootboxAddedInNearbyDetector
struct UBaseInventoryPanel_ReceiveLootboxAddedInNearbyDetector_Params
{
	class ALootbox**                                   Lootbox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveItemUnlockedInNearbyDetector
struct UBaseInventoryPanel_ReceiveItemUnlockedInNearbyDetector_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveItemRemovedInNearbyDetector
struct UBaseInventoryPanel_ReceiveItemRemovedInNearbyDetector_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveItemModifiedInNearbyDetector
struct UBaseInventoryPanel_ReceiveItemModifiedInNearbyDetector_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveItemLockedInNearbyDetector
struct UBaseInventoryPanel_ReceiveItemLockedInNearbyDetector_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveItemAddedInNearbyDetector
struct UBaseInventoryPanel_ReceiveItemAddedInNearbyDetector_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveDragSlot
struct UBaseInventoryPanel_ReceiveDragSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        owningSlotInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              wantSplit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveDragLeaveOnDropLayer
struct UBaseInventoryPanel_ReceiveDragLeaveOnDropLayer_Params
{
	class UDropLayerBase**                             dropLayer;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveDragEnterOnDropLayer
struct UBaseInventoryPanel_ReceiveDragEnterOnDropLayer_Params
{
	class UDropLayerBase**                             dropLayer;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ReceiveDragEnd
struct UBaseInventoryPanel_ReceiveDragEnd_Params
{
};

// Function Anarea.BaseInventoryPanel.ReceiveDragCanceled
struct UBaseInventoryPanel_ReceiveDragCanceled_Params
{
};

// Function Anarea.BaseInventoryPanel.ReceiveDragBegin
struct UBaseInventoryPanel_ReceiveDragBegin_Params
{
};

// Function Anarea.BaseInventoryPanel.ReceiveButtonUpOnDropLayer
struct UBaseInventoryPanel_ReceiveButtonUpOnDropLayer_Params
{
	class UDropLayerBase**                             dropLayer;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Anarea.BaseInventoryPanel.OnWantHideItemTooltip_DelegateSignature__DelegateSignature
struct UBaseInventoryPanel_OnWantHideItemTooltip_DelegateSignature__DelegateSignature_Params
{
};

// DelegateFunction Anarea.BaseInventoryPanel.OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature
struct UBaseInventoryPanel_OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature_Params
{
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.BaseInventoryPanel.OnModelsChanged
struct UBaseInventoryPanel_OnModelsChanged_Params
{
};

// Function Anarea.BaseInventoryPanel.InitVisual
struct UBaseInventoryPanel_InitVisual_Params
{
};

// Function Anarea.BaseInventoryPanel.InitUMGRefs
struct UBaseInventoryPanel_InitUMGRefs_Params
{
	TArray<class UDropLayerBase*>*                     InDropLayers;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UInventorySlotWidgetBase*>*           InSlotArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPanelWidget**                               InSlotContainer;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ClearSlotLinkedToItemInWorld
struct UBaseInventoryPanel_ClearSlotLinkedToItemInWorld_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ClearSlot
struct UBaseInventoryPanel_ClearSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        owningInventory;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseInventoryPanel.ClearAllSlotsLinkedToInventory
struct UBaseInventoryPanel_ClearAllSlotsLinkedToInventory_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseEquipmentPanel.SetModel_EquipmentHandler
struct UBaseEquipmentPanel_SetModel_EquipmentHandler_Params
{
	class UEquipmentHandler**                          EquipmentHandler;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.BaseEquipmentPanel.ReceiveEquippedWeaponChanged
struct UBaseEquipmentPanel_ReceiveEquippedWeaponChanged_Params
{
};

// Function Anarea.BaseGameplayAbility.HasAuthority
struct UBaseGameplayAbility_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacter.UnCrawl
struct ACustomCharacter_UnCrawl_Params
{
};

// Function Anarea.CustomCharacter.ReceiveAimModeChanged
struct ACustomCharacter_ReceiveAimModeChanged_Params
{
	bool*                                              isAiming;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.CustomCharacter.OnRep_IsSprinting
struct ACustomCharacter_OnRep_IsSprinting_Params
{
};

// Function Anarea.CustomCharacter.OnRep_IsJogging
struct ACustomCharacter_OnRep_IsJogging_Params
{
};

// Function Anarea.CustomCharacter.OnRep_IsCrawling
struct ACustomCharacter_OnRep_IsCrawling_Params
{
};

// Function Anarea.CustomCharacter.K2_OnStartSprint
struct ACustomCharacter_K2_OnStartSprint_Params
{
};

// Function Anarea.CustomCharacter.K2_OnStartJog
struct ACustomCharacter_K2_OnStartJog_Params
{
};

// Function Anarea.CustomCharacter.K2_OnStartCrawl
struct ACustomCharacter_K2_OnStartCrawl_Params
{
	float*                                             HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.CustomCharacter.K2_OnEndSprint
struct ACustomCharacter_K2_OnEndSprint_Params
{
};

// Function Anarea.CustomCharacter.K2_OnEndJog
struct ACustomCharacter_K2_OnEndJog_Params
{
};

// Function Anarea.CustomCharacter.K2_OnEndCrawl
struct ACustomCharacter_K2_OnEndCrawl_Params
{
	float*                                             HalfHeightAdjust;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaledHalfHeightAdjust;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.CustomCharacter.EndSprint
struct ACustomCharacter_EndSprint_Params
{
};

// Function Anarea.CustomCharacter.EndJog
struct ACustomCharacter_EndJog_Params
{
};

// Function Anarea.CustomCharacter.Crawl
struct ACustomCharacter_Crawl_Params
{
};

// Function Anarea.CustomCharacter.BeginSprint
struct ACustomCharacter_BeginSprint_Params
{
};

// Function Anarea.CustomCharacter.BeginJog
struct ACustomCharacter_BeginJog_Params
{
};

// Function Anarea.BasePlayerCharacter.TryInteract
struct ABasePlayerCharacter_TryInteract_Params
{
};

// Function Anarea.BasePlayerCharacter.ToggleCrouch
struct ABasePlayerCharacter_ToggleCrouch_Params
{
};

// Function Anarea.BasePlayerCharacter.Server_ReceivePlayerMenuClosed
struct ABasePlayerCharacter_Server_ReceivePlayerMenuClosed_Params
{
};

// Function Anarea.BasePlayerCharacter.Server_InteractWithSkillCrate
struct ABasePlayerCharacter_Server_InteractWithSkillCrate_Params
{
	class ASkillCrate**                                SkillCrate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerCharacter.Server_InteractWithLootbox
struct ABasePlayerCharacter_Server_InteractWithLootbox_Params
{
	class ALootbox**                                   Lootbox;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerCharacter.Server_InteractWithDoor
struct ABasePlayerCharacter_Server_InteractWithDoor_Params
{
	class AReplicatedDoor**                            door;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              openRight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerCharacter.PlayPawnDeathAnim
struct ABasePlayerCharacter_PlayPawnDeathAnim_Params
{
	struct FDamageCauseInfo*                           deathCauseInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BasePlayerCharacter.K2_HandlePawnDeath
struct ABasePlayerCharacter_K2_HandlePawnDeath_Params
{
};

// Function Anarea.BasePlayerCharacter.InputEndSprint
struct ABasePlayerCharacter_InputEndSprint_Params
{
};

// Function Anarea.BasePlayerCharacter.InputBeginSprint
struct ABasePlayerCharacter_InputBeginSprint_Params
{
};

// Function Anarea.BasePlayerCharacter.HandlePawnDeath
struct ABasePlayerCharacter_HandlePawnDeath_Params
{
};

// Function Anarea.BasePlayerCharacter.EnableRagdoll
struct ABasePlayerCharacter_EnableRagdoll_Params
{
	bool*                                              applyImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Impulse;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              impulseAsVelocityChange;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerCharacter.Client_HandlePawnDeath
struct ABasePlayerCharacter_Client_HandlePawnDeath_Params
{
	struct FDamageCauseInfo*                           damageCause;                                              // (Parm)
};

// Function Anarea.BasePlayerCharacter.ApplyCosmetics_CharacterModel
struct ABasePlayerCharacter_ApplyCosmetics_CharacterModel_Params
{
};

// Function Anarea.BasePlayerCharacter.ApplyCosmetics_Backpack
struct ABasePlayerCharacter_ApplyCosmetics_Backpack_Params
{
};

// Function Anarea.BasePlayerController.SetInputModeForPlaying
struct ABasePlayerController_SetInputModeForPlaying_Params
{
};

// Function Anarea.BasePlayerController.SetInputModeForMenuOpen
struct ABasePlayerController_SetInputModeForMenuOpen_Params
{
};

// Function Anarea.BasePlayerController.Server_RemovePlayerFromSelectedZone
struct ABasePlayerController_Server_RemovePlayerFromSelectedZone_Params
{
};

// Function Anarea.BasePlayerController.Server_ReceiveLobbyLoaded
struct ABasePlayerController_Server_ReceiveLobbyLoaded_Params
{
};

// Function Anarea.BasePlayerController.Server_PingClientConnection
struct ABasePlayerController_Server_PingClientConnection_Params
{
};

// Function Anarea.BasePlayerController.Server_MakePlayerReturnToMainMenu
struct ABasePlayerController_Server_MakePlayerReturnToMainMenu_Params
{
};

// Function Anarea.BasePlayerController.Server_AddPlayerToZone
struct ABasePlayerController_Server_AddPlayerToZone_Params
{
	int*                                               zoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerController.ReceivePlayerMenuClosed
struct ABasePlayerController_ReceivePlayerMenuClosed_Params
{
};

// Function Anarea.BasePlayerController.ReceiveLobbyLoaded
struct ABasePlayerController_ReceiveLobbyLoaded_Params
{
};

// Function Anarea.BasePlayerController.ReceiveGamePhaseChanged
struct ABasePlayerController_ReceiveGamePhaseChanged_Params
{
	EGamePhase*                                        previousGamePhase;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EGamePhase*                                        newGamePhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerController.OnRep_LocalPlayerGamePhase
struct ABasePlayerController_OnRep_LocalPlayerGamePhase_Params
{
};

// DelegateFunction Anarea.BasePlayerController.OnKillCountChanged_DelegateSignature__DelegateSignature
struct ABasePlayerController_OnKillCountChanged_DelegateSignature__DelegateSignature_Params
{
	int*                                               KillCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerController.K2_HandlePlayerDeath
struct ABasePlayerController_K2_HandlePlayerDeath_Params
{
};

// Function Anarea.BasePlayerController.HandlePlayerDeath
struct ABasePlayerController_HandlePlayerDeath_Params
{
	struct FDamageCauseInfo*                           lastDamageCause;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.BasePlayerController.HandlePawnSetOnClient
struct ABasePlayerController_HandlePawnSetOnClient_Params
{
};

// Function Anarea.BasePlayerController.ClientTeleportInitiateWithFailOnServerSide
struct ABasePlayerController_ClientTeleportInitiateWithFailOnServerSide_Params
{
	struct FString*                                    playerName;                                               // (Parm, ZeroConstructor)
	struct FString*                                    playerStartName;                                          // (Parm, ZeroConstructor)
	struct FVector*                                    playerStartLocation;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.BasePlayerController.ClientTeleportInitiateFuccessfullyOnServerSide
struct ABasePlayerController_ClientTeleportInitiateFuccessfullyOnServerSide_Params
{
	struct FString*                                    playerName;                                               // (Parm, ZeroConstructor)
};

// Function Anarea.BasePlayerController.ClientReturnToMainMenuWithMatchData
struct ABasePlayerController_ClientReturnToMainMenuWithMatchData_Params
{
	struct FPlayerMatchData*                           InMatchData;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Anarea.BasePlayerController.ClientDisplayErrorLog
struct ABasePlayerController_ClientDisplayErrorLog_Params
{
	struct FString*                                    errorText;                                                // (Parm, ZeroConstructor)
};

// Function Anarea.BasePlayerController.Client_DisplayHasKilledSomeoneMessage
struct ABasePlayerController_Client_DisplayHasKilledSomeoneMessage_Params
{
	class ABasePlayerState**                           killedPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BasePlayerController.CheckClientConnectionValidity
struct ABasePlayerController_CheckClientConnectionValidity_Params
{
};

// Function Anarea.BasePlayerState.ReceiveOnEquippedWeaponSkinsSetDelegate
struct ABasePlayerState_ReceiveOnEquippedWeaponSkinsSetDelegate_Params
{
};

// Function Anarea.BasePlayerState.ReceiveOnEquippedPlayerIconSetDelegate
struct ABasePlayerState_ReceiveOnEquippedPlayerIconSetDelegate_Params
{
};

// Function Anarea.BasePlayerState.ReceiveOnEquippedCharacterModelSetDelegate
struct ABasePlayerState_ReceiveOnEquippedCharacterModelSetDelegate_Params
{
};

// Function Anarea.BasePlayerState.ReceiveOnEquippedBackpackSetDelegate
struct ABasePlayerState_ReceiveOnEquippedBackpackSetDelegate_Params
{
};

// Function Anarea.BasePlayerState.OnRep_SpawnZoneIndex
struct ABasePlayerState_OnRep_SpawnZoneIndex_Params
{
	int*                                               PreviousSpawnZoneIndex;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.BasePlayerState.OnRep_Killer
struct ABasePlayerState_OnRep_Killer_Params
{
};

// Function Anarea.BasePlayerState.OnRep_KillCount
struct ABasePlayerState_OnRep_KillCount_Params
{
};

// Function Anarea.BasePlayerState.OnRep_DeathPlacement
struct ABasePlayerState_OnRep_DeathPlacement_Params
{
};

// Function Anarea.BasePlayerState.InitDataFromBackend
struct ABasePlayerState_InitDataFromBackend_Params
{
};

// Function Anarea.BasePlayerState.GetWeaponSkinBackendInfo
struct ABasePlayerState_GetWeaponSkinBackendInfo_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWeaponSkinBackendInfo                      outWeaponSkinBackendInfo;                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BasePlayerState.GetPlayerIconBackendInfo
struct ABasePlayerState_GetPlayerIconBackendInfo_Params
{
	struct FPlayerIconBackendInfo                      outPlayerIconInfo;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BasePlayerState.GetKiller
struct ABasePlayerState_GetKiller_Params
{
	class ABasePlayerState*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BasePlayerState.GetCharacterModelBackendInfo
struct ABasePlayerState_GetCharacterModelBackendInfo_Params
{
	struct FCharacterModelBackendInfo                  outCharacterModelInfo;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BasePlayerState.GetBackpackBackendInfo
struct ABasePlayerState_GetBackpackBackendInfo_Params
{
	struct FBackpackBackendInfo                        outBackpackInfo;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.BaseSpectatorPawn.SpectatePreviousPlayer
struct ABaseSpectatorPawn_SpectatePreviousPlayer_Params
{
};

// Function Anarea.BaseSpectatorPawn.SpectateNextPlayer
struct ABaseSpectatorPawn_SpectateNextPlayer_Params
{
};

// Function Anarea.BaseSpectatorPawn.FindPlayerToSpectate
struct ABaseSpectatorPawn_FindPlayerToSpectate_Params
{
};

// Function Anarea.BulletInfo.OnRep_DefaultInstanceInfo
struct UBulletInfo_OnRep_DefaultInstanceInfo_Params
{
};

// Function Anarea.BulletHandler.Server_HandleHit
struct UBulletHandler_Server_HandleHit_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class UBulletInfo**                                bulletInfoObj;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.BulletHandler.Multicast_PlayHitFX
struct UBulletHandler_Multicast_PlayHitFX_Params
{
	struct FVector*                                    ImpactPoint;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactNormal;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     surfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.CleanLightingBlueprintLib.FixLightingIDs
struct UCleanLightingBlueprintLib_FixLightingIDs_Params
{
};

// Function Anarea.CompassAgent.IsMovable
struct UCompassAgent_IsMovable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CompassAgent.GetWorldLocation
struct UCompassAgent_GetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CompassAgent.GetAgentType
struct UCompassAgent_GetAgentType_Params
{
	ECompassAgentType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CompassComponent.UnregisterAgent
struct UCompassComponent_UnregisterAgent_Params
{
	TScriptInterface<class UCompassAgent>*             Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.CompassComponent.RegisterAgent
struct UCompassComponent_RegisterAgent_Params
{
	TScriptInterface<class UCompassAgent>*             Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ConsumableItemDataAsset.GetActivationEffectAndAbilityClasses
struct UConsumableItemDataAsset_GetActivationEffectAndAbilityClasses_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      outGameplayEffectClass;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      outGameplayAbilityClass;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outWaitTimeBeforeFirstApplication;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.RetryInitData
struct UCosmeticsManagerInGame_RetryInitData_Params
{
};

// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedWeaponSkins
struct UCosmeticsManagerInGame_OnRep_ReplicatedEquippedWeaponSkins_Params
{
};

// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedPlayerIcon
struct UCosmeticsManagerInGame_OnRep_ReplicatedEquippedPlayerIcon_Params
{
};

// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedCharacterModel
struct UCosmeticsManagerInGame_OnRep_ReplicatedEquippedCharacterModel_Params
{
};

// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedBackpack
struct UCosmeticsManagerInGame_OnRep_ReplicatedEquippedBackpack_Params
{
};

// Function Anarea.CosmeticsManagerInGame.IsSkinUnlockedForWeapon
struct UCosmeticsManagerInGame_IsSkinUnlockedForWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsSkinEquippedOnWeapon
struct UCosmeticsManagerInGame_IsSkinEquippedOnWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsPlayerIconUnlocked
struct UCosmeticsManagerInGame_IsPlayerIconUnlocked_Params
{
	struct FName*                                      playerIconName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsPlayerIconEquipped
struct UCosmeticsManagerInGame_IsPlayerIconEquipped_Params
{
	struct FName*                                      playerIconName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsCharacterModelUnlocked
struct UCosmeticsManagerInGame_IsCharacterModelUnlocked_Params
{
	struct FName*                                      characterModelName;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsCharacterModelEquipped
struct UCosmeticsManagerInGame_IsCharacterModelEquipped_Params
{
	struct FName*                                      characterModelName;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsBackpackUnlocked
struct UCosmeticsManagerInGame_IsBackpackUnlocked_Params
{
	struct FName*                                      backpackName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.IsBackpackEquipped
struct UCosmeticsManagerInGame_IsBackpackEquipped_Params
{
	struct FName*                                      backpackName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.InitData
struct UCosmeticsManagerInGame_InitData_Params
{
};

// Function Anarea.CosmeticsManagerInGame.GetWeaponSkinBackendInfo
struct UCosmeticsManagerInGame_GetWeaponSkinBackendInfo_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWeaponSkinBackendInfo                      outBackendInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetPlayerIconBackendInfo
struct UCosmeticsManagerInGame_GetPlayerIconBackendInfo_Params
{
	struct FName*                                      playerIconName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FPlayerIconBackendInfo                      outBackendInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetEquippedSkinForWeapon
struct UCosmeticsManagerInGame_GetEquippedSkinForWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       outSkinName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetEquippedPlayerIcon
struct UCosmeticsManagerInGame_GetEquippedPlayerIcon_Params
{
	struct FName                                       outPlayerIconName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetEquippedCharacterModel
struct UCosmeticsManagerInGame_GetEquippedCharacterModel_Params
{
	struct FName                                       outCharacterModelName;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetEquippedBackpack
struct UCosmeticsManagerInGame_GetEquippedBackpack_Params
{
	struct FName                                       outBackpackName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetCharacterModelBackendInfo
struct UCosmeticsManagerInGame_GetCharacterModelBackendInfo_Params
{
	struct FName*                                      characterModelName;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCharacterModelBackendInfo                  outBackendInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.GetBackpackBackendInfo
struct UCosmeticsManagerInGame_GetBackpackBackendInfo_Params
{
	struct FName*                                      backpackName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FBackpackBackendInfo                        outBackendInfo;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInGame.FinishDataInitializationAfterUnlockedItemReceived
struct UCosmeticsManagerInGame_FinishDataInitializationAfterUnlockedItemReceived_Params
{
};

// Function Anarea.CosmeticsManagerInMenus.TryEquipSkinOnWeapon
struct UCosmeticsManagerInMenus_TryEquipSkinOnWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.TryEquipPlayerIcon
struct UCosmeticsManagerInMenus_TryEquipPlayerIcon_Params
{
	struct FName*                                      playerIconName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.TryEquipCharacterModel
struct UCosmeticsManagerInMenus_TryEquipCharacterModel_Params
{
	struct FName*                                      characterModelName;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.TryEquipBackpack
struct UCosmeticsManagerInMenus_TryEquipBackpack_Params
{
	struct FName*                                      backpackName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.IsSkinValidForWeapon
struct UCosmeticsManagerInMenus_IsSkinValidForWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName*                                      skinName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.GetAllWeaponSkinsForWeapon
struct UCosmeticsManagerInMenus_GetAllWeaponSkinsForWeapon_Params
{
	struct FName*                                      weaponName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               outWeaponSkins;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CosmeticsManagerInMenus.GetAllPlayerIcons
struct UCosmeticsManagerInMenus_GetAllPlayerIcons_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Anarea.CosmeticsManagerInMenus.GetAllCharacterModels
struct UCosmeticsManagerInMenus_GetAllCharacterModels_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Anarea.CosmeticsManagerInMenus.GetAllBackpacks
struct UCosmeticsManagerInMenus_GetAllBackpacks_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Anarea.CustomCharacterMovementComponent.IsStrafing
struct UCustomCharacterMovementComponent_IsStrafing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.IsSprinting
struct UCustomCharacterMovementComponent_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.IsMovingForward
struct UCustomCharacterMovementComponent_IsMovingForward_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.IsMovingBackward
struct UCustomCharacterMovementComponent_IsMovingBackward_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.IsJogging
struct UCustomCharacterMovementComponent_IsJogging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.IsCrawling
struct UCustomCharacterMovementComponent_IsCrawling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.CustomCharacterMovementComponent.GetCurrentSpeedClamped
struct UCustomCharacterMovementComponent_GetCurrentSpeedClamped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.DebugInfoWidget.BPE_OnTextColorChanged
struct UDebugInfoWidget_BPE_OnTextColorChanged_Params
{
};

// Function Anarea.DebugInfoWidget.BPE_OnTextChanged
struct UDebugInfoWidget_BPE_OnTextChanged_Params
{
};

// Function Anarea.DropLayerBase.SetHighlightColor
struct UDropLayerBase_SetHighlightColor_Params
{
	bool*                                              valid;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Anarea.DropLayerBase.OnMouseLeave_DelegateSignature__DelegateSignature
struct UDropLayerBase_OnMouseLeave_DelegateSignature__DelegateSignature_Params
{
	class UDropLayerBase**                             selfDropLayer;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Anarea.DropLayerBase.OnMouseEnter_DelegateSignature__DelegateSignature
struct UDropLayerBase_OnMouseEnter_DelegateSignature__DelegateSignature_Params
{
	class UDropLayerBase**                             selfDropLayer;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Anarea.DropLayerBase.OnMouseButtonUp_DelegateSignature__DelegateSignature
struct UDropLayerBase_OnMouseButtonUp_DelegateSignature__DelegateSignature_Params
{
	class UDropLayerBase**                             selfDropLayer;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.DropLayerBase.ClearHighlightColor
struct UDropLayerBase_ClearHighlightColor_Params
{
};

// Function Anarea.EndMatchMenu.SetModels
struct UEndMatchMenu_SetModels_Params
{
	class AAnareaGameStateBase**                       GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ABasePlayerState**                           PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EndMatchMenu.ReceiveWinnerSelected
struct UEndMatchMenu_ReceiveWinnerSelected_Params
{
	int*                                               winnerID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EndMatchMenu.OnModelsChanged
struct UEndMatchMenu_OnModelsChanged_Params
{
};

// Function Anarea.EndMatchMenu.DisplayWinPanel
struct UEndMatchMenu_DisplayWinPanel_Params
{
};

// Function Anarea.EndMatchMenu.DisplayDefeatPanel
struct UEndMatchMenu_DisplayDefeatPanel_Params
{
	class ABasePlayerState**                           PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.Equipment.TryLaunchAnimationByTag
struct AEquipment_TryLaunchAnimationByTag_Params
{
	struct FGameplayTag*                               Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Equipment.HasEquipmentFlags
struct AEquipment_HasEquipmentFlags_Params
{
	EEquipmentFlags*                                   Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.SpawnAndHolsterWeapon
struct UEquipmentHandler_SpawnAndHolsterWeapon_Params
{
	class UClass**                                     WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               optionalIndexInInventory;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnSlotModified
struct UEquipmentHandler_ReceiveEquipmentInventoryOnSlotModified_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnBeforeSlotRemoved
struct UEquipmentHandler_ReceiveEquipmentInventoryOnBeforeSlotRemoved_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.ReceiveAnimNotify
struct UEquipmentHandler_ReceiveAnimNotify_Params
{
	struct FGameplayTag*                               feedbackTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.OnRep_EquippedWeapon
struct UEquipmentHandler_OnRep_EquippedWeapon_Params
{
	class AWeapon**                                    lastWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSetDetail
struct UEquipmentHandler_OnRep_CurrentWeaponSetDetail_Params
{
};

// Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSet
struct UEquipmentHandler_OnRep_CurrentWeaponSet_Params
{
};

// Function Anarea.EquipmentHandler.IsLinkedToInventory
struct UEquipmentHandler_IsLinkedToInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.HolsterCurrentWeapon
struct UEquipmentHandler_HolsterCurrentWeapon_Params
{
};

// Function Anarea.EquipmentHandler.HolsterAndDestroyWeapon
struct UEquipmentHandler_HolsterAndDestroyWeapon_Params
{
	class AWeapon**                                    Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.HasWeaponEquipped
struct UEquipmentHandler_HasWeaponEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.HasProjectileInInventory
struct UEquipmentHandler_HasProjectileInInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.HandleCurrentWeaponAmmoCountModified
struct UEquipmentHandler_HandleCurrentWeaponAmmoCountModified_Params
{
};

// Function Anarea.EquipmentHandler.GrabWeaponInInventory
struct UEquipmentHandler_GrabWeaponInInventory_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.GrabWeapon
struct UEquipmentHandler_GrabWeapon_Params
{
	class UClass**                                     WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.GetWeaponInSlot
struct UEquipmentHandler_GetWeaponInSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.GetEquippedWeapon
struct UEquipmentHandler_GetEquippedWeapon_Params
{
	class AWeapon*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.EquipmentHandler.DoesEquippedWeaponHaveFlags
struct UEquipmentHandler_DoesEquippedWeaponHaveFlags_Params
{
	EEquipmentFlags*                                   Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.GrenadeItemDataAsset.GetWeaponClass
struct UGrenadeItemDataAsset_GetWeaponClass_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Weapon.ServerChangeWeaponSkin
struct AWeapon_ServerChangeWeaponSkin_Params
{
};

// Function Anarea.Weapon.ReceiveWeaponSkinChanged
struct AWeapon_ReceiveWeaponSkinChanged_Params
{
};

// Function Anarea.Weapon.OnRep_WeaponSkin
struct AWeapon_OnRep_WeaponSkin_Params
{
};

// Function Anarea.Weapon.GetSocketRotation
struct AWeapon_GetSocketRotation_Params
{
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Weapon.GetSocketLocation
struct AWeapon_GetSocketLocation_Params
{
	struct FName*                                      SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Weapon.GetLeftHandGripWorldLocation
struct AWeapon_GetLeftHandGripWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Weapon.CanBeUsed
struct AWeapon_CanBeUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Weapon.BP_ReceiveAnimNotify
struct AWeapon_BP_ReceiveAnimNotify_Params
{
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.Weapon.ApplyCosmetics_WeaponSkin
struct AWeapon_ApplyCosmetics_WeaponSkin_Params
{
};

// Function Anarea.GrenadeWeapon.LaunchProjectile
struct AGrenadeWeapon_LaunchProjectile_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.GrenadeProjectile.Multicast_PlayExplosionFX
struct AGrenadeProjectile_Multicast_PlayExplosionFX_Params
{
};

// Function Anarea.FlashGrenadeProjectile.UpdateFlashPostProcessAnim
struct AFlashGrenadeProjectile_UpdateFlashPostProcessAnim_Params
{
};

// Function Anarea.HUDManager.TogglePlayerMenu
struct UHUDManager_TogglePlayerMenu_Params
{
};

// Function Anarea.HUDManager.ToggleMapMenu
struct UHUDManager_ToggleMapMenu_Params
{
};

// Function Anarea.HUDManager.ToggleInGameMenu
struct UHUDManager_ToggleInGameMenu_Params
{
};

// Function Anarea.HUDManager.RespawnGameMenus
struct UHUDManager_RespawnGameMenus_Params
{
};

// Function Anarea.HUDManager.OpenZoneSelectionMenuCountdown
struct UHUDManager_OpenZoneSelectionMenuCountdown_Params
{
};

// Function Anarea.HUDManager.OpenZoneSelectionMenu
struct UHUDManager_OpenZoneSelectionMenu_Params
{
};

// Function Anarea.HUDManager.OpenPlayerMenu
struct UHUDManager_OpenPlayerMenu_Params
{
	class UInventoryComponent**                        OptionalOtherInventory;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.HUDManager.OpenMapMenu
struct UHUDManager_OpenMapMenu_Params
{
};

// Function Anarea.HUDManager.OpenLaunchMatchCountdown
struct UHUDManager_OpenLaunchMatchCountdown_Params
{
};

// Function Anarea.HUDManager.OpenInGameMenu
struct UHUDManager_OpenInGameMenu_Params
{
};

// Function Anarea.HUDManager.OpenEndMatchMenu
struct UHUDManager_OpenEndMatchMenu_Params
{
};

// Function Anarea.HUDManager.EnableZoneSelectionMenu
struct UHUDManager_EnableZoneSelectionMenu_Params
{
};

// Function Anarea.HUDManager.DisplayMatchLoadingScreen
struct UHUDManager_DisplayMatchLoadingScreen_Params
{
};

// Function Anarea.HUDManager.DisplayHUDForSpectatingMode
struct UHUDManager_DisplayHUDForSpectatingMode_Params
{
};

// Function Anarea.HUDManager.DisplayGameHUD
struct UHUDManager_DisplayGameHUD_Params
{
};

// Function Anarea.HUDManager.CloseZoneSelectionMenu
struct UHUDManager_CloseZoneSelectionMenu_Params
{
};

// Function Anarea.HUDManager.ClosePlayerMenu
struct UHUDManager_ClosePlayerMenu_Params
{
};

// Function Anarea.HUDManager.CloseMapMenu
struct UHUDManager_CloseMapMenu_Params
{
};

// Function Anarea.HUDManager.CloseInGameMenu
struct UHUDManager_CloseInGameMenu_Params
{
};

// Function Anarea.HUDManager.CloseAllMenus
struct UHUDManager_CloseAllMenus_Params
{
};

// Function Anarea.Interactable.GetInteractableDisplayName
struct UInteractable_GetInteractableDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.InventoryComponent.UnlockSlot
struct UInventoryComponent_UnlockSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventoryComponent.TryGetSlotTag
struct UInventoryComponent_TryGetSlotTag_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                outSlotTag;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.TryGetItemOnSlot
struct UInventoryComponent_TryGetItemOnSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               outItem;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.SimulateStackItemInSlot
struct UInventoryComponent_SimulateStackItemInSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                itemStack;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool*                                              addIfSlotIsEmpty;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.SimulateAddItem
struct UInventoryComponent_SimulateAddItem_Params
{
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                itemStack;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ReplaceItemInSlot
struct UInventoryComponent_ReplaceItemInSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               Item;                                                     // (Parm, OutParm, ReferenceParm)
};

// Function Anarea.InventoryComponent.RemoveItemLinkedToItemInWorld
struct UInventoryComponent_RemoveItemLinkedToItemInWorld_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.RemoveItemInSlot
struct UInventoryComponent_RemoveItemInSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               optionalAmountToRemove;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventoryComponent.RemoveItemByType
struct UInventoryComponent_RemoveItemByType_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               amountToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ReceiveOnSlotUnlocked
struct UInventoryComponent_ReceiveOnSlotUnlocked_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        slotOwningComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ReceiveOnSlotModified
struct UInventoryComponent_ReceiveOnSlotModified_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        slotOwningComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ReceiveOnSlotLocked
struct UInventoryComponent_ReceiveOnSlotLocked_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        slotOwningComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ReceiveOnBeforeSlotRemoved
struct UInventoryComponent_ReceiveOnBeforeSlotRemoved_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        slotOwningComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.InventoryComponent.OnRep_CurrentCapacity
struct UInventoryComponent_OnRep_CurrentCapacity_Params
{
};

// Function Anarea.InventoryComponent.ModifyCapacity
struct UInventoryComponent_ModifyCapacity_Params
{
	int*                                               deltaSlotAmount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventoryComponent.LockSlot
struct UInventoryComponent_LockSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventoryComponent.IsSlotLocked
struct UInventoryComponent_IsSlotLocked_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.IsSlotEmpty
struct UInventoryComponent_IsSlotEmpty_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.IsIndexValid
struct UInventoryComponent_IsIndexValid_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.HasEnoughItemOfType
struct UInventoryComponent_HasEnoughItemOfType_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               requestedCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.GetItemCount
struct UInventoryComponent_GetItemCount_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.FindSlotsBySlotTag
struct UInventoryComponent_FindSlotsBySlotTag_Params
{
	struct FGameplayTag*                               slotTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              exactMatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.InventoryComponent.FindSlotsByItemTag
struct UInventoryComponent_FindSlotsByItemTag_Params
{
	struct FGameplayTag*                               ItemTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              exactMatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.InventoryComponent.FindSlotsByItemKey
struct UInventoryComponent_FindSlotsByItemKey_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.InventoryComponent.FindSlotBySlotTag
struct UInventoryComponent_FindSlotBySlotTag_Params
{
	struct FGameplayTag*                               slotTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              exactMatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.FindSlotByItemTag
struct UInventoryComponent_FindSlotByItemTag_Params
{
	struct FGameplayTag*                               ItemTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              exactMatch;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.FindSlotByItemKey
struct UInventoryComponent_FindSlotByItemKey_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.FindFirstCompatibleSlot
struct UInventoryComponent_FindFirstCompatibleSlot_Params
{
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.ClearAllItems
struct UInventoryComponent_ClearAllItems_Params
{
};

// Function Anarea.InventoryComponent.CanStackOrAddItemOnSlot
struct UInventoryComponent_CanStackOrAddItemOnSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.CanStackItemOnSlot
struct UInventoryComponent_CanStackItemOnSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.CanSetItemOnSlot
struct UInventoryComponent_CanSetItemOnSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance*                              Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.CallOnCapacityChangedDelegate
struct UInventoryComponent_CallOnCapacityChangedDelegate_Params
{
};

// Function Anarea.InventoryComponent.AddItemInSlot
struct UInventoryComponent_AddItemInSlot_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               Item;                                                     // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventoryComponent.AddItem
struct UInventoryComponent_AddItem_Params
{
	struct FItemInstance                               Item;                                                     // (Parm, OutParm, ReferenceParm)
	bool*                                              forceNoStack;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.InventorySlotWidgetBase.SetUnlockedVisual
struct UInventorySlotWidgetBase_SetUnlockedVisual_Params
{
};

// Function Anarea.InventorySlotWidgetBase.SetSelected
struct UInventorySlotWidgetBase_SetSelected_Params
{
	bool*                                              isSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventorySlotWidgetBase.SetLockedVisual
struct UInventorySlotWidgetBase_SetLockedVisual_Params
{
};

// DelegateFunction Anarea.InventorySlotWidgetBase.OnRightClickDetected_DelegateSignature__DelegateSignature
struct UInventorySlotWidgetBase_OnRightClickDetected_DelegateSignature__DelegateSignature_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Anarea.InventorySlotWidgetBase.OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature
struct UInventorySlotWidgetBase_OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Anarea.InventorySlotWidgetBase.OnDragDetectedOnSlot_DelegateSignature__DelegateSignature
struct UInventorySlotWidgetBase_OnDragDetectedOnSlot_DelegateSignature__DelegateSignature_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              wantSplit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventorySlotWidgetBase.Init
struct UInventorySlotWidgetBase_Init_Params
{
	struct FItemBaseData*                              baseData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               curStack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.InventorySlotWidgetBase.Clear
struct UInventorySlotWidgetBase_Clear_Params
{
};

// Function Anarea.ItemContextMenuBase.InitUMGRefs
struct UItemContextMenuBase_InitUMGRefs_Params
{
	class UPanelWidget**                               InContainer;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    InContainerZone;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemContextMenuEntryBase.Init
struct UItemContextMenuEntryBase_Init_Params
{
	struct FText*                                      ActionText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ItemContextMenuEntryBase.CallOnUseButtonClickedDelegate
struct UItemContextMenuEntryBase_CallOnUseButtonClickedDelegate_Params
{
};

// Function Anarea.ItemDatabase.FindItemData
struct UItemDatabase_FindItemData_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FItemBaseData                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.ItemDatabase.CreateNewItem
struct UItemDatabase_CreateNewItem_Params
{
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int*                                               requestedStack;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.ItemDatabaseAccessor.GetItemDatabase
struct UItemDatabaseAccessor_GetItemDatabase_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UItemDatabase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemDatabaseProvider.GetItemDatabase
struct UItemDatabaseProvider_GetItemDatabase_Params
{
	class UItemDatabase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemInWorld.PreInit
struct AItemInWorld_PreInit_Params
{
	struct FItemInstance*                              InItem;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ItemInWorld.OnRep_Item
struct AItemInWorld_OnRep_Item_Params
{
};

// Function Anarea.ItemInWorld.OnRep_IsLocked
struct AItemInWorld_OnRep_IsLocked_Params
{
};

// Function Anarea.ItemInWorld.K2_Init
struct AItemInWorld_K2_Init_Params
{
	struct FItemInstance*                              InItem;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ItemInWorld.BP_ShowOulines
struct AItemInWorld_BP_ShowOulines_Params
{
};

// Function Anarea.ItemInWorld.BP_HideOulines
struct AItemInWorld_BP_HideOulines_Params
{
};

// Function Anarea.LootSpawnerGeneratorInterface.UnspawnLootsInLevel
struct ULootSpawnerGeneratorInterface_UnspawnLootsInLevel_Params
{
	class ULevel**                                     Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.LootSpawnerGeneratorInterface.SpawnLootsInLevel
struct ULootSpawnerGeneratorInterface_SpawnLootsInLevel_Params
{
	class ULevel**                                     Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.LootSpawnerGeneratorLib.UnspawnLoots
struct ULootSpawnerGeneratorLib_UnspawnLoots_Params
{
	class AActor**                                     OwningActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.LootSpawnerGeneratorLib.SpawnLoots
struct ULootSpawnerGeneratorLib_SpawnLoots_Params
{
	class AActor**                                     OwningActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.TryDeactivatelItemSkill
struct UItemSkillHelper_TryDeactivatelItemSkill_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag*                               skillTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ItemSkillHelper.TryActivateItemSkill
struct UItemSkillHelper_TryActivateItemSkill_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag*                               ItemTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag*                               skillTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ItemSkillHelper.TryActivateAnyDefensiveSkill
struct UItemSkillHelper_TryActivateAnyDefensiveSkill_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.TryActivateAnyAttackSkill
struct UItemSkillHelper_TryActivateAnyAttackSkill_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.IsItemSkillActive
struct UItemSkillHelper_IsItemSkillActive_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag*                               skillTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.IsItemSkillActivatable
struct UItemSkillHelper_IsItemSkillActivatable_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag*                               ItemTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag*                               skillTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.IsAnyDefensiveSkillActivated
struct UItemSkillHelper_IsAnyDefensiveSkillActivated_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemSkillHelper.IsAnyAttackSkillActivated
struct UItemSkillHelper_IsAnyAttackSkillActivated_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_UseItemInInventory
struct UItemUserComponent_Server_UseItemInInventory_Params
{
	class UInventoryComponent**                        InventoryComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_TrySwapItem
struct UItemUserComponent_Server_TrySwapItem_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_SplitAndDropInventoryItemInWorld
struct UItemUserComponent_Server_SplitAndDropInventoryItemInWorld_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               splitAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_PickUpItemInWorld
struct UItemUserComponent_Server_PickUpItemInWorld_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_HandleDropOnInventory
struct UItemUserComponent_Server_HandleDropOnInventory_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_HandleDragDropOnInventorySlot
struct UItemUserComponent_Server_HandleDragDropOnInventorySlot_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AItemInWorld**                               LinkedItemInWorld;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              wantSplit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_EndDragItem
struct UItemUserComponent_Server_EndDragItem_Params
{
};

// Function Anarea.ItemUserComponent.Server_DropItemInWorld
struct UItemUserComponent_Server_DropItemInWorld_Params
{
	struct FItemInstance*                              ItemInstance;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Anarea.ItemUserComponent.Server_DropInventoryItemInWorld
struct UItemUserComponent_Server_DropInventoryItemInWorld_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.Server_DropDraggedItemInWorld
struct UItemUserComponent_Server_DropDraggedItemInWorld_Params
{
};

// Function Anarea.ItemUserComponent.Server_CancelDragItem
struct UItemUserComponent_Server_CancelDragItem_Params
{
};

// Function Anarea.ItemUserComponent.ReceiveSlotModifiedOnEquipmentInventory
struct UItemUserComponent_ReceiveSlotModifiedOnEquipmentInventory_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.ReceiveBeforeSlotRemovedOnEquipmentInventory
struct UItemUserComponent_ReceiveBeforeSlotRemovedOnEquipmentInventory_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.IsDraggingItem
struct UItemUserComponent_IsDraggingItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.GetDraggedItem
struct UItemUserComponent_GetDraggedItem_Params
{
	struct FItemInstance                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Anarea.ItemUserComponent.Client_EndDragItem
struct UItemUserComponent_Client_EndDragItem_Params
{
};

// Function Anarea.ItemUserComponent.Client_CancelDragItem
struct UItemUserComponent_Client_CancelDragItem_Params
{
};

// Function Anarea.ItemUserComponent.Client_BeginDragFromInventoryOrItemInWorld
struct UItemUserComponent_Client_BeginDragFromInventoryOrItemInWorld_Params
{
	struct FItemDragInfo*                              inDragInfo;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Anarea.ItemUserComponent.CanSwapItemToSlot
struct UItemUserComponent_CanSwapItemToSlot_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.CanStackOrAddOrSwapDraggedItemToSlot
struct UItemUserComponent_CanStackOrAddOrSwapDraggedItemToSlot_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.CanStackOrAddDraggedItemToSlot
struct UItemUserComponent_CanStackOrAddDraggedItemToSlot_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ItemUserComponent.CanDropItemToInventory
struct UItemUserComponent_CanDropItemToInventory_Params
{
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.LocomotionHandler.SetIsJogging
struct ULocomotionHandler_SetIsJogging_Params
{
	bool*                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.LocomotionHandler.GetShouldSprint
struct ULocomotionHandler_GetShouldSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.LocomotionHandler.GetIsJogging
struct ULocomotionHandler_GetIsJogging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.LocomotionHandler.GetCurrentSpeedClamped
struct ULocomotionHandler_GetCurrentSpeedClamped_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.LocomotionHandler.EndSprint
struct ULocomotionHandler_EndSprint_Params
{
};

// Function Anarea.LocomotionHandler.BeginSprint
struct ULocomotionHandler_BeginSprint_Params
{
};

// Function Anarea.Lootbox.BP_ShowOulines
struct ALootbox_BP_ShowOulines_Params
{
};

// Function Anarea.Lootbox.BP_HideOulines
struct ALootbox_BP_HideOulines_Params
{
};

// Function Anarea.LootSpawnerFunctionalities.SpawnLoot
struct ULootSpawnerFunctionalities_SpawnLoot_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    spawnLoc;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UDataTable**                                 LootDataTable;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLootSpawnAdditionalLocations*              additionalSpawnLocations;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName*                                      RowInDataTable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              spawnAdditionalItems;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevel**                                     levelToSpawnInto;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItemInWorld*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.LootSpawnerFunctionalities.SpawnAllLootsOnActorSockets
struct ULootSpawnerFunctionalities_SpawnAllLootsOnActorSockets_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UDataTable**                                 LootDataTable;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              useLevelToSpawnInto;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevel**                                     levelToSpawnInto;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevel**                                     filterByLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AItemInWorld*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.MontageBasedAbility.OnAnimFeedback
struct UMontageBasedAbility_OnAnimFeedback_Params
{
	struct FGameplayTag*                               feedbackTags;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.NearbyItemDetector.ReceiveOnComponentEndOverlap
struct UNearbyItemDetector_ReceiveOnComponentEndOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.NearbyItemDetector.ReceiveOnComponentBeginOverlap
struct UNearbyItemDetector_ReceiveOnComponentBeginOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Anarea.NearbyItemDetector.ReceiveItemInWorldUnlocked
struct UNearbyItemDetector_ReceiveItemInWorldUnlocked_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.NearbyItemDetector.ReceiveIteminWorldModified
struct UNearbyItemDetector_ReceiveIteminWorldModified_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.NearbyItemDetector.ReceiveItemInWorldLocked
struct UNearbyItemDetector_ReceiveItemInWorldLocked_Params
{
	class AItemInWorld**                               ItemInWorld;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.PlayerSpawnSystemComponent.OnRep_ZoneInfos
struct UPlayerSpawnSystemComponent_OnRep_ZoneInfos_Params
{
};

// Function Anarea.PlayerSpawnSystemComponent.OnRep_PlayerCountPerZone
struct UPlayerSpawnSystemComponent_OnRep_PlayerCountPerZone_Params
{
};

// Function Anarea.PlayerSpawnSystemComponent.ClearZoneSelection
struct UPlayerSpawnSystemComponent_ClearZoneSelection_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.PlayerSpawnSystemComponent.AddPlayerToZone
struct UPlayerSpawnSystemComponent_AddPlayerToZone_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               zoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ReplicatedDoor.OnRep_DoorState
struct AReplicatedDoor_OnRep_DoorState_Params
{
};

// Function Anarea.ReplicatedDoor.HandleDoorStateChanged
struct AReplicatedDoor_HandleDoorStateChanged_Params
{
};

// Function Anarea.SelectSplitAmountWidgetBase.Init
struct USelectSplitAmountWidgetBase_Init_Params
{
	int*                                               stackAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.SelectSplitAmountWidgetBase.CallOnValueCommittedDelegate
struct USelectSplitAmountWidgetBase_CallOnValueCommittedDelegate_Params
{
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.TryGetMagazineMeshComponent
struct AShootingWeapon_TryGetMagazineMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.SimulatedHandleReloadStep
struct AShootingWeapon_SimulatedHandleReloadStep_Params
{
	int                                                simulatedCurrentAmmoCount;                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.Shoot
struct AShootingWeapon_Shoot_Params
{
};

// Function Anarea.ShootingWeapon.Server_ProcessShoot
struct AShootingWeapon_Server_ProcessShoot_Params
{
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.Server_HandleReloadStep
struct AShootingWeapon_Server_HandleReloadStep_Params
{
	int*                                               maxPossibleAmoCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.Server_HandleHitscanHit
struct AShootingWeapon_Server_HandleHitscanHit_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.ProcessShootOnServer
struct AShootingWeapon_ProcessShootOnServer_Params
{
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.ProcessShootOnClient
struct AShootingWeapon_ProcessShootOnClient_Params
{
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.OnRep_LinkedBulletInfo
struct AShootingWeapon_OnRep_LinkedBulletInfo_Params
{
};

// Function Anarea.ShootingWeapon.OnRep_CurrentAmmoCount
struct AShootingWeapon_OnRep_CurrentAmmoCount_Params
{
};

// Function Anarea.ShootingWeapon.Multicast_PlayShootFX
struct AShootingWeapon_Multicast_PlayShootFX_Params
{
};

// Function Anarea.ShootingWeapon.Multicast_PlayHitFX
struct AShootingWeapon_Multicast_PlayHitFX_Params
{
	struct FVector*                                    ImpactPoint;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactNormal;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>*                     surfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.HandleReloadStep
struct AShootingWeapon_HandleReloadStep_Params
{
	int*                                               maxPossibleAmoCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.GetReloadRightHandIKTargetLocation
struct AShootingWeapon_GetReloadRightHandIKTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.GetAmmoType
struct AShootingWeapon_GetAmmoType_Params
{
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.GetAmmoCountToAddAtNextReloadStep
struct AShootingWeapon_GetAmmoCountToAddAtNextReloadStep_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.GeReloadLeftHandIKTargetWorldLocation
struct AShootingWeapon_GeReloadLeftHandIKTargetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.Client_ApplyRecoil
struct AShootingWeapon_Client_ApplyRecoil_Params
{
	int*                                               RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.CanShoot
struct AShootingWeapon_CanShoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.ShootingWeapon.CanBeReloaded
struct AShootingWeapon_CanBeReloaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.UpdateRecoverFromLastRecoil
struct USightHandler_UpdateRecoverFromLastRecoil_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.SightHandler.SetIsAiming
struct USightHandler_SetIsAiming_Params
{
	bool*                                              aiming;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             zoomBoostMultiplier;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.SightHandler.PlayHitmarkerSound
struct USightHandler_PlayHitmarkerSound_Params
{
	EHitMarkerType*                                    hitMarker;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.SightHandler.OnRep_IsAiming
struct USightHandler_OnRep_IsAiming_Params
{
};

// Function Anarea.SightHandler.IsHeadBoneName
struct USightHandler_IsHeadBoneName_Params
{
	struct FName*                                      BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.InitLinkedCamera
struct USightHandler_InitLinkedCamera_Params
{
};

// Function Anarea.SightHandler.GetIsAiming
struct USightHandler_GetIsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.GetHitMarkerType
struct USightHandler_GetHitMarkerType_Params
{
	struct FName*                                      BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              hitShield;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EHitMarkerType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.GetCurrentMouseSensitivityModifier
struct USightHandler_GetCurrentMouseSensitivityModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.GetCameraLocation
struct USightHandler_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SightHandler.Client_DisplayDamagePerceivedFeedback
struct USightHandler_Client_DisplayDamagePerceivedFeedback_Params
{
	struct FDamagePerceptionDirection*                 damageDirection;                                          // (Parm)
};

// Function Anarea.SightHandler.CancelRecoilRecovering
struct USightHandler_CancelRecoilRecovering_Params
{
};

// Function Anarea.SightHandler.CanAim
struct USightHandler_CanAim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SkillCrate.ReceiveLinkedItemDestroyed
struct ASkillCrate_ReceiveLinkedItemDestroyed_Params
{
	class AActor**                                     destroyedLinkedItem;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.SkillCrate.OpenAnimFinished
struct ASkillCrate_OpenAnimFinished_Params
{
};

// Function Anarea.SkillCrate.Open
struct ASkillCrate_Open_Params
{
};

// Function Anarea.SkillCrate.OnRep_LinkedItemInWorld
struct ASkillCrate_OnRep_LinkedItemInWorld_Params
{
};

// Function Anarea.SkillCrate.OnRep_IsOpen
struct ASkillCrate_OnRep_IsOpen_Params
{
};

// Function Anarea.SkillCrate.GetIsOpen
struct ASkillCrate_GetIsOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SkillCrate.CloseAnimFinished
struct ASkillCrate_CloseAnimFinished_Params
{
};

// Function Anarea.SkillCrate.Close
struct ASkillCrate_Close_Params
{
};

// Function Anarea.SkillCrate.BP_ShowOulines
struct ASkillCrate_BP_ShowOulines_Params
{
};

// Function Anarea.SkillCrate.BP_PlayOpenAnim
struct ASkillCrate_BP_PlayOpenAnim_Params
{
};

// Function Anarea.SkillCrate.BP_PlayCloseAnim
struct ASkillCrate_BP_PlayCloseAnim_Params
{
};

// Function Anarea.SkillCrate.BP_HideOulines
struct ASkillCrate_BP_HideOulines_Params
{
};

// Function Anarea.SocketsName.ReloadRightHandIKTarget
struct USocketsName_ReloadRightHandIKTarget_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SocketsName.ReloadLeftHandIKTarget
struct USocketsName_ReloadLeftHandIKTarget_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SocketsName.LeftHandGrip
struct USocketsName_LeftHandGrip_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.SocketsName.HolsterAnchor
struct USocketsName_HolsterAnchor_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.StormZoneActor.SetRadiusAndLocation2D
struct AStormZoneActor_SetRadiusAndLocation2D_Params
{
	float*                                             newRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  newLocation2D;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Anarea.StormZoneActor.InitBeforeFirstShrink
struct AStormZoneActor_InitBeforeFirstShrink_Params
{
};

// Function Anarea.StormZoneActor.GetCurrentRadius
struct AStormZoneActor_GetCurrentRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.StormZoneHandler.ReceiveGamePhaseChanged
struct UStormZoneHandler_ReceiveGamePhaseChanged_Params
{
	EGamePhase*                                        previousGamePhase;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EGamePhase*                                        currentGamePhase;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.StormZoneHandler.OnRep_StormZoneStatus
struct UStormZoneHandler_OnRep_StormZoneStatus_Params
{
};

// Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink
struct UStormZoneHandler_OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink_Params
{
};

// Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2D
struct UStormZoneHandler_OnRep_ReplicatedZoneRadiusAndLocation2D_Params
{
};

// Function Anarea.StormZoneHandler.OnRep_ReplicatedSeed
struct UStormZoneHandler_OnRep_ReplicatedSeed_Params
{
};

// Function Anarea.StormZoneHandler.OnRep_CurrentShrinkIndex
struct UStormZoneHandler_OnRep_CurrentShrinkIndex_Params
{
};

// Function Anarea.StormZoneHandler.GetShrinkTimeForIndex
struct UStormZoneHandler_GetShrinkTimeForIndex_Params
{
	int*                                               shrinkIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.StormZoneHandler.BP_TryGetStormZoneRules
struct UStormZoneHandler_BP_TryGetStormZoneRules_Params
{
	struct FStormZonesRules                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.StormZoneHandler.BeginZoneMovements
struct UStormZoneHandler_BeginZoneMovements_Params
{
};

// Function Anarea.TestTarget.ReceiveHealthOrShieldValueChanged
struct ATestTarget_ReceiveHealthOrShieldValueChanged_Params
{
};

// Function Anarea.TestTarget.DisplayDamageTaken
struct ATestTarget_DisplayDamageTaken_Params
{
	float*                                             damageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteWantHideHUDToConfigFile
struct UUtilityFunctionLib_WriteWantHideHUDToConfigFile_Params
{
	bool*                                              WantHideHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteToggleSprintToConfigFile
struct UUtilityFunctionLib_WriteToggleSprintToConfigFile_Params
{
	bool*                                              ToggleSprint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteSoundVolumeFromConfigFile
struct UUtilityFunctionLib_WriteSoundVolumeFromConfigFile_Params
{
	EVolumeType*                                       volumeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteFOVToConfigFile
struct UUtilityFunctionLib_WriteFOVToConfigFile_Params
{
	float*                                             FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteEnableCSMToConfigFile
struct UUtilityFunctionLib_WriteEnableCSMToConfigFile_Params
{
	bool*                                              EnableCSM;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.WriteCorsshairShapeToConfigFile
struct UUtilityFunctionLib_WriteCorsshairShapeToConfigFile_Params
{
	ECrosshairToUse*                                   CrosshairShape;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.TryGetServerPORTAsString
struct UUtilityFunctionLib_TryGetServerPORTAsString_Params
{
	class AGameModeBase**                              GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.UtilityFunctionLib.TryGetServerPORTAsInt
struct UUtilityFunctionLib_TryGetServerPORTAsInt_Params
{
	class AGameModeBase**                              GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ResizeTextureRenderTarget
struct UUtilityFunctionLib_ResizeTextureRenderTarget_Params
{
	class UTextureRenderTarget2D**                     Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               newSizeX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               newSizeY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadWantHideHUDFromConfigFile
struct UUtilityFunctionLib_ReadWantHideHUDFromConfigFile_Params
{
	bool                                               WantHideHUD;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadToggleSprintFromConfigFile
struct UUtilityFunctionLib_ReadToggleSprintFromConfigFile_Params
{
	bool                                               ToggleSprint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadSoundVolumeFromConfigFile
struct UUtilityFunctionLib_ReadSoundVolumeFromConfigFile_Params
{
	EVolumeType*                                       volumeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              outVolume;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadFOVFromConfigFile
struct UUtilityFunctionLib_ReadFOVFromConfigFile_Params
{
	float                                              FOV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadEnableCSMFromConfigFile
struct UUtilityFunctionLib_ReadEnableCSMFromConfigFile_Params
{
	bool                                               EnableCSM;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.ReadCrosshairShapeFromConfigFile
struct UUtilityFunctionLib_ReadCrosshairShapeFromConfigFile_Params
{
	ECrosshairToUse                                    outCrosshairShape;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.GetRandIndicesInRangeNoDuplicate
struct UUtilityFunctionLib_GetRandIndicesInRangeNoDuplicate_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor)
	int*                                               requestedCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Anarea.UtilityFunctionLib.GetPlayerPing
struct UUtilityFunctionLib_GetPlayerPing_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.GetKillfeedMessage
struct UUtilityFunctionLib_GetKillfeedMessage_Params
{
	struct FKillfeedEntryInfo*                         KillfeedEntryInfo;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Anarea.UtilityFunctionLib.FindMapDelimitersLocationsSlowOp
struct UUtilityFunctionLib_FindMapDelimitersLocationsSlowOp_Params
{
	class UObject**                                    contextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   outMin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   outMax;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EMapDelimiterType*                                 delimiterType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.UtilityFunctionLib.CrashGame
struct UUtilityFunctionLib_CrashGame_Params
{
};

// Function Anarea.UtilityFunctionLib.ChooseName
struct UUtilityFunctionLib_ChooseName_Params
{
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FWeightedName>*                      weightedNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AbilityTask_WaitInventorySlotContext.CreateWaitInventorySlotContext
struct UAbilityTask_WaitInventorySlotContext_CreateWaitInventorySlotContext_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitInventorySlotContext*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AbilityTask_WaitLocationThreshold.CreateWaitLocationThreshold
struct UAbilityTask_WaitLocationThreshold_CreateWaitLocationThreshold_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitLocationThreshold*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AbilityTask_WaitVelocityThreshold.CreateWaitVelocityThreshold
struct UAbilityTask_WaitVelocityThreshold_CreateWaitVelocityThreshold_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitVelocityThreshold*          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.AbilityTask_WaitVelocityBelowThreshold.CreateWaitVelocityBelowThreshold
struct UAbilityTask_WaitVelocityBelowThreshold_CreateWaitVelocityBelowThreshold_Params
{
	class UGameplayAbility**                           OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitVelocityBelowThreshold*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.WeaponItemDataAsset.GetWeaponClass
struct UWeaponItemDataAsset_GetWeaponClass_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FItemKey*                                   ItemKey;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Anarea.Widget_SkillStatusOnHUD.SetModels
struct UWidget_SkillStatusOnHUD_SetModels_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryComponent**                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.Widget_SkillStatusOnHUD.ReceiveOnBeforeInventorySlotRemoved
struct UWidget_SkillStatusOnHUD_ReceiveOnBeforeInventorySlotRemoved_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.Widget_SkillStatusOnHUD.ReceiveInventorySlotModified
struct UWidget_SkillStatusOnHUD_ReceiveInventorySlotModified_Params
{
	int*                                               slotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent**                        SlotOwningInventory;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillCooldown
struct UWidget_SkillStatusOnHUD_ReceiveGameplayEffectRemoved_FromSkillCooldown_Params
{
	struct FGameplayEffectRemovalInfo*                 removalInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillActivation
struct UWidget_SkillStatusOnHUD_ReceiveGameplayEffectRemoved_FromSkillActivation_Params
{
	struct FGameplayEffectRemovalInfo*                 removalInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectAddedToSelf
struct UWidget_SkillStatusOnHUD_ReceiveGameplayEffectAddedToSelf_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayEffectSpec*                        effectSpec;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle*                activeEffectHandle;                                       // (Parm)
};

// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillRemoved
struct UWidget_SkillStatusOnHUD_BP_ReceiveSkillRemoved_Params
{
};

// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillDeactivated
struct UWidget_SkillStatusOnHUD_BP_ReceiveSkillDeactivated_Params
{
};

// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillCooldown
struct UWidget_SkillStatusOnHUD_BP_ReceiveSkillCooldown_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillAdded
struct UWidget_SkillStatusOnHUD_BP_ReceiveSkillAdded_Params
{
	struct FItemInstance*                              skillItem;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillActivated
struct UWidget_SkillStatusOnHUD_BP_ReceiveSkillActivated_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               skillTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Anarea.ZoneSelectionMenu.UnselectZoneForPlayer
struct UZoneSelectionMenu_UnselectZoneForPlayer_Params
{
};

// Function Anarea.ZoneSelectionMenu.SetModels
struct UZoneSelectionMenu_SetModels_Params
{
	class UPlayerSpawnSystemComponent**                PlayerSpawnSystem;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABasePlayerState**                           PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.SelectZoneForPlayer
struct UZoneSelectionMenu_SelectZoneForPlayer_Params
{
	int*                                               zoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.ReceiveZoneInfosModified
struct UZoneSelectionMenu_ReceiveZoneInfosModified_Params
{
};

// Function Anarea.ZoneSelectionMenu.ReceivePlayerSpawnZoneIndexChanged
struct UZoneSelectionMenu_ReceivePlayerSpawnZoneIndexChanged_Params
{
	int*                                               previousZoneIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               newZoneIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.ReceivePlayerCountPerZoneModified
struct UZoneSelectionMenu_ReceivePlayerCountPerZoneModified_Params
{
};

// Function Anarea.ZoneSelectionMenu.OnModelsChanged
struct UZoneSelectionMenu_OnModelsChanged_Params
{
};

// Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionMenu
struct UZoneSelectionMenu_DisplayZoneSelectionMenu_Params
{
	float*                                             GamePhaseDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionCountdown
struct UZoneSelectionMenu_DisplayZoneSelectionCountdown_Params
{
	float*                                             GamePhaseDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.DisplayMatchLoadingScreen
struct UZoneSelectionMenu_DisplayMatchLoadingScreen_Params
{
	float*                                             GamePhaseDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea.ZoneSelectionMenu.DisplayLaunchMatchCountdown
struct UZoneSelectionMenu_DisplayLaunchMatchCountdown_Params
{
	float*                                             GamePhaseDuration;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
