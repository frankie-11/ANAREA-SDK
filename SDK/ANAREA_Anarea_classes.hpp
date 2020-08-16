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

// Class Anarea.ItemDataAsset
// 0x0090 (0x00C0 - 0x0030)
class UItemDataAsset : public UDataAsset
{
public:
	struct FItemBaseData                               baseData;                                                 // 0x0030(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemDataAsset");
		return ptr;
	}


	struct FItemBaseData MakeItemBaseData(class UObject** WorldContextObject, struct FItemKey* ItemKey);
};


// Class Anarea.AmmoItemDataAsset
// 0x0000 (0x00C0 - 0x00C0)
class UAmmoItemDataAsset : public UItemDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AmmoItemDataAsset");
		return ptr;
	}

};


// Class Anarea.AnareaGameInstance
// 0x0168 (0x02D0 - 0x0168)
class UAnareaGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	class UDataTable*                                  HitFXDataTable;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UItemDatabase*                               ItemDatabase;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LootDataTable;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ShootingWeaponDataTable;                                  // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  GrenadeWeaponDataTable;                                   // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECrosshairToUse                                    CrosshairToUse;                                           // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WantHideHUD;                                              // 0x0199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EnableCSM;                                                // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ToggleSprint;                                             // 0x01A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, class UClass*>           TaggedGameplayEffects;                                    // 0x01A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x01F8(0x0050) UNKNOWN PROPERTY: SetProperty Anarea.AnareaGameInstance.ListOfLoadedSubLevels
	struct FVector                                     DefaultControllerLocation;                                // 0x0248(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FPlayerMatchData                            LastPlayerMatchData;                                      // 0x0254(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      HasAnyLastPlayerMatchData;                                // 0x0260(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisconnectReason;                                         // 0x0268(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnCrosshairChangedDelegate;                               // 0x0280(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0280(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnWantHideHUDSettingChangedDelegate;                      // 0x0290(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0290(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnFOVSettingChangedDelegate;                              // 0x02A0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x02A0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnEnableCSMSettingChangedDelegate;                        // 0x02B0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x02B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnToggleSprintSettingChangedDelegate;                     // 0x02C0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x02C0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnareaGameInstance");
		return ptr;
	}


	float SetFOV(float* InFov);
	void ResetDisconnectReason();
	void ReceiveLevelStreamingUnloaded();
	void ReceiveLevelStreamingLoaded();
	void OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature();
	void OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature();
	void OnFOVSettingChanged_DelegateSignature__DelegateSignature();
	void OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature();
	void OnCrosshairChanged_DelegateSignature__DelegateSignature();
	bool GetHasDisconnectReason();
};


// Class Anarea.AnareaGameModeBase
// 0x01F0 (0x04A8 - 0x02B8)
class AAnareaGameModeBase : public APlayFabGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	int                                                SpawnZoneGridRowCount;                                    // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnZoneGridColCount;                                    // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PercentageOfForbiddenZones;                               // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxZoneSize;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerSpawnPerZone;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x02D4(0x0050) UNKNOWN PROPERTY: SetProperty Anarea.AnareaGameModeBase.PlayersWaitingLobbyLoading
	TMap<class APlayerController*, struct FTimerHandle> PlayerWaitingLobbyLoadingTimeoutFallbacks;                // 0x0328(0x0050) (ZeroConstructor)
	int                                                MinPlayersToWaitBeforeLaunchingMatch;                     // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMaxWaitTimeBeforeLaunchingMatch;                       // 0x037C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTimeBeforeLaunchingMatch;                          // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LaunchZoneSelectionPhaseDuration;                         // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ZoneSelectionPhaseDuration;                               // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LoadMatchPhaseDuration;                                   // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LaunchMatchPhaseDuration;                                 // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndMatchPhaseDuration;                                    // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGamePhase                                         currentGamePhase;                                         // 0x0398(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                MaxWaitTimeBeforeLaunchingMatchTimer;                     // 0x03A0(0x0008)
	TArray<class ALobbyPlayerStart*>                   AllLobbyPlayerStarts;                                     // 0x03A8(0x0010) (ZeroConstructor)
	TArray<struct FZonePlayerStarts>                   MatchPlayerStartsPerZone;                                 // 0x03B8(0x0010) (ZeroConstructor)
	TArray<class APlayerStart*>                        AvaillablePlayerStartsForMatch;                           // 0x03C8(0x0010) (ZeroConstructor)
	struct FTimerHandle                                CheckRemainingPlayerCountBeforeRestartingGameTimer;       // 0x03D8(0x0008)
	int                                                TotalPlayerCountAtBegining;                               // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScoreRules                                 ScoreRules;                                               // 0x03E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      BlockBackfilling;                                         // 0x0400(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA7];                                      // 0x0401(0x00A7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnareaGameModeBase");
		return ptr;
	}


	void OnPlayerFullyJoinLobbyTimeoutFallback(class ABasePlayerController** Player);
	void OnPlayerFullyJoinLobby(class ABasePlayerController** Player);
	float GetPhaseDuration(EGamePhase* gamePhase);
};


// Class Anarea.AnareaGameStateBase
// 0x0090 (0x02E8 - 0x0258)
class AAnareaGameStateBase : public AGameStateBase
{
public:
	struct FGamePhaseReplicatedInfo                    ReplicatedGamePhaseInfo;                                  // 0x0258(0x000C) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                RemainingPlayersInMatch;                                  // 0x0264(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxKillfeedEntriesToStore;                                // 0x0268(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FKillfeedEntry>                      KillFeedInfos;                                            // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                KillFeedInfosCircularFirstIndex;                          // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                winnerID;                                                 // 0x0284(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	class UPlayerSpawnSystemComponent*                 PlayerSpawnSystem;                                        // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStormZoneHandler*                           StormZoneHandler;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRemainingPlayersInMatchChangedDelegate;                 // 0x02B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnKillfeedUpdatedDelegate;                                // 0x02C8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x02C8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnWinnerSelectedDelegate;                                 // 0x02D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x02D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnareaGameStateBase");
		return ptr;
	}


	void OnRep_WinnerID();
	void OnRep_ReplicatedGamePhaseInfo(struct FGamePhaseReplicatedInfo* prevGamePhase);
	void OnRep_RemainingPlayersInMatch();
	void OnRep_MatchID();
	void AddKillfeedEntry(struct FKillfeedEntryInfo* killfeedInfo);
};


// Class Anarea.AnareaGameUserSettings
// 0x0030 (0x0150 - 0x0120)
class UAnareaGameUserSettings : public UGameUserSettings
{
public:
	float                                              AudioVolume_Master;                                       // 0x0120(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              AudioVolume_Effects;                                      // 0x0124(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              AudioVolume_Voices;                                       // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              AudioVolume_Music;                                        // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	ECrosshairToUse                                    CrosshairShape;                                           // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      WantHideHUD;                                              // 0x0131(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              FOV;                                                      // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      EnableCSM;                                                // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      ToggleSprint;                                             // 0x0139(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUserSettingsAppliedDelegate;                            // 0x0140(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x013A(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnareaGameUserSettings");
		return ptr;
	}


	void SetWantHideHUD(bool* inWantHideHUD);
	void SetVoicesVolume(float* Value);
	void SetToggleSprint(bool* inToggleSprint);
	void SetMusicVolume(float* Value);
	void SetMasterVolume(float* Value);
	void SetFOV(float* InFov);
	void SetEnableCSM(bool* inEnableCSM);
	void SetEffectsVolume(float* Value);
	void SetCrosshairShape(ECrosshairToUse* inCrosshairToUse);
	class UAnareaGameUserSettings* STATIC_GetAnareaGameUserSettings();
};


// Class Anarea.AnimBPInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimBPInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimBPInterface");
		return ptr;
	}


	void SetIsAiming(bool* isAiming);
	void ChangeWeaponSetDetail(EWeaponSetDetail* weaponSetDetail);
	void ChangeUpperbodyAnimMode(EWeaponSet* animMode);
};


// Class Anarea.AnimationHandler
// 0x0138 (0x01E8 - 0x00B0)
class UAnimationHandler : public UActorComponent
{
public:
	unsigned char                                      UseDataTableToInitializeAnimations;                       // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  AnimationsDataTable;                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowNameInAnimationsDataTable;                             // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, class UAnimMontage*>     NamedAnimations;                                          // 0x00C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EWeaponSet                                         UpperbodyAnimMode;                                        // 0x0118(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	EWeaponSetDetail                                   weaponSetDetail;                                          // 0x0119(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isAiming;                                                 // 0x011A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FEquipAnimInfos>         SocketToEquipAnims;                                       // 0x0120(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UAnimMontage*, class UAnimMontage*>     MontageMappingForFPSMesh;                                 // 0x0170(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET
	unsigned char                                      ForceBypassGrabAnimations;                                // 0x01D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceBypassHolsterAnimations;                             // 0x01D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    AnimNotifyDelegate;                                       // 0x01D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01D2(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimationHandler");
		return ptr;
	}


	void Server_SetIsAiming(bool* NewValue);
	void Server_ChangeUpperbodyAnimMode(EWeaponSet* newWeaponSet, EWeaponSetDetail* newWeaponSetDetail);
	void OnRep_WeaponSetDetail();
	void OnRep_UpperbodyAnimMode();
	void OnRep_IsAiming();
	class UAnimMontage* GetNamedAnimation(struct FGameplayTag* animName, bool* forTPSMesh);
	class UAnimInstance* GetLinkedAnimBP();
};


// Class Anarea.AnimationHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimationHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimationHandlerInterface");
		return ptr;
	}

};


// Class Anarea.AnimNotifyReceiverInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimNotifyReceiverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyReceiverInterface");
		return ptr;
	}


	void ReceiveAnimNotify(struct FGameplayTag* GameplayTag);
};


// Class Anarea.AssetLoadingSubsystem
// 0x00E8 (0x0118 - 0x0030)
class UAssetLoadingSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0030(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AssetLoadingSubsystem");
		return ptr;
	}

};


// Class Anarea.BaseAbilitySystemComponent
// 0x0140 (0x1428 - 0x12E8)
class UBaseAbilitySystemComponent : public UAbilitySystemComponent
{
public:
	class UEquipmentHandler*                           LinkedEquipmentHandler;                                   // 0x12E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimationHandler*                           LinkedAnimationHandler;                                   // 0x12F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USightHandler*                               LinkedSightHandler;                                       // 0x12F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         LinkedInventory;                                          // 0x1300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         LinkedEquipmentInventory;                                 // 0x1308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      IsUsedByAI;                                               // 0x1310(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsAlive;                                                  // 0x1311(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_Health;                          // 0x1318(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x1312(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_MaxHealth;                       // 0x1328(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x1328(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_Stamina;                         // 0x1338(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x1338(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_MaxStamina;                      // 0x1348(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x1348(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_Shield;                          // 0x1358(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x1358(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_MaxShield;                       // 0x1368(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x1368(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_MoveSpeed;                       // 0x1378(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x1378(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_AttackSpeed;                     // 0x1388(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0xF];                                       // 0x1388(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    AttributeChangedDelegate_Armor;                           // 0x1398(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0xF];                                       // 0x1398(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OutOfStaminaDelegate_ServerOnly;                          // 0x13A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0xF];                                       // 0x13A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OutOfShieldDelegate_ServerOnly;                           // 0x13B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0xF];                                       // 0x13B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDeathDelegate;                                          // 0x13C8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData11[0xF];                                       // 0x13C8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnAbilityCommited_BP;                                     // 0x13D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0xF];                                       // 0x13D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnConsumableEffectBeginApply;                             // 0x13E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData13[0xF];                                       // 0x13E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnConsumableEffectEndApply;                               // 0x13F8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData14[0xF];                                       // 0x13F8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnConsumableEffectCanceled;                               // 0x1408(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData15[0xF];                                       // 0x1408(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnConsumableEffectBeginWaitApplicationDelegate;           // 0x1418(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData16[0xF];                                       // 0x1418(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseAbilitySystemComponent");
		return ptr;
	}


	void ReceiveHealthChanged();
	void OnRep_IsAlive();
	void BP_FakeAbilityLocalInputReleased(struct FString* InputName);
	void BP_FakeAbilityLocalInputPressed(struct FString* InputName);
	void BP_CancelAbilityWithClass(class UClass** abilityClass);
};


