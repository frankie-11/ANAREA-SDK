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

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5
};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12
};


// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal = 0,
	EGameplayEffectReplicationMode__Mixed = 1,
	EGameplayEffectReplicationMode__Full = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame = 0,
	EAbilityTaskWaitState__WaitingOnUser = 1,
	EAbilityTaskWaitState__WaitingOnAvatar = 2,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 3
};


// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3
};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7
};


// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9
};


// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3
};


// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3
};


// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX = 2
};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4
};


// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2
};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3
};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4
};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0028
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0010
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00B0
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject2;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x0040(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                               // 0x0060(0x0020) (Edit, BlueprintVisible)
	float                                              EventMagnitude;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0088(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
struct FGameplayAttribute
{
	struct FString                                     AttributeName;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UProperty*                                   Attribute;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStruct*                                     AttributeOwner;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (BlueprintVisible)
	struct FGameplayTag                                MatchedTagName;                                           // 0x0020(0x0008) (BlueprintVisible, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTag                                OriginalTag;                                              // 0x0028(0x0008) (BlueprintVisible, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020) (BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020) (BlueprintVisible)
	struct FVector_NetQuantize10                       Location;                                                 // 0x0070(0x000C) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x007C(0x000C) (BlueprintVisible)
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysicalMaterial;                                         // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              TargetAttachComponent;                                    // 0x00B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredActorClass;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverseFilter;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPassedFiltersAndWasExecuted;                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0020(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  LiteralTransform;                                         // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              SourceComponent;                                          // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayAbility*                            SourceAbility;                                            // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DefaultStartingTable;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                  // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Base;                                                     // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	class UPackageMap*                                 PredictiveConnection;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsStale;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsServerInitiated;                                       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                           // 0x0001(0x0001) ( BITFIELD: 0101)
	struct FPredictionKey                              PredictionKeyWhenActivated;                               // 0x0008(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x00BC (0x00C8 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // 0x000C(0x0004)
	class UGameplayAbility*                            Ability;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InputID;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObject;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActiveCount;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      InputPressed : 1;                                         // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0101)
	unsigned char                                      RemoveAfterActivation : 1;                                // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0202)
	unsigned char                                      PendingRemove : 1;                                        // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0404)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // 0x0030(0x0020) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   // 0x0050(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      // 0x0060(0x0010) (ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     // 0x0070(0x0008) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0078(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x0120 - 0x0108)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    // 0x0108(0x0010) (ZeroConstructor)
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0015(0x0001) ( BITFIELD: 0101)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0015(0x0001) ( BITFIELD: 0202)
	unsigned char                                      SkipPositionCorrection : 1;                               // 0x0015(0x0001) ( BITFIELD: 0404)
	unsigned char                                      bSkipPlayRate : 1;                                        // 0x0015(0x0001) ( BITFIELD: 0808)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayBit;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
	class UGameplayAbility*                            AnimatingAbility;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	float                                              TotalMagnitude;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                       // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSnapshot;                                                // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bHasNonSnapshottedAttributes;                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x0000(0x0020)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x0020(0x0020)
	struct FGameplayTagContainer                       ScopedTags;                                               // 0x0040(0x0020)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0090
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScalableFloat                              LevelScalableFloat;                                       // 0x0008(0x0020) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                            // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UObject*                                     SourceObject;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           // 0x0088(0x0004)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               // 0x0018(0x0028) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTagContainerAggregator                     CapturedSourceTags;                                       // 0x0060(0x0088) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTagContainerAggregator                     CapturedTargetTags;                                       // 0x00E8(0x0088) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       // 0x0170(0x0020)
	struct FGameplayTagContainer                       DynamicAssetTags;                                         // 0x0190(0x0020)
	TArray<struct FModifierSpec>                       Modifiers;                                                // 0x01B0(0x0010) (ZeroConstructor)
	int                                                StackCount;                                               // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0101)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0202)
	unsigned char                                      bDurationLocked : 1;                                      // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate BITFIELD: 0404)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x01D8(0x00A0) MISSED OFFSET
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0278(0x0018)
	float                                              Level;                                                    // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0364 (0x0370 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	struct FGameplayEffectSpec                         Spec;                                                     // 0x0018(0x0298)
	struct FPredictionKey                              PredictionKey;                                            // 0x02B0(0x0018)
	float                                              StartServerWorldTime;                                     // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsInhibited;                                             // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x9B];                                      // 0x02D5(0x009B) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0378 (0x0480 - 0x0108)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0108(0x0030) MISSED OFFSET
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 // 0x0138(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x310];                                     // 0x0148(0x0310) MISSED OFFSET
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                          // 0x0458(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0468(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x000C(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	struct FGameplayCueParameters                      Parameters;                                               // 0x0030(0x00B8)
	unsigned char                                      bPredictivelyRemoved;                                     // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x0128 - 0x0108)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             // 0x0108(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x0118 - 0x0108)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	TArray<struct FReplicatedPredictionKeyItem>        PredictionKeys;                                           // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0138
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FGameplayTagQuery                           OwningTagQuery;                                           // 0x0020(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                           // 0x0068(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // 0x00B0(0x0048) (Edit, BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                       // 0x00F8(0x0020) (Edit, BlueprintVisible)
	class UObject*                                     EffectSource;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EffectDefinition;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0050
struct FGameplayAbilities_FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // 0x0000(0x0004)
	struct FPredictionKey                              PredictionKey;                                            // 0x0008(0x0018)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0020(0x0028)
	unsigned char                                      InputPressed;                                             // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Ended;                                                    // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Started;                                                  // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0018(0x0018)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020)
	float                                              Level;                                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AbilityLevel;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// 0x0010
struct FNetSerializeScriptStructCache
{
	TArray<class UScriptStruct*>                       ScriptStructs;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0020
struct FGameplayEffectRemovalInfo
{
	unsigned char                                      bPrematureRemoval;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                               // 0x0000(0x0008) (Edit)
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       SkeletalMeshComponent;                                    // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameplayAbilityClass;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x0050
struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
	class UObjectLibrary*                              ActorObjectLibrary;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              StaticObjectLibrary;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameplayCueSet*                             CueSet;                                                   // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
	unsigned char                                      bShouldSyncScan;                                          // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldAsyncLoad;                                         // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldSyncLoad;                                          // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasBeenInitialized;                                      // 0x004F(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	EGameplayCuePayloadType                            PayloadType;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     OwningComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 // 0x0040(0x0078)
	struct FGameplayCueParameters                      CueParameters;                                            // 0x00B8(0x00B8)
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
struct FPreallocationInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	TArray<class UClass*>                              ClassesNeedingPreallocation;                              // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0030
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit)
	struct FSoftObjectPath                             GameplayCueNotifyObj;                                     // 0x0008(0x0018) (Edit, ZeroConstructor)
	class UClass*                                      LoadedGameplayCueClass;                                   // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00E0
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                              // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         // 0x0060(0x0028) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                           // 0x0088(0x0010) (Edit, DisableEditOnInstance)
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                 // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayModEvaluationChannel                      FinalChannel;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       SourceTagFilter;                                          // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetTagFilter;                                          // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0078
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Coefficient;                                              // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0048(0x0020) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        FinalLookupCurve;                                         // 0x0068(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0010
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FGameplayTag                                DataTag;                                                  // 0x0008(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0190
struct FGameplayEffectModifierMagnitude
{
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ScalableFloatMagnitude;                                   // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  // 0x0028(0x00E0) (Edit, DisableEditOnInstance)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          // 0x0108(0x0078) (Edit, DisableEditOnInstance)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     // 0x0180(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
struct FGameplayModEvaluationChannelSettings
{
	EGameplayModEvaluationChannel                      Channel;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0260
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Magnitude;                                                // 0x0028(0x0020)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0048(0x0190) (Edit, DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x01D8(0x0001) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01E0(0x0040) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0220(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0250
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        // 0x0000(0x0028) (Edit, DisableEditOnInstance, EditConst)
	struct FGameplayTag                                TransientAggregatorIdentifier;                            // 0x0028(0x0008) (Edit, DisableEditOnInstance, EditConst)
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0038(0x0190) (Edit, DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x01C8(0x0001) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x01D0(0x0040) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0210(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
struct FConditionalGameplayEffect
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredSourceTags;                                       // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       PassedInTags;                                             // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         // 0x0038(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                       // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayCueTags;                                          // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                             // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	struct FGameplayTagContainer                       Added;                                                    // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
	struct FGameplayTagContainer                       Removed;                                                  // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00F8
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // 0x0028(0x0008)
	unsigned char                                      IsValid;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x0010(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x0010(0x0001) ( BITFIELD: 0202)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0010(0x0001) ( BITFIELD: 0404)
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit)
	class UClass*                                      ResponseGameplayEffect;                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ResponseGameplayEffects;                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                SoftCountCap;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                 // 0x0000(0x0028) (Edit)
	struct FGameplayTagReponsePair                     Negative;                                                 // 0x0028(0x0028) (Edit)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     DerivedAttributeInfo;                                     // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      bCanStack;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
struct FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              BaseValue;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0090 (0x0098 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (IsPlainOldData)
	unsigned char                                      bHitReplaced;                                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // 0x0080(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0010
struct FAbilityEndedData
{
	class UGameplayAbility*                            AbilityThatEnded;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // 0x0008(0x0004)
	unsigned char                                      bReplicateEndAbility;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWasCancelled;                                            // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// 0x01C0
struct FMinimalGameplayCueReplicationProxy
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x01B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
struct FGameplayCueTranslationLink
{
	class UGameplayCueTranslator*                      RulesCDO;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
struct FGameplayCueTranslatorNodeIndex
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
struct FGameplayCueTranslatorNode
{
	TArray<struct FGameplayCueTranslationLink>         Links;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FGameplayCueTranslatorNodeIndex             CachedIndex;                                              // 0x0010(0x0004)
	struct FGameplayTag                                CachedGameplayTag;                                        // 0x0014(0x0008)
	struct FName                                       CachedGameplayTagName;                                    // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0024(0x0054) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
struct FGameplayCueTranslationManager
{
	TArray<struct FGameplayCueTranslatorNode>          TranslationLUT;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                                // 0x0010(0x0050) (ZeroConstructor)
	class UGameplayTagsManager*                        TagManager;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0070
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// 0x0030
struct FGameplayTagBlueprintPropertyMapping
{
	struct FGameplayTag                                TagToMap;                                                 // 0x0000(0x0008) (Edit)
	class UProperty*                                   PropertyToEdit;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       PropertyGuid;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// 0x0020
struct FGameplayTagBlueprintPropertyMap
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0070
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UGameplayAbility>             AbilityCDO;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UGameplayAbility>             AbilityInstanceNotReplicated;                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AbilityLevel;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x0034(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	struct FVector                                     WorldOrigin;                                              // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHasWorldOrigin : 1;                                      // 0x006C(0x0001) ( BITFIELD: 0101)
	unsigned char                                      bReplicateSourceObject : 1;                               // 0x006C(0x0001) ( BITFIELD: 0202)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
