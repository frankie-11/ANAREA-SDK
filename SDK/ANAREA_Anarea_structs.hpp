#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Anarea.EHitMarkerType
enum class EHitMarkerType : uint8_t
{
	EHitMarkerType__Body           = 0,
	EHitMarkerType__Headshot       = 1,
	EHitMarkerType__BodyWithShield = 2,
	EHitMarkerType__HeadshotWithShield = 3,
	EHitMarkerType__EHitMarkerType_MAX = 4
};


// Enum Anarea.EDamagePerceptionDirection
enum class EDamagePerceptionDirection : uint8_t
{
	EDamagePerceptionDirection__Forward = 0,
	EDamagePerceptionDirection__Right = 1,
	EDamagePerceptionDirection__Backward = 2,
	EDamagePerceptionDirection__Left = 3,
	EDamagePerceptionDirection__Everywhere = 4,
	EDamagePerceptionDirection__EDamagePerceptionDirection_MAX = 5
};


// Enum Anarea.ECrosshairToUse
enum class ECrosshairToUse : uint8_t
{
	ECrosshairToUse__Point         = 0,
	ECrosshairToUse__Cross         = 1,
	ECrosshairToUse__ECrosshairToUse_MAX = 2
};


// Enum Anarea.EGamePhase
enum class EGamePhase : uint8_t
{
	EGamePhase__NONE               = 0,
	EGamePhase__LOBBY              = 1,
	EGamePhase__WAIT_END_LOBBY     = 2,
	EGamePhase__LAUNCHING_CHOOSE_START_LOCATION = 3,
	EGamePhase__CHOOSE_START_LOCATION = 4,
	EGamePhase__LOADING_MATCH      = 5,
	EGamePhase__LAUNCHING_MATCH    = 6,
	EGamePhase__MATCH              = 7,
	EGamePhase__END_MATCH          = 8,
	EGamePhase__EGamePhase_MAX     = 9
};


// Enum Anarea.EKillfeedKillCause
enum class EKillfeedKillCause : uint8_t
{
	EKillfeedKillCause__None       = 0,
	EKillfeedKillCause__Weapon     = 1,
	EKillfeedKillCause__Zone       = 2,
	EKillfeedKillCause__Suicide    = 3,
	EKillfeedKillCause__EKillfeedKillCause_MAX = 4
};


// Enum Anarea.EDamageCause
enum class EDamageCause : uint8_t
{
	EDamageCause__None             = 0,
	EDamageCause__Weapon           = 1,
	EDamageCause__Zone             = 2,
	EDamageCause__Falling          = 3,
	EDamageCause__EDamageCause_MAX = 4
};


// Enum Anarea.ELocalPlayerGamePhase
enum class ELocalPlayerGamePhase : uint8_t
{
	ELocalPlayerGamePhase__NONE    = 0,
	ELocalPlayerGamePhase__PLAYING = 1,
	ELocalPlayerGamePhase__LOADING_LOBBY = 2,
	ELocalPlayerGamePhase__LOADING_MATCH = 3,
	ELocalPlayerGamePhase__SPECTATING = 4,
	ELocalPlayerGamePhase__SPECTATING_IN_LOBBY = 5,
	ELocalPlayerGamePhase__IN_LOBBY = 6,
	ELocalPlayerGamePhase__ELocalPlayerGamePhase_MAX = 7
};


// Enum Anarea.ECompassAgentType
enum class ECompassAgentType : uint8_t
{
	ECompassAgentType__Ally        = 0,
	ECompassAgentType__Zone        = 1,
	ECompassAgentType__AirDrop     = 2,
	ECompassAgentType__ECompassAgentType_MAX = 3
};


// Enum Anarea.ECosmeticsRarity
enum class ECosmeticsRarity : uint8_t
{
	ECosmeticsRarity__Common       = 0,
	ECosmeticsRarity__Rare         = 1,
	ECosmeticsRarity__Legendary    = 2,
	ECosmeticsRarity__ECosmeticsRarity_MAX = 3
};


// Enum Anarea.ECharacterWalkMode
enum class ECharacterWalkMode : uint8_t
{
	ECharacterWalkMode__Walk       = 0,
	ECharacterWalkMode__Jog        = 1,
	ECharacterWalkMode__Sprint     = 2,
	ECharacterWalkMode__ECharacterWalkMode_MAX = 3
};