// Class Anarea.BasePlayerAnimBP
// 0x0010 (0x0280 - 0x0270)
class UBasePlayerAnimBP : public UAnimInstance
{
public:
	unsigned char                                      UseLeftHandGripIK;                                        // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceNoLeftHandIK;                                        // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCurveForLeftHandGripIK;                                // 0x0272(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShouldAttachWeaponToLeftHand;                             // 0x0273(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0274(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BasePlayerAnimBP");
		return ptr;
	}


	bool PlayPawnDeathAnim(struct FDamageCauseInfo* deathCauseInfo);
};


// Class Anarea.BaseAttributeSet
// 0x00D0 (0x0100 - 0x0030)
class UBaseAttributeSet : public UAttributeSet
{
public:
	float                                              LastDamageReceivedTime;                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                LastDamageReceiveTimerHandle;                             // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAttributeData                      Health;                                                   // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      MaxHealth;                                                // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      Stamina;                                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      MaxStamina;                                               // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      Shield;                                                   // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      MaxShield;                                                // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      MoveSpeed;                                                // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      AttackSpeed;                                              // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      Armor;                                                    // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FGameplayAttributeData                      PhysicalDamage;                                           // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAttributeData                      DirectHealthDamage;                                       // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FGameplayAttributeData                      Buffer;                                                   // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseAttributeSet");
		return ptr;
	}


	void OnRep_Stamina();
	void OnRep_Shield();
	void OnRep_MoveSpeed();
	void OnRep_MaxStamina();
	void OnRep_MaxShield();
	void OnRep_MaxHealth();
	void OnRep_Health();
	void OnRep_AttackSpeed();
	void OnRep_Armor();
	void CheckResistantSkillApplication();
};


// Class Anarea.BaseCompassItemWidget
// 0x0010 (0x0240 - 0x0230)
class UBaseCompassItemWidget : public UUserWidget
{
public:
	TScriptInterface<class UCompassAgent>              LinkedCompassAgent;                                       // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseCompassItemWidget");
		return ptr;
	}

};


// Class Anarea.BaseInventoryPanel
// 0x0080 (0x02B0 - 0x0230)
class UBaseInventoryPanel : public UUserWidget
{
public:
	TArray<class UInventoryComponent*>                 Models_Inventories;                                       // 0x0230(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UItemUserComponent*                          Model_ItemUser;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNearbyItemDetector*                         Model_NearbyItemDetector;                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      SlotClassToUse;                                           // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ContextMenuClassToUse;                                    // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CanCreateNewSlots;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AlwaysSortInventory;                                      // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDropLayerBase*>                      DropLayers;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	TArray<class UInventorySlotWidgetBase*>            SlotArray;                                                // 0x0278(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	class UPanelWidget*                                SlotsContainer;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWantDisplayItemTooltipDelegate;                         // 0x0290(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0290(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnWantHideItemTooltipDelegate;                            // 0x02A0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02A0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseInventoryPanel");
		return ptr;
	}


	void UpdateSlotLinkedToItemInWorld(class AItemInWorld** ItemInWorld);
	void UpdateSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	class UInventorySlotWidgetBase* TryGetSlot(int* slotIndex, class UInventoryComponent** owningInventory, class AItemInWorld** LinkedItemInWorld);
	void SetModels(TArray<class UInventoryComponent*>* inventoryModels, class UItemUserComponent** itemUserModel, class UNearbyItemDetector** NearbyItemDetector);
	void ReceiveRightClickOnSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld);
	void ReceiveOnSlotUnlocked(int* slotIndex, class UInventoryComponent** owningInventory);
	void ReceiveOnSlotLocked(int* slotIndex, class UInventoryComponent** owningInventory);
	void ReceiveMouseLeaveSlot();
	void ReceiveMouseEnterSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld);
	void ReceiveMouseDoubleClick(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld);
	void ReceiveLootboxRemovedInNearbyDetector(class ALootbox** Lootbox);
	void ReceiveLootboxAddedInNearbyDetector(class ALootbox** Lootbox);
	void ReceiveItemUnlockedInNearbyDetector(class AItemInWorld** ItemInWorld);
	void ReceiveItemRemovedInNearbyDetector(class AItemInWorld** ItemInWorld);
	void ReceiveItemModifiedInNearbyDetector(class AItemInWorld** ItemInWorld);
	void ReceiveItemLockedInNearbyDetector(class AItemInWorld** ItemInWorld);
	void ReceiveItemAddedInNearbyDetector(class AItemInWorld** ItemInWorld);
	void ReceiveDragSlot(int* slotIndex, class UInventoryComponent** owningSlotInventory, class AItemInWorld** LinkedItemInWorld, bool* wantSplit);
	void ReceiveDragLeaveOnDropLayer(class UDropLayerBase** dropLayer);
	void ReceiveDragEnterOnDropLayer(class UDropLayerBase** dropLayer);
	void ReceiveDragEnd();
	void ReceiveDragCanceled();
	void ReceiveDragBegin();
	void ReceiveButtonUpOnDropLayer(class UDropLayerBase** dropLayer);
	void OnWantHideItemTooltip_DelegateSignature__DelegateSignature();
	void OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature(struct FItemInstance* Item);
	void OnModelsChanged();
	void InitVisual();
	void InitUMGRefs(TArray<class UDropLayerBase*>* InDropLayers, TArray<class UInventorySlotWidgetBase*>* InSlotArray, class UPanelWidget** InSlotContainer);
	void ClearSlotLinkedToItemInWorld(class AItemInWorld** ItemInWorld);
	void ClearSlot(int* slotIndex, class UInventoryComponent** owningInventory);
	void ClearAllSlotsLinkedToInventory(class UInventoryComponent** Inventory);
};


// Class Anarea.BaseEquipmentPanel
// 0x0008 (0x02B8 - 0x02B0)
class UBaseEquipmentPanel : public UBaseInventoryPanel
{
public:
	class UEquipmentHandler*                           Model_EquipmentHandler;                                   // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseEquipmentPanel");
		return ptr;
	}


	void SetModel_EquipmentHandler(class UEquipmentHandler** EquipmentHandler);
	void ReceiveEquippedWeaponChanged();
};


// Class Anarea.BaseGameplayAbility
// 0x0008 (0x0408 - 0x0400)
class UBaseGameplayAbility : public UGameplayAbility
{
public:
	EAbilityInputs                                     InputKeyEnum;                                             // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseGameplayAbility");
		return ptr;
	}


	bool HasAuthority();
};


// Class Anarea.BaseGameplayEffect
// 0x0000 (0x0770 - 0x0770)
class UBaseGameplayEffect : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseGameplayEffect");
		return ptr;
	}

};


// Class Anarea.BaseLocomotionGameplayEffect
// 0x0000 (0x0770 - 0x0770)
class UBaseLocomotionGameplayEffect : public UGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseLocomotionGameplayEffect");
		return ptr;
	}

};


// Class Anarea.BaseMapDelimiter
// 0x0008 (0x0220 - 0x0218)
class ABaseMapDelimiter : public AActor
{
public:
	class UBoxComponent*                               Shape;                                                    // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseMapDelimiter");
		return ptr;
	}

};


// Class Anarea.CustomCharacter
// 0x0020 (0x0650 - 0x0630)
class ACustomCharacter : public ACharacter
{
public:
	unsigned char                                      bIsCrawling : 1;                                          // 0x0630(0x0001) (BlueprintVisible, BlueprintReadOnly, Net BITFIELD: 0101)
	unsigned char                                      bIsSprinting : 1;                                         // 0x0630(0x0001) (BlueprintVisible, BlueprintReadOnly, Net BITFIELD: 0202)
	unsigned char                                      bIsJogging : 1;                                           // 0x0630(0x0001) (BlueprintVisible, BlueprintReadOnly, Net BITFIELD: 0404)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0631(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CustomCharacter");
		return ptr;
	}


	void UnCrawl();
	void ReceiveAimModeChanged(bool* isAiming);
	void OnRep_IsSprinting();
	void OnRep_IsJogging();
	void OnRep_IsCrawling();
	void K2_OnStartSprint();
	void K2_OnStartJog();
	void K2_OnStartCrawl(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust);
	void K2_OnEndSprint();
	void K2_OnEndJog();
	void K2_OnEndCrawl(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust);
	void EndSprint();
	void EndJog();
	void Crawl();
	void BeginSprint();
	void BeginJog();
};


// Class Anarea.BasePlayerCharacter
// 0x01D0 (0x0820 - 0x0650)
class ABasePlayerCharacter : public ACustomCharacter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0650(0x0030) MISSED OFFSET
	class USpringArmComponent*                         CameraBoom;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            FollowCamera;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UEquipmentHandler*                           EquipmentHandler;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAnimationHandler*                           AnimationHandler;                                         // 0x0698(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USightHandler*                               SightHandler;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBaseAbilitySystemComponent*                 AbilitySystem;                                            // 0x06A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBaseAttributeSet*                           AttributSet;                                              // 0x06B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ULocomotionHandler*                          LocomotionHandler;                                        // 0x06B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBulletHandler*                              BulletHandler;                                            // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FootstepAudioComponent;                                   // 0x06C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             JumpAudioComponent;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             LandAudioComponent;                                       // 0x06D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         Inventory;                                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UItemUserComponent*                          ItemUser;                                                 // 0x06E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         EquipmentInventory;                                       // 0x06F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UNearbyItemDetector*                         NearbyItemsDetector;                                      // 0x06F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UCompassComponent*                           Compass;                                                  // 0x0700(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BackpackMesh;                                             // 0x0708(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              CorpseDisparitionTime;                                    // 0x0710(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootboxToSpawn;                                           // 0x0718(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	class UClass*                                      KillSelfGE;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FallingDamageGE;                                          // 0x0730(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FallingDamageCurve;                                       // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DefaultEffectsToApply;                                    // 0x0740(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<class UClass*, EAbilityInputs>                DefaultGameplayAbilities;                                 // 0x0750(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FDamageCauseInfo                            LastDamageCauseInfo;                                      // 0x07A0(0x0038)
	float                                              MinCrouchInputDelay;                                      // 0x07D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseTurnRate;                                             // 0x07DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x07E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SprintInputPressed;                                       // 0x07E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LastCrouchInputTime;                                      // 0x07E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      LocomotionGEClass_Fall;                                   // 0x07F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LocomotionGEHandle_Fall;                                  // 0x07F8(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      LocomotionGEClass_Jog;                                    // 0x0800(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LocomotionGEHandle_Jog;                                   // 0x0808(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      LocomotionGEClass_Sprint;                                 // 0x0810(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 LocomotionGEHandle_Sprint;                                // 0x0818(0x0008) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BasePlayerCharacter");
		return ptr;
	}


	void TryInteract();
	void ToggleCrouch();
	void Server_ReceivePlayerMenuClosed();
	void Server_InteractWithSkillCrate(class ASkillCrate** SkillCrate);
	void Server_InteractWithLootbox(class ALootbox** Lootbox);
	void Server_InteractWithDoor(class AReplicatedDoor** door, bool* openRight);
	bool PlayPawnDeathAnim(struct FDamageCauseInfo* deathCauseInfo);
	void K2_HandlePawnDeath();
	void InputEndSprint();
	void InputBeginSprint();
	void HandlePawnDeath();
	void EnableRagdoll(bool* applyImpulse, struct FVector* Impulse, bool* impulseAsVelocityChange);
	void Client_HandlePawnDeath(struct FDamageCauseInfo* damageCause);
	void ApplyCosmetics_CharacterModel();
	void ApplyCosmetics_Backpack();
};


// Class Anarea.BasePlayerController
// 0x00C0 (0x0658 - 0x0598)
class ABasePlayerController : public APlayFabPlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0598(0x0010) MISSED OFFSET
	ELocalPlayerGamePhase                              LocalPlayerGamePhase;                                     // 0x05A8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	struct FPlayerMatchData                            MatchData;                                                // 0x05B0(0x000C)
	unsigned char                                      UnknownData01[0x14];                                      // 0x05BC(0x0014) MISSED OFFSET
	unsigned char                                      ShowDebugTraces;                                          // 0x05D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x05D1(0x000F) MISSED OFFSET
	unsigned char                                      AutoSpectateAfterDeath;                                   // 0x05E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DisplayLoadingScreenAtBeginPlay;                          // 0x05E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDelayForClientConnectionChecksBeforeLoginOutClient;    // 0x05E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastCheckClientConnectionTimestamp;                       // 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                PingClientConnectionTimerHandler;                         // 0x05F0(0x0008)
	struct FTimerHandle                                CheckClientConnectionTimerHandler;                        // 0x05F8(0x0008)
	unsigned char                                      WantAutoRun;                                              // 0x0600(0x0001) (ZeroConstructor, IsPlainOldData)
	class UHUDManager*                                 HUDManager;                                               // 0x0608(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      m_DebugWidgetClass;                                       // 0x0610(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultTimeToWaitForLobbyLoading;                         // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDebugInfoWidget*                            m_DebugWidget;                                            // 0x0620(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0628(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKillCountChangedDelegate;                               // 0x0638(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0628(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnReceiveHasKilledSomeoneDelegate;                        // 0x0648(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0648(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BasePlayerController");
		return ptr;
	}


	void SetInputModeForPlaying();
	void SetInputModeForMenuOpen();
	void Server_RemovePlayerFromSelectedZone();
	void Server_ReceiveLobbyLoaded();
	void Server_PingClientConnection();
	void Server_MakePlayerReturnToMainMenu();
	void Server_AddPlayerToZone(int* zoneIndex);
	void ReceivePlayerMenuClosed();
	void ReceiveLobbyLoaded();
	void ReceiveGamePhaseChanged(EGamePhase* previousGamePhase, EGamePhase* newGamePhase);
	void OnRep_LocalPlayerGamePhase();
	void OnKillCountChanged_DelegateSignature__DelegateSignature(int* KillCount);
	void K2_HandlePlayerDeath();
	void HandlePlayerDeath(struct FDamageCauseInfo* lastDamageCause);
	void HandlePawnSetOnClient();
	void ClientTeleportInitiateWithFailOnServerSide(struct FString* playerName, struct FString* playerStartName, struct FVector* playerStartLocation);
	void ClientTeleportInitiateFuccessfullyOnServerSide(struct FString* playerName);
	void ClientReturnToMainMenuWithMatchData(struct FPlayerMatchData* InMatchData);
	void ClientDisplayErrorLog(struct FString* errorText);
	void Client_DisplayHasKilledSomeoneMessage(class ABasePlayerState** killedPlayerState);
	void CheckClientConnectionValidity();
};


// Class Anarea.BasePlayerInventoryPanel
// 0x0000 (0x02B0 - 0x02B0)
class UBasePlayerInventoryPanel : public UBaseInventoryPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BasePlayerInventoryPanel");
		return ptr;
	}

};


// Class Anarea.BasePlayerState
// 0x00D0 (0x0410 - 0x0340)
class ABasePlayerState : public APlayerState
{
public:
	struct FString                                     PlayFabId;                                                // 0x0340(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                KillCount;                                                // 0x0350(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                DeathPlacement;                                           // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKillCountChangedDelegate;                               // 0x0358(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0358(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDeathPlacementSetDelegate;                              // 0x0368(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0368(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                SpawnZoneIndex;                                           // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnZoneIndexChangedDelegate;                          // 0x0380(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x037C(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      IsDead;                                                   // 0x0390(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class ABasePlayerState*                            Killer;                                                   // 0x0398(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerDeathDelegate;                                    // 0x03A0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x03A0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET
	class UCosmeticsManagerInGame*                     CosmeticsManager;                                         // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x40];                                      // 0x03D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BasePlayerState");
		return ptr;
	}


	void ReceiveOnEquippedWeaponSkinsSetDelegate();
	void ReceiveOnEquippedPlayerIconSetDelegate();
	void ReceiveOnEquippedCharacterModelSetDelegate();
	void ReceiveOnEquippedBackpackSetDelegate();
	void OnRep_SpawnZoneIndex(int* PreviousSpawnZoneIndex);
	void OnRep_Killer();
	void OnRep_KillCount();
	void OnRep_DeathPlacement();
	void InitDataFromBackend();
	bool GetWeaponSkinBackendInfo(struct FName* weaponName, struct FWeaponSkinBackendInfo* outWeaponSkinBackendInfo);
	bool GetPlayerIconBackendInfo(struct FPlayerIconBackendInfo* outPlayerIconInfo);
	class ABasePlayerState* GetKiller();
	bool GetCharacterModelBackendInfo(struct FCharacterModelBackendInfo* outCharacterModelInfo);
	bool GetBackpackBackendInfo(struct FBackpackBackendInfo* outBackpackInfo);
};


// Class Anarea.BaseSpectatorPawn
// 0x0028 (0x02C8 - 0x02A0)
class ABaseSpectatorPawn : public ASpectatorPawn
{
public:
	int                                                CurSpectatedIdx;                                          // 0x02A0(0x0004) (ZeroConstructor, IsPlainOldData)
	class ABasePlayerState*                            CurrentSpectatedPlayer;                                   // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchSmoothingFactor;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnNewPlayerSpectatedDelegate;                             // 0x02B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02B4(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseSpectatorPawn");
		return ptr;
	}


	void SpectatePreviousPlayer();
	void SpectateNextPlayer();
	void FindPlayerToSpectate();
};


// Class Anarea.BulletInfo
// 0x0060 (0x0088 - 0x0028)
class UBulletInfo : public UObject
{
public:
	struct FBulletInstanceInfo                         DefaultInstanceInfo;                                      // 0x0028(0x0048) (Net)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	class UClass*                                      OwningWeaponClass;                                        // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BulletInfo");
		return ptr;
	}


	void OnRep_DefaultInstanceInfo();
};


// Class Anarea.Bullet
// 0x0088 (0x00B0 - 0x0028)
class UBullet : public UObject
{
public:
	struct FBulletInstanceInfo                         BulletInfo;                                               // 0x0028(0x0048)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0070(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Bullet");
		return ptr;
	}

};


// Class Anarea.BulletHandler
// 0x0060 (0x0110 - 0x00B0)
class UBulletHandler : public UActorComponent
{
public:
	struct FName                                       DefaultHitFXRow;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PoolCapacity;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceForLineCheck;                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UBullet*>                             ProcessingBulletsPool;                                    // 0x00C0(0x0010) (ZeroConstructor)
	TArray<class UBullet*>                             PendingBulletsPool;                                       // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UBullet*>                             ProcessingBulletsOverflowPool;                            // 0x00E0(0x0010) (ZeroConstructor)
	TArray<class UBulletInfo*>                         BulletInfos;                                              // 0x00F0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BulletHandler");
		return ptr;
	}


	void Server_HandleHit(struct FHitResult* HitResult, class UBulletInfo** bulletInfoObj);
	void Multicast_PlayHitFX(struct FVector* ImpactPoint, struct FVector* ImpactNormal, TEnumAsByte<EPhysicalSurface>* surfaceType);
};


// Class Anarea.CleanLightingBlueprintLib
// 0x0000 (0x0028 - 0x0028)
class UCleanLightingBlueprintLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CleanLightingBlueprintLib");
		return ptr;
	}


	void STATIC_FixLightingIDs();
};


// Class Anarea.CompassAgent
// 0x0000 (0x0028 - 0x0028)
class UCompassAgent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CompassAgent");
		return ptr;
	}


	bool IsMovable();
	struct FVector GetWorldLocation();
	ECompassAgentType GetAgentType();
};


// Class Anarea.CompassComponent
// 0x0050 (0x0100 - 0x00B0)
class UCompassComponent : public UActorComponent
{
public:
	float                                              BaseNorthAngle;                                           // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCompassDataAsset*                           CompassDataAsset;                                         // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FBlueprintAgentInfo>                 RegisteredAgents;                                         // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              CurrentDirectionCardinalAngle;                            // 0x00D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OwnerAsPawn;                                              // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAgentRegisteredDelegate;                                // 0x00E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnAgentUnregisteredDelegate;                              // 0x00F0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CompassComponent");
		return ptr;
	}


	void UnregisterAgent(TScriptInterface<class UCompassAgent>* Agent);
	void RegisterAgent(TScriptInterface<class UCompassAgent>* Agent);
};


// Class Anarea.CompassDataAsset
// 0x0050 (0x0080 - 0x0030)
class UCompassDataAsset : public UDataAsset
{
public:
	TMap<ECompassAgentType, class UClass*>             AgentTypeToWidgetClassMap;                                // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CompassDataAsset");
		return ptr;
	}

};


// Class Anarea.ConsumableItemDataAsset
// 0x0000 (0x00C0 - 0x00C0)
class UConsumableItemDataAsset : public UItemDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ConsumableItemDataAsset");
		return ptr;
	}


	bool GetActivationEffectAndAbilityClasses(class UObject** WorldContextObject, struct FItemKey* ItemKey, class UClass** outGameplayEffectClass, class UClass** outGameplayAbilityClass, float* outWaitTimeBeforeFirstApplication);
};


// Class Anarea.SaveGame_EquippedCosmetics
// 0x0068 (0x0090 - 0x0028)
class USaveGame_EquippedCosmetics : public USaveGame
{
public:
	TMap<struct FName, struct FName>                   EquippedWeaponSkins;                                      // 0x0028(0x0050) (BlueprintVisible, ZeroConstructor)
	struct FName                                       EquippedBackpack;                                         // 0x0078(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EquippedCharacterModel;                                   // 0x0080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EquippedPlayerIcon;                                       // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SaveGame_EquippedCosmetics");
		return ptr;
	}

};