// Enum Anarea.EWeaponEquipAction
enum class EWeaponEquipAction : uint8_t
{
	EWeaponEquipAction__None       = 0,
	EWeaponEquipAction__Grab       = 1,
	EWeaponEquipAction__Holster    = 2,
	EWeaponEquipAction__Swap       = 3,
	EWeaponEquipAction__EWeaponEquipAction_MAX = 4
};


// Enum Anarea.EAmmoType
enum class EAmmoType : uint8_t
{
	EAmmoType__None                = 0,
	EAmmoType__Default             = 1,
	EAmmoType__EAmmoType_MAX       = 2
};


// Enum Anarea.EShootMode
enum class EShootMode : uint8_t
{
	EShootMode__Auto               = 0,
	EShootMode__Single             = 1,
	EShootMode__Burst              = 2,
	EShootMode__EShootMode_MAX     = 3
};


// Enum Anarea.EShootStance
enum class EShootStance : uint8_t
{
	EShootStance__Hip              = 0,
	EShootStance__Ironsights       = 1,
	EShootStance__EShootStance_MAX = 2
};


// Enum Anarea.EWeaponSetDetail
enum class EWeaponSetDetail : uint8_t
{
	EWeaponSetDetail__None         = 0,
	EWeaponSetDetail__AR           = 1,
	EWeaponSetDetail__AK           = 2,
	EWeaponSetDetail__M9           = 3,
	EWeaponSetDetail__DesertEagle  = 4,
	EWeaponSetDetail__M37          = 5,
	EWeaponSetDetail__Berreta      = 6,
	EWeaponSetDetail__Mossberg     = 7,
	EWeaponSetDetail__M1           = 8,
	EWeaponSetDetail__M40          = 9,
	EWeaponSetDetail__EWeaponSetDetail_MAX = 10
};


// Enum Anarea.EWeaponSet
enum class EWeaponSet : uint8_t
{
	EWeaponSet__None               = 0,
	EWeaponSet__Rifle              = 1,
	EWeaponSet__Shootgun           = 2,
	EWeaponSet__Gun                = 3,
	EWeaponSet__Grenade            = 4,
	EWeaponSet__EWeaponSet_MAX     = 5
};


// Enum Anarea.EEquipmentFlags
enum class EEquipmentFlags : uint8_t
{
	EEquipmentFlags__None          = 0,
	EEquipmentFlags__Weapon        = 1,
	EEquipmentFlags__Melee         = 2,
	EEquipmentFlags__Ranged        = 3,
	EEquipmentFlags__Grenade       = 4,
	EEquipmentFlags__EEquipmentFlags_MAX = 5
};


// Enum Anarea.EAbilityInputs
enum class EAbilityInputs : uint8_t
{
	EAbilityInputs__None           = 0,
	EAbilityInputs__MainAction     = 1,
	EAbilityInputs__SecondaryAction = 2,
	EAbilityInputs__Reload         = 3,
	EAbilityInputs__Aim            = 4,
	EAbilityInputs__Roll           = 5,
	EAbilityInputs__HolsterWeapon  = 6,
	EAbilityInputs__SelectWeapon01 = 7,
	EAbilityInputs__SelectWeapon02 = 8,
	EAbilityInputs__SelectWeapon03 = 9,
	EAbilityInputs__UseConsumable01 = 10,
	EAbilityInputs__UseConsumable02 = 11,
	EAbilityInputs__Interact       = 12,
	EAbilityInputs__SelectGrenade  = 13,
	EAbilityInputs__Sprint         = 14,
	EAbilityInputs__Crouch         = 15,
	EAbilityInputs__Jump           = 16,
	EAbilityInputs__EAbilityInputs_MAX = 17
};


// Enum Anarea.EHandAttachment
enum class EHandAttachment : uint8_t
{
	EHandAttachment__None          = 0,
	EHandAttachment__RightHand     = 1,
	EHandAttachment__LeftHand      = 2,
	EHandAttachment__EHandAttachment_MAX = 3
};


// Enum Anarea.EAudioCompType
enum class EAudioCompType : uint8_t
{
	EAudioCompType__Footstep       = 0,
	EAudioCompType__Jump           = 1,
	EAudioCompType__Land           = 2,
	EAudioCompType__EAudioCompType_MAX = 3
};


// Enum Anarea.EVolumeType
enum class EVolumeType : uint8_t
{
	EVolumeType__Master            = 0,
	EVolumeType__Effects           = 1,
	EVolumeType__Voices            = 2,
	EVolumeType__Music             = 3,
	EVolumeType__EVolumeType_MAX   = 4
};