// Class Anarea.CosmeticsManagerInGame
// 0x0218 (0x02C8 - 0x00B0)
class UCosmeticsManagerInGame : public UActorComponent
{
public:
	TArray<struct FString>                             EquippedWeaponTypes;                                      // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UCosmeticBackendInfos*                       CosmeticsBackendInfo;                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FName>                   EquippedWeaponSkins;                                      // 0x00C8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       EquippedBackpack;                                         // 0x0118(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EquippedCharacterModel;                                   // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EquippedPlayerIcon;                                       // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeaponNameAndSkinName>              ReplicatedEquippedWeaponSkins;                            // 0x0130(0x0010) (Net, ZeroConstructor)
	struct FName                                       ReplicatedEquippedBackpack;                               // 0x0140(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReplicatedEquippedCharacterModel;                         // 0x0148(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReplicatedEquippedPlayerIcon;                             // 0x0150(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsEquippedWeaponSkinsNameInitialized;                     // 0x0158(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsEquippedBackpackNameInitialized;                        // 0x0159(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsEquippedCharacterModelNameInitialized;                  // 0x015A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsEquippedPlayerIconNameInitialized;                      // 0x015B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FNameArray>              UnlockedWeaponSkins;                                      // 0x0160(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               UnlockedBackpacks;                                        // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               UnlockedCharacterModels;                                  // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               UnlockedPlayerIcons;                                      // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      IsInitialized;                                            // 0x01E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InitDataOnBeginPlay;                                      // 0x01E1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDebugMode;                                             // 0x01E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FNameArray>              DebugModeUnlockedWeaponSkins;                             // 0x01E8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               DebugModeUnlockedBackpacks;                               // 0x0238(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               DebugModeUnlockedCharacterModels;                         // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               DebugModeUnlockedPlayerIcons;                             // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnCosmeticsManagerInitializedDelegate;                    // 0x0268(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0268(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnEquippedBackpackSetDelegate;                            // 0x0278(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0278(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnEquippedCharacterModelSetDelegate;                      // 0x0288(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0288(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnEquippedWeaponSkinsSetDelegate;                         // 0x0298(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0298(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnEquippedPlayerIconSetDelegate;                          // 0x02A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x02A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnUnlockedItemReceivedDelegate;                           // 0x02B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x02B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CosmeticsManagerInGame");
		return ptr;
	}


	void RetryInitData();
	void OnRep_ReplicatedEquippedWeaponSkins();
	void OnRep_ReplicatedEquippedPlayerIcon();
	void OnRep_ReplicatedEquippedCharacterModel();
	void OnRep_ReplicatedEquippedBackpack();
	bool IsSkinUnlockedForWeapon(struct FName* weaponName, struct FName* skinName);
	bool IsSkinEquippedOnWeapon(struct FName* weaponName, struct FName* skinName);
	bool IsPlayerIconUnlocked(struct FName* playerIconName);
	bool IsPlayerIconEquipped(struct FName* playerIconName);
	bool IsCharacterModelUnlocked(struct FName* characterModelName);
	bool IsCharacterModelEquipped(struct FName* characterModelName);
	bool IsBackpackUnlocked(struct FName* backpackName);
	bool IsBackpackEquipped(struct FName* backpackName);
	void InitData();
	bool GetWeaponSkinBackendInfo(struct FName* weaponName, struct FName* skinName, struct FWeaponSkinBackendInfo* outBackendInfo);
	bool GetPlayerIconBackendInfo(struct FName* playerIconName, struct FPlayerIconBackendInfo* outBackendInfo);
	bool GetEquippedSkinForWeapon(struct FName* weaponName, struct FName* outSkinName);
	bool GetEquippedPlayerIcon(struct FName* outPlayerIconName);
	bool GetEquippedCharacterModel(struct FName* outCharacterModelName);
	bool GetEquippedBackpack(struct FName* outBackpackName);
	bool GetCharacterModelBackendInfo(struct FName* characterModelName, struct FCharacterModelBackendInfo* outBackendInfo);
	bool GetBackpackBackendInfo(struct FName* backpackName, struct FBackpackBackendInfo* outBackendInfo);
	void FinishDataInitializationAfterUnlockedItemReceived();
};


// Class Anarea.CosmeticsManagerInMenus
// 0x00D0 (0x0398 - 0x02C8)
class UCosmeticsManagerInMenus : public UCosmeticsManagerInGame
{
public:
	struct FString                                     StoreId;                                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FNameArray>              AllWeaponSkins;                                           // 0x02D8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AllBackpacks;                                             // 0x0328(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AllCharacterModels;                                       // 0x0338(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AllPlayerIcons;                                           // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSkinEquippedOnWeaponDelegate;                           // 0x0358(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0358(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnBackpackEquippedDelegate;                               // 0x0368(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0368(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnCharacterModelEquippedDelegate;                         // 0x0378(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0378(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerIconEquippedDelegate;                             // 0x0388(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0388(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CosmeticsManagerInMenus");
		return ptr;
	}


	void TryEquipSkinOnWeapon(struct FName* weaponName, struct FName* skinName);
	void TryEquipPlayerIcon(struct FName* playerIconName);
	void TryEquipCharacterModel(struct FName* characterModelName);
	void TryEquipBackpack(struct FName* backpackName);
	bool IsSkinValidForWeapon(struct FName* weaponName, struct FName* skinName);
	bool GetAllWeaponSkinsForWeapon(struct FName* weaponName, TArray<struct FName>* outWeaponSkins);
	TArray<struct FName> GetAllPlayerIcons();
	TArray<struct FName> GetAllCharacterModels();
	TArray<struct FName> GetAllBackpacks();
};


// Class Anarea.CosmeticBackendInfos
// 0x0070 (0x00A0 - 0x0030)
class UCosmeticBackendInfos : public UPrimaryDataAsset
{
public:
	class UDataTable*                                  DT_WeaponBackendInfo;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UDataTable*>              DT_WeaponSkinsBackendInfo;                                // 0x0038(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UDataTable*                                  DT_BackpacksBackendInfo;                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DT_CharacterModelBackendInfo;                             // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DT_PlayerIconBackendInfo;                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CosmeticBackendInfos");
		return ptr;
	}

};


// Class Anarea.CustomCharacterMovementComponent
// 0x0030 (0x0700 - 0x06D0)
class UCustomCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      bCanEverCrawl : 1;                                        // 0x06D0(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bCanEverSprint : 1;                                       // 0x06D0(0x0001) (Edit, BlueprintVisible BITFIELD: 0202)
	float                                              CrawledHalfHeight;                                        // 0x06D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JogSpeed;                                                 // 0x06D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JogStrafSpeedMultiplier;                                  // 0x06DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JogBackwardSpeedMultiplier;                               // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeedWithoutWeapon;                                 // 0x06E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CrawlingSpeed;                                            // 0x06EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWantsToCrawl : 1;                                        // 0x06F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst BITFIELD: 0101)
	unsigned char                                      bWantsToSprint : 1;                                       // 0x06F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst BITFIELD: 0202)
	unsigned char                                      bWantsToJog : 1;                                          // 0x06F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst BITFIELD: 0404)
	class ACustomCharacter*                            CustomCharacterOwner;                                     // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.CustomCharacterMovementComponent");
		return ptr;
	}


	bool IsStrafing();
	bool IsSprinting();
	bool IsMovingForward();
	bool IsMovingBackward();
	bool IsJogging();
	bool IsCrawling();
	float GetCurrentSpeedClamped();
};


// Class Anarea.ConsumeStaminaWhenMovingExecution
// 0x0000 (0x0040 - 0x0040)
class UConsumeStaminaWhenMovingExecution : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ConsumeStaminaWhenMovingExecution");
		return ptr;
	}

};


// Class Anarea.BaseDamageExecution
// 0x0000 (0x0040 - 0x0040)
class UBaseDamageExecution : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.BaseDamageExecution");
		return ptr;
	}

};


// Class Anarea.PhysicalDamageExecution
// 0x0000 (0x0040 - 0x0040)
class UPhysicalDamageExecution : public UBaseDamageExecution
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PhysicalDamageExecution");
		return ptr;
	}

};


// Class Anarea.DirectHealthDamageExecution
// 0x0000 (0x0040 - 0x0040)
class UDirectHealthDamageExecution : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.DirectHealthDamageExecution");
		return ptr;
	}

};


// Class Anarea.RegenHealthExecution
// 0x0000 (0x0040 - 0x0040)
class URegenHealthExecution : public UGameplayEffectExecutionCalculation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.RegenHealthExecution");
		return ptr;
	}

};


// Class Anarea.DebugInfoWidget
// 0x0018 (0x0248 - 0x0230)
class UDebugInfoWidget : public UUserWidget
{
public:
	struct FString                                     m_displayedText;                                          // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FColor                                      m_displayedTextColor;                                     // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.DebugInfoWidget");
		return ptr;
	}


	void BPE_OnTextColorChanged();
	void BPE_OnTextChanged();
};


// Class Anarea.DropLayerBase
// 0x0070 (0x02A0 - 0x0230)
class UDropLayerBase : public UUserWidget
{
public:
	int                                                Index;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent*                         owningInventory;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                OverValidColor;                                           // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OverInvalidColor;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0260(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseEnterDelegate;                                     // 0x0270(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0260(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMouseLeaveDelegate;                                     // 0x0280(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0280(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMouseButtonUpDelegate;                                  // 0x0290(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0290(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.DropLayerBase");
		return ptr;
	}


	void SetHighlightColor(bool* valid);
	void OnMouseLeave_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer);
	void OnMouseEnter_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer);
	void OnMouseButtonUp_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer);
	void ClearHighlightColor();
};


// Class Anarea.EndMatchMenu
// 0x0010 (0x0240 - 0x0230)
class UEndMatchMenu : public UUserWidget
{
public:
	class AAnareaGameStateBase*                        Model_GameState;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ABasePlayerState*                            Model_PlayerState;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.EndMatchMenu");
		return ptr;
	}


	void SetModels(class AAnareaGameStateBase** GameState, class ABasePlayerState** PlayerState);
	void ReceiveWinnerSelected(int* winnerID);
	void OnModelsChanged();
	void DisplayWinPanel();
	void DisplayDefeatPanel(class ABasePlayerState** PlayerState);
};


// Class Anarea.Equipment
// 0x0040 (0x0258 - 0x0218)
class AEquipment : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	struct FName                                       EquipmentName;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       EquipmentDisplayName;                                     // 0x0228(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UEquipmentHandler*                           OwningHandler;                                            // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       OwningPawn;                                               // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EquipmentFlags;                                           // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                IndexInInventory;                                         // 0x0254(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Equipment");
		return ptr;
	}


	bool TryLaunchAnimationByTag(struct FGameplayTag* Tag);
	bool HasEquipmentFlags(EEquipmentFlags* Flags);
};


// Class Anarea.EquipmentHandler
// 0x01A8 (0x0258 - 0x00B0)
class UEquipmentHandler : public UActorComponent
{
public:
	TArray<class UClass*>                              DefaultWeapons;                                           // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, class AWeapon*>                          EquipmentInventoryIndexToWeaponMap;                       // 0x00C0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AWeapon*>                             HolsteredWeapons;                                         // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AWeapon*                                     EquippedWeapon;                                           // 0x0120(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12];                                      // 0x0128(0x0012) MISSED OFFSET
	EWeaponSet                                         CurrentWeaponSet;                                         // 0x013A(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EWeaponSetDetail                                   CurrentWeaponSetDetail;                                   // 0x013B(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x013C(0x0044) MISSED OFFSET
	unsigned char                                      AllowAutoGiveEquipmentAttributs;                          // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<EWeaponSet, struct FEquipmentLinkedAbilities> EquipmentRelatedAbilities;                                // 0x0188(0x0050) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01D8(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    EquippedWeaponChangedDelegate;                            // 0x0228(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x01D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnWeaponSetValueChangedDelegate;                          // 0x0238(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0238(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnWeaponAmmoValueChangedDelegate;                         // 0x0248(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0248(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.EquipmentHandler");
		return ptr;
	}


	class AWeapon* SpawnAndHolsterWeapon(class UClass** WeaponClass, int* optionalIndexInInventory);
	void ReceiveEquipmentInventoryOnSlotModified(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	void ReceiveEquipmentInventoryOnBeforeSlotRemoved(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	void ReceiveAnimNotify(struct FGameplayTag* feedbackTags, class UAnimSequenceBase** Animation);
	void OnRep_EquippedWeapon(class AWeapon** lastWeapon);
	void OnRep_CurrentWeaponSetDetail();
	void OnRep_CurrentWeaponSet();
	bool IsLinkedToInventory();
	void HolsterCurrentWeapon();
	void HolsterAndDestroyWeapon(class AWeapon** Weapon);
	bool HasWeaponEquipped();
	bool HasProjectileInInventory();
	void HandleCurrentWeaponAmmoCountModified();
	void GrabWeaponInInventory(int* slotIndex);
	void GrabWeapon(class UClass** WeaponClass);
	class UClass* GetWeaponInSlot(int* slotIndex);
	class AWeapon* GetEquippedWeapon();
	bool DoesEquippedWeaponHaveFlags(EEquipmentFlags* Flags);
};


// Class Anarea.EquipmentHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UEquipmentHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.EquipmentHandlerInterface");
		return ptr;
	}

};


// Class Anarea.GameplayCueNotify_Play2DSound
// 0x0008 (0x0058 - 0x0050)
class UGameplayCueNotify_Play2DSound : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.GameplayCueNotify_Play2DSound");
		return ptr;
	}

};


// Class Anarea.GlobalStaticLib
// 0x0000 (0x0028 - 0x0028)
class UGlobalStaticLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.GlobalStaticLib");
		return ptr;
	}

};


// Class Anarea.GrenadeItemDataAsset
// 0x0000 (0x00C0 - 0x00C0)
class UGrenadeItemDataAsset : public UItemDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.GrenadeItemDataAsset");
		return ptr;
	}


	class UClass* GetWeaponClass(class UObject** WorldContextObject, struct FItemKey* ItemKey);
};


// Class Anarea.Weapon
// 0x0040 (0x0298 - 0x0258)
class AWeapon : public AEquipment
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	EWeaponSet                                         WeaponSetType;                                            // 0x0260(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWeaponSetDetail                                   weaponSetDetail;                                          // 0x0261(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       WeaponAnimActionType;                                     // 0x0264(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       EquippedWeaponSocket;                                     // 0x026C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HolsteredWeaponSockets;                                   // 0x0278(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UseLeftHandGrip;                                          // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WeaponSkin;                                               // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Weapon");
		return ptr;
	}


	void ServerChangeWeaponSkin();
	void ReceiveWeaponSkinChanged();
	void OnRep_WeaponSkin();
	struct FRotator GetSocketRotation(struct FName* SocketName);
	struct FVector GetSocketLocation(struct FName* SocketName);
	struct FVector GetLeftHandGripWorldLocation();
	bool CanBeUsed();
	void BP_ReceiveAnimNotify(struct FGameplayTag* GameplayTag);
	void ApplyCosmetics_WeaponSkin();
};


// Class Anarea.GrenadeWeapon
// 0x0028 (0x02C0 - 0x0298)
class AGrenadeWeapon : public AWeapon
{
public:
	unsigned char                                      InitFromDataTable;                                        // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowNameInDataTable;                                       // 0x029C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGrenadeWeaponInfo                          Infos;                                                    // 0x02A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.GrenadeWeapon");
		return ptr;
	}


	void LaunchProjectile(struct FVector* Location, struct FRotator* Rotation);
};


// Class Anarea.GrenadeProjectile
// 0x0040 (0x0258 - 0x0218)
class AGrenadeProjectile : public AActor
{
public:
	struct FGrenadeWeaponInfo                          Infos;                                                    // 0x0218(0x0018)
	unsigned char                                      HasStrategistSkillApplied;                                // 0x0230(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ExplosionFX;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereCollider;                                           // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.GrenadeProjectile");
		return ptr;
	}


	void Multicast_PlayExplosionFX();
};


// Class Anarea.FragGrenadeProjectile
// 0x0020 (0x0278 - 0x0258)
class AFragGrenadeProjectile : public AGrenadeProjectile
{
public:
	struct FGrenadeDamageInfo                          DamageInfo;                                               // 0x0258(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.FragGrenadeProjectile");
		return ptr;
	}

};


// Class Anarea.FlashGrenadeProjectile
// 0x0040 (0x0298 - 0x0258)
class AFlashGrenadeProjectile : public AGrenadeProjectile
{
public:
	struct FTimerHandle                                FlashPPAnimTimer;                                         // 0x0258(0x0008) (Transient)
	float                                              FlashPPAnimStartTime;                                     // 0x0260(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UCurveFloat*                                 FlashStrengthOverDistance;                                // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FlashStrengthOverDistanceIfStrategistSkillApplied;        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FlashAnimCurve;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FlashAnimCurveIfStrategistSkillApplied;                   // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ABasePlayerCharacter*>                HitPlayers;                                               // 0x0288(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.FlashGrenadeProjectile");
		return ptr;
	}


	void UpdateFlashPostProcessAnim();
};


// Class Anarea.SmokeGrenadeProjectile
// 0x0008 (0x0260 - 0x0258)
class ASmokeGrenadeProjectile : public AGrenadeProjectile
{
public:
	class UParticleSystem*                             ExplosionFXIfStrategistEffectApplied;                     // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SmokeGrenadeProjectile");
		return ptr;
	}

};


// Class Anarea.HUDManager
// 0x00E0 (0x0190 - 0x00B0)
class UHUDManager : public UActorComponent
{
public:
	class ABasePlayerController*                       OwnerAsBasePlayerController;                              // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ZoneMenuWidgetClass;                                      // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UZoneSelectionMenu*                          ZoneMenuWidgetInstance;                                   // 0x00C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PlayerHUDClass;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 PlayerHUDInstance;                                        // 0x00D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      InGameMenuClass;                                          // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 InGameMenuInstance;                                       // 0x00E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PlayerMenuClass;                                          // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 PlayerMenuInstance;                                       // 0x00F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MapMenuClass;                                             // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 MapMenuInstance;                                          // 0x0100(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      HUDForSpectatingModeClass;                                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 HUDForSpectatingModeInstance;                             // 0x0110(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      EndMatchMenuWidgetClass;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEndMatchMenu*                               EndMatchMenuWidgetInstance;                               // 0x0120(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      LobbyLoadingScreenClass;                                  // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 LobbyLoadingScreenInstance;                               // 0x0130(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      IsInGameMenuOpen;                                         // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsMapMenuOpen;                                            // 0x0139(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsPlayerMenuOpen;                                         // 0x013A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMenusSpawnedDelegate;                                   // 0x0140(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x013B(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerMenuOpenedDelegate;                               // 0x0150(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0150(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerMenuClosedDelegate;                               // 0x0160(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0160(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSpectatorMenuOpenedDelegate;                            // 0x0170(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0170(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnGameHUDOpenedDelegate;                                  // 0x0180(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0180(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.HUDManager");
		return ptr;
	}


	void TogglePlayerMenu();
	void ToggleMapMenu();
	void ToggleInGameMenu();
	void RespawnGameMenus();
	void OpenZoneSelectionMenuCountdown();
	void OpenZoneSelectionMenu();
	void OpenPlayerMenu(class UInventoryComponent** OptionalOtherInventory);
	void OpenMapMenu();
	void OpenLaunchMatchCountdown();
	void OpenInGameMenu();
	void OpenEndMatchMenu();
	void EnableZoneSelectionMenu();
	void DisplayMatchLoadingScreen();
	void DisplayHUDForSpectatingMode();
	void DisplayGameHUD();
	void CloseZoneSelectionMenu();
	void ClosePlayerMenu();
	void CloseMapMenu();
	void CloseInGameMenu();
	void CloseAllMenus();
};


// Class Anarea.FootstepAudioComponentProvider
// 0x0000 (0x0028 - 0x0028)
class UFootstepAudioComponentProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.FootstepAudioComponentProvider");
		return ptr;
	}

};


// Class Anarea.Interactable
// 0x0000 (0x0028 - 0x0028)
class UInteractable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Interactable");
		return ptr;
	}


	struct FText GetInteractableDisplayName();
};


// Class Anarea.DamageReceiver
// 0x0000 (0x0028 - 0x0028)
class UDamageReceiver : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.DamageReceiver");
		return ptr;
	}

};


// Class Anarea.DamageCauser
// 0x0000 (0x0028 - 0x0028)
class UDamageCauser : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.DamageCauser");
		return ptr;
	}

};


// Class Anarea.InventoryComponent
// 0x02D8 (0x0388 - 0x00B0)
class UInventoryComponent : public UActorComponent
{
public:
	struct FItemSlotArray                              ItemSlots;                                                // 0x00B0(0x0270) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	int                                                CurrentCapacity;                                          // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MaxCapacity;                                              // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemKeyWithStack>                   DefaultItems;                                             // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSlotModifiedDelegate;                                   // 0x0338(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0338(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnBeforeSlotRemovedDelegate;                              // 0x0348(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0348(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnCapacityChangedDelegate;                                // 0x0358(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0358(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSlotLockedDelegate;                                     // 0x0368(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0368(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnSlotUnlockedDelegate;                                   // 0x0378(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0378(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.InventoryComponent");
		return ptr;
	}


	void UnlockSlot(int* slotIndex);
	bool TryGetSlotTag(int* slotIndex, struct FGameplayTag* outSlotTag);
	bool TryGetItemOnSlot(int* slotIndex, struct FItemInstance* outItem);
	bool SimulateStackItemInSlot(int* slotIndex, struct FItemInstance* Item, bool* addIfSlotIsEmpty, int* itemStack);
	bool SimulateAddItem(struct FItemInstance* Item, int* itemStack);
	void ReplaceItemInSlot(int* slotIndex, struct FItemInstance* Item);
	bool RemoveItemLinkedToItemInWorld(class AItemInWorld** ItemInWorld);
	void RemoveItemInSlot(int* slotIndex, int* optionalAmountToRemove);
	int RemoveItemByType(struct FItemKey* ItemKey, int* amountToRemove);
	void ReceiveOnSlotUnlocked(int* slotIndex, class UInventoryComponent** slotOwningComponent);
	void ReceiveOnSlotModified(int* slotIndex, class UInventoryComponent** slotOwningComponent);
	void ReceiveOnSlotLocked(int* slotIndex, class UInventoryComponent** slotOwningComponent);
	void ReceiveOnBeforeSlotRemoved(int* slotIndex, class UInventoryComponent** slotOwningComponent);
	void OnRep_CurrentCapacity();
	void ModifyCapacity(int* deltaSlotAmount);
	void LockSlot(int* slotIndex);
	bool IsSlotLocked(int* slotIndex);
	bool IsSlotEmpty(int* slotIndex);
	bool IsIndexValid(int* slotIndex);
	bool HasEnoughItemOfType(struct FItemKey* ItemKey, int* requestedCount);
	int GetItemCount(struct FItemKey* ItemKey);
	TArray<int> FindSlotsBySlotTag(struct FGameplayTag* slotTag, bool* exactMatch);
	TArray<int> FindSlotsByItemTag(struct FGameplayTag* ItemTag, bool* exactMatch);
	TArray<int> FindSlotsByItemKey(struct FItemKey* ItemKey);
	int FindSlotBySlotTag(struct FGameplayTag* slotTag, bool* exactMatch);
	int FindSlotByItemTag(struct FGameplayTag* ItemTag, bool* exactMatch);
	int FindSlotByItemKey(struct FItemKey* ItemKey);
	int FindFirstCompatibleSlot(struct FItemInstance* Item);
	void ClearAllItems();
	bool CanStackOrAddItemOnSlot(int* slotIndex, struct FItemInstance* Item);
	bool CanStackItemOnSlot(int* slotIndex, struct FItemInstance* Item);
	bool CanSetItemOnSlot(int* slotIndex, struct FItemInstance* Item);
	void CallOnCapacityChangedDelegate();
	bool AddItemInSlot(int* slotIndex, struct FItemInstance* Item);
	bool AddItem(bool* forceNoStack, struct FItemInstance* Item);
};


// Class Anarea.InventorySlotWidgetBase
// 0x0088 (0x02B8 - 0x0230)
class UInventorySlotWidgetBase : public UUserWidget
{
public:
	int                                                Index;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInventoryComponent*                         owningInventory;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AItemInWorld*                                LinkedItemInWorld;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LockedColorAndOpacity;                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDragDetectedOnSlotDelegate;                             // 0x0258(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0258(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnRightClickDetectedDelegate;                             // 0x0268(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0268(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMouseDoubleClickDetectedDelegate;                       // 0x0278(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0278(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x30];                                      // 0x0288(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.InventorySlotWidgetBase");
		return ptr;
	}


	void SetUnlockedVisual();
	void SetSelected(bool* isSelected);
	void SetLockedVisual();
	void OnRightClickDetected_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld);
	void OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld);
	void OnDragDetectedOnSlot_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld, bool* wantSplit);
	void Init(struct FItemBaseData* baseData, int* curStack);
	void Clear();
};