// Enum Anarea.EReplicatedDoorState
enum class EReplicatedDoorState : uint8_t
{
	EReplicatedDoorState__Closed   = 0,
	EReplicatedDoorState__OpeningRight = 1,
	EReplicatedDoorState__OpenRight = 2,
	EReplicatedDoorState__OpeningLeft = 3,
	EReplicatedDoorState__OpenLeft = 4,
	EReplicatedDoorState__ClosingRight = 5,
	EReplicatedDoorState__ClosingLeft = 6,
	EReplicatedDoorState__EReplicatedDoorState_MAX = 7
};


// Enum Anarea.ERecoilPatternVariation
enum class ERecoilPatternVariation : uint8_t
{
	ERecoilPatternVariation__Random = 0,
	ERecoilPatternVariation__SeededRandom = 1,
	ERecoilPatternVariation__List  = 2,
	ERecoilPatternVariation__RandomInList = 3,
	ERecoilPatternVariation__SeededRandomInList = 4,
	ERecoilPatternVariation__ERecoilPatternVariation_MAX = 5
};


// Enum Anarea.ERecoilPatternType
enum class ERecoilPatternType : uint8_t
{
	ERecoilPatternType__InsideCircle = 0,
	ERecoilPatternType__Horizontal = 1,
	ERecoilPatternType__Vertical   = 2,
	ERecoilPatternType__Cross      = 3,
	ERecoilPatternType__ERecoilPatternType_MAX = 4
};


// Enum Anarea.EShootMethode
enum class EShootMethode : uint8_t
{
	EShootMethode__Hitscan         = 0,
	EShootMethode__Bullet          = 1,
	EShootMethode__Projectile      = 2,
	EShootMethode__EShootMethode_MAX = 3
};


// Enum Anarea.EReloadMode
enum class EReloadMode : uint8_t
{
	EReloadMode__EntireMagazine    = 0,
	EReloadMode__MultipleSteps     = 1,
	EReloadMode__EReloadMode_MAX   = 2
};


// Enum Anarea.EStormZoneStatus
enum class EStormZoneStatus : uint8_t
{
	EStormZoneStatus__BeforeInitialization = 0,
	EStormZoneStatus__Waiting      = 1,
	EStormZoneStatus__PreparingShrinking = 2,
	EStormZoneStatus__Shrinking    = 3,
	EStormZoneStatus__EStormZoneStatus_MAX = 4
};