// Class Anarea.ItemContextMenuBase
// 0x0040 (0x0270 - 0x0230)
class UItemContextMenuBase : public UUserWidget
{
public:
	class UItemUserComponent*                          LinkedItemUser;                                           // 0x0230(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         LinkedInventory;                                          // 0x0238(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                LinkedSlotIndex;                                          // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	class USelectSplitAmountWidgetBase*                HandledSplitAmountModale;                                 // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UClass*                                      MenuEntryClassToUse;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SelectSplitAmountWidgetClassToUse;                        // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ContainerZone;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget*                                Container;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemContextMenuBase");
		return ptr;
	}


	void InitUMGRefs(class UPanelWidget** InContainer, class UWidget** InContainerZone);
};


// Class Anarea.ItemContextMenuEntryBase
// 0x0018 (0x0248 - 0x0230)
class UItemContextMenuEntryBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemContextMenuEntryBase");
		return ptr;
	}


	void Init(struct FText* ActionText);
	void CallOnUseButtonClickedDelegate();
};


// Class Anarea.ItemDatabase
// 0x00F8 (0x0128 - 0x0030)
class UItemDatabase : public UDataAsset
{
public:
	TMap<class UClass*, class UDataTable*>             ItemDataTables;                                           // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UItemNameRedirectors*                        ItemRedirectors;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, struct FLinearColor>     ItemColors;                                               // 0x0088(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FGameplayTag, struct FItemColorInfo>   ItemColors_V2;                                            // 0x00D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemDatabase");
		return ptr;
	}


	struct FItemBaseData FindItemData(struct FItemKey* ItemKey);
	struct FItemInstance CreateNewItem(struct FItemKey* ItemKey, int* requestedStack);
};


// Class Anarea.ItemDatabaseAccessor
// 0x0000 (0x0028 - 0x0028)
class UItemDatabaseAccessor : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemDatabaseAccessor");
		return ptr;
	}


	class UItemDatabase* STATIC_GetItemDatabase(class UObject** WorldContextObject);
};


// Class Anarea.ItemDatabaseProvider
// 0x0000 (0x0028 - 0x0028)
class UItemDatabaseProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemDatabaseProvider");
		return ptr;
	}


	class UItemDatabase* GetItemDatabase();
};


// Class Anarea.ItemFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UItemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemFunctionLibrary");
		return ptr;
	}

};


// Class Anarea.ItemInWorld
// 0x00C8 (0x02E0 - 0x0218)
class AItemInWorld : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	struct FItemKey                                    ItemKeyForInitialization;                                 // 0x0220(0x0010) (Edit, BlueprintVisible)
	int                                                ItemStackForInitialization;                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               Item;                                                     // 0x0238(0x0058) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      IsLocked;                                                 // 0x0290(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4F];                                      // 0x0291(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemInWorld");
		return ptr;
	}


	void PreInit(struct FItemInstance* InItem);
	void OnRep_Item();
	void OnRep_IsLocked();
	void K2_Init(struct FItemInstance* InItem);
	void BP_ShowOulines();
	void BP_HideOulines();
};


// Class Anarea.LootSpawnerGeneratorInterface
// 0x0000 (0x0028 - 0x0028)
class ULootSpawnerGeneratorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LootSpawnerGeneratorInterface");
		return ptr;
	}


	void UnspawnLootsInLevel(class ULevel** Level);
	void SpawnLootsInLevel(class ULevel** Level);
};


// Class Anarea.LootSpawnerGeneratorLib
// 0x0000 (0x0028 - 0x0028)
class ULootSpawnerGeneratorLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LootSpawnerGeneratorLib");
		return ptr;
	}


	void STATIC_UnspawnLoots(class AActor** OwningActor);
	void STATIC_SpawnLoots(class AActor** OwningActor);
};


// Class Anarea.ItemNameRedirectors
// 0x0050 (0x0080 - 0x0030)
class UItemNameRedirectors : public UPrimaryDataAsset
{
public:
	TMap<struct FName, struct FName>                   Redirectors;                                              // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemNameRedirectors");
		return ptr;
	}

};


// Class Anarea.ItemSkillHelper
// 0x0000 (0x0028 - 0x0028)
class UItemSkillHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemSkillHelper");
		return ptr;
	}


	void STATIC_TryDeactivatelItemSkill(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* skillTag);
	void STATIC_TryActivateItemSkill(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* ItemTag, struct FGameplayTag* skillTag);
	void STATIC_TryActivateAnyDefensiveSkill(class UAbilitySystemComponent** AbilitySystem);
	void STATIC_TryActivateAnyAttackSkill(class UAbilitySystemComponent** AbilitySystem);
	bool STATIC_IsItemSkillActive(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* skillTag);
	bool STATIC_IsItemSkillActivatable(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* ItemTag, struct FGameplayTag* skillTag);
	bool STATIC_IsAnyDefensiveSkillActivated(class UAbilitySystemComponent** AbilitySystem);
	bool STATIC_IsAnyAttackSkillActivated(class UAbilitySystemComponent** AbilitySystem);
};


// Class Anarea.ItemUserComponent
// 0x0128 (0x01D8 - 0x00B0)
class UItemUserComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET
	TMap<int, struct FGameplayTag>                     EquipmentInventoryIndexToSkillItemTag;                    // 0x00D8(0x0050) (ZeroConstructor)
	class UClass*                                      ItemSkillEffect;                                          // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FItemDragInfo                               DragInfo;                                                 // 0x0130(0x0078) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FScriptMulticastDelegate                    OnDragBeginDelegate;                                      // 0x01A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDragEndDelegate;                                        // 0x01B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x01B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDragCanceledDelegate;                                   // 0x01C8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x01C8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ItemUserComponent");
		return ptr;
	}


	void Server_UseItemInInventory(class UInventoryComponent** InventoryComponent, int* slotIndex);
	void Server_TrySwapItem(class UInventoryComponent** Inventory, int* slotIndex);
	void Server_SplitAndDropInventoryItemInWorld(class UInventoryComponent** Inventory, int* slotIndex, int* splitAmount);
	void Server_PickUpItemInWorld(class AItemInWorld** ItemInWorld);
	void Server_HandleDropOnInventory(class UInventoryComponent** Inventory);
	void Server_HandleDragDropOnInventorySlot(class UInventoryComponent** Inventory, int* slotIndex, class AItemInWorld** LinkedItemInWorld, bool* wantSplit);
	void Server_EndDragItem();
	void Server_DropItemInWorld(struct FItemInstance* ItemInstance);
	void Server_DropInventoryItemInWorld(class UInventoryComponent** Inventory, int* slotIndex);
	void Server_DropDraggedItemInWorld();
	void Server_CancelDragItem();
	void ReceiveSlotModifiedOnEquipmentInventory(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	void ReceiveBeforeSlotRemovedOnEquipmentInventory(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	bool IsDraggingItem();
	struct FItemInstance GetDraggedItem();
	void Client_EndDragItem();
	void Client_CancelDragItem();
	void Client_BeginDragFromInventoryOrItemInWorld(struct FItemDragInfo* inDragInfo);
	bool CanSwapItemToSlot(class UInventoryComponent** Inventory, int* slotIndex);
	bool CanStackOrAddOrSwapDraggedItemToSlot(class UInventoryComponent** Inventory, int* slotIndex);
	bool CanStackOrAddDraggedItemToSlot(class UInventoryComponent** Inventory, int* slotIndex);
	bool CanDropItemToInventory(class UInventoryComponent** Inventory);
};


// Class Anarea.LobbyPlayerStart
// 0x0000 (0x0248 - 0x0248)
class ALobbyPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LobbyPlayerStart");
		return ptr;
	}

};


// Class Anarea.LocomotionHandler
// 0x0020 (0x00D0 - 0x00B0)
class ULocomotionHandler : public UActorComponent
{
public:
	float                                              WalkSpeed;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JogSpeed;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedSpeed;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsJogging;                                                // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShouldSprint;                                             // 0x00C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LocomotionHandler");
		return ptr;
	}


	void SetIsJogging(bool* NewValue);
	bool GetShouldSprint();
	bool GetIsJogging();
	float GetCurrentSpeedClamped();
	void EndSprint();
	void BeginSprint();
};


// Class Anarea.Lootbox
// 0x0010 (0x0228 - 0x0218)
class ALootbox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UInventoryComponent*                         Inventory;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Lootbox");
		return ptr;
	}


	void BP_ShowOulines();
	void BP_HideOulines();
};


// Class Anarea.LootSpawner
// 0x0048 (0x0260 - 0x0218)
class ALootSpawner : public AActor
{
public:
	class UDataTable*                                  DataTable;                                                // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowInDataTable;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc_01;                                              // 0x0228(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc_02;                                              // 0x0234(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc_03;                                              // 0x0240(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLoc_04;                                              // 0x024C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LootSpawner");
		return ptr;
	}

};


// Class Anarea.LootSpawnerFunctionalities
// 0x0000 (0x0028 - 0x0028)
class ULootSpawnerFunctionalities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.LootSpawnerFunctionalities");
		return ptr;
	}


	TArray<class AItemInWorld*> STATIC_SpawnLoot(class UObject** WorldContextObject, struct FVector* spawnLoc, class UDataTable** LootDataTable, struct FLootSpawnAdditionalLocations* additionalSpawnLocations, struct FName* RowInDataTable, bool* spawnAdditionalItems, class ULevel** levelToSpawnInto, struct FRandomStream* RandomStream);
	TArray<class AItemInWorld*> STATIC_SpawnAllLootsOnActorSockets(class UObject** WorldContextObject, class UDataTable** LootDataTable, bool* useLevelToSpawnInto, class ULevel** levelToSpawnInto, class ULevel** filterByLevel, struct FRandomStream* RandomStream);
};


// Class Anarea.MapSizeDelimiter
// 0x0000 (0x0220 - 0x0220)
class AMapSizeDelimiter : public ABaseMapDelimiter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.MapSizeDelimiter");
		return ptr;
	}

};


// Class Anarea.MapZoneDelimiter
// 0x0000 (0x0220 - 0x0220)
class AMapZoneDelimiter : public ABaseMapDelimiter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.MapZoneDelimiter");
		return ptr;
	}

};


// Class Anarea.MatchStateWidgetBase
// 0x0000 (0x0230 - 0x0230)
class UMatchStateWidgetBase : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.MatchStateWidgetBase");
		return ptr;
	}

};


// Class Anarea.MontageBasedAbility
// 0x0000 (0x0408 - 0x0408)
class UMontageBasedAbility : public UBaseGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.MontageBasedAbility");
		return ptr;
	}


	void OnAnimFeedback(struct FGameplayTag* feedbackTags, class UAnimSequenceBase** Animation);
};


// Class Anarea.NearbyItemDetector
// 0x0140 (0x0540 - 0x0400)
class UNearbyItemDetector : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0400(0x0048) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0400(0x0050) UNKNOWN PROPERTY: SetProperty Anarea.NearbyItemDetector.DetectedLootboxes
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0498(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.NearbyItemDetector");
		return ptr;
	}


	void ReceiveOnComponentEndOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void ReceiveOnComponentBeginOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ReceiveItemInWorldUnlocked(class AItemInWorld** ItemInWorld);
	void ReceiveIteminWorldModified(class AItemInWorld** ItemInWorld);
	void ReceiveItemInWorldLocked(class AItemInWorld** ItemInWorld);
};


// Class Anarea.AnimNotifyState_CallAnimNotify
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_CallAnimNotify : public UAnimNotifyState
{
public:
	struct FGameplayTag                                NotifyMessageAtBegin;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTag                                NotifyMessageAtEnd;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_CallAnimNotify");
		return ptr;
	}

};


// Class Anarea.AnimNotify_CallAnimNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CallAnimNotify : public UAnimNotify
{
public:
	struct FGameplayTag                                NotifyMessage;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotify_CallAnimNotify");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_ApplyGameplayEffect
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_ApplyGameplayEffect : public UAnimNotifyState
{
public:
	class UClass*                                      GameplayEffectToApply;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_ApplyGameplayEffect");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_ForceNoLeftHandIK
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_ForceNoLeftHandIK : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_ForceNoLeftHandIK");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_DontUseLeftHandGripIK
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_DontUseLeftHandGripIK : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_DontUseLeftHandGripIK");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_UseCurveForLeftHandGripIK
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_UseCurveForLeftHandGripIK : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_UseCurveForLeftHandGripIK");
		return ptr;
	}

};


// Class Anarea.AnimNotify_Footstep
// 0x0070 (0x00A8 - 0x0038)
class UAnimNotify_Footstep : public UAnimNotify
{
public:
	unsigned char                                      UseRightFoot;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAudioCompType                                     AudioCompToUse;                                           // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBoneName;                                        // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftFootBoneName;                                         // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShouldPlayRattle;                                         // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayRattleParamName;                                      // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FloorTypeParamName;                                       // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceOffsetUp;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceLength;                                              // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       IsMaleParamName;                                          // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsMale;                                                   // 0x0070(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StepVolumeParamName;                                      // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepVolume;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RattleVolumeParamName;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RattleVolume;                                             // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StepVolumeMultiplierPerSpeed;                             // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RattleVolumeMultiplierPerSpeed;                           // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotify_Footstep");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_SpawnAndUseActor
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_SpawnAndUseActor : public UAnimNotifyState
{
public:
	class UClass*                                      ActorToSpawn;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketToAttachTo;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_SpawnAndUseActor");
		return ptr;
	}

};


// Class Anarea.AnimNotify_LaunchAnimOnEquippedWeapon
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_LaunchAnimOnEquippedWeapon : public UAnimNotify
{
public:
	struct FGameplayTag                                AnimTag;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotify_LaunchAnimOnEquippedWeapon");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_SwitchWeaponAttachmentLeftHand
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_SwitchWeaponAttachmentLeftHand : public UAnimNotifyState
{
public:
	struct FName                                       LeftHandSocketName;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_SwitchWeaponAttachmentLeftHand");
		return ptr;
	}

};


// Class Anarea.AnimNotify_LaunchWeaponShootFX
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_LaunchWeaponShootFX : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotify_LaunchWeaponShootFX");
		return ptr;
	}

};


// Class Anarea.AnimNotifyState_AttachWeaponMagazineToSocket
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_AttachWeaponMagazineToSocket : public UAnimNotifyState
{
public:
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       OffsetSocketOnMagazineMesh;                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AnimNotifyState_AttachWeaponMagazineToSocket");
		return ptr;
	}

};


// Class Anarea.PendingLevelPlayerController
// 0x0000 (0x0568 - 0x0568)
class APendingLevelPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PendingLevelPlayerController");
		return ptr;
	}

};


// Class Anarea.PlayerControllerInMenus
// 0x0008 (0x0590 - 0x0588)
class APlayerControllerInMenus : public APlayFabPlayerControllerInMainMenu
{
public:
	class UCosmeticsManagerInMenus*                    CosmeticsManager;                                         // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PlayerControllerInMenus");
		return ptr;
	}

};


// Class Anarea.PlayerSpawnSystemComponent
// 0x0040 (0x00F0 - 0x00B0)
class UPlayerSpawnSystemComponent : public UActorComponent
{
public:
	TArray<struct FReplicatedZoneInfo>                 ZoneInfos;                                                // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        PlayerCountPerZone;                                       // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnZoneInfosModified;                                      // 0x00D0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00D0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerCountPerZoneModifiedDelegate;                     // 0x00E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x00E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PlayerSpawnSystemComponent");
		return ptr;
	}


	void OnRep_ZoneInfos();
	void OnRep_PlayerCountPerZone();
	void ClearZoneSelection(class APlayerController** Player);
	void AddPlayerToZone(class APlayerController** Player, int* zoneIndex);
};


// Class Anarea.PlayFabHelper
// 0x0000 (0x0028 - 0x0028)
class UPlayFabHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PlayFabHelper");
		return ptr;
	}

};


// Class Anarea.PreviewPlayerInMenu
// 0x0020 (0x0238 - 0x0218)
class APreviewPlayerInMenu : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UEquipmentHandler*                           EquipmentHandler;                                         // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAnimationHandler*                           AnimationHandler;                                         // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.PreviewPlayerInMenu");
		return ptr;
	}

};


// Class Anarea.ReplicatedDoor
// 0x0010 (0x0228 - 0x0218)
class AReplicatedDoor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	EReplicatedDoorState                               DoorState;                                                // 0x0220(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ReplicatedDoor");
		return ptr;
	}


	void OnRep_DoorState();
	void HandleDoorStateChanged();
};


// Class Anarea.SelectSplitAmountWidgetBase
// 0x0018 (0x0248 - 0x0230)
class USelectSplitAmountWidgetBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SelectSplitAmountWidgetBase");
		return ptr;
	}


	void Init(int* stackAmount);
	void CallOnValueCommittedDelegate(int* Value);
};


// Class Anarea.ShootingWeapon
// 0x0178 (0x0410 - 0x0298)
class AShootingWeapon : public AWeapon
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ShootBeginAnchor;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      InitFromDataTable;                                        // 0x02A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowNameInDataTable;                                       // 0x02AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FShootingWeaponInfo                         Infos;                                                    // 0x02B8(0x00D0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       HitFXName;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                currentAmmoCount;                                         // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                DamageMagnitudeTag;                                       // 0x0394(0x0008) (BlueprintVisible, BlueprintReadOnly)
	class USightHandler*                               LinkedSightHandler;                                       // 0x03A0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBulletHandler*                              LinkedBulletHandler;                                      // 0x03A8(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBulletInfo*                                 LinkedBulletInfo;                                         // 0x03B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseReloadLeftHandIKTarget;                                // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x03B9(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ShootingWeapon");
		return ptr;
	}


	class UMeshComponent* TryGetMagazineMeshComponent();
	bool SimulatedHandleReloadStep(int* simulatedCurrentAmmoCount);
	void Shoot();
	void Server_ProcessShoot(int* RandomSeed);
	void Server_HandleReloadStep(int* maxPossibleAmoCount);
	void Server_HandleHitscanHit(struct FHitResult* HitResult);
	void ProcessShootOnServer(int* RandomSeed);
	void ProcessShootOnClient(int* RandomSeed);
	void OnRep_LinkedBulletInfo();
	void OnRep_CurrentAmmoCount();
	void Multicast_PlayShootFX();
	void Multicast_PlayHitFX(struct FVector* ImpactPoint, struct FVector* ImpactNormal, TEnumAsByte<EPhysicalSurface>* surfaceType);
	bool HandleReloadStep(int* maxPossibleAmoCount);
	struct FVector GetReloadRightHandIKTargetLocation();
	EAmmoType GetAmmoType();
	int GetAmmoCountToAddAtNextReloadStep();
	struct FVector GeReloadLeftHandIKTargetWorldLocation();
	void Client_ApplyRecoil(int* RandomSeed);
	bool CanShoot();
	bool CanBeReloaded();
};


// Class Anarea.RecoilPatternDataAsset
// 0x00C0 (0x00F0 - 0x0030)
class URecoilPatternDataAsset : public UDataAsset
{
public:
	struct FSituationalRecoilPatterns                  RecoilData;                                               // 0x0030(0x00C0) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.RecoilPatternDataAsset");
		return ptr;
	}

};


// Class Anarea.SightHandler
// 0x0218 (0x02C8 - 0x00B0)
class USightHandler : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x00D8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitTarget;                                                // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UInteractable>              HitInteractableTarget;                                    // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ApplyPostProcessWhenOutsideSafeZone;                      // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceNoHitMarkerSounds;                                   // 0x0101(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitmarkerSoundDelay;                                      // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<EHitMarkerType, class USoundBase*>            HitMarkerSounds;                                          // 0x0108(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              MouseSensitivityModifierWhenAiming;                       // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SightCheckDistance;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InteractableMaxCheckDistance;                             // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmLengthWhenAming;                                       // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraZoomSpeed;                                          // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOVZoomSpeed;                                       // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilRecoveryLerpFactor;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraTargetOffsetZWhenCrouched;                          // 0x0174(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraZLocSpeed;                                          // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCurveForSmoothingRecoil;                               // 0x017C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CurrentRecoilCurve;                                       // 0x0180(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DefaultRecoilStrengthCurve;                               // 0x0188(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilModifierWhenFalling;                                // 0x0190(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoilModifierWhenAiming;                                 // 0x0194(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HeadBoneNames;                                            // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01A8(0x0014) MISSED OFFSET
	float                                              PelvisOffsetFromIK;                                       // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C0(0x0004) MISSED OFFSET
	unsigned char                                      AttachCameraToHead;                                       // 0x01C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraOffsetLimitBeforeApplyingZOffset;                   // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseCurveForCameraZCorrection;                             // 0x01CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CameraZCorrectionSpeedCurve;                              // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraZCorrectionSpeed;                                   // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraZCorrectionSpeedBoost;                              // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SightPitch;                                               // 0x01E0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              SightYaw;                                                 // 0x01E4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      isAiming;                                                 // 0x01E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              LastAppliedRecoilYaw;                                     // 0x01EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastAppliedRecoilPitch;                                   // 0x01F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRecoilYaw;                                          // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRecoilPitch;                                        // 0x01F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      ShouldRecoverFromLastRecoil;                              // 0x01FC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RecoilTime;                                               // 0x0200(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RecoilYawLength;                                          // 0x0204(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RecoilPitchLength;                                        // 0x0208(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RequestedArmLength;                                       // 0x020C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RequestedFOV;                                             // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ArmLengthBeforeZoom;                                      // 0x0214(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FOVBeforeZoom;                                            // 0x0218(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZoomInitTime;                                             // 0x021C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ArmLengthZoomDuration;                                    // 0x0220(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ZoomFOVDuration;                                          // 0x0224(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RequestedTargetOffsetZ;                                   // 0x0228(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultCameraArmLocZ;                                     // 0x022C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurFlashPPValue;                                          // 0x0230(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CurFlashStartTime;                                        // 0x0234(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class AFlashGrenadeProjectile*, float>        AffectedFlashGrenades;                                    // 0x0238(0x0050) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnRequestDisplayHitMarkerDelegate;                        // 0x0288(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0288(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnAimStateChangedDelegate;                                // 0x0298(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0298(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnHitInteractableChangedDelegate;                         // 0x02A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x02A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDamagePerceivedDelegate;                                // 0x02B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x02B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SightHandler");
		return ptr;
	}


	void UpdateRecoverFromLastRecoil(float* DeltaTime);
	void SetIsAiming(bool* aiming, float* zoomBoostMultiplier);
	void PlayHitmarkerSound(EHitMarkerType* hitMarker);
	void OnRep_IsAiming();
	bool IsHeadBoneName(struct FName* BoneName);
	void InitLinkedCamera();
	bool GetIsAiming();
	EHitMarkerType GetHitMarkerType(struct FName* BoneName, bool* hitShield);
	float GetCurrentMouseSensitivityModifier();
	struct FVector GetCameraLocation();
	void Client_DisplayDamagePerceivedFeedback(struct FDamagePerceptionDirection* damageDirection);
	void CancelRecoilRecovering();
	bool CanAim();
};