// Enum Anarea.EMapDelimiterType
enum class EMapDelimiterType : uint8_t
{
	EMapDelimiterType__SizeDelimiter = 0,
	EMapDelimiterType__ZoneDelimiter = 1,
	EMapDelimiterType__EMapDelimiterType_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Anarea.ItemBaseData
// 0x0090
struct FItemBaseData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_03;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStack;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ItemTag;                                                  // 0x004C(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       AllowedSlots;                                             // 0x0058(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      ItemInWorldToUse;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsUsable;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConsumeAfterUsage;                                        // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemKey
// 0x0010
struct FItemKey
{
	struct FName                                       ItemNameInDB;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UItemDataAsset*                              ItemDataAsset;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.PlayerMatchData
// 0x000C
struct FPlayerMatchData
{
	int                                                Score;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Placement;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ZonePlayerStarts
// 0x0020
struct FZonePlayerStarts
{
	TArray<class APlayerStart*>                        PlayerStarts;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<class APlayerStart*>                        AvailablePlayerStarts;                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Anarea.ScoreRules
// 0x0018
struct FScoreRules
{
	float                                              XPForNextLevel;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ScoreForEachKill;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlacementScore;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PlacementScoreMultiplier;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.GamePhaseReplicatedInfo
// 0x000C
struct FGamePhaseReplicatedInfo
{
	float                                              LastGamePhaseChangeTime;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGamePhase                                         currentGamePhase;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GamePhaseDuration;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.KillfeedEntryInfo
// 0x0030
struct FKillfeedEntryInfo
{
	EKillfeedKillCause                                 Cause;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponUsed;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     KillerPlayer;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     KilledPlayer;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.KillfeedEntry
// 0x0038
struct FKillfeedEntry
{
	int                                                EntryIndex;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKillfeedEntryInfo                          Info;                                                     // 0x0008(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Anarea.EquipAnimInfos
// 0x0010
struct FEquipAnimInfos
{
	class UAnimMontage*                                GrabMontage;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                HolsterMontage;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.DamagePerceptionDirection
// 0x0008
struct FDamagePerceptionDirection
{
	EDamagePerceptionDirection                         DirectionEnum;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionAngle;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.DamageCauseInfo
// 0x0038
struct FDamageCauseInfo
{
	EDamageCause                                       Cause;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponUsed;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageCauserPawn;                                         // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageCauserController;                                   // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceDirection;                                          // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDamagePerceptionDirection                  DamagePerceptionDirection;                                // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Anarea.ItemInstanceData
// 0x0008
struct FItemInstanceData
{
	int                                                CurrentStack;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ammoCount;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.CachedItemData
// 0x0038
struct FCachedItemData
{
	int                                                MaxStack;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ItemTag;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       AllowedSlots;                                             // 0x0010(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      IsUsable;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ConsumeAfterUsage;                                        // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Initialized;                                              // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemInstance
// 0x0058
struct FItemInstance
{
	struct FItemKey                                    SelfItemKey;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FItemInstanceData                           InstanceData;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly)
	struct FCachedItemData                             CachedData;                                               // 0x0018(0x0038) (BlueprintVisible, BlueprintReadOnly, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AItemInWorld*                                LinkedItemInWorld;                                        // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.BaseCosmeticBackendInfo
// 0x0028 (0x0030 - 0x0008)
struct FBaseCosmeticBackendInfo : public FTableRowBase
{
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayedSkinName;                                        // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	ECosmeticsRarity                                   Rarity;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.WeaponSkinBackendInfo
// 0x0038 (0x0068 - 0x0030)
struct FWeaponSkinBackendInfo : public FBaseCosmeticBackendInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Anarea.WeaponSkinBackendInfo.SkinMaterial
	struct FName                                       AssociatedWeaponName;                                     // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AssociatedWeaponClass;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.PlayerIconBackendInfo
// 0x0028 (0x0058 - 0x0030)
struct FPlayerIconBackendInfo : public FBaseCosmeticBackendInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Anarea.PlayerIconBackendInfo.PlayerIconTexture
};

// ScriptStruct Anarea.CharacterModelBackendInfo
// 0x0058 (0x0088 - 0x0030)
struct FCharacterModelBackendInfo : public FBaseCosmeticBackendInfo
{
	class USkeletalMesh*                               CharacterMesh;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UMaterialInterface*>      CharacterMaterialsToOverride;                             // 0x0038(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.BackpackBackendInfo
// 0x0010 (0x0040 - 0x0030)
struct FBackpackBackendInfo : public FBaseCosmeticBackendInfo
{
	class USkeletalMesh*                               BackpackMesh;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BackpackMaterial;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ShootDamageInfo
// 0x0020
struct FShootDamageInfo
{
	class UClass*                                      DamageClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageValue;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFactorOverDistance;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageMultiplier;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.BulletInstanceInfo
// 0x0048
struct FBulletInstanceInfo
{
	float                                              Speed;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0010(0x0010) (ZeroConstructor)
	int                                                SubShootCount;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FShootDamageInfo                            DamageInfo;                                               // 0x0028(0x0020)
};

// ScriptStruct Anarea.BlueprintAgentInfo
// 0x0018
struct FBlueprintAgentInfo
{
	float                                              LastComputedCardinalAngle;                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCompassAgent>              Agent;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.WeaponNameAndSkinName
// 0x0010
struct FWeaponNameAndSkinName
{
	struct FName                                       weaponName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       skinName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.NameArray
// 0x0010
struct FNameArray
{
	TArray<struct FName>                               Content;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.EquipmentLinkedAbilities
// 0x0010
struct FEquipmentLinkedAbilities
{
	TArray<class UClass*>                              Abilities;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Anarea.GrenadeWeaponInfo
// 0x0010 (0x0018 - 0x0008)
struct FGrenadeWeaponInfo : public FTableRowBase
{
	float                                              TimeBeforeExploding;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileInitialSpeed;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GrenadeProjectileClass;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.GrenadeDamageInfo
// 0x0020
struct FGrenadeDamageInfo
{
	class UClass*                                      DamageClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageValue;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFactorOverDistance;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageMultiplier;                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemSlot
// 0x0064 (0x0070 - 0x000C)
struct FItemSlot : public FFastArraySerializerItem
{
	int                                                slotIndex;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               ItemInstance;                                             // 0x0010(0x0058)
	unsigned char                                      IsLocked;                                                 // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemSlotArray
// 0x0168 (0x0270 - 0x0108)
struct FItemSlotArray : public FFastArraySerializer
{
	TArray<struct FItemSlot>                           Slots;                                                    // 0x0108(0x0010) (ZeroConstructor)
	TMap<int, struct FGameplayTag>                     SlotTagMap;                                               // 0x0118(0x0050) (Edit, ZeroConstructor)
	struct FGameplayTag                                DefaultSlotsTag;                                          // 0x0168(0x0008) (Edit)
	int                                                SlotChunkSize;                                            // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoDestroyItemsLinkedToItemInWorld;                      // 0x0174(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFB];                                      // 0x0175(0x00FB) MISSED OFFSET
};

// ScriptStruct Anarea.ItemKeyWithStack
// 0x0018
struct FItemKeyWithStack
{
	struct FItemKey                                    ItemKey;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	int                                                Stack;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemColorInfo
// 0x0014
struct FItemColorInfo
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StencilValue;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemDragInfo
// 0x0078
struct FItemDragInfo
{
	class UInventoryComponent*                         FromInventory;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                FromSlotIndex;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FItemInstance                               DraggedItem;                                              // 0x0010(0x0058) (Edit, BlueprintVisible)
	unsigned char                                      FromSplit;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItemInWorld*                                LinkedItemInWorld;                                        // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.LootSpawnAdditionalLocations
// 0x0024
struct FLootSpawnAdditionalLocations
{
	struct FVector                                     loc_01;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     loc_02;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     loc_03;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ReplicatedZoneInfo
// 0x0018 (0x0020 - 0x0008)
struct FReplicatedZoneInfo : public FTableRowBase
{
	struct FVector2D                                   ZoneStartGridIndex2D;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ZoneExtendInGrid;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsForbiddenZone;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ReloadInfo
// 0x0008
struct FReloadInfo
{
	EReloadMode                                        ReloadMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AmmoToAddAtEachReloadStep;                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.RecoilPattern
// 0x0028
struct FRecoilPattern
{
	ERecoilPatternVariation                            PatternVariation;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseSymmetry;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RandomPatternSeed;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ERecoilPatternType                                 PatternType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDeviationAngleDegree;                                  // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationAngleDegree;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           DeviationAnglesList;                                      // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.HitscanInfo
// 0x0001
struct FHitscanInfo
{
	unsigned char                                      Test;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.BulletMethodeInfo
// 0x000C
struct FBulletMethodeInfo
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GravityFactor;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ProjectileMethodeInfo
// 0x0008
struct FProjectileMethodeInfo
{
	class AActor*                                      Projectile;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ShootInfo
// 0x0078
struct FShootInfo
{
	EShootMethode                                      ShootMethode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinShootDelay;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideShootResetSpeed;                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShootResetSpeed;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EShootMode                                         ShootMode;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShootMaxDistance;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SubShootCount;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRecoilPattern                              SubShootPattern;                                          // 0x0020(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class URecoilPatternDataAsset*                     RecoilPatterns;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHitscanInfo                                HitscanInfo;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBulletMethodeInfo                          BulletInfo;                                               // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FProjectileMethodeInfo                      ProjectileInfo;                                           // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ShootSound;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ShootFX;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ShootingWeaponInfo
// 0x00C8 (0x00D0 - 0x0008)
struct FShootingWeaponInfo : public FTableRowBase
{
	struct FReloadInfo                                 ReloadInfo;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnlimitedAmmo;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EAmmoType                                          AmmoType;                                                 // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FItemKey                                    AmmoItem;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                magazineCapacity;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AmmoConsumptionPerShoot;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FShootDamageInfo                            DamageInfo;                                               // 0x0030(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FShootInfo                                  ShootInfo;                                                // 0x0050(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              ZoomFOVFactor;                                            // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.RecoilPatternWithSmootingCurve
// 0x0030
struct FRecoilPatternWithSmootingCurve
{
	struct FRecoilPattern                              RecoilPattern;                                            // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UCurveFloat*                                 RecoilStrengthCurve;                                      // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.SituationalRecoilPatterns
// 0x00C0
struct FSituationalRecoilPatterns
{
	struct FRecoilPatternWithSmootingCurve             DefaultRecoilPattern;                                     // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRecoilPatternWithSmootingCurve             AimRecoilPattern;                                         // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRecoilPatternWithSmootingCurve             JogRecoilPattern;                                         // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FRecoilPatternWithSmootingCurve             JumpRecoilPattern;                                        // 0x0090(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Anarea.StormZoneInfo
// 0x0018
struct FStormZoneInfo
{
	float                                              ZoneRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideTimeBeforeShrink;                                 // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeShrink;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideShrinkTime;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShrinkTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StormDamage;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.StormZonesRules
// 0x0040 (0x0048 - 0x0008)
struct FStormZonesRules : public FTableRowBase
{
	unsigned char                                      UseFixedSeed;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinShrinkLocOffsetFactor;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MapMinWorldCoord;                                         // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MapMaxWorldCoord;                                         // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InitialZoneRadius;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InitialStormDamage;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PrepareShrinkTime;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTimeBeforeShrink;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultShrinkTime;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FStormZoneInfo>                      ZonesInfo;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.WeightedName
// 0x000C
struct FWeightedName
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.AmmoItemInitData
// 0x0068 (0x0070 - 0x0008)
struct FAmmoItemInitData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AllowedSlots;                                             // 0x0050(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct Anarea.MatchStateInfo
// 0x0020 (0x0028 - 0x0008)
struct FMatchStateInfo : public FTableRowBase
{
	int                                                TotalCountdownSeconds;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Anarea.AnimationsInitInfos
// 0x00A0 (0x00A8 - 0x0008)
struct FAnimationsInitInfos : public FTableRowBase
{
	TMap<struct FGameplayTag, class UAnimMontage*>     NamedAnimations;                                          // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FEquipAnimInfos>         SocketToEquipAnims;                                       // 0x0058(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Anarea.WeaponAnimInfo
// 0x0060 (0x0068 - 0x0008)
struct FWeaponAnimInfo : public FTableRowBase
{
	TMap<EShootStance, class UAnimMontage*>            Montages;                                                 // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                ReloadMontage;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                EquipMontage;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ConsumableItemInitData
// 0x0088 (0x0090 - 0x0008)
struct FConsumableItemInitData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AllowedSlots;                                             // 0x0050(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTag                                ItemTag;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible)
	float                                              WaitTimeBeforeFirstApplication;                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActivationEffectClass;                                    // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActivationGameplayAbilityClass;                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.MaterialWithIndex
// 0x0010
struct FMaterialWithIndex
{
	int                                                SectionIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.WeaponBackendInfo
// 0x0028 (0x0030 - 0x0008)
struct FWeaponBackendInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Anarea.WeaponBackendInfo.WeaponClass
};

// ScriptStruct Anarea.HitFXInfo
// 0x0010
struct FHitFXInfo
{
	class USoundBase*                                  ShootSound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ShootFX;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.HitFXInfoPerSurfaceType
// 0x0050 (0x0058 - 0x0008)
struct FHitFXInfoPerSurfaceType : public FTableRowBase
{
	TMap<TEnumAsByte<EPhysicalSurface>, struct FHitFXInfo> InfoPerSurface;                                           // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Anarea.GrenadeItemInitData
// 0x0058 (0x0060 - 0x0008)
struct FGrenadeItemInitData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_03;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Anarea.ItemInWorldSet
// 0x0050
struct FItemInWorldSet
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Anarea.ItemInWorldSet.ItemsInWorld
};

// ScriptStruct Anarea.ItemInWorldSaveData
// 0x0038
struct FItemInWorldSaveData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemInWorldClass;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FItemKeyWithStack                           ItemKeyWithStack;                                         // 0x0020(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Anarea.AllItemsInWorldSaveData
// 0x0010
struct FAllItemsInWorldSaveData
{
	TArray<struct FItemInWorldSaveData>                AllSaveData;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Anarea.LootSpawnerData
// 0x0030 (0x0038 - 0x0008)
struct FLootSpawnerData : public FTableRowBase
{
	float                                              Probability;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FItemKeyWithStack                           MainItem;                                                 // 0x0010(0x0018) (Edit, BlueprintVisible)
	TArray<struct FItemKeyWithStack>                   AdditionalItems;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Anarea.SkillItemInitData
// 0x0050 (0x0058 - 0x0008)
struct FSkillItemInitData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ItemTag;                                                  // 0x0050(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct Anarea.WeaponItemInitData
// 0x0058 (0x0060 - 0x0008)
struct FWeaponItemInitData : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_02;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon_03;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