// Class Anarea.SkillCrate
// 0x0038 (0x0250 - 0x0218)
class ASkillCrate : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UDataTable*                                  DataTable;                                                // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowInDataTable;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      IsOpen;                                                   // 0x0238(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsAnimating;                                              // 0x0239(0x0001) (ZeroConstructor, IsPlainOldData)
	class AItemInWorld*                                LinkedItemInWorld;                                        // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HasBeenLooted;                                            // 0x0248(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x024C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SkillCrate");
		return ptr;
	}


	void ReceiveLinkedItemDestroyed(class AActor** destroyedLinkedItem);
	void OpenAnimFinished();
	void Open();
	void OnRep_LinkedItemInWorld();
	void OnRep_IsOpen();
	bool GetIsOpen();
	void CloseAnimFinished();
	void Close();
	void BP_ShowOulines();
	void BP_PlayOpenAnim();
	void BP_PlayCloseAnim();
	void BP_HideOulines();
};


// Class Anarea.SkillItemDataAsset
// 0x0000 (0x00C0 - 0x00C0)
class USkillItemDataAsset : public UItemDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SkillItemDataAsset");
		return ptr;
	}

};


// Class Anarea.SocketsName
// 0x0000 (0x0028 - 0x0028)
class USocketsName : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.SocketsName");
		return ptr;
	}


	struct FName STATIC_ReloadRightHandIKTarget();
	struct FName STATIC_ReloadLeftHandIKTarget();
	struct FName STATIC_LeftHandGrip();
	struct FName STATIC_HolsterAnchor();
};


// Class Anarea.StormZoneActor
// 0x0010 (0x0228 - 0x0218)
class AStormZoneActor : public AActor
{
public:
	float                                              RadiusAfterShrink;                                        // 0x0218(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LocationAfterShrink;                                      // 0x021C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.StormZoneActor");
		return ptr;
	}


	void SetRadiusAndLocation2D(float* newRadius, struct FVector2D* newLocation2D);
	void InitBeforeFirstShrink();
	float GetCurrentRadius();
};


// Class Anarea.StormZoneHandler
// 0x00B0 (0x0160 - 0x00B0)
class UStormZoneHandler : public UActorComponent
{
public:
	class UClass*                                      ZoneDamageEffectClass;                                    // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                StormDamageMagnitudeTag;                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              InitialZoneRadius;                                        // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ZoneRulesTable;                                           // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ZoneRulesRowInTable;                                      // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseMapDelimiters;                                         // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentShrinkIndex;                                       // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	int                                                ReplicatedSeed;                                           // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00EC(0x0008) MISSED OFFSET
	unsigned char                                      ZoneMovementInitialized;                                  // 0x00F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x00F5(0x0027) MISSED OFFSET
	struct FVector                                     ReplicatedZoneRadiusAndLocation2DAfterShrink;             // 0x011C(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReplicatedZoneRadiusAndLocation2D;                        // 0x0128(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	EStormZoneStatus                                   StormZoneStatus;                                          // 0x0134(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	class AStormZoneActor*                             StormActor;                                               // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStormZoneStatusChangedDelegate;                         // 0x0140(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0140(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnStormZoneIndexChangedDelegate;                          // 0x0150(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0150(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.StormZoneHandler");
		return ptr;
	}


	void ReceiveGamePhaseChanged(EGamePhase* previousGamePhase, EGamePhase* currentGamePhase);
	void OnRep_StormZoneStatus();
	void OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink();
	void OnRep_ReplicatedZoneRadiusAndLocation2D();
	void OnRep_ReplicatedSeed();
	void OnRep_CurrentShrinkIndex();
	float GetShrinkTimeForIndex(int* shrinkIndex);
	struct FStormZonesRules BP_TryGetStormZoneRules();
	void BeginZoneMovements();
};


// Class Anarea.TestCompassAgent
// 0x0010 (0x0228 - 0x0218)
class ATestCompassAgent : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	ECompassAgentType                                  AgentType;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.TestCompassAgent");
		return ptr;
	}

};


// Class Anarea.TestTarget
// 0x0020 (0x0238 - 0x0218)
class ATestTarget : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UBaseAbilitySystemComponent*                 AbilitySystem;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBaseAttributeSet*                           AttributSet;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.TestTarget");
		return ptr;
	}


	void ReceiveHealthOrShieldValueChanged();
	void DisplayDamageTaken(float* damageTaken);
};


// Class Anarea.UtilityFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UUtilityFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.UtilityFunctionLib");
		return ptr;
	}


	bool STATIC_WriteWantHideHUDToConfigFile(bool* WantHideHUD);
	bool STATIC_WriteToggleSprintToConfigFile(bool* ToggleSprint);
	bool STATIC_WriteSoundVolumeFromConfigFile(EVolumeType* volumeType, float* Volume);
	bool STATIC_WriteFOVToConfigFile(float* FOV);
	bool STATIC_WriteEnableCSMToConfigFile(bool* EnableCSM);
	bool STATIC_WriteCorsshairShapeToConfigFile(ECrosshairToUse* CrosshairShape);
	struct FString STATIC_TryGetServerPORTAsString(class AGameModeBase** GameMode);
	int STATIC_TryGetServerPORTAsInt(class AGameModeBase** GameMode);
	void STATIC_ResizeTextureRenderTarget(class UTextureRenderTarget2D** Texture, int* newSizeX, int* newSizeY);
	bool STATIC_ReadWantHideHUDFromConfigFile(bool* WantHideHUD);
	bool STATIC_ReadToggleSprintFromConfigFile(bool* ToggleSprint);
	bool STATIC_ReadSoundVolumeFromConfigFile(EVolumeType* volumeType, float* outVolume);
	bool STATIC_ReadFOVFromConfigFile(float* FOV);
	bool STATIC_ReadEnableCSMFromConfigFile(bool* EnableCSM);
	bool STATIC_ReadCrosshairShapeFromConfigFile(ECrosshairToUse* outCrosshairShape);
	TArray<int> STATIC_GetRandIndicesInRangeNoDuplicate(int* requestedCount, int* from, int* to, struct FRandomStream* RandomStream);
	int STATIC_GetPlayerPing(class APlayerController** PlayerController);
	struct FText STATIC_GetKillfeedMessage(struct FKillfeedEntryInfo* KillfeedEntryInfo);
	bool STATIC_FindMapDelimitersLocationsSlowOp(class UObject** contextObject, EMapDelimiterType* delimiterType, struct FVector2D* outMin, struct FVector2D* outMax);
	void STATIC_CrashGame();
	struct FName STATIC_ChooseName(TArray<struct FWeightedName>* weightedNames, struct FRandomStream* RandomStream);
};


// Class Anarea.AbilityTask_WaitInventorySlotContext
// 0x0010 (0x0090 - 0x0080)
class UAbilityTask_WaitInventorySlotContext : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnInventorySlotContextReceived;                           // 0x0080(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AbilityTask_WaitInventorySlotContext");
		return ptr;
	}


	class UAbilityTask_WaitInventorySlotContext* STATIC_CreateWaitInventorySlotContext(class UGameplayAbility** OwningAbility);
};


// Class Anarea.AbilityTask_WaitLocationThreshold
// 0x0028 (0x00A8 - 0x0080)
class UAbilityTask_WaitLocationThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnLocationThresholdReached;                               // 0x0080(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class AActor*                                      CachedActor;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AbilityTask_WaitLocationThreshold");
		return ptr;
	}


	class UAbilityTask_WaitLocationThreshold* STATIC_CreateWaitLocationThreshold(class UGameplayAbility** OwningAbility, float* Threshold);
};


// Class Anarea.AbilityTask_WaitVelocityThreshold
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitVelocityThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityThresholdReached;                               // 0x0080(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AbilityTask_WaitVelocityThreshold");
		return ptr;
	}


	class UAbilityTask_WaitVelocityThreshold* STATIC_CreateWaitVelocityThreshold(class UGameplayAbility** OwningAbility, float* Threshold);
};


// Class Anarea.AbilityTask_WaitVelocityBelowThreshold
// 0x0020 (0x00A0 - 0x0080)
class UAbilityTask_WaitVelocityBelowThreshold : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityThresholdReached;                               // 0x0080(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UMovementComponent*                          CachedMovementComponent;                                  // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.AbilityTask_WaitVelocityBelowThreshold");
		return ptr;
	}


	class UAbilityTask_WaitVelocityBelowThreshold* STATIC_CreateWaitVelocityBelowThreshold(class UGameplayAbility** OwningAbility, float* Threshold);
};


// Class Anarea.WeaponItemDataAsset
// 0x0000 (0x00C0 - 0x00C0)
class UWeaponItemDataAsset : public UItemDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.WeaponItemDataAsset");
		return ptr;
	}


	class UClass* GetWeaponClass(class UObject** WorldContextObject, struct FItemKey* ItemKey);
};


// Class Anarea.WeaponStaticLib
// 0x0000 (0x0028 - 0x0028)
class UWeaponStaticLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.WeaponStaticLib");
		return ptr;
	}

};


// Class Anarea.Widget_SkillStatusOnHUD
// 0x0010 (0x0240 - 0x0230)
class UWidget_SkillStatusOnHUD : public UUserWidget
{
public:
	class UAbilitySystemComponent*                     Model_AbilitySystem;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInventoryComponent*                         Model_Inventory;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.Widget_SkillStatusOnHUD");
		return ptr;
	}


	void SetModels(class UAbilitySystemComponent** AbilitySystem, class UInventoryComponent** Inventory);
	void ReceiveOnBeforeInventorySlotRemoved(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	void ReceiveInventorySlotModified(int* slotIndex, class UInventoryComponent** SlotOwningInventory);
	void ReceiveGameplayEffectRemoved_FromSkillCooldown(struct FGameplayEffectRemovalInfo* removalInfo);
	void ReceiveGameplayEffectRemoved_FromSkillActivation(struct FGameplayEffectRemovalInfo* removalInfo);
	void ReceiveGameplayEffectAddedToSelf(class UAbilitySystemComponent** AbilitySystem, struct FGameplayEffectSpec* effectSpec, struct FActiveGameplayEffectHandle* activeEffectHandle);
	void BP_ReceiveSkillRemoved();
	void BP_ReceiveSkillDeactivated();
	void BP_ReceiveSkillCooldown(float* Duration);
	void BP_ReceiveSkillAdded(struct FItemInstance* skillItem);
	void BP_ReceiveSkillActivated(float* Duration, struct FGameplayTag* skillTag);
};


// Class Anarea.ZoneSelectionMenu
// 0x0010 (0x0240 - 0x0230)
class UZoneSelectionMenu : public UUserWidget
{
public:
	class UPlayerSpawnSystemComponent*                 Model_PlayerSpawnSystem;                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABasePlayerState*                            Model_PlayerState;                                        // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Anarea.ZoneSelectionMenu");
		return ptr;
	}


	void UnselectZoneForPlayer();
	void SetModels(class UPlayerSpawnSystemComponent** PlayerSpawnSystem, class ABasePlayerState** PlayerState);
	void SelectZoneForPlayer(int* zoneIndex);
	void ReceiveZoneInfosModified();
	void ReceivePlayerSpawnZoneIndexChanged(int* previousZoneIndex, int* newZoneIndex);
	void ReceivePlayerCountPerZoneModified();
	void OnModelsChanged();
	void DisplayZoneSelectionMenu(float* GamePhaseDuration);
	void DisplayZoneSelectionCountdown(float* GamePhaseDuration);
	void DisplayMatchLoadingScreen(float* GamePhaseDuration);
	void DisplayLaunchMatchCountdown(float* GamePhaseDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
