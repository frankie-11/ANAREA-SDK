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

// Function Anarea.ItemDataAsset.MakeItemBaseData
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FItemBaseData           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemBaseData UItemDataAsset::MakeItemBaseData(class UObject** WorldContextObject, struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemDataAsset.MakeItemBaseData");

	UItemDataAsset_MakeItemBaseData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnareaGameInstance.SetFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFov                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAnareaGameInstance::SetFOV(float* InFov)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameInstance.SetFOV");

	UAnareaGameInstance_SetFOV_Params params;
	params.InFov = InFov;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnareaGameInstance.ResetDisconnectReason
// (Final, Native, Public, BlueprintCallable)

void UAnareaGameInstance::ResetDisconnectReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameInstance.ResetDisconnectReason");

	UAnareaGameInstance_ResetDisconnectReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameInstance.ReceiveLevelStreamingUnloaded
// (Final, Native, Public)

void UAnareaGameInstance::ReceiveLevelStreamingUnloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameInstance.ReceiveLevelStreamingUnloaded");

	UAnareaGameInstance_ReceiveLevelStreamingUnloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameInstance.ReceiveLevelStreamingLoaded
// (Final, Native, Public)

void UAnareaGameInstance::ReceiveLevelStreamingLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameInstance.ReceiveLevelStreamingLoaded");

	UAnareaGameInstance_ReceiveLevelStreamingLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.AnareaGameInstance.OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAnareaGameInstance::OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.AnareaGameInstance.OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature");

	UAnareaGameInstance_OnWantHideHUDSettingChanged_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.AnareaGameInstance.OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAnareaGameInstance::OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.AnareaGameInstance.OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature");

	UAnareaGameInstance_OnToggleSprintSettingChanged_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.AnareaGameInstance.OnFOVSettingChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAnareaGameInstance::OnFOVSettingChanged_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.AnareaGameInstance.OnFOVSettingChanged_DelegateSignature__DelegateSignature");

	UAnareaGameInstance_OnFOVSettingChanged_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.AnareaGameInstance.OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAnareaGameInstance::OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.AnareaGameInstance.OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature");

	UAnareaGameInstance_OnEnableCSMSettingChanged_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.AnareaGameInstance.OnCrosshairChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAnareaGameInstance::OnCrosshairChanged_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.AnareaGameInstance.OnCrosshairChanged_DelegateSignature__DelegateSignature");

	UAnareaGameInstance_OnCrosshairChanged_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameInstance.GetHasDisconnectReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnareaGameInstance::GetHasDisconnectReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameInstance.GetHasDisconnectReason");

	UAnareaGameInstance_GetHasDisconnectReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobbyTimeoutFallback
// (Final, Native, Public)
// Parameters:
// class ABasePlayerController**  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AAnareaGameModeBase::OnPlayerFullyJoinLobbyTimeoutFallback(class ABasePlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobbyTimeoutFallback");

	AAnareaGameModeBase_OnPlayerFullyJoinLobbyTimeoutFallback_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobby
// (Final, Native, Public)
// Parameters:
// class ABasePlayerController**  Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AAnareaGameModeBase::OnPlayerFullyJoinLobby(class ABasePlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameModeBase.OnPlayerFullyJoinLobby");

	AAnareaGameModeBase_OnPlayerFullyJoinLobby_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameModeBase.GetPhaseDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EGamePhase*                    gamePhase                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAnareaGameModeBase::GetPhaseDuration(EGamePhase* gamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameModeBase.GetPhaseDuration");

	AAnareaGameModeBase_GetPhaseDuration_Params params;
	params.gamePhase = gamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnareaGameStateBase.OnRep_WinnerID
// (Final, Native, Private)

void AAnareaGameStateBase::OnRep_WinnerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameStateBase.OnRep_WinnerID");

	AAnareaGameStateBase_OnRep_WinnerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameStateBase.OnRep_ReplicatedGamePhaseInfo
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGamePhaseReplicatedInfo* prevGamePhase                  (ConstParm, Parm, OutParm, ReferenceParm)

void AAnareaGameStateBase::OnRep_ReplicatedGamePhaseInfo(struct FGamePhaseReplicatedInfo* prevGamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameStateBase.OnRep_ReplicatedGamePhaseInfo");

	AAnareaGameStateBase_OnRep_ReplicatedGamePhaseInfo_Params params;
	params.prevGamePhase = prevGamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameStateBase.OnRep_RemainingPlayersInMatch
// (Final, Native, Private)

void AAnareaGameStateBase::OnRep_RemainingPlayersInMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameStateBase.OnRep_RemainingPlayersInMatch");

	AAnareaGameStateBase_OnRep_RemainingPlayersInMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameStateBase.OnRep_MatchID
// (Final, Native, Private)

void AAnareaGameStateBase::OnRep_MatchID()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameStateBase.OnRep_MatchID");

	AAnareaGameStateBase_OnRep_MatchID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameStateBase.AddKillfeedEntry
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FKillfeedEntryInfo*     killfeedInfo                   (Parm)

void AAnareaGameStateBase::AddKillfeedEntry(struct FKillfeedEntryInfo* killfeedInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameStateBase.AddKillfeedEntry");

	AAnareaGameStateBase_AddKillfeedEntry_Params params;
	params.killfeedInfo = killfeedInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetWantHideHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inWantHideHUD                  (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetWantHideHUD(bool* inWantHideHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetWantHideHUD");

	UAnareaGameUserSettings_SetWantHideHUD_Params params;
	params.inWantHideHUD = inWantHideHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetVoicesVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetVoicesVolume(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetVoicesVolume");

	UAnareaGameUserSettings_SetVoicesVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetToggleSprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inToggleSprint                 (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetToggleSprint(bool* inToggleSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetToggleSprint");

	UAnareaGameUserSettings_SetToggleSprint_Params params;
	params.inToggleSprint = inToggleSprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetMusicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetMusicVolume(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetMusicVolume");

	UAnareaGameUserSettings_SetMusicVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetMasterVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetMasterVolume(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetMasterVolume");

	UAnareaGameUserSettings_SetMasterVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFov                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetFOV(float* InFov)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetFOV");

	UAnareaGameUserSettings_SetFOV_Params params;
	params.InFov = InFov;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetEnableCSM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          inEnableCSM                    (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetEnableCSM(bool* inEnableCSM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetEnableCSM");

	UAnareaGameUserSettings_SetEnableCSM_Params params;
	params.inEnableCSM = inEnableCSM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetEffectsVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetEffectsVolume(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetEffectsVolume");

	UAnareaGameUserSettings_SetEffectsVolume_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.SetCrosshairShape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECrosshairToUse*               inCrosshairToUse               (Parm, ZeroConstructor, IsPlainOldData)

void UAnareaGameUserSettings::SetCrosshairShape(ECrosshairToUse* inCrosshairToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.SetCrosshairShape");

	UAnareaGameUserSettings_SetCrosshairShape_Params params;
	params.inCrosshairToUse = inCrosshairToUse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnareaGameUserSettings.GetAnareaGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnareaGameUserSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnareaGameUserSettings* UAnareaGameUserSettings::STATIC_GetAnareaGameUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnareaGameUserSettings.GetAnareaGameUserSettings");

	UAnareaGameUserSettings_GetAnareaGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnimBPInterface.SetIsAiming
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          isAiming                       (Parm, ZeroConstructor, IsPlainOldData)

void UAnimBPInterface::SetIsAiming(bool* isAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimBPInterface.SetIsAiming");

	UAnimBPInterface_SetIsAiming_Params params;
	params.isAiming = isAiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimBPInterface.ChangeWeaponSetDetail
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponSetDetail*              weaponSetDetail                (Parm, ZeroConstructor, IsPlainOldData)

void UAnimBPInterface::ChangeWeaponSetDetail(EWeaponSetDetail* weaponSetDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimBPInterface.ChangeWeaponSetDetail");

	UAnimBPInterface_ChangeWeaponSetDetail_Params params;
	params.weaponSetDetail = weaponSetDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimBPInterface.ChangeUpperbodyAnimMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponSet*                    animMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UAnimBPInterface::ChangeUpperbodyAnimMode(EWeaponSet* animMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimBPInterface.ChangeUpperbodyAnimMode");

	UAnimBPInterface_ChangeUpperbodyAnimMode_Params params;
	params.animMode = animMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.Server_SetIsAiming
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool*                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationHandler::Server_SetIsAiming(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.Server_SetIsAiming");

	UAnimationHandler_Server_SetIsAiming_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.Server_ChangeUpperbodyAnimMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// EWeaponSet*                    newWeaponSet                   (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponSetDetail*              newWeaponSetDetail             (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationHandler::Server_ChangeUpperbodyAnimMode(EWeaponSet* newWeaponSet, EWeaponSetDetail* newWeaponSetDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.Server_ChangeUpperbodyAnimMode");

	UAnimationHandler_Server_ChangeUpperbodyAnimMode_Params params;
	params.newWeaponSet = newWeaponSet;
	params.newWeaponSetDetail = newWeaponSetDetail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.OnRep_WeaponSetDetail
// (Final, Native, Public)

void UAnimationHandler::OnRep_WeaponSetDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.OnRep_WeaponSetDetail");

	UAnimationHandler_OnRep_WeaponSetDetail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.OnRep_UpperbodyAnimMode
// (Final, Native, Public)

void UAnimationHandler::OnRep_UpperbodyAnimMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.OnRep_UpperbodyAnimMode");

	UAnimationHandler_OnRep_UpperbodyAnimMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.OnRep_IsAiming
// (Final, Native, Public)

void UAnimationHandler::OnRep_IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.OnRep_IsAiming");

	UAnimationHandler_OnRep_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.AnimationHandler.GetNamedAnimation
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           animName                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          forTPSMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UAnimationHandler::GetNamedAnimation(struct FGameplayTag* animName, bool* forTPSMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.GetNamedAnimation");

	UAnimationHandler_GetNamedAnimation_Params params;
	params.animName = animName;
	params.forTPSMesh = forTPSMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnimationHandler.GetLinkedAnimBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UAnimationHandler::GetLinkedAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimationHandler.GetLinkedAnimBP");

	UAnimationHandler_GetLinkedAnimBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AnimNotifyReceiverInterface.ReceiveAnimNotify
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAnimNotifyReceiverInterface::ReceiveAnimNotify(struct FGameplayTag* GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AnimNotifyReceiverInterface.ReceiveAnimNotify");

	UAnimNotifyReceiverInterface_ReceiveAnimNotify_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAbilitySystemComponent.ReceiveHealthChanged
// (Final, Native, Public)

void UBaseAbilitySystemComponent::ReceiveHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAbilitySystemComponent.ReceiveHealthChanged");

	UBaseAbilitySystemComponent_ReceiveHealthChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAbilitySystemComponent.OnRep_IsAlive
// (Final, Native, Public)

void UBaseAbilitySystemComponent::OnRep_IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAbilitySystemComponent.OnRep_IsAlive");

	UBaseAbilitySystemComponent_OnRep_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputReleased
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InputName                      (Parm, ZeroConstructor)

void UBaseAbilitySystemComponent::BP_FakeAbilityLocalInputReleased(struct FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputReleased");

	UBaseAbilitySystemComponent_BP_FakeAbilityLocalInputReleased_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InputName                      (Parm, ZeroConstructor)

void UBaseAbilitySystemComponent::BP_FakeAbilityLocalInputPressed(struct FString* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAbilitySystemComponent.BP_FakeAbilityLocalInputPressed");

	UBaseAbilitySystemComponent_BP_FakeAbilityLocalInputPressed_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAbilitySystemComponent.BP_CancelAbilityWithClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 abilityClass                   (Parm, ZeroConstructor, IsPlainOldData)

void UBaseAbilitySystemComponent::BP_CancelAbilityWithClass(class UClass** abilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAbilitySystemComponent.BP_CancelAbilityWithClass");

	UBaseAbilitySystemComponent_BP_CancelAbilityWithClass_Params params;
	params.abilityClass = abilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerAnimBP.PlayPawnDeathAnim
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageCauseInfo*       deathCauseInfo                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBasePlayerAnimBP::PlayPawnDeathAnim(struct FDamageCauseInfo* deathCauseInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerAnimBP.PlayPawnDeathAnim");

	UBasePlayerAnimBP_PlayPawnDeathAnim_Params params;
	params.deathCauseInfo = deathCauseInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.BaseAttributeSet.OnRep_Stamina
// (Native, Public)

void UBaseAttributeSet::OnRep_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_Stamina");

	UBaseAttributeSet_OnRep_Stamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_Shield
// (Native, Public)

void UBaseAttributeSet::OnRep_Shield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_Shield");

	UBaseAttributeSet_OnRep_Shield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_MoveSpeed
// (Native, Public)

void UBaseAttributeSet::OnRep_MoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_MoveSpeed");

	UBaseAttributeSet_OnRep_MoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_MaxStamina
// (Native, Public)

void UBaseAttributeSet::OnRep_MaxStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_MaxStamina");

	UBaseAttributeSet_OnRep_MaxStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_MaxShield
// (Native, Public)

void UBaseAttributeSet::OnRep_MaxShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_MaxShield");

	UBaseAttributeSet_OnRep_MaxShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_MaxHealth
// (Native, Public)

void UBaseAttributeSet::OnRep_MaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_MaxHealth");

	UBaseAttributeSet_OnRep_MaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_Health
// (Native, Public)

void UBaseAttributeSet::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_Health");

	UBaseAttributeSet_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_AttackSpeed
// (Native, Public)

void UBaseAttributeSet::OnRep_AttackSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_AttackSpeed");

	UBaseAttributeSet_OnRep_AttackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.OnRep_Armor
// (Native, Public)

void UBaseAttributeSet::OnRep_Armor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.OnRep_Armor");

	UBaseAttributeSet_OnRep_Armor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseAttributeSet.CheckResistantSkillApplication
// (Final, Native, Public)

void UBaseAttributeSet::CheckResistantSkillApplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseAttributeSet.CheckResistantSkillApplication");

	UBaseAttributeSet_CheckResistantSkillApplication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.UpdateSlotLinkedToItemInWorld
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::UpdateSlotLinkedToItemInWorld(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.UpdateSlotLinkedToItemInWorld");

	UBaseInventoryPanel_UpdateSlotLinkedToItemInWorld_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.UpdateSlot
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::UpdateSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.UpdateSlot");

	UBaseInventoryPanel_UpdateSlot_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.TryGetSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    owningInventory                (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventorySlotWidgetBase* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInventorySlotWidgetBase* UBaseInventoryPanel::TryGetSlot(int* slotIndex, class UInventoryComponent** owningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.TryGetSlot");

	UBaseInventoryPanel_TryGetSlot_Params params;
	params.slotIndex = slotIndex;
	params.owningInventory = owningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.BaseInventoryPanel.SetModels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UInventoryComponent*>* inventoryModels                (Parm, ZeroConstructor)
// class UItemUserComponent**     itemUserModel                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UNearbyItemDetector**    NearbyItemDetector             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::SetModels(TArray<class UInventoryComponent*>* inventoryModels, class UItemUserComponent** itemUserModel, class UNearbyItemDetector** NearbyItemDetector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.SetModels");

	UBaseInventoryPanel_SetModels_Params params;
	params.inventoryModels = inventoryModels;
	params.itemUserModel = itemUserModel;
	params.NearbyItemDetector = NearbyItemDetector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveRightClickOnSlot
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveRightClickOnSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveRightClickOnSlot");

	UBaseInventoryPanel_ReceiveRightClickOnSlot_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveOnSlotUnlocked
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    owningInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ReceiveOnSlotUnlocked(int* slotIndex, class UInventoryComponent** owningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveOnSlotUnlocked");

	UBaseInventoryPanel_ReceiveOnSlotUnlocked_Params params;
	params.slotIndex = slotIndex;
	params.owningInventory = owningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveOnSlotLocked
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    owningInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ReceiveOnSlotLocked(int* slotIndex, class UInventoryComponent** owningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveOnSlotLocked");

	UBaseInventoryPanel_ReceiveOnSlotLocked_Params params;
	params.slotIndex = slotIndex;
	params.owningInventory = owningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveMouseLeaveSlot
// (Native, Public)

void UBaseInventoryPanel::ReceiveMouseLeaveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveMouseLeaveSlot");

	UBaseInventoryPanel_ReceiveMouseLeaveSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveMouseEnterSlot
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveMouseEnterSlot(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveMouseEnterSlot");

	UBaseInventoryPanel_ReceiveMouseEnterSlot_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveMouseDoubleClick
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveMouseDoubleClick(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveMouseDoubleClick");

	UBaseInventoryPanel_ReceiveMouseDoubleClick_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveLootboxRemovedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class ALootbox**               Lootbox                        (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveLootboxRemovedInNearbyDetector(class ALootbox** Lootbox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveLootboxRemovedInNearbyDetector");

	UBaseInventoryPanel_ReceiveLootboxRemovedInNearbyDetector_Params params;
	params.Lootbox = Lootbox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveLootboxAddedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class ALootbox**               Lootbox                        (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveLootboxAddedInNearbyDetector(class ALootbox** Lootbox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveLootboxAddedInNearbyDetector");

	UBaseInventoryPanel_ReceiveLootboxAddedInNearbyDetector_Params params;
	params.Lootbox = Lootbox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveItemUnlockedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveItemUnlockedInNearbyDetector(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveItemUnlockedInNearbyDetector");

	UBaseInventoryPanel_ReceiveItemUnlockedInNearbyDetector_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveItemRemovedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveItemRemovedInNearbyDetector(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveItemRemovedInNearbyDetector");

	UBaseInventoryPanel_ReceiveItemRemovedInNearbyDetector_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveItemModifiedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveItemModifiedInNearbyDetector(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveItemModifiedInNearbyDetector");

	UBaseInventoryPanel_ReceiveItemModifiedInNearbyDetector_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveItemLockedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveItemLockedInNearbyDetector(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveItemLockedInNearbyDetector");

	UBaseInventoryPanel_ReceiveItemLockedInNearbyDetector_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveItemAddedInNearbyDetector
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveItemAddedInNearbyDetector(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveItemAddedInNearbyDetector");

	UBaseInventoryPanel_ReceiveItemAddedInNearbyDetector_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragSlot
// (Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    owningSlotInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          wantSplit                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ReceiveDragSlot(int* slotIndex, class UInventoryComponent** owningSlotInventory, class AItemInWorld** LinkedItemInWorld, bool* wantSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragSlot");

	UBaseInventoryPanel_ReceiveDragSlot_Params params;
	params.slotIndex = slotIndex;
	params.owningSlotInventory = owningSlotInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;
	params.wantSplit = wantSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragLeaveOnDropLayer
// (Native, Public)
// Parameters:
// class UDropLayerBase**         dropLayer                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ReceiveDragLeaveOnDropLayer(class UDropLayerBase** dropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragLeaveOnDropLayer");

	UBaseInventoryPanel_ReceiveDragLeaveOnDropLayer_Params params;
	params.dropLayer = dropLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragEnterOnDropLayer
// (Native, Public)
// Parameters:
// class UDropLayerBase**         dropLayer                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ReceiveDragEnterOnDropLayer(class UDropLayerBase** dropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragEnterOnDropLayer");

	UBaseInventoryPanel_ReceiveDragEnterOnDropLayer_Params params;
	params.dropLayer = dropLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragEnd
// (Native, Public)

void UBaseInventoryPanel::ReceiveDragEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragEnd");

	UBaseInventoryPanel_ReceiveDragEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragCanceled
// (Native, Public)

void UBaseInventoryPanel::ReceiveDragCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragCanceled");

	UBaseInventoryPanel_ReceiveDragCanceled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveDragBegin
// (Native, Public)

void UBaseInventoryPanel::ReceiveDragBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveDragBegin");

	UBaseInventoryPanel_ReceiveDragBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ReceiveButtonUpOnDropLayer
// (Native, Public)
// Parameters:
// class UDropLayerBase**         dropLayer                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ReceiveButtonUpOnDropLayer(class UDropLayerBase** dropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ReceiveButtonUpOnDropLayer");

	UBaseInventoryPanel_ReceiveButtonUpOnDropLayer_Params params;
	params.dropLayer = dropLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.BaseInventoryPanel.OnWantHideItemTooltip_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UBaseInventoryPanel::OnWantHideItemTooltip_DelegateSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.BaseInventoryPanel.OnWantHideItemTooltip_DelegateSignature__DelegateSignature");

	UBaseInventoryPanel_OnWantHideItemTooltip_DelegateSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.BaseInventoryPanel.OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBaseInventoryPanel::OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature(struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.BaseInventoryPanel.OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature");

	UBaseInventoryPanel_OnWantDisplayItemTooltip_DelegateSignature__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.OnModelsChanged
// (Native, Event, Public, BlueprintEvent)

void UBaseInventoryPanel::OnModelsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.OnModelsChanged");

	UBaseInventoryPanel_OnModelsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.InitVisual
// (Final, Native, Public, BlueprintCallable)

void UBaseInventoryPanel::InitVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.InitVisual");

	UBaseInventoryPanel_InitVisual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.InitUMGRefs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UDropLayerBase*>* InDropLayers                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UInventorySlotWidgetBase*>* InSlotArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPanelWidget**           InSlotContainer                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::InitUMGRefs(TArray<class UDropLayerBase*>* InDropLayers, TArray<class UInventorySlotWidgetBase*>* InSlotArray, class UPanelWidget** InSlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.InitUMGRefs");

	UBaseInventoryPanel_InitUMGRefs_Params params;
	params.InDropLayers = InDropLayers;
	params.InSlotArray = InSlotArray;
	params.InSlotContainer = InSlotContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ClearSlotLinkedToItemInWorld
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseInventoryPanel::ClearSlotLinkedToItemInWorld(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ClearSlotLinkedToItemInWorld");

	UBaseInventoryPanel_ClearSlotLinkedToItemInWorld_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ClearSlot
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    owningInventory                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ClearSlot(int* slotIndex, class UInventoryComponent** owningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ClearSlot");

	UBaseInventoryPanel_ClearSlot_Params params;
	params.slotIndex = slotIndex;
	params.owningInventory = owningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseInventoryPanel.ClearAllSlotsLinkedToInventory
// (Final, Native, Public)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseInventoryPanel::ClearAllSlotsLinkedToInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseInventoryPanel.ClearAllSlotsLinkedToInventory");

	UBaseInventoryPanel_ClearAllSlotsLinkedToInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseEquipmentPanel.SetModel_EquipmentHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEquipmentHandler**      EquipmentHandler               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBaseEquipmentPanel::SetModel_EquipmentHandler(class UEquipmentHandler** EquipmentHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseEquipmentPanel.SetModel_EquipmentHandler");

	UBaseEquipmentPanel_SetModel_EquipmentHandler_Params params;
	params.EquipmentHandler = EquipmentHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseEquipmentPanel.ReceiveEquippedWeaponChanged
// (Final, Native, Public)

void UBaseEquipmentPanel::ReceiveEquippedWeaponChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseEquipmentPanel.ReceiveEquippedWeaponChanged");

	UBaseEquipmentPanel_ReceiveEquippedWeaponChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseGameplayAbility.HasAuthority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBaseGameplayAbility::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseGameplayAbility.HasAuthority");

	UBaseGameplayAbility_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacter.UnCrawl
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::UnCrawl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.UnCrawl");

	ACustomCharacter_UnCrawl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.ReceiveAimModeChanged
// (Final, Native, Public)
// Parameters:
// bool*                          isAiming                       (Parm, ZeroConstructor, IsPlainOldData)

void ACustomCharacter::ReceiveAimModeChanged(bool* isAiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.ReceiveAimModeChanged");

	ACustomCharacter_ReceiveAimModeChanged_Params params;
	params.isAiming = isAiming;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.OnRep_IsSprinting
// (Native, Public)

void ACustomCharacter::OnRep_IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.OnRep_IsSprinting");

	ACustomCharacter_OnRep_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.OnRep_IsJogging
// (Native, Public)

void ACustomCharacter::OnRep_IsJogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.OnRep_IsJogging");

	ACustomCharacter_OnRep_IsJogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.OnRep_IsCrawling
// (Native, Public)

void ACustomCharacter::OnRep_IsCrawling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.OnRep_IsCrawling");

	ACustomCharacter_OnRep_IsCrawling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnStartSprint
// (Event, Public, BlueprintEvent)

void ACustomCharacter::K2_OnStartSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnStartSprint");

	ACustomCharacter_K2_OnStartSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnStartJog
// (Event, Public, BlueprintEvent)

void ACustomCharacter::K2_OnStartJog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnStartJog");

	ACustomCharacter_K2_OnStartJog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnStartCrawl
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HalfHeightAdjust               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaledHalfHeightAdjust         (Parm, ZeroConstructor, IsPlainOldData)

void ACustomCharacter::K2_OnStartCrawl(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnStartCrawl");

	ACustomCharacter_K2_OnStartCrawl_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnEndSprint
// (Event, Public, BlueprintEvent)

void ACustomCharacter::K2_OnEndSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnEndSprint");

	ACustomCharacter_K2_OnEndSprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnEndJog
// (Event, Public, BlueprintEvent)

void ACustomCharacter::K2_OnEndJog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnEndJog");

	ACustomCharacter_K2_OnEndJog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.K2_OnEndCrawl
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HalfHeightAdjust               (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaledHalfHeightAdjust         (Parm, ZeroConstructor, IsPlainOldData)

void ACustomCharacter::K2_OnEndCrawl(float* HalfHeightAdjust, float* ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.K2_OnEndCrawl");

	ACustomCharacter_K2_OnEndCrawl_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.EndSprint
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::EndSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.EndSprint");

	ACustomCharacter_EndSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.EndJog
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::EndJog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.EndJog");

	ACustomCharacter_EndJog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.Crawl
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::Crawl()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.Crawl");

	ACustomCharacter_Crawl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.BeginSprint
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::BeginSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.BeginSprint");

	ACustomCharacter_BeginSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CustomCharacter.BeginJog
// (Final, Native, Public, BlueprintCallable)

void ACustomCharacter::BeginJog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacter.BeginJog");

	ACustomCharacter_BeginJog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.TryInteract
// (Final, Native, Public)

void ABasePlayerCharacter::TryInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.TryInteract");

	ABasePlayerCharacter_TryInteract_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.ToggleCrouch
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerCharacter::ToggleCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.ToggleCrouch");

	ABasePlayerCharacter_ToggleCrouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.Server_ReceivePlayerMenuClosed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ABasePlayerCharacter::Server_ReceivePlayerMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.Server_ReceivePlayerMenuClosed");

	ABasePlayerCharacter_Server_ReceivePlayerMenuClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.Server_InteractWithSkillCrate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ASkillCrate**            SkillCrate                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerCharacter::Server_InteractWithSkillCrate(class ASkillCrate** SkillCrate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.Server_InteractWithSkillCrate");

	ABasePlayerCharacter_Server_InteractWithSkillCrate_Params params;
	params.SkillCrate = SkillCrate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.Server_InteractWithLootbox
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ALootbox**               Lootbox                        (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerCharacter::Server_InteractWithLootbox(class ALootbox** Lootbox)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.Server_InteractWithLootbox");

	ABasePlayerCharacter_Server_InteractWithLootbox_Params params;
	params.Lootbox = Lootbox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.Server_InteractWithDoor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AReplicatedDoor**        door                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          openRight                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerCharacter::Server_InteractWithDoor(class AReplicatedDoor** door, bool* openRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.Server_InteractWithDoor");

	ABasePlayerCharacter_Server_InteractWithDoor_Params params;
	params.door = door;
	params.openRight = openRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.PlayPawnDeathAnim
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageCauseInfo*       deathCauseInfo                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasePlayerCharacter::PlayPawnDeathAnim(struct FDamageCauseInfo* deathCauseInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.PlayPawnDeathAnim");

	ABasePlayerCharacter_PlayPawnDeathAnim_Params params;
	params.deathCauseInfo = deathCauseInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.BasePlayerCharacter.K2_HandlePawnDeath
// (Event, Public, BlueprintEvent)

void ABasePlayerCharacter::K2_HandlePawnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.K2_HandlePawnDeath");

	ABasePlayerCharacter_K2_HandlePawnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.InputEndSprint
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerCharacter::InputEndSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.InputEndSprint");

	ABasePlayerCharacter_InputEndSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.InputBeginSprint
// (Final, Native, Public, BlueprintCallable)

void ABasePlayerCharacter::InputBeginSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.InputBeginSprint");

	ABasePlayerCharacter_InputBeginSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.HandlePawnDeath
// (Final, Native, Public)

void ABasePlayerCharacter::HandlePawnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.HandlePawnDeath");

	ABasePlayerCharacter_HandlePawnDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.EnableRagdoll
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          applyImpulse                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          impulseAsVelocityChange        (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerCharacter::EnableRagdoll(bool* applyImpulse, struct FVector* Impulse, bool* impulseAsVelocityChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.EnableRagdoll");

	ABasePlayerCharacter_EnableRagdoll_Params params;
	params.applyImpulse = applyImpulse;
	params.Impulse = Impulse;
	params.impulseAsVelocityChange = impulseAsVelocityChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.Client_HandlePawnDeath
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FDamageCauseInfo*       damageCause                    (Parm)

void ABasePlayerCharacter::Client_HandlePawnDeath(struct FDamageCauseInfo* damageCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.Client_HandlePawnDeath");

	ABasePlayerCharacter_Client_HandlePawnDeath_Params params;
	params.damageCause = damageCause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.ApplyCosmetics_CharacterModel
// (Final, Native, Private)

void ABasePlayerCharacter::ApplyCosmetics_CharacterModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.ApplyCosmetics_CharacterModel");

	ABasePlayerCharacter_ApplyCosmetics_CharacterModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerCharacter.ApplyCosmetics_Backpack
// (Final, Native, Private)

void ABasePlayerCharacter::ApplyCosmetics_Backpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerCharacter.ApplyCosmetics_Backpack");

	ABasePlayerCharacter_ApplyCosmetics_Backpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.SetInputModeForPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void ABasePlayerController::SetInputModeForPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.SetInputModeForPlaying");

	ABasePlayerController_SetInputModeForPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.SetInputModeForMenuOpen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void ABasePlayerController::SetInputModeForMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.SetInputModeForMenuOpen");

	ABasePlayerController_SetInputModeForMenuOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Server_RemovePlayerFromSelectedZone
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ABasePlayerController::Server_RemovePlayerFromSelectedZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Server_RemovePlayerFromSelectedZone");

	ABasePlayerController_Server_RemovePlayerFromSelectedZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Server_ReceiveLobbyLoaded
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void ABasePlayerController::Server_ReceiveLobbyLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Server_ReceiveLobbyLoaded");

	ABasePlayerController_Server_ReceiveLobbyLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Server_PingClientConnection
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ABasePlayerController::Server_PingClientConnection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Server_PingClientConnection");

	ABasePlayerController_Server_PingClientConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Server_MakePlayerReturnToMainMenu
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void ABasePlayerController::Server_MakePlayerReturnToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Server_MakePlayerReturnToMainMenu");

	ABasePlayerController_Server_MakePlayerReturnToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Server_AddPlayerToZone
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int*                           zoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::Server_AddPlayerToZone(int* zoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Server_AddPlayerToZone");

	ABasePlayerController_Server_AddPlayerToZone_Params params;
	params.zoneIndex = zoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ReceivePlayerMenuClosed
// (Final, Native, Public)

void ABasePlayerController::ReceivePlayerMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ReceivePlayerMenuClosed");

	ABasePlayerController_ReceivePlayerMenuClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ReceiveLobbyLoaded
// (Final, Native, Private)

void ABasePlayerController::ReceiveLobbyLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ReceiveLobbyLoaded");

	ABasePlayerController_ReceiveLobbyLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ReceiveGamePhaseChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EGamePhase*                    previousGamePhase              (Parm, ZeroConstructor, IsPlainOldData)
// EGamePhase*                    newGamePhase                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::ReceiveGamePhaseChanged(EGamePhase* previousGamePhase, EGamePhase* newGamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ReceiveGamePhaseChanged");

	ABasePlayerController_ReceiveGamePhaseChanged_Params params;
	params.previousGamePhase = previousGamePhase;
	params.newGamePhase = newGamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.OnRep_LocalPlayerGamePhase
// (Final, Native, Public)

void ABasePlayerController::OnRep_LocalPlayerGamePhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.OnRep_LocalPlayerGamePhase");

	ABasePlayerController_OnRep_LocalPlayerGamePhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.BasePlayerController.OnKillCountChanged_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int*                           KillCount                      (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::OnKillCountChanged_DelegateSignature__DelegateSignature(int* KillCount)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.BasePlayerController.OnKillCountChanged_DelegateSignature__DelegateSignature");

	ABasePlayerController_OnKillCountChanged_DelegateSignature__DelegateSignature_Params params;
	params.KillCount = KillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.K2_HandlePlayerDeath
// (Event, Public, BlueprintEvent)

void ABasePlayerController::K2_HandlePlayerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.K2_HandlePlayerDeath");

	ABasePlayerController_K2_HandlePlayerDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.HandlePlayerDeath
// (Native, Public, HasOutParms)
// Parameters:
// struct FDamageCauseInfo*       lastDamageCause                (ConstParm, Parm, OutParm, ReferenceParm)

void ABasePlayerController::HandlePlayerDeath(struct FDamageCauseInfo* lastDamageCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.HandlePlayerDeath");

	ABasePlayerController_HandlePlayerDeath_Params params;
	params.lastDamageCause = lastDamageCause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.HandlePawnSetOnClient
// (Native, Event, Public, BlueprintEvent)

void ABasePlayerController::HandlePawnSetOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.HandlePawnSetOnClient");

	ABasePlayerController_HandlePawnSetOnClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ClientTeleportInitiateWithFailOnServerSide
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FString*                playerName                     (Parm, ZeroConstructor)
// struct FString*                playerStartName                (Parm, ZeroConstructor)
// struct FVector*                playerStartLocation            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABasePlayerController::ClientTeleportInitiateWithFailOnServerSide(struct FString* playerName, struct FString* playerStartName, struct FVector* playerStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ClientTeleportInitiateWithFailOnServerSide");

	ABasePlayerController_ClientTeleportInitiateWithFailOnServerSide_Params params;
	params.playerName = playerName;
	params.playerStartName = playerStartName;
	params.playerStartLocation = playerStartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ClientTeleportInitiateFuccessfullyOnServerSide
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString*                playerName                     (Parm, ZeroConstructor)

void ABasePlayerController::ClientTeleportInitiateFuccessfullyOnServerSide(struct FString* playerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ClientTeleportInitiateFuccessfullyOnServerSide");

	ABasePlayerController_ClientTeleportInitiateFuccessfullyOnServerSide_Params params;
	params.playerName = playerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ClientReturnToMainMenuWithMatchData
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FPlayerMatchData*       InMatchData                    (ConstParm, Parm, ReferenceParm)

void ABasePlayerController::ClientReturnToMainMenuWithMatchData(struct FPlayerMatchData* InMatchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ClientReturnToMainMenuWithMatchData");

	ABasePlayerController_ClientReturnToMainMenuWithMatchData_Params params;
	params.InMatchData = InMatchData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.ClientDisplayErrorLog
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString*                errorText                      (Parm, ZeroConstructor)

void ABasePlayerController::ClientDisplayErrorLog(struct FString* errorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.ClientDisplayErrorLog");

	ABasePlayerController_ClientDisplayErrorLog_Params params;
	params.errorText = errorText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.Client_DisplayHasKilledSomeoneMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class ABasePlayerState**       killedPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void ABasePlayerController::Client_DisplayHasKilledSomeoneMessage(class ABasePlayerState** killedPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.Client_DisplayHasKilledSomeoneMessage");

	ABasePlayerController_Client_DisplayHasKilledSomeoneMessage_Params params;
	params.killedPlayerState = killedPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerController.CheckClientConnectionValidity
// (Final, Native, Public)

void ABasePlayerController::CheckClientConnectionValidity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerController.CheckClientConnectionValidity");

	ABasePlayerController_CheckClientConnectionValidity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.ReceiveOnEquippedWeaponSkinsSetDelegate
// (Final, Native, Public)

void ABasePlayerState::ReceiveOnEquippedWeaponSkinsSetDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.ReceiveOnEquippedWeaponSkinsSetDelegate");

	ABasePlayerState_ReceiveOnEquippedWeaponSkinsSetDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.ReceiveOnEquippedPlayerIconSetDelegate
// (Final, Native, Public)

void ABasePlayerState::ReceiveOnEquippedPlayerIconSetDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.ReceiveOnEquippedPlayerIconSetDelegate");

	ABasePlayerState_ReceiveOnEquippedPlayerIconSetDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.ReceiveOnEquippedCharacterModelSetDelegate
// (Final, Native, Public)

void ABasePlayerState::ReceiveOnEquippedCharacterModelSetDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.ReceiveOnEquippedCharacterModelSetDelegate");

	ABasePlayerState_ReceiveOnEquippedCharacterModelSetDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.ReceiveOnEquippedBackpackSetDelegate
// (Final, Native, Public)

void ABasePlayerState::ReceiveOnEquippedBackpackSetDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.ReceiveOnEquippedBackpackSetDelegate");

	ABasePlayerState_ReceiveOnEquippedBackpackSetDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.OnRep_SpawnZoneIndex
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           PreviousSpawnZoneIndex         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABasePlayerState::OnRep_SpawnZoneIndex(int* PreviousSpawnZoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.OnRep_SpawnZoneIndex");

	ABasePlayerState_OnRep_SpawnZoneIndex_Params params;
	params.PreviousSpawnZoneIndex = PreviousSpawnZoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.OnRep_Killer
// (Final, Native, Public)

void ABasePlayerState::OnRep_Killer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.OnRep_Killer");

	ABasePlayerState_OnRep_Killer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.OnRep_KillCount
// (Final, Native, Public)

void ABasePlayerState::OnRep_KillCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.OnRep_KillCount");

	ABasePlayerState_OnRep_KillCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.OnRep_DeathPlacement
// (Final, Native, Public)

void ABasePlayerState::OnRep_DeathPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.OnRep_DeathPlacement");

	ABasePlayerState_OnRep_DeathPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.InitDataFromBackend
// (Final, Native, Public)

void ABasePlayerState::InitDataFromBackend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.InitDataFromBackend");

	ABasePlayerState_InitDataFromBackend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BasePlayerState.GetWeaponSkinBackendInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWeaponSkinBackendInfo  outWeaponSkinBackendInfo       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasePlayerState::GetWeaponSkinBackendInfo(struct FName* weaponName, struct FWeaponSkinBackendInfo* outWeaponSkinBackendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.GetWeaponSkinBackendInfo");

	ABasePlayerState_GetWeaponSkinBackendInfo_Params params;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outWeaponSkinBackendInfo != nullptr)
		*outWeaponSkinBackendInfo = params.outWeaponSkinBackendInfo;

	return params.ReturnValue;
}


// Function Anarea.BasePlayerState.GetPlayerIconBackendInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPlayerIconBackendInfo  outPlayerIconInfo              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasePlayerState::GetPlayerIconBackendInfo(struct FPlayerIconBackendInfo* outPlayerIconInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.GetPlayerIconBackendInfo");

	ABasePlayerState_GetPlayerIconBackendInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outPlayerIconInfo != nullptr)
		*outPlayerIconInfo = params.outPlayerIconInfo;

	return params.ReturnValue;
}


// Function Anarea.BasePlayerState.GetKiller
// (Final, Native, Public, Const)
// Parameters:
// class ABasePlayerState*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABasePlayerState* ABasePlayerState::GetKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.GetKiller");

	ABasePlayerState_GetKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.BasePlayerState.GetCharacterModelBackendInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FCharacterModelBackendInfo outCharacterModelInfo          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasePlayerState::GetCharacterModelBackendInfo(struct FCharacterModelBackendInfo* outCharacterModelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.GetCharacterModelBackendInfo");

	ABasePlayerState_GetCharacterModelBackendInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCharacterModelInfo != nullptr)
		*outCharacterModelInfo = params.outCharacterModelInfo;

	return params.ReturnValue;
}


// Function Anarea.BasePlayerState.GetBackpackBackendInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBackpackBackendInfo    outBackpackInfo                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABasePlayerState::GetBackpackBackendInfo(struct FBackpackBackendInfo* outBackpackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BasePlayerState.GetBackpackBackendInfo");

	ABasePlayerState_GetBackpackBackendInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackpackInfo != nullptr)
		*outBackpackInfo = params.outBackpackInfo;

	return params.ReturnValue;
}


// Function Anarea.BaseSpectatorPawn.SpectatePreviousPlayer
// (Final, Native, Public, BlueprintCallable)

void ABaseSpectatorPawn::SpectatePreviousPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseSpectatorPawn.SpectatePreviousPlayer");

	ABaseSpectatorPawn_SpectatePreviousPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseSpectatorPawn.SpectateNextPlayer
// (Final, Native, Public, BlueprintCallable)

void ABaseSpectatorPawn::SpectateNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseSpectatorPawn.SpectateNextPlayer");

	ABaseSpectatorPawn_SpectateNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BaseSpectatorPawn.FindPlayerToSpectate
// (Final, Native, Public)

void ABaseSpectatorPawn::FindPlayerToSpectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BaseSpectatorPawn.FindPlayerToSpectate");

	ABaseSpectatorPawn_FindPlayerToSpectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BulletInfo.OnRep_DefaultInstanceInfo
// (Final, Native, Public)

void UBulletInfo::OnRep_DefaultInstanceInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BulletInfo.OnRep_DefaultInstanceInfo");

	UBulletInfo_OnRep_DefaultInstanceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BulletHandler.Server_HandleHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// class UBulletInfo**            bulletInfoObj                  (Parm, ZeroConstructor, IsPlainOldData)

void UBulletHandler::Server_HandleHit(struct FHitResult* HitResult, class UBulletInfo** bulletInfoObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BulletHandler.Server_HandleHit");

	UBulletHandler_Server_HandleHit_Params params;
	params.HitResult = HitResult;
	params.bulletInfoObj = bulletInfoObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.BulletHandler.Multicast_PlayHitFX
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector*                ImpactPoint                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactNormal                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* surfaceType                    (Parm, ZeroConstructor, IsPlainOldData)

void UBulletHandler::Multicast_PlayHitFX(struct FVector* ImpactPoint, struct FVector* ImpactNormal, TEnumAsByte<EPhysicalSurface>* surfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.BulletHandler.Multicast_PlayHitFX");

	UBulletHandler_Multicast_PlayHitFX_Params params;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;
	params.surfaceType = surfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CleanLightingBlueprintLib.FixLightingIDs
// (Final, Native, Static, Public, BlueprintCallable)

void UCleanLightingBlueprintLib::STATIC_FixLightingIDs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CleanLightingBlueprintLib.FixLightingIDs");

	UCleanLightingBlueprintLib_FixLightingIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CompassAgent.IsMovable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCompassAgent::IsMovable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CompassAgent.IsMovable");

	UCompassAgent_IsMovable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CompassAgent.GetWorldLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UCompassAgent::GetWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CompassAgent.GetWorldLocation");

	UCompassAgent_GetWorldLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CompassAgent.GetAgentType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECompassAgentType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECompassAgentType UCompassAgent::GetAgentType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CompassAgent.GetAgentType");

	UCompassAgent_GetAgentType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CompassComponent.UnregisterAgent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UCompassAgent>* Agent                          (Parm, ZeroConstructor, IsPlainOldData)

void UCompassComponent::UnregisterAgent(TScriptInterface<class UCompassAgent>* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CompassComponent.UnregisterAgent");

	UCompassComponent_UnregisterAgent_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CompassComponent.RegisterAgent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UCompassAgent>* Agent                          (Parm, ZeroConstructor, IsPlainOldData)

void UCompassComponent::RegisterAgent(TScriptInterface<class UCompassAgent>* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CompassComponent.RegisterAgent");

	UCompassComponent_RegisterAgent_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ConsumableItemDataAsset.GetActivationEffectAndAbilityClasses
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  outGameplayEffectClass         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  outGameplayAbilityClass        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outWaitTimeBeforeFirstApplication (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UConsumableItemDataAsset::GetActivationEffectAndAbilityClasses(class UObject** WorldContextObject, struct FItemKey* ItemKey, class UClass** outGameplayEffectClass, class UClass** outGameplayAbilityClass, float* outWaitTimeBeforeFirstApplication)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ConsumableItemDataAsset.GetActivationEffectAndAbilityClasses");

	UConsumableItemDataAsset_GetActivationEffectAndAbilityClasses_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outGameplayEffectClass != nullptr)
		*outGameplayEffectClass = params.outGameplayEffectClass;
	if (outGameplayAbilityClass != nullptr)
		*outGameplayAbilityClass = params.outGameplayAbilityClass;
	if (outWaitTimeBeforeFirstApplication != nullptr)
		*outWaitTimeBeforeFirstApplication = params.outWaitTimeBeforeFirstApplication;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.RetryInitData
// (Final, Native, Protected)

void UCosmeticsManagerInGame::RetryInitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.RetryInitData");

	UCosmeticsManagerInGame_RetryInitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedWeaponSkins
// (Final, Native, Public)

void UCosmeticsManagerInGame::OnRep_ReplicatedEquippedWeaponSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedWeaponSkins");

	UCosmeticsManagerInGame_OnRep_ReplicatedEquippedWeaponSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedPlayerIcon
// (Final, Native, Public)

void UCosmeticsManagerInGame::OnRep_ReplicatedEquippedPlayerIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedPlayerIcon");

	UCosmeticsManagerInGame_OnRep_ReplicatedEquippedPlayerIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedCharacterModel
// (Final, Native, Public)

void UCosmeticsManagerInGame::OnRep_ReplicatedEquippedCharacterModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedCharacterModel");

	UCosmeticsManagerInGame_OnRep_ReplicatedEquippedCharacterModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedBackpack
// (Final, Native, Public)

void UCosmeticsManagerInGame::OnRep_ReplicatedEquippedBackpack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.OnRep_ReplicatedEquippedBackpack");

	UCosmeticsManagerInGame_OnRep_ReplicatedEquippedBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.IsSkinUnlockedForWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsSkinUnlockedForWeapon(struct FName* weaponName, struct FName* skinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsSkinUnlockedForWeapon");

	UCosmeticsManagerInGame_IsSkinUnlockedForWeapon_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsSkinEquippedOnWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsSkinEquippedOnWeapon(struct FName* weaponName, struct FName* skinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsSkinEquippedOnWeapon");

	UCosmeticsManagerInGame_IsSkinEquippedOnWeapon_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsPlayerIconUnlocked
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  playerIconName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsPlayerIconUnlocked(struct FName* playerIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsPlayerIconUnlocked");

	UCosmeticsManagerInGame_IsPlayerIconUnlocked_Params params;
	params.playerIconName = playerIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsPlayerIconEquipped
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  playerIconName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsPlayerIconEquipped(struct FName* playerIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsPlayerIconEquipped");

	UCosmeticsManagerInGame_IsPlayerIconEquipped_Params params;
	params.playerIconName = playerIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsCharacterModelUnlocked
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  characterModelName             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsCharacterModelUnlocked(struct FName* characterModelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsCharacterModelUnlocked");

	UCosmeticsManagerInGame_IsCharacterModelUnlocked_Params params;
	params.characterModelName = characterModelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsCharacterModelEquipped
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  characterModelName             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsCharacterModelEquipped(struct FName* characterModelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsCharacterModelEquipped");

	UCosmeticsManagerInGame_IsCharacterModelEquipped_Params params;
	params.characterModelName = characterModelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsBackpackUnlocked
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  backpackName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsBackpackUnlocked(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsBackpackUnlocked");

	UCosmeticsManagerInGame_IsBackpackUnlocked_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.IsBackpackEquipped
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  backpackName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::IsBackpackEquipped(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.IsBackpackEquipped");

	UCosmeticsManagerInGame_IsBackpackEquipped_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.InitData
// (Final, Native, Protected, BlueprintCallable)

void UCosmeticsManagerInGame::InitData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.InitData");

	UCosmeticsManagerInGame_InitData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInGame.GetWeaponSkinBackendInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWeaponSkinBackendInfo  outBackendInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetWeaponSkinBackendInfo(struct FName* weaponName, struct FName* skinName, struct FWeaponSkinBackendInfo* outBackendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetWeaponSkinBackendInfo");

	UCosmeticsManagerInGame_GetWeaponSkinBackendInfo_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackendInfo != nullptr)
		*outBackendInfo = params.outBackendInfo;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetPlayerIconBackendInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  playerIconName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FPlayerIconBackendInfo  outBackendInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetPlayerIconBackendInfo(struct FName* playerIconName, struct FPlayerIconBackendInfo* outBackendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetPlayerIconBackendInfo");

	UCosmeticsManagerInGame_GetPlayerIconBackendInfo_Params params;
	params.playerIconName = playerIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackendInfo != nullptr)
		*outBackendInfo = params.outBackendInfo;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetEquippedSkinForWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   outSkinName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetEquippedSkinForWeapon(struct FName* weaponName, struct FName* outSkinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetEquippedSkinForWeapon");

	UCosmeticsManagerInGame_GetEquippedSkinForWeapon_Params params;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outSkinName != nullptr)
		*outSkinName = params.outSkinName;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetEquippedPlayerIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   outPlayerIconName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetEquippedPlayerIcon(struct FName* outPlayerIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetEquippedPlayerIcon");

	UCosmeticsManagerInGame_GetEquippedPlayerIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outPlayerIconName != nullptr)
		*outPlayerIconName = params.outPlayerIconName;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetEquippedCharacterModel
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   outCharacterModelName          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetEquippedCharacterModel(struct FName* outCharacterModelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetEquippedCharacterModel");

	UCosmeticsManagerInGame_GetEquippedCharacterModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCharacterModelName != nullptr)
		*outCharacterModelName = params.outCharacterModelName;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetEquippedBackpack
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   outBackpackName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetEquippedBackpack(struct FName* outBackpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetEquippedBackpack");

	UCosmeticsManagerInGame_GetEquippedBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackpackName != nullptr)
		*outBackpackName = params.outBackpackName;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetCharacterModelBackendInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  characterModelName             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCharacterModelBackendInfo outBackendInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetCharacterModelBackendInfo(struct FName* characterModelName, struct FCharacterModelBackendInfo* outBackendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetCharacterModelBackendInfo");

	UCosmeticsManagerInGame_GetCharacterModelBackendInfo_Params params;
	params.characterModelName = characterModelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackendInfo != nullptr)
		*outBackendInfo = params.outBackendInfo;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.GetBackpackBackendInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  backpackName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBackpackBackendInfo    outBackendInfo                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInGame::GetBackpackBackendInfo(struct FName* backpackName, struct FBackpackBackendInfo* outBackendInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.GetBackpackBackendInfo");

	UCosmeticsManagerInGame_GetBackpackBackendInfo_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outBackendInfo != nullptr)
		*outBackendInfo = params.outBackendInfo;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInGame.FinishDataInitializationAfterUnlockedItemReceived
// (Final, Native, Protected)

void UCosmeticsManagerInGame::FinishDataInitializationAfterUnlockedItemReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInGame.FinishDataInitializationAfterUnlockedItemReceived");

	UCosmeticsManagerInGame_FinishDataInitializationAfterUnlockedItemReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInMenus.TryEquipSkinOnWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCosmeticsManagerInMenus::TryEquipSkinOnWeapon(struct FName* weaponName, struct FName* skinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.TryEquipSkinOnWeapon");

	UCosmeticsManagerInMenus_TryEquipSkinOnWeapon_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInMenus.TryEquipPlayerIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  playerIconName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCosmeticsManagerInMenus::TryEquipPlayerIcon(struct FName* playerIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.TryEquipPlayerIcon");

	UCosmeticsManagerInMenus_TryEquipPlayerIcon_Params params;
	params.playerIconName = playerIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInMenus.TryEquipCharacterModel
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  characterModelName             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCosmeticsManagerInMenus::TryEquipCharacterModel(struct FName* characterModelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.TryEquipCharacterModel");

	UCosmeticsManagerInMenus_TryEquipCharacterModel_Params params;
	params.characterModelName = characterModelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInMenus.TryEquipBackpack
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  backpackName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCosmeticsManagerInMenus::TryEquipBackpack(struct FName* backpackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.TryEquipBackpack");

	UCosmeticsManagerInMenus_TryEquipBackpack_Params params;
	params.backpackName = backpackName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.CosmeticsManagerInMenus.IsSkinValidForWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  skinName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInMenus::IsSkinValidForWeapon(struct FName* weaponName, struct FName* skinName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.IsSkinValidForWeapon");

	UCosmeticsManagerInMenus_IsSkinValidForWeapon_Params params;
	params.weaponName = weaponName;
	params.skinName = skinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInMenus.GetAllWeaponSkinsForWeapon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  weaponName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FName>           outWeaponSkins                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCosmeticsManagerInMenus::GetAllWeaponSkinsForWeapon(struct FName* weaponName, TArray<struct FName>* outWeaponSkins)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.GetAllWeaponSkinsForWeapon");

	UCosmeticsManagerInMenus_GetAllWeaponSkinsForWeapon_Params params;
	params.weaponName = weaponName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outWeaponSkins != nullptr)
		*outWeaponSkins = params.outWeaponSkins;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInMenus.GetAllPlayerIcons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UCosmeticsManagerInMenus::GetAllPlayerIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.GetAllPlayerIcons");

	UCosmeticsManagerInMenus_GetAllPlayerIcons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInMenus.GetAllCharacterModels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UCosmeticsManagerInMenus::GetAllCharacterModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.GetAllCharacterModels");

	UCosmeticsManagerInMenus_GetAllCharacterModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CosmeticsManagerInMenus.GetAllBackpacks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FName> UCosmeticsManagerInMenus::GetAllBackpacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CosmeticsManagerInMenus.GetAllBackpacks");

	UCosmeticsManagerInMenus_GetAllBackpacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsStrafing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsStrafing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsStrafing");

	UCustomCharacterMovementComponent_IsStrafing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsSprinting
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsSprinting");

	UCustomCharacterMovementComponent_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsMovingForward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsMovingForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsMovingForward");

	UCustomCharacterMovementComponent_IsMovingForward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsMovingBackward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsMovingBackward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsMovingBackward");

	UCustomCharacterMovementComponent_IsMovingBackward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsJogging
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsJogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsJogging");

	UCustomCharacterMovementComponent_IsJogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.IsCrawling
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomCharacterMovementComponent::IsCrawling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.IsCrawling");

	UCustomCharacterMovementComponent_IsCrawling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.CustomCharacterMovementComponent.GetCurrentSpeedClamped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCustomCharacterMovementComponent::GetCurrentSpeedClamped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.CustomCharacterMovementComponent.GetCurrentSpeedClamped");

	UCustomCharacterMovementComponent_GetCurrentSpeedClamped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.DebugInfoWidget.BPE_OnTextColorChanged
// (Event, Public, BlueprintEvent)

void UDebugInfoWidget::BPE_OnTextColorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.DebugInfoWidget.BPE_OnTextColorChanged");

	UDebugInfoWidget_BPE_OnTextColorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.DebugInfoWidget.BPE_OnTextChanged
// (Event, Public, BlueprintEvent)

void UDebugInfoWidget::BPE_OnTextChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.DebugInfoWidget.BPE_OnTextChanged");

	UDebugInfoWidget_BPE_OnTextChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.DropLayerBase.SetHighlightColor
// (Final, Native, Public)
// Parameters:
// bool*                          valid                          (Parm, ZeroConstructor, IsPlainOldData)

void UDropLayerBase::SetHighlightColor(bool* valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.DropLayerBase.SetHighlightColor");

	UDropLayerBase_SetHighlightColor_Params params;
	params.valid = valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.DropLayerBase.OnMouseLeave_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDropLayerBase**         selfDropLayer                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropLayerBase::OnMouseLeave_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.DropLayerBase.OnMouseLeave_DelegateSignature__DelegateSignature");

	UDropLayerBase_OnMouseLeave_DelegateSignature__DelegateSignature_Params params;
	params.selfDropLayer = selfDropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.DropLayerBase.OnMouseEnter_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDropLayerBase**         selfDropLayer                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropLayerBase::OnMouseEnter_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.DropLayerBase.OnMouseEnter_DelegateSignature__DelegateSignature");

	UDropLayerBase_OnMouseEnter_DelegateSignature__DelegateSignature_Params params;
	params.selfDropLayer = selfDropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.DropLayerBase.OnMouseButtonUp_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UDropLayerBase**         selfDropLayer                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropLayerBase::OnMouseButtonUp_DelegateSignature__DelegateSignature(class UDropLayerBase** selfDropLayer)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.DropLayerBase.OnMouseButtonUp_DelegateSignature__DelegateSignature");

	UDropLayerBase_OnMouseButtonUp_DelegateSignature__DelegateSignature_Params params;
	params.selfDropLayer = selfDropLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.DropLayerBase.ClearHighlightColor
// (Final, Native, Public)

void UDropLayerBase::ClearHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.DropLayerBase.ClearHighlightColor");

	UDropLayerBase_ClearHighlightColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EndMatchMenu.SetModels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAnareaGameStateBase**   GameState                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABasePlayerState**       PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UEndMatchMenu::SetModels(class AAnareaGameStateBase** GameState, class ABasePlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EndMatchMenu.SetModels");

	UEndMatchMenu_SetModels_Params params;
	params.GameState = GameState;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EndMatchMenu.ReceiveWinnerSelected
// (Final, Native, Protected)
// Parameters:
// int*                           winnerID                       (Parm, ZeroConstructor, IsPlainOldData)

void UEndMatchMenu::ReceiveWinnerSelected(int* winnerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EndMatchMenu.ReceiveWinnerSelected");

	UEndMatchMenu_ReceiveWinnerSelected_Params params;
	params.winnerID = winnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EndMatchMenu.OnModelsChanged
// (Native, Event, Public, BlueprintEvent)

void UEndMatchMenu::OnModelsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EndMatchMenu.OnModelsChanged");

	UEndMatchMenu_OnModelsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EndMatchMenu.DisplayWinPanel
// (Event, Public, BlueprintEvent)

void UEndMatchMenu::DisplayWinPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EndMatchMenu.DisplayWinPanel");

	UEndMatchMenu_DisplayWinPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EndMatchMenu.DisplayDefeatPanel
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABasePlayerState**       PlayerState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UEndMatchMenu::DisplayDefeatPanel(class ABasePlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EndMatchMenu.DisplayDefeatPanel");

	UEndMatchMenu_DisplayDefeatPanel_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Equipment.TryLaunchAnimationByTag
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag*           Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEquipment::TryLaunchAnimationByTag(struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Equipment.TryLaunchAnimationByTag");

	AEquipment_TryLaunchAnimationByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Equipment.HasEquipmentFlags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EEquipmentFlags*               Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AEquipment::HasEquipmentFlags(EEquipmentFlags* Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Equipment.HasEquipmentFlags");

	AEquipment_HasEquipmentFlags_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.SpawnAndHolsterWeapon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           optionalIndexInInventory       (Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeapon* UEquipmentHandler::SpawnAndHolsterWeapon(class UClass** WeaponClass, int* optionalIndexInInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.SpawnAndHolsterWeapon");

	UEquipmentHandler_SpawnAndHolsterWeapon_Params params;
	params.WeaponClass = WeaponClass;
	params.optionalIndexInInventory = optionalIndexInInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnSlotModified
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEquipmentHandler::ReceiveEquipmentInventoryOnSlotModified(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnSlotModified");

	UEquipmentHandler_ReceiveEquipmentInventoryOnSlotModified_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnBeforeSlotRemoved
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEquipmentHandler::ReceiveEquipmentInventoryOnBeforeSlotRemoved(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.ReceiveEquipmentInventoryOnBeforeSlotRemoved");

	UEquipmentHandler_ReceiveEquipmentInventoryOnBeforeSlotRemoved_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.ReceiveAnimNotify
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayTag*           feedbackTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentHandler::ReceiveAnimNotify(struct FGameplayTag* feedbackTags, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.ReceiveAnimNotify");

	UEquipmentHandler_ReceiveAnimNotify_Params params;
	params.feedbackTags = feedbackTags;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.OnRep_EquippedWeapon
// (Final, Native, Public)
// Parameters:
// class AWeapon**                lastWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentHandler::OnRep_EquippedWeapon(class AWeapon** lastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.OnRep_EquippedWeapon");

	UEquipmentHandler_OnRep_EquippedWeapon_Params params;
	params.lastWeapon = lastWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSetDetail
// (Final, Native, Public)

void UEquipmentHandler::OnRep_CurrentWeaponSetDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSetDetail");

	UEquipmentHandler_OnRep_CurrentWeaponSetDetail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSet
// (Final, Native, Public)

void UEquipmentHandler::OnRep_CurrentWeaponSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.OnRep_CurrentWeaponSet");

	UEquipmentHandler_OnRep_CurrentWeaponSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.IsLinkedToInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEquipmentHandler::IsLinkedToInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.IsLinkedToInventory");

	UEquipmentHandler_IsLinkedToInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.HolsterCurrentWeapon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UEquipmentHandler::HolsterCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.HolsterCurrentWeapon");

	UEquipmentHandler_HolsterCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.HolsterAndDestroyWeapon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AWeapon**                Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentHandler::HolsterAndDestroyWeapon(class AWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.HolsterAndDestroyWeapon");

	UEquipmentHandler_HolsterAndDestroyWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.HasWeaponEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEquipmentHandler::HasWeaponEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.HasWeaponEquipped");

	UEquipmentHandler_HasWeaponEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.HasProjectileInInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEquipmentHandler::HasProjectileInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.HasProjectileInInventory");

	UEquipmentHandler_HasProjectileInInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.HandleCurrentWeaponAmmoCountModified
// (Final, Native, Public)

void UEquipmentHandler::HandleCurrentWeaponAmmoCountModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.HandleCurrentWeaponAmmoCountModified");

	UEquipmentHandler_HandleCurrentWeaponAmmoCountModified_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.GrabWeaponInInventory
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentHandler::GrabWeaponInInventory(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.GrabWeaponInInventory");

	UEquipmentHandler_GrabWeaponInInventory_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.GrabWeapon
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass**                 WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UEquipmentHandler::GrabWeapon(class UClass** WeaponClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.GrabWeapon");

	UEquipmentHandler_GrabWeapon_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.EquipmentHandler.GetWeaponInSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UEquipmentHandler::GetWeaponInSlot(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.GetWeaponInSlot");

	UEquipmentHandler_GetWeaponInSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.GetEquippedWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AWeapon*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWeapon* UEquipmentHandler::GetEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.GetEquippedWeapon");

	UEquipmentHandler_GetEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.EquipmentHandler.DoesEquippedWeaponHaveFlags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EEquipmentFlags*               Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEquipmentHandler::DoesEquippedWeaponHaveFlags(EEquipmentFlags* Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.EquipmentHandler.DoesEquippedWeaponHaveFlags");

	UEquipmentHandler_DoesEquippedWeaponHaveFlags_Params params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.GrenadeItemDataAsset.GetWeaponClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGrenadeItemDataAsset::GetWeaponClass(class UObject** WorldContextObject, struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.GrenadeItemDataAsset.GetWeaponClass");

	UGrenadeItemDataAsset_GetWeaponClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Weapon.ServerChangeWeaponSkin
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AWeapon::ServerChangeWeaponSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.ServerChangeWeaponSkin");

	AWeapon_ServerChangeWeaponSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Weapon.ReceiveWeaponSkinChanged
// (Event, Public, BlueprintEvent)

void AWeapon::ReceiveWeaponSkinChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.ReceiveWeaponSkinChanged");

	AWeapon_ReceiveWeaponSkinChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Weapon.OnRep_WeaponSkin
// (Final, Native, Public)

void AWeapon::OnRep_WeaponSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.OnRep_WeaponSkin");

	AWeapon_OnRep_WeaponSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Weapon.GetSocketRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AWeapon::GetSocketRotation(struct FName* SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.GetSocketRotation");

	AWeapon_GetSocketRotation_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Weapon.GetSocketLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapon::GetSocketLocation(struct FName* SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.GetSocketLocation");

	AWeapon_GetSocketLocation_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Weapon.GetLeftHandGripWorldLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AWeapon::GetLeftHandGripWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.GetLeftHandGripWorldLocation");

	AWeapon_GetLeftHandGripWorldLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Weapon.CanBeUsed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon::CanBeUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.CanBeUsed");

	AWeapon_CanBeUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Weapon.BP_ReceiveAnimNotify
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)

void AWeapon::BP_ReceiveAnimNotify(struct FGameplayTag* GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.BP_ReceiveAnimNotify");

	AWeapon_BP_ReceiveAnimNotify_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Weapon.ApplyCosmetics_WeaponSkin
// (Final, Native, Public)

void AWeapon::ApplyCosmetics_WeaponSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Weapon.ApplyCosmetics_WeaponSkin");

	AWeapon_ApplyCosmetics_WeaponSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.GrenadeWeapon.LaunchProjectile
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGrenadeWeapon::LaunchProjectile(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.GrenadeWeapon.LaunchProjectile");

	AGrenadeWeapon_LaunchProjectile_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.GrenadeProjectile.Multicast_PlayExplosionFX
// (Net, Native, Event, NetMulticast, Public)

void AGrenadeProjectile::Multicast_PlayExplosionFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.GrenadeProjectile.Multicast_PlayExplosionFX");

	AGrenadeProjectile_Multicast_PlayExplosionFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.FlashGrenadeProjectile.UpdateFlashPostProcessAnim
// (Final, Native, Protected)

void AFlashGrenadeProjectile::UpdateFlashPostProcessAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.FlashGrenadeProjectile.UpdateFlashPostProcessAnim");

	AFlashGrenadeProjectile_UpdateFlashPostProcessAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.TogglePlayerMenu
// (Final, Native, Public, BlueprintCallable)

void UHUDManager::TogglePlayerMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.TogglePlayerMenu");

	UHUDManager_TogglePlayerMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.ToggleMapMenu
// (Final, Native, Public, BlueprintCallable)

void UHUDManager::ToggleMapMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.ToggleMapMenu");

	UHUDManager_ToggleMapMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.ToggleInGameMenu
// (Final, Native, Public, BlueprintCallable)

void UHUDManager::ToggleInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.ToggleInGameMenu");

	UHUDManager_ToggleInGameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.RespawnGameMenus
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)

void UHUDManager::RespawnGameMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.RespawnGameMenus");

	UHUDManager_RespawnGameMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenZoneSelectionMenuCountdown
// (Final, Native, Public)

void UHUDManager::OpenZoneSelectionMenuCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenZoneSelectionMenuCountdown");

	UHUDManager_OpenZoneSelectionMenuCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenZoneSelectionMenu
// (Final, Native, Public)

void UHUDManager::OpenZoneSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenZoneSelectionMenu");

	UHUDManager_OpenZoneSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenPlayerMenu
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UInventoryComponent**    OptionalOtherInventory         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUDManager::OpenPlayerMenu(class UInventoryComponent** OptionalOtherInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenPlayerMenu");

	UHUDManager_OpenPlayerMenu_Params params;
	params.OptionalOtherInventory = OptionalOtherInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenMapMenu
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::OpenMapMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenMapMenu");

	UHUDManager_OpenMapMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenLaunchMatchCountdown
// (Final, Native, Public)

void UHUDManager::OpenLaunchMatchCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenLaunchMatchCountdown");

	UHUDManager_OpenLaunchMatchCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenInGameMenu
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::OpenInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenInGameMenu");

	UHUDManager_OpenInGameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.OpenEndMatchMenu
// (Final, Native, Public)

void UHUDManager::OpenEndMatchMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.OpenEndMatchMenu");

	UHUDManager_OpenEndMatchMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.EnableZoneSelectionMenu
// (Final, Native, Public)

void UHUDManager::EnableZoneSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.EnableZoneSelectionMenu");

	UHUDManager_EnableZoneSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.DisplayMatchLoadingScreen
// (Final, Native, Public)

void UHUDManager::DisplayMatchLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.DisplayMatchLoadingScreen");

	UHUDManager_DisplayMatchLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.DisplayHUDForSpectatingMode
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::DisplayHUDForSpectatingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.DisplayHUDForSpectatingMode");

	UHUDManager_DisplayHUDForSpectatingMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.DisplayGameHUD
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::DisplayGameHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.DisplayGameHUD");

	UHUDManager_DisplayGameHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.CloseZoneSelectionMenu
// (Final, Native, Public)

void UHUDManager::CloseZoneSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.CloseZoneSelectionMenu");

	UHUDManager_CloseZoneSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.ClosePlayerMenu
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::ClosePlayerMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.ClosePlayerMenu");

	UHUDManager_ClosePlayerMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.CloseMapMenu
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::CloseMapMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.CloseMapMenu");

	UHUDManager_CloseMapMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.CloseInGameMenu
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::CloseInGameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.CloseInGameMenu");

	UHUDManager_CloseInGameMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.HUDManager.CloseAllMenus
// (Net, NetReliable, Native, Event, Public, NetClient)

void UHUDManager::CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.HUDManager.CloseAllMenus");

	UHUDManager_CloseAllMenus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Interactable.GetInteractableDisplayName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInteractable::GetInteractableDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Interactable.GetInteractableDisplayName");

	UInteractable_GetInteractableDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.UnlockSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent::UnlockSlot(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.UnlockSlot");

	UInventoryComponent_UnlockSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.TryGetSlotTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            outSlotTag                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::TryGetSlotTag(int* slotIndex, struct FGameplayTag* outSlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.TryGetSlotTag");

	UInventoryComponent_TryGetSlotTag_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outSlotTag != nullptr)
		*outSlotTag = params.outSlotTag;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.TryGetItemOnSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance           outItem                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::TryGetItemOnSlot(int* slotIndex, struct FItemInstance* outItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.TryGetItemOnSlot");

	UInventoryComponent_TryGetItemOnSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outItem != nullptr)
		*outItem = params.outItem;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.SimulateStackItemInSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            itemStack                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool*                          addIfSlotIsEmpty               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::SimulateStackItemInSlot(int* slotIndex, struct FItemInstance* Item, bool* addIfSlotIsEmpty, int* itemStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.SimulateStackItemInSlot");

	UInventoryComponent_SimulateStackItemInSlot_Params params;
	params.slotIndex = slotIndex;
	params.Item = Item;
	params.addIfSlotIsEmpty = addIfSlotIsEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemStack != nullptr)
		*itemStack = params.itemStack;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.SimulateAddItem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            itemStack                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::SimulateAddItem(struct FItemInstance* Item, int* itemStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.SimulateAddItem");

	UInventoryComponent_SimulateAddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemStack != nullptr)
		*itemStack = params.itemStack;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.ReplaceItemInSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance           Item                           (Parm, OutParm, ReferenceParm)

void UInventoryComponent::ReplaceItemInSlot(int* slotIndex, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ReplaceItemInSlot");

	UInventoryComponent_ReplaceItemInSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Anarea.InventoryComponent.RemoveItemLinkedToItemInWorld
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::RemoveItemLinkedToItemInWorld(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.RemoveItemLinkedToItemInWorld");

	UInventoryComponent_RemoveItemLinkedToItemInWorld_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.RemoveItemInSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           optionalAmountToRemove         (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent::RemoveItemInSlot(int* slotIndex, int* optionalAmountToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.RemoveItemInSlot");

	UInventoryComponent_RemoveItemInSlot_Params params;
	params.slotIndex = slotIndex;
	params.optionalAmountToRemove = optionalAmountToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.RemoveItemByType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           amountToRemove                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::RemoveItemByType(struct FItemKey* ItemKey, int* amountToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.RemoveItemByType");

	UInventoryComponent_RemoveItemByType_Params params;
	params.ItemKey = ItemKey;
	params.amountToRemove = amountToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.ReceiveOnSlotUnlocked
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    slotOwningComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryComponent::ReceiveOnSlotUnlocked(int* slotIndex, class UInventoryComponent** slotOwningComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ReceiveOnSlotUnlocked");

	UInventoryComponent_ReceiveOnSlotUnlocked_Params params;
	params.slotIndex = slotIndex;
	params.slotOwningComponent = slotOwningComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.ReceiveOnSlotModified
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    slotOwningComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryComponent::ReceiveOnSlotModified(int* slotIndex, class UInventoryComponent** slotOwningComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ReceiveOnSlotModified");

	UInventoryComponent_ReceiveOnSlotModified_Params params;
	params.slotIndex = slotIndex;
	params.slotOwningComponent = slotOwningComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.ReceiveOnSlotLocked
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    slotOwningComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryComponent::ReceiveOnSlotLocked(int* slotIndex, class UInventoryComponent** slotOwningComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ReceiveOnSlotLocked");

	UInventoryComponent_ReceiveOnSlotLocked_Params params;
	params.slotIndex = slotIndex;
	params.slotOwningComponent = slotOwningComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.ReceiveOnBeforeSlotRemoved
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    slotOwningComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryComponent::ReceiveOnBeforeSlotRemoved(int* slotIndex, class UInventoryComponent** slotOwningComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ReceiveOnBeforeSlotRemoved");

	UInventoryComponent_ReceiveOnBeforeSlotRemoved_Params params;
	params.slotIndex = slotIndex;
	params.slotOwningComponent = slotOwningComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.OnRep_CurrentCapacity
// (Final, Native, Protected)

void UInventoryComponent::OnRep_CurrentCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.OnRep_CurrentCapacity");

	UInventoryComponent_OnRep_CurrentCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.ModifyCapacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           deltaSlotAmount                (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent::ModifyCapacity(int* deltaSlotAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ModifyCapacity");

	UInventoryComponent_ModifyCapacity_Params params;
	params.deltaSlotAmount = deltaSlotAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.LockSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryComponent::LockSlot(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.LockSlot");

	UInventoryComponent_LockSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.IsSlotLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::IsSlotLocked(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.IsSlotLocked");

	UInventoryComponent_IsSlotLocked_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.IsSlotEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::IsSlotEmpty(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.IsSlotEmpty");

	UInventoryComponent_IsSlotEmpty_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.IsIndexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::IsIndexValid(int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.IsIndexValid");

	UInventoryComponent_IsIndexValid_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.HasEnoughItemOfType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           requestedCount                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::HasEnoughItemOfType(struct FItemKey* ItemKey, int* requestedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.HasEnoughItemOfType");

	UInventoryComponent_HasEnoughItemOfType_Params params;
	params.ItemKey = ItemKey;
	params.requestedCount = requestedCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.GetItemCount
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::GetItemCount(struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.GetItemCount");

	UInventoryComponent_GetItemCount_Params params;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotsBySlotTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           slotTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          exactMatch                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UInventoryComponent::FindSlotsBySlotTag(struct FGameplayTag* slotTag, bool* exactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotsBySlotTag");

	UInventoryComponent_FindSlotsBySlotTag_Params params;
	params.slotTag = slotTag;
	params.exactMatch = exactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotsByItemTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           ItemTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          exactMatch                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UInventoryComponent::FindSlotsByItemTag(struct FGameplayTag* ItemTag, bool* exactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotsByItemTag");

	UInventoryComponent_FindSlotsByItemTag_Params params;
	params.ItemTag = ItemTag;
	params.exactMatch = exactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotsByItemKey
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UInventoryComponent::FindSlotsByItemKey(struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotsByItemKey");

	UInventoryComponent_FindSlotsByItemKey_Params params;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotBySlotTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           slotTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          exactMatch                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::FindSlotBySlotTag(struct FGameplayTag* slotTag, bool* exactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotBySlotTag");

	UInventoryComponent_FindSlotBySlotTag_Params params;
	params.slotTag = slotTag;
	params.exactMatch = exactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotByItemTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           ItemTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          exactMatch                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::FindSlotByItemTag(struct FGameplayTag* ItemTag, bool* exactMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotByItemTag");

	UInventoryComponent_FindSlotByItemTag_Params params;
	params.ItemTag = ItemTag;
	params.exactMatch = exactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindSlotByItemKey
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::FindSlotByItemKey(struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindSlotByItemKey");

	UInventoryComponent_FindSlotByItemKey_Params params;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.FindFirstCompatibleSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryComponent::FindFirstCompatibleSlot(struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.FindFirstCompatibleSlot");

	UInventoryComponent_FindFirstCompatibleSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.ClearAllItems
// (Final, Native, Public)

void UInventoryComponent::ClearAllItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.ClearAllItems");

	UInventoryComponent_ClearAllItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.CanStackOrAddItemOnSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::CanStackOrAddItemOnSlot(int* slotIndex, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.CanStackOrAddItemOnSlot");

	UInventoryComponent_CanStackOrAddItemOnSlot_Params params;
	params.slotIndex = slotIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.CanStackItemOnSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::CanStackItemOnSlot(int* slotIndex, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.CanStackItemOnSlot");

	UInventoryComponent_CanStackItemOnSlot_Params params;
	params.slotIndex = slotIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.CanSetItemOnSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance*          Item                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::CanSetItemOnSlot(int* slotIndex, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.CanSetItemOnSlot");

	UInventoryComponent_CanSetItemOnSlot_Params params;
	params.slotIndex = slotIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.CallOnCapacityChangedDelegate
// (Final, Native, Protected)

void UInventoryComponent::CallOnCapacityChangedDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.CallOnCapacityChangedDelegate");

	UInventoryComponent_CallOnCapacityChangedDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventoryComponent.AddItemInSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance           Item                           (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::AddItemInSlot(int* slotIndex, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.AddItemInSlot");

	UInventoryComponent_AddItemInSlot_Params params;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function Anarea.InventoryComponent.AddItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemInstance           Item                           (Parm, OutParm, ReferenceParm)
// bool*                          forceNoStack                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryComponent::AddItem(bool* forceNoStack, struct FItemInstance* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventoryComponent.AddItem");

	UInventoryComponent_AddItem_Params params;
	params.forceNoStack = forceNoStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function Anarea.InventorySlotWidgetBase.SetUnlockedVisual
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInventorySlotWidgetBase::SetUnlockedVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventorySlotWidgetBase.SetUnlockedVisual");

	UInventorySlotWidgetBase_SetUnlockedVisual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventorySlotWidgetBase.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isSelected                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventorySlotWidgetBase::SetSelected(bool* isSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventorySlotWidgetBase.SetSelected");

	UInventorySlotWidgetBase_SetSelected_Params params;
	params.isSelected = isSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventorySlotWidgetBase.SetLockedVisual
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInventorySlotWidgetBase::SetLockedVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventorySlotWidgetBase.SetLockedVisual");

	UInventorySlotWidgetBase_SetLockedVisual_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.InventorySlotWidgetBase.OnRightClickDetected_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UInventorySlotWidgetBase::OnRightClickDetected_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.InventorySlotWidgetBase.OnRightClickDetected_DelegateSignature__DelegateSignature");

	UInventorySlotWidgetBase_OnRightClickDetected_DelegateSignature__DelegateSignature_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.InventorySlotWidgetBase.OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)

void UInventorySlotWidgetBase::OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.InventorySlotWidgetBase.OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature");

	UInventorySlotWidgetBase_OnMouseDoubleClickDetected_DelegateSignature__DelegateSignature_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction Anarea.InventorySlotWidgetBase.OnDragDetectedOnSlot_DelegateSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          wantSplit                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventorySlotWidgetBase::OnDragDetectedOnSlot_DelegateSignature__DelegateSignature(int* slotIndex, class UInventoryComponent** SlotOwningInventory, class AItemInWorld** LinkedItemInWorld, bool* wantSplit)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Anarea.InventorySlotWidgetBase.OnDragDetectedOnSlot_DelegateSignature__DelegateSignature");

	UInventorySlotWidgetBase_OnDragDetectedOnSlot_DelegateSignature__DelegateSignature_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;
	params.LinkedItemInWorld = LinkedItemInWorld;
	params.wantSplit = wantSplit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventorySlotWidgetBase.Init
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemBaseData*          baseData                       (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           curStack                       (Parm, ZeroConstructor, IsPlainOldData)

void UInventorySlotWidgetBase::Init(struct FItemBaseData* baseData, int* curStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventorySlotWidgetBase.Init");

	UInventorySlotWidgetBase_Init_Params params;
	params.baseData = baseData;
	params.curStack = curStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.InventorySlotWidgetBase.Clear
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UInventorySlotWidgetBase::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.InventorySlotWidgetBase.Clear");

	UInventorySlotWidgetBase_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemContextMenuBase.InitUMGRefs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPanelWidget**           InContainer                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                InContainerZone                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemContextMenuBase::InitUMGRefs(class UPanelWidget** InContainer, class UWidget** InContainerZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemContextMenuBase.InitUMGRefs");

	UItemContextMenuBase_InitUMGRefs_Params params;
	params.InContainer = InContainer;
	params.InContainerZone = InContainerZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemContextMenuEntryBase.Init
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ActionText                     (ConstParm, Parm, OutParm, ReferenceParm)

void UItemContextMenuEntryBase::Init(struct FText* ActionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemContextMenuEntryBase.Init");

	UItemContextMenuEntryBase_Init_Params params;
	params.ActionText = ActionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemContextMenuEntryBase.CallOnUseButtonClickedDelegate
// (Final, Native, Public, BlueprintCallable)

void UItemContextMenuEntryBase::CallOnUseButtonClickedDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemContextMenuEntryBase.CallOnUseButtonClickedDelegate");

	UItemContextMenuEntryBase_CallOnUseButtonClickedDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemDatabase.FindItemData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FItemBaseData           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemBaseData UItemDatabase::FindItemData(struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemDatabase.FindItemData");

	UItemDatabase_FindItemData_Params params;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemDatabase.CreateNewItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           requestedStack                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemInstance           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemInstance UItemDatabase::CreateNewItem(struct FItemKey* ItemKey, int* requestedStack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemDatabase.CreateNewItem");

	UItemDatabase_CreateNewItem_Params params;
	params.ItemKey = ItemKey;
	params.requestedStack = requestedStack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemDatabaseAccessor.GetItemDatabase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UItemDatabase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemDatabase* UItemDatabaseAccessor::STATIC_GetItemDatabase(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemDatabaseAccessor.GetItemDatabase");

	UItemDatabaseAccessor_GetItemDatabase_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemDatabaseProvider.GetItemDatabase
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UItemDatabase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemDatabase* UItemDatabaseProvider::GetItemDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemDatabaseProvider.GetItemDatabase");

	UItemDatabaseProvider_GetItemDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemInWorld.PreInit
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemInstance*          InItem                         (ConstParm, Parm, OutParm, ReferenceParm)

void AItemInWorld::PreInit(struct FItemInstance* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.PreInit");

	AItemInWorld_PreInit_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemInWorld.OnRep_Item
// (Final, Native, Public)

void AItemInWorld::OnRep_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.OnRep_Item");

	AItemInWorld_OnRep_Item_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemInWorld.OnRep_IsLocked
// (Final, Native, Public)

void AItemInWorld::OnRep_IsLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.OnRep_IsLocked");

	AItemInWorld_OnRep_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemInWorld.K2_Init
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemInstance*          InItem                         (ConstParm, Parm, OutParm, ReferenceParm)

void AItemInWorld::K2_Init(struct FItemInstance* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.K2_Init");

	AItemInWorld_K2_Init_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemInWorld.BP_ShowOulines
// (Event, Public, BlueprintEvent)

void AItemInWorld::BP_ShowOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.BP_ShowOulines");

	AItemInWorld_BP_ShowOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemInWorld.BP_HideOulines
// (Event, Public, BlueprintEvent)

void AItemInWorld::BP_HideOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemInWorld.BP_HideOulines");

	AItemInWorld_BP_HideOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LootSpawnerGeneratorInterface.UnspawnLootsInLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULevel**                 Level                          (Parm, ZeroConstructor, IsPlainOldData)

void ULootSpawnerGeneratorInterface::UnspawnLootsInLevel(class ULevel** Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerGeneratorInterface.UnspawnLootsInLevel");

	ULootSpawnerGeneratorInterface_UnspawnLootsInLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LootSpawnerGeneratorInterface.SpawnLootsInLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// class ULevel**                 Level                          (Parm, ZeroConstructor, IsPlainOldData)

void ULootSpawnerGeneratorInterface::SpawnLootsInLevel(class ULevel** Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerGeneratorInterface.SpawnLootsInLevel");

	ULootSpawnerGeneratorInterface_SpawnLootsInLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LootSpawnerGeneratorLib.UnspawnLoots
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OwningActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULootSpawnerGeneratorLib::STATIC_UnspawnLoots(class AActor** OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerGeneratorLib.UnspawnLoots");

	ULootSpawnerGeneratorLib_UnspawnLoots_Params params;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LootSpawnerGeneratorLib.SpawnLoots
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 OwningActor                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ULootSpawnerGeneratorLib::STATIC_SpawnLoots(class AActor** OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerGeneratorLib.SpawnLoots");

	ULootSpawnerGeneratorLib_SpawnLoots_Params params;
	params.OwningActor = OwningActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemSkillHelper.TryDeactivatelItemSkill
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag*           skillTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemSkillHelper::STATIC_TryDeactivatelItemSkill(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* skillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.TryDeactivatelItemSkill");

	UItemSkillHelper_TryDeactivatelItemSkill_Params params;
	params.AbilitySystem = AbilitySystem;
	params.skillTag = skillTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemSkillHelper.TryActivateItemSkill
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag*           ItemTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag*           skillTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UItemSkillHelper::STATIC_TryActivateItemSkill(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* ItemTag, struct FGameplayTag* skillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.TryActivateItemSkill");

	UItemSkillHelper_TryActivateItemSkill_Params params;
	params.AbilitySystem = AbilitySystem;
	params.ItemTag = ItemTag;
	params.skillTag = skillTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemSkillHelper.TryActivateAnyDefensiveSkill
// (Final, Native, Static, Public)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemSkillHelper::STATIC_TryActivateAnyDefensiveSkill(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.TryActivateAnyDefensiveSkill");

	UItemSkillHelper_TryActivateAnyDefensiveSkill_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemSkillHelper.TryActivateAnyAttackSkill
// (Final, Native, Static, Public)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemSkillHelper::STATIC_TryActivateAnyAttackSkill(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.TryActivateAnyAttackSkill");

	UItemSkillHelper_TryActivateAnyAttackSkill_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemSkillHelper.IsItemSkillActive
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag*           skillTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSkillHelper::STATIC_IsItemSkillActive(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* skillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.IsItemSkillActive");

	UItemSkillHelper_IsItemSkillActive_Params params;
	params.AbilitySystem = AbilitySystem;
	params.skillTag = skillTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemSkillHelper.IsItemSkillActivatable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag*           ItemTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag*           skillTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSkillHelper::STATIC_IsItemSkillActivatable(class UAbilitySystemComponent** AbilitySystem, struct FGameplayTag* ItemTag, struct FGameplayTag* skillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.IsItemSkillActivatable");

	UItemSkillHelper_IsItemSkillActivatable_Params params;
	params.AbilitySystem = AbilitySystem;
	params.ItemTag = ItemTag;
	params.skillTag = skillTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemSkillHelper.IsAnyDefensiveSkillActivated
// (Final, Native, Static, Public)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSkillHelper::STATIC_IsAnyDefensiveSkillActivated(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.IsAnyDefensiveSkillActivated");

	UItemSkillHelper_IsAnyDefensiveSkillActivated_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemSkillHelper.IsAnyAttackSkillActivated
// (Final, Native, Static, Public)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemSkillHelper::STATIC_IsAnyAttackSkillActivated(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemSkillHelper.IsAnyAttackSkillActivated");

	UItemSkillHelper_IsAnyAttackSkillActivated_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.Server_UseItemInInventory
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UInventoryComponent**    InventoryComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_UseItemInInventory(class UInventoryComponent** InventoryComponent, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_UseItemInInventory");

	UItemUserComponent_Server_UseItemInInventory_Params params;
	params.InventoryComponent = InventoryComponent;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_TrySwapItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_TrySwapItem(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_TrySwapItem");

	UItemUserComponent_Server_TrySwapItem_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_SplitAndDropInventoryItemInWorld
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           splitAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_SplitAndDropInventoryItemInWorld(class UInventoryComponent** Inventory, int* slotIndex, int* splitAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_SplitAndDropInventoryItemInWorld");

	UItemUserComponent_Server_SplitAndDropInventoryItemInWorld_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;
	params.splitAmount = splitAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_PickUpItemInWorld
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_PickUpItemInWorld(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_PickUpItemInWorld");

	UItemUserComponent_Server_PickUpItemInWorld_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_HandleDropOnInventory
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemUserComponent::Server_HandleDropOnInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_HandleDropOnInventory");

	UItemUserComponent_Server_HandleDropOnInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_HandleDragDropOnInventorySlot
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AItemInWorld**           LinkedItemInWorld              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          wantSplit                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_HandleDragDropOnInventorySlot(class UInventoryComponent** Inventory, int* slotIndex, class AItemInWorld** LinkedItemInWorld, bool* wantSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_HandleDragDropOnInventorySlot");

	UItemUserComponent_Server_HandleDragDropOnInventorySlot_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;
	params.LinkedItemInWorld = LinkedItemInWorld;
	params.wantSplit = wantSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_EndDragItem
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UItemUserComponent::Server_EndDragItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_EndDragItem");

	UItemUserComponent_Server_EndDragItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_DropItemInWorld
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FItemInstance*          ItemInstance                   (ConstParm, Parm, ReferenceParm)

void UItemUserComponent::Server_DropItemInWorld(struct FItemInstance* ItemInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_DropItemInWorld");

	UItemUserComponent_Server_DropItemInWorld_Params params;
	params.ItemInstance = ItemInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_DropInventoryItemInWorld
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemUserComponent::Server_DropInventoryItemInWorld(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_DropInventoryItemInWorld");

	UItemUserComponent_Server_DropInventoryItemInWorld_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_DropDraggedItemInWorld
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UItemUserComponent::Server_DropDraggedItemInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_DropDraggedItemInWorld");

	UItemUserComponent_Server_DropDraggedItemInWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Server_CancelDragItem
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)

void UItemUserComponent::Server_CancelDragItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Server_CancelDragItem");

	UItemUserComponent_Server_CancelDragItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.ReceiveSlotModifiedOnEquipmentInventory
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemUserComponent::ReceiveSlotModifiedOnEquipmentInventory(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.ReceiveSlotModifiedOnEquipmentInventory");

	UItemUserComponent_ReceiveSlotModifiedOnEquipmentInventory_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.ReceiveBeforeSlotRemovedOnEquipmentInventory
// (Final, Native, Public)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemUserComponent::ReceiveBeforeSlotRemovedOnEquipmentInventory(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.ReceiveBeforeSlotRemovedOnEquipmentInventory");

	UItemUserComponent_ReceiveBeforeSlotRemovedOnEquipmentInventory_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.IsDraggingItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemUserComponent::IsDraggingItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.IsDraggingItem");

	UItemUserComponent_IsDraggingItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.GetDraggedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemInstance           ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FItemInstance UItemUserComponent::GetDraggedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.GetDraggedItem");

	UItemUserComponent_GetDraggedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.Client_EndDragItem
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UItemUserComponent::Client_EndDragItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Client_EndDragItem");

	UItemUserComponent_Client_EndDragItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Client_CancelDragItem
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UItemUserComponent::Client_CancelDragItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Client_CancelDragItem");

	UItemUserComponent_Client_CancelDragItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.Client_BeginDragFromInventoryOrItemInWorld
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FItemDragInfo*          inDragInfo                     (ConstParm, Parm, ReferenceParm)

void UItemUserComponent::Client_BeginDragFromInventoryOrItemInWorld(struct FItemDragInfo* inDragInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.Client_BeginDragFromInventoryOrItemInWorld");

	UItemUserComponent_Client_BeginDragFromInventoryOrItemInWorld_Params params;
	params.inDragInfo = inDragInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ItemUserComponent.CanSwapItemToSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemUserComponent::CanSwapItemToSlot(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.CanSwapItemToSlot");

	UItemUserComponent_CanSwapItemToSlot_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.CanStackOrAddOrSwapDraggedItemToSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemUserComponent::CanStackOrAddOrSwapDraggedItemToSlot(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.CanStackOrAddOrSwapDraggedItemToSlot");

	UItemUserComponent_CanStackOrAddOrSwapDraggedItemToSlot_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.CanStackOrAddDraggedItemToSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemUserComponent::CanStackOrAddDraggedItemToSlot(class UInventoryComponent** Inventory, int* slotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.CanStackOrAddDraggedItemToSlot");

	UItemUserComponent_CanStackOrAddDraggedItemToSlot_Params params;
	params.Inventory = Inventory;
	params.slotIndex = slotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ItemUserComponent.CanDropItemToInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemUserComponent::CanDropItemToInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ItemUserComponent.CanDropItemToInventory");

	UItemUserComponent_CanDropItemToInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.LocomotionHandler.SetIsJogging
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void ULocomotionHandler::SetIsJogging(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.SetIsJogging");

	ULocomotionHandler_SetIsJogging_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LocomotionHandler.GetShouldSprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocomotionHandler::GetShouldSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.GetShouldSprint");

	ULocomotionHandler_GetShouldSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.LocomotionHandler.GetIsJogging
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULocomotionHandler::GetIsJogging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.GetIsJogging");

	ULocomotionHandler_GetIsJogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.LocomotionHandler.GetCurrentSpeedClamped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULocomotionHandler::GetCurrentSpeedClamped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.GetCurrentSpeedClamped");

	ULocomotionHandler_GetCurrentSpeedClamped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.LocomotionHandler.EndSprint
// (Final, Native, Public, BlueprintCallable)

void ULocomotionHandler::EndSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.EndSprint");

	ULocomotionHandler_EndSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LocomotionHandler.BeginSprint
// (Final, Native, Public, BlueprintCallable)

void ULocomotionHandler::BeginSprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LocomotionHandler.BeginSprint");

	ULocomotionHandler_BeginSprint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Lootbox.BP_ShowOulines
// (Event, Public, BlueprintEvent)

void ALootbox::BP_ShowOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Lootbox.BP_ShowOulines");

	ALootbox_BP_ShowOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Lootbox.BP_HideOulines
// (Event, Public, BlueprintEvent)

void ALootbox::BP_HideOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Lootbox.BP_HideOulines");

	ALootbox_BP_HideOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.LootSpawnerFunctionalities.SpawnLoot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                spawnLoc                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UDataTable**             LootDataTable                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLootSpawnAdditionalLocations* additionalSpawnLocations       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName*                  RowInDataTable                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          spawnAdditionalItems           (Parm, ZeroConstructor, IsPlainOldData)
// class ULevel**                 levelToSpawnInto               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AItemInWorld*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AItemInWorld*> ULootSpawnerFunctionalities::STATIC_SpawnLoot(class UObject** WorldContextObject, struct FVector* spawnLoc, class UDataTable** LootDataTable, struct FLootSpawnAdditionalLocations* additionalSpawnLocations, struct FName* RowInDataTable, bool* spawnAdditionalItems, class ULevel** levelToSpawnInto, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerFunctionalities.SpawnLoot");

	ULootSpawnerFunctionalities_SpawnLoot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.spawnLoc = spawnLoc;
	params.LootDataTable = LootDataTable;
	params.additionalSpawnLocations = additionalSpawnLocations;
	params.RowInDataTable = RowInDataTable;
	params.spawnAdditionalItems = spawnAdditionalItems;
	params.levelToSpawnInto = levelToSpawnInto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function Anarea.LootSpawnerFunctionalities.SpawnAllLootsOnActorSockets
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UDataTable**             LootDataTable                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          useLevelToSpawnInto            (Parm, ZeroConstructor, IsPlainOldData)
// class ULevel**                 levelToSpawnInto               (Parm, ZeroConstructor, IsPlainOldData)
// class ULevel**                 filterByLevel                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AItemInWorld*>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AItemInWorld*> ULootSpawnerFunctionalities::STATIC_SpawnAllLootsOnActorSockets(class UObject** WorldContextObject, class UDataTable** LootDataTable, bool* useLevelToSpawnInto, class ULevel** levelToSpawnInto, class ULevel** filterByLevel, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.LootSpawnerFunctionalities.SpawnAllLootsOnActorSockets");

	ULootSpawnerFunctionalities_SpawnAllLootsOnActorSockets_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LootDataTable = LootDataTable;
	params.useLevelToSpawnInto = useLevelToSpawnInto;
	params.levelToSpawnInto = levelToSpawnInto;
	params.filterByLevel = filterByLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function Anarea.MontageBasedAbility.OnAnimFeedback
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           feedbackTags                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)

void UMontageBasedAbility::OnAnimFeedback(struct FGameplayTag* feedbackTags, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.MontageBasedAbility.OnAnimFeedback");

	UMontageBasedAbility_OnAnimFeedback_Params params;
	params.feedbackTags = feedbackTags;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.NearbyItemDetector.ReceiveOnComponentEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UNearbyItemDetector::ReceiveOnComponentEndOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.NearbyItemDetector.ReceiveOnComponentEndOverlap");

	UNearbyItemDetector_ReceiveOnComponentEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.NearbyItemDetector.ReceiveOnComponentBeginOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNearbyItemDetector::ReceiveOnComponentBeginOverlap(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.NearbyItemDetector.ReceiveOnComponentBeginOverlap");

	UNearbyItemDetector_ReceiveOnComponentBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.NearbyItemDetector.ReceiveItemInWorldUnlocked
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UNearbyItemDetector::ReceiveItemInWorldUnlocked(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.NearbyItemDetector.ReceiveItemInWorldUnlocked");

	UNearbyItemDetector_ReceiveItemInWorldUnlocked_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.NearbyItemDetector.ReceiveIteminWorldModified
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UNearbyItemDetector::ReceiveIteminWorldModified(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.NearbyItemDetector.ReceiveIteminWorldModified");

	UNearbyItemDetector_ReceiveIteminWorldModified_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.NearbyItemDetector.ReceiveItemInWorldLocked
// (Final, Native, Public)
// Parameters:
// class AItemInWorld**           ItemInWorld                    (Parm, ZeroConstructor, IsPlainOldData)

void UNearbyItemDetector::ReceiveItemInWorldLocked(class AItemInWorld** ItemInWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.NearbyItemDetector.ReceiveItemInWorldLocked");

	UNearbyItemDetector_ReceiveItemInWorldLocked_Params params;
	params.ItemInWorld = ItemInWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.PlayerSpawnSystemComponent.OnRep_ZoneInfos
// (Final, Native, Protected)

void UPlayerSpawnSystemComponent::OnRep_ZoneInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.PlayerSpawnSystemComponent.OnRep_ZoneInfos");

	UPlayerSpawnSystemComponent_OnRep_ZoneInfos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.PlayerSpawnSystemComponent.OnRep_PlayerCountPerZone
// (Final, Native, Protected)

void UPlayerSpawnSystemComponent::OnRep_PlayerCountPerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.PlayerSpawnSystemComponent.OnRep_PlayerCountPerZone");

	UPlayerSpawnSystemComponent_OnRep_PlayerCountPerZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.PlayerSpawnSystemComponent.ClearZoneSelection
// (Final, Native, Public)
// Parameters:
// class APlayerController**      Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSpawnSystemComponent::ClearZoneSelection(class APlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.PlayerSpawnSystemComponent.ClearZoneSelection");

	UPlayerSpawnSystemComponent_ClearZoneSelection_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.PlayerSpawnSystemComponent.AddPlayerToZone
// (Final, Native, Public)
// Parameters:
// class APlayerController**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           zoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSpawnSystemComponent::AddPlayerToZone(class APlayerController** Player, int* zoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.PlayerSpawnSystemComponent.AddPlayerToZone");

	UPlayerSpawnSystemComponent_AddPlayerToZone_Params params;
	params.Player = Player;
	params.zoneIndex = zoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ReplicatedDoor.OnRep_DoorState
// (Final, Native, Public)

void AReplicatedDoor::OnRep_DoorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ReplicatedDoor.OnRep_DoorState");

	AReplicatedDoor_OnRep_DoorState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ReplicatedDoor.HandleDoorStateChanged
// (Event, Public, BlueprintEvent)

void AReplicatedDoor::HandleDoorStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ReplicatedDoor.HandleDoorStateChanged");

	AReplicatedDoor_HandleDoorStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SelectSplitAmountWidgetBase.Init
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           stackAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void USelectSplitAmountWidgetBase::Init(int* stackAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SelectSplitAmountWidgetBase.Init");

	USelectSplitAmountWidgetBase_Init_Params params;
	params.stackAmount = stackAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SelectSplitAmountWidgetBase.CallOnValueCommittedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void USelectSplitAmountWidgetBase::CallOnValueCommittedDelegate(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SelectSplitAmountWidgetBase.CallOnValueCommittedDelegate");

	USelectSplitAmountWidgetBase_CallOnValueCommittedDelegate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.TryGetMagazineMeshComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* AShootingWeapon::TryGetMagazineMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.TryGetMagazineMeshComponent");

	AShootingWeapon_TryGetMagazineMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.SimulatedHandleReloadStep
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            simulatedCurrentAmmoCount      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShootingWeapon::SimulatedHandleReloadStep(int* simulatedCurrentAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.SimulatedHandleReloadStep");

	AShootingWeapon_SimulatedHandleReloadStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (simulatedCurrentAmmoCount != nullptr)
		*simulatedCurrentAmmoCount = params.simulatedCurrentAmmoCount;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.Shoot
// (Final, Native, Public, BlueprintCallable)

void AShootingWeapon::Shoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Shoot");

	AShootingWeapon_Shoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.Server_ProcessShoot
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int*                           RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::Server_ProcessShoot(int* RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Server_ProcessShoot");

	AShootingWeapon_Server_ProcessShoot_Params params;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.Server_HandleReloadStep
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int*                           maxPossibleAmoCount            (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::Server_HandleReloadStep(int* maxPossibleAmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Server_HandleReloadStep");

	AShootingWeapon_Server_HandleReloadStep_Params params;
	params.maxPossibleAmoCount = maxPossibleAmoCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.Server_HandleHitscanHit
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AShootingWeapon::Server_HandleHitscanHit(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Server_HandleHitscanHit");

	AShootingWeapon_Server_HandleHitscanHit_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.ProcessShootOnServer
// (Final, Native, Public)
// Parameters:
// int*                           RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::ProcessShootOnServer(int* RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.ProcessShootOnServer");

	AShootingWeapon_ProcessShootOnServer_Params params;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.ProcessShootOnClient
// (Final, Native, Public)
// Parameters:
// int*                           RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::ProcessShootOnClient(int* RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.ProcessShootOnClient");

	AShootingWeapon_ProcessShootOnClient_Params params;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.OnRep_LinkedBulletInfo
// (Final, Native, Private)

void AShootingWeapon::OnRep_LinkedBulletInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.OnRep_LinkedBulletInfo");

	AShootingWeapon_OnRep_LinkedBulletInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.OnRep_CurrentAmmoCount
// (Final, Native, Private)

void AShootingWeapon::OnRep_CurrentAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.OnRep_CurrentAmmoCount");

	AShootingWeapon_OnRep_CurrentAmmoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.Multicast_PlayShootFX
// (Net, Native, Event, NetMulticast, Public)

void AShootingWeapon::Multicast_PlayShootFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Multicast_PlayShootFX");

	AShootingWeapon_Multicast_PlayShootFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.Multicast_PlayHitFX
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector*                ImpactPoint                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactNormal                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>* surfaceType                    (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::Multicast_PlayHitFX(struct FVector* ImpactPoint, struct FVector* ImpactNormal, TEnumAsByte<EPhysicalSurface>* surfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Multicast_PlayHitFX");

	AShootingWeapon_Multicast_PlayHitFX_Params params;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;
	params.surfaceType = surfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.HandleReloadStep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           maxPossibleAmoCount            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShootingWeapon::HandleReloadStep(int* maxPossibleAmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.HandleReloadStep");

	AShootingWeapon_HandleReloadStep_Params params;
	params.maxPossibleAmoCount = maxPossibleAmoCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.GetReloadRightHandIKTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShootingWeapon::GetReloadRightHandIKTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.GetReloadRightHandIKTargetLocation");

	AShootingWeapon_GetReloadRightHandIKTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.GetAmmoType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAmmoType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAmmoType AShootingWeapon::GetAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.GetAmmoType");

	AShootingWeapon_GetAmmoType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.GetAmmoCountToAddAtNextReloadStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShootingWeapon::GetAmmoCountToAddAtNextReloadStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.GetAmmoCountToAddAtNextReloadStep");

	AShootingWeapon_GetAmmoCountToAddAtNextReloadStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.GeReloadLeftHandIKTargetWorldLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShootingWeapon::GeReloadLeftHandIKTargetWorldLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.GeReloadLeftHandIKTargetWorldLocation");

	AShootingWeapon_GeReloadLeftHandIKTargetWorldLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.Client_ApplyRecoil
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int*                           RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShootingWeapon::Client_ApplyRecoil(int* RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.Client_ApplyRecoil");

	AShootingWeapon_Client_ApplyRecoil_Params params;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ShootingWeapon.CanShoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShootingWeapon::CanShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.CanShoot");

	AShootingWeapon_CanShoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.ShootingWeapon.CanBeReloaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShootingWeapon::CanBeReloaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ShootingWeapon.CanBeReloaded");

	AShootingWeapon_CanBeReloaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.UpdateRecoverFromLastRecoil
// (Final, Native, Protected)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USightHandler::UpdateRecoverFromLastRecoil(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.UpdateRecoverFromLastRecoil");

	USightHandler_UpdateRecoverFromLastRecoil_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.SetIsAiming
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          aiming                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         zoomBoostMultiplier            (Parm, ZeroConstructor, IsPlainOldData)

void USightHandler::SetIsAiming(bool* aiming, float* zoomBoostMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.SetIsAiming");

	USightHandler_SetIsAiming_Params params;
	params.aiming = aiming;
	params.zoomBoostMultiplier = zoomBoostMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.PlayHitmarkerSound
// (Final, Native, Public)
// Parameters:
// EHitMarkerType*                hitMarker                      (Parm, ZeroConstructor, IsPlainOldData)

void USightHandler::PlayHitmarkerSound(EHitMarkerType* hitMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.PlayHitmarkerSound");

	USightHandler_PlayHitmarkerSound_Params params;
	params.hitMarker = hitMarker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.OnRep_IsAiming
// (Final, Native, Public)

void USightHandler::OnRep_IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.OnRep_IsAiming");

	USightHandler_OnRep_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.IsHeadBoneName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USightHandler::IsHeadBoneName(struct FName* BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.IsHeadBoneName");

	USightHandler_IsHeadBoneName_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.InitLinkedCamera
// (Final, Native, Protected)

void USightHandler::InitLinkedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.InitLinkedCamera");

	USightHandler_InitLinkedCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.GetIsAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USightHandler::GetIsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.GetIsAiming");

	USightHandler_GetIsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.GetHitMarkerType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  BoneName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          hitShield                      (Parm, ZeroConstructor, IsPlainOldData)
// EHitMarkerType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EHitMarkerType USightHandler::GetHitMarkerType(struct FName* BoneName, bool* hitShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.GetHitMarkerType");

	USightHandler_GetHitMarkerType_Params params;
	params.BoneName = BoneName;
	params.hitShield = hitShield;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.GetCurrentMouseSensitivityModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USightHandler::GetCurrentMouseSensitivityModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.GetCurrentMouseSensitivityModifier");

	USightHandler_GetCurrentMouseSensitivityModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.GetCameraLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector USightHandler::GetCameraLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.GetCameraLocation");

	USightHandler_GetCameraLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SightHandler.Client_DisplayDamagePerceivedFeedback
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FDamagePerceptionDirection* damageDirection                (Parm)

void USightHandler::Client_DisplayDamagePerceivedFeedback(struct FDamagePerceptionDirection* damageDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.Client_DisplayDamagePerceivedFeedback");

	USightHandler_Client_DisplayDamagePerceivedFeedback_Params params;
	params.damageDirection = damageDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.CancelRecoilRecovering
// (Final, Native, Public, BlueprintCallable)

void USightHandler::CancelRecoilRecovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.CancelRecoilRecovering");

	USightHandler_CancelRecoilRecovering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SightHandler.CanAim
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USightHandler::CanAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SightHandler.CanAim");

	USightHandler_CanAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SkillCrate.ReceiveLinkedItemDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor**                 destroyedLinkedItem            (Parm, ZeroConstructor, IsPlainOldData)

void ASkillCrate::ReceiveLinkedItemDestroyed(class AActor** destroyedLinkedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.ReceiveLinkedItemDestroyed");

	ASkillCrate_ReceiveLinkedItemDestroyed_Params params;
	params.destroyedLinkedItem = destroyedLinkedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.OpenAnimFinished
// (Final, Native, Public, BlueprintCallable)

void ASkillCrate::OpenAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.OpenAnimFinished");

	ASkillCrate_OpenAnimFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.Open
// (Final, Native, Public, BlueprintCallable)

void ASkillCrate::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.Open");

	ASkillCrate_Open_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.OnRep_LinkedItemInWorld
// (Final, Native, Public)

void ASkillCrate::OnRep_LinkedItemInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.OnRep_LinkedItemInWorld");

	ASkillCrate_OnRep_LinkedItemInWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.OnRep_IsOpen
// (Final, Native, Public)

void ASkillCrate::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.OnRep_IsOpen");

	ASkillCrate_OnRep_IsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.GetIsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ASkillCrate::GetIsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.GetIsOpen");

	ASkillCrate_GetIsOpen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SkillCrate.CloseAnimFinished
// (Final, Native, Public, BlueprintCallable)

void ASkillCrate::CloseAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.CloseAnimFinished");

	ASkillCrate_CloseAnimFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.Close
// (Final, Native, Public, BlueprintCallable)

void ASkillCrate::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.Close");

	ASkillCrate_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.BP_ShowOulines
// (Event, Public, BlueprintEvent)

void ASkillCrate::BP_ShowOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.BP_ShowOulines");

	ASkillCrate_BP_ShowOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.BP_PlayOpenAnim
// (Event, Public, BlueprintEvent)

void ASkillCrate::BP_PlayOpenAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.BP_PlayOpenAnim");

	ASkillCrate_BP_PlayOpenAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.BP_PlayCloseAnim
// (Event, Public, BlueprintEvent)

void ASkillCrate::BP_PlayCloseAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.BP_PlayCloseAnim");

	ASkillCrate_BP_PlayCloseAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SkillCrate.BP_HideOulines
// (Event, Public, BlueprintEvent)

void ASkillCrate::BP_HideOulines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SkillCrate.BP_HideOulines");

	ASkillCrate_BP_HideOulines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.SocketsName.ReloadRightHandIKTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USocketsName::STATIC_ReloadRightHandIKTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SocketsName.ReloadRightHandIKTarget");

	USocketsName_ReloadRightHandIKTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SocketsName.ReloadLeftHandIKTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USocketsName::STATIC_ReloadLeftHandIKTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SocketsName.ReloadLeftHandIKTarget");

	USocketsName_ReloadLeftHandIKTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SocketsName.LeftHandGrip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USocketsName::STATIC_LeftHandGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SocketsName.LeftHandGrip");

	USocketsName_LeftHandGrip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.SocketsName.HolsterAnchor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USocketsName::STATIC_HolsterAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.SocketsName.HolsterAnchor");

	USocketsName_HolsterAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.StormZoneActor.SetRadiusAndLocation2D
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         newRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              newLocation2D                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AStormZoneActor::SetRadiusAndLocation2D(float* newRadius, struct FVector2D* newLocation2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneActor.SetRadiusAndLocation2D");

	AStormZoneActor_SetRadiusAndLocation2D_Params params;
	params.newRadius = newRadius;
	params.newLocation2D = newLocation2D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneActor.InitBeforeFirstShrink
// (Event, Public, BlueprintEvent)

void AStormZoneActor::InitBeforeFirstShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneActor.InitBeforeFirstShrink");

	AStormZoneActor_InitBeforeFirstShrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneActor.GetCurrentRadius
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStormZoneActor::GetCurrentRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneActor.GetCurrentRadius");

	AStormZoneActor_GetCurrentRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.StormZoneHandler.ReceiveGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// EGamePhase*                    previousGamePhase              (Parm, ZeroConstructor, IsPlainOldData)
// EGamePhase*                    currentGamePhase               (Parm, ZeroConstructor, IsPlainOldData)

void UStormZoneHandler::ReceiveGamePhaseChanged(EGamePhase* previousGamePhase, EGamePhase* currentGamePhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.ReceiveGamePhaseChanged");

	UStormZoneHandler_ReceiveGamePhaseChanged_Params params;
	params.previousGamePhase = previousGamePhase;
	params.currentGamePhase = currentGamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.OnRep_StormZoneStatus
// (Final, Native, Protected)

void UStormZoneHandler::OnRep_StormZoneStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.OnRep_StormZoneStatus");

	UStormZoneHandler_OnRep_StormZoneStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink
// (Final, Native, Protected)

void UStormZoneHandler::OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink");

	UStormZoneHandler_OnRep_ReplicatedZoneRadiusAndLocation2DAfterShrink_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2D
// (Final, Native, Protected)

void UStormZoneHandler::OnRep_ReplicatedZoneRadiusAndLocation2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.OnRep_ReplicatedZoneRadiusAndLocation2D");

	UStormZoneHandler_OnRep_ReplicatedZoneRadiusAndLocation2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.OnRep_ReplicatedSeed
// (Final, Native, Protected)

void UStormZoneHandler::OnRep_ReplicatedSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.OnRep_ReplicatedSeed");

	UStormZoneHandler_OnRep_ReplicatedSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.OnRep_CurrentShrinkIndex
// (Final, Native, Protected)

void UStormZoneHandler::OnRep_CurrentShrinkIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.OnRep_CurrentShrinkIndex");

	UStormZoneHandler_OnRep_CurrentShrinkIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.StormZoneHandler.GetShrinkTimeForIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           shrinkIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStormZoneHandler::GetShrinkTimeForIndex(int* shrinkIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.GetShrinkTimeForIndex");

	UStormZoneHandler_GetShrinkTimeForIndex_Params params;
	params.shrinkIndex = shrinkIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.StormZoneHandler.BP_TryGetStormZoneRules
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStormZonesRules        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStormZonesRules UStormZoneHandler::BP_TryGetStormZoneRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.BP_TryGetStormZoneRules");

	UStormZoneHandler_BP_TryGetStormZoneRules_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.StormZoneHandler.BeginZoneMovements
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UStormZoneHandler::BeginZoneMovements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.StormZoneHandler.BeginZoneMovements");

	UStormZoneHandler_BeginZoneMovements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.TestTarget.ReceiveHealthOrShieldValueChanged
// (Final, Native, Public)

void ATestTarget::ReceiveHealthOrShieldValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.TestTarget.ReceiveHealthOrShieldValueChanged");

	ATestTarget_ReceiveHealthOrShieldValueChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.TestTarget.DisplayDamageTaken
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ATestTarget::DisplayDamageTaken(float* damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.TestTarget.DisplayDamageTaken");

	ATestTarget_DisplayDamageTaken_Params params;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.UtilityFunctionLib.WriteWantHideHUDToConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          WantHideHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteWantHideHUDToConfigFile(bool* WantHideHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteWantHideHUDToConfigFile");

	UUtilityFunctionLib_WriteWantHideHUDToConfigFile_Params params;
	params.WantHideHUD = WantHideHUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.WriteToggleSprintToConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          ToggleSprint                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteToggleSprintToConfigFile(bool* ToggleSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteToggleSprintToConfigFile");

	UUtilityFunctionLib_WriteToggleSprintToConfigFile_Params params;
	params.ToggleSprint = ToggleSprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.WriteSoundVolumeFromConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EVolumeType*                   volumeType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteSoundVolumeFromConfigFile(EVolumeType* volumeType, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteSoundVolumeFromConfigFile");

	UUtilityFunctionLib_WriteSoundVolumeFromConfigFile_Params params;
	params.volumeType = volumeType;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.WriteFOVToConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float*                         FOV                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteFOVToConfigFile(float* FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteFOVToConfigFile");

	UUtilityFunctionLib_WriteFOVToConfigFile_Params params;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.WriteEnableCSMToConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          EnableCSM                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteEnableCSMToConfigFile(bool* EnableCSM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteEnableCSMToConfigFile");

	UUtilityFunctionLib_WriteEnableCSMToConfigFile_Params params;
	params.EnableCSM = EnableCSM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.WriteCorsshairShapeToConfigFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECrosshairToUse*               CrosshairShape                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_WriteCorsshairShapeToConfigFile(ECrosshairToUse* CrosshairShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.WriteCorsshairShapeToConfigFile");

	UUtilityFunctionLib_WriteCorsshairShapeToConfigFile_Params params;
	params.CrosshairShape = CrosshairShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.TryGetServerPORTAsString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGameModeBase**          GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUtilityFunctionLib::STATIC_TryGetServerPORTAsString(class AGameModeBase** GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.TryGetServerPORTAsString");

	UUtilityFunctionLib_TryGetServerPORTAsString_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.TryGetServerPORTAsInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGameModeBase**          GameMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtilityFunctionLib::STATIC_TryGetServerPORTAsInt(class AGameModeBase** GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.TryGetServerPORTAsInt");

	UUtilityFunctionLib_TryGetServerPORTAsInt_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ResizeTextureRenderTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D** Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           newSizeX                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           newSizeY                       (Parm, ZeroConstructor, IsPlainOldData)

void UUtilityFunctionLib::STATIC_ResizeTextureRenderTarget(class UTextureRenderTarget2D** Texture, int* newSizeX, int* newSizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ResizeTextureRenderTarget");

	UUtilityFunctionLib_ResizeTextureRenderTarget_Params params;
	params.Texture = Texture;
	params.newSizeX = newSizeX;
	params.newSizeY = newSizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.UtilityFunctionLib.ReadWantHideHUDFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           WantHideHUD                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadWantHideHUDFromConfigFile(bool* WantHideHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadWantHideHUDFromConfigFile");

	UUtilityFunctionLib_ReadWantHideHUDFromConfigFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WantHideHUD != nullptr)
		*WantHideHUD = params.WantHideHUD;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ReadToggleSprintFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           ToggleSprint                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadToggleSprintFromConfigFile(bool* ToggleSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadToggleSprintFromConfigFile");

	UUtilityFunctionLib_ReadToggleSprintFromConfigFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToggleSprint != nullptr)
		*ToggleSprint = params.ToggleSprint;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ReadSoundVolumeFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVolumeType*                   volumeType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          outVolume                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadSoundVolumeFromConfigFile(EVolumeType* volumeType, float* outVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadSoundVolumeFromConfigFile");

	UUtilityFunctionLib_ReadSoundVolumeFromConfigFile_Params params;
	params.volumeType = volumeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outVolume != nullptr)
		*outVolume = params.outVolume;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ReadFOVFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          FOV                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadFOVFromConfigFile(float* FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadFOVFromConfigFile");

	UUtilityFunctionLib_ReadFOVFromConfigFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FOV != nullptr)
		*FOV = params.FOV;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ReadEnableCSMFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           EnableCSM                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadEnableCSMFromConfigFile(bool* EnableCSM)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadEnableCSMFromConfigFile");

	UUtilityFunctionLib_ReadEnableCSMFromConfigFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnableCSM != nullptr)
		*EnableCSM = params.EnableCSM;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.ReadCrosshairShapeFromConfigFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ECrosshairToUse                outCrosshairShape              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_ReadCrosshairShapeFromConfigFile(ECrosshairToUse* outCrosshairShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ReadCrosshairShapeFromConfigFile");

	UUtilityFunctionLib_ReadCrosshairShapeFromConfigFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCrosshairShape != nullptr)
		*outCrosshairShape = params.outCrosshairShape;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.GetRandIndicesInRangeNoDuplicate
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor)
// int*                           requestedCount                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           from                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           to                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUtilityFunctionLib::STATIC_GetRandIndicesInRangeNoDuplicate(int* requestedCount, int* from, int* to, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.GetRandIndicesInRangeNoDuplicate");

	UUtilityFunctionLib_GetRandIndicesInRangeNoDuplicate_Params params;
	params.requestedCount = requestedCount;
	params.from = from;
	params.to = to;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.GetPlayerPing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUtilityFunctionLib::STATIC_GetPlayerPing(class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.GetPlayerPing");

	UUtilityFunctionLib_GetPlayerPing_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.GetKillfeedMessage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKillfeedEntryInfo*     KillfeedEntryInfo              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUtilityFunctionLib::STATIC_GetKillfeedMessage(struct FKillfeedEntryInfo* KillfeedEntryInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.GetKillfeedMessage");

	UUtilityFunctionLib_GetKillfeedMessage_Params params;
	params.KillfeedEntryInfo = KillfeedEntryInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.FindMapDelimitersLocationsSlowOp
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                contextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               outMin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               outMax                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EMapDelimiterType*             delimiterType                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUtilityFunctionLib::STATIC_FindMapDelimitersLocationsSlowOp(class UObject** contextObject, EMapDelimiterType* delimiterType, struct FVector2D* outMin, struct FVector2D* outMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.FindMapDelimitersLocationsSlowOp");

	UUtilityFunctionLib_FindMapDelimitersLocationsSlowOp_Params params;
	params.contextObject = contextObject;
	params.delimiterType = delimiterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outMin != nullptr)
		*outMin = params.outMin;
	if (outMax != nullptr)
		*outMax = params.outMax;

	return params.ReturnValue;
}


// Function Anarea.UtilityFunctionLib.CrashGame
// (Final, Native, Static, Public, BlueprintCallable)

void UUtilityFunctionLib::STATIC_CrashGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.CrashGame");

	UUtilityFunctionLib_CrashGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.UtilityFunctionLib.ChooseName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRandomStream           RandomStream                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FWeightedName>*  weightedNames                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUtilityFunctionLib::STATIC_ChooseName(TArray<struct FWeightedName>* weightedNames, struct FRandomStream* RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.UtilityFunctionLib.ChooseName");

	UUtilityFunctionLib_ChooseName_Params params;
	params.weightedNames = weightedNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandomStream != nullptr)
		*RandomStream = params.RandomStream;

	return params.ReturnValue;
}


// Function Anarea.AbilityTask_WaitInventorySlotContext.CreateWaitInventorySlotContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitInventorySlotContext* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitInventorySlotContext* UAbilityTask_WaitInventorySlotContext::STATIC_CreateWaitInventorySlotContext(class UGameplayAbility** OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AbilityTask_WaitInventorySlotContext.CreateWaitInventorySlotContext");

	UAbilityTask_WaitInventorySlotContext_CreateWaitInventorySlotContext_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AbilityTask_WaitLocationThreshold.CreateWaitLocationThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitLocationThreshold* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitLocationThreshold* UAbilityTask_WaitLocationThreshold::STATIC_CreateWaitLocationThreshold(class UGameplayAbility** OwningAbility, float* Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AbilityTask_WaitLocationThreshold.CreateWaitLocationThreshold");

	UAbilityTask_WaitLocationThreshold_CreateWaitLocationThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AbilityTask_WaitVelocityThreshold.CreateWaitVelocityThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitVelocityThreshold* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitVelocityThreshold* UAbilityTask_WaitVelocityThreshold::STATIC_CreateWaitVelocityThreshold(class UGameplayAbility** OwningAbility, float* Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AbilityTask_WaitVelocityThreshold.CreateWaitVelocityThreshold");

	UAbilityTask_WaitVelocityThreshold_CreateWaitVelocityThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.AbilityTask_WaitVelocityBelowThreshold.CreateWaitVelocityBelowThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility**       OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Threshold                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitVelocityBelowThreshold* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitVelocityBelowThreshold* UAbilityTask_WaitVelocityBelowThreshold::STATIC_CreateWaitVelocityBelowThreshold(class UGameplayAbility** OwningAbility, float* Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.AbilityTask_WaitVelocityBelowThreshold.CreateWaitVelocityBelowThreshold");

	UAbilityTask_WaitVelocityBelowThreshold_CreateWaitVelocityBelowThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.WeaponItemDataAsset.GetWeaponClass
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemKey*               ItemKey                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UWeaponItemDataAsset::GetWeaponClass(class UObject** WorldContextObject, struct FItemKey* ItemKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.WeaponItemDataAsset.GetWeaponClass");

	UWeaponItemDataAsset_GetWeaponClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemKey = ItemKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Anarea.Widget_SkillStatusOnHUD.SetModels
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UInventoryComponent**    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_SkillStatusOnHUD::SetModels(class UAbilitySystemComponent** AbilitySystem, class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.SetModels");

	UWidget_SkillStatusOnHUD_SetModels_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.ReceiveOnBeforeInventorySlotRemoved
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_SkillStatusOnHUD::ReceiveOnBeforeInventorySlotRemoved(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.ReceiveOnBeforeInventorySlotRemoved");

	UWidget_SkillStatusOnHUD_ReceiveOnBeforeInventorySlotRemoved_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.ReceiveInventorySlotModified
// (Final, Native, Protected)
// Parameters:
// int*                           slotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    SlotOwningInventory            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWidget_SkillStatusOnHUD::ReceiveInventorySlotModified(int* slotIndex, class UInventoryComponent** SlotOwningInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.ReceiveInventorySlotModified");

	UWidget_SkillStatusOnHUD_ReceiveInventorySlotModified_Params params;
	params.slotIndex = slotIndex;
	params.SlotOwningInventory = SlotOwningInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillCooldown
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayEffectRemovalInfo* removalInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UWidget_SkillStatusOnHUD::ReceiveGameplayEffectRemoved_FromSkillCooldown(struct FGameplayEffectRemovalInfo* removalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillCooldown");

	UWidget_SkillStatusOnHUD_ReceiveGameplayEffectRemoved_FromSkillCooldown_Params params;
	params.removalInfo = removalInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillActivation
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayEffectRemovalInfo* removalInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UWidget_SkillStatusOnHUD::ReceiveGameplayEffectRemoved_FromSkillActivation(struct FGameplayEffectRemovalInfo* removalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectRemoved_FromSkillActivation");

	UWidget_SkillStatusOnHUD_ReceiveGameplayEffectRemoved_FromSkillActivation_Params params;
	params.removalInfo = removalInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectAddedToSelf
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UAbilitySystemComponent** AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayEffectSpec*    effectSpec                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle* activeEffectHandle             (Parm)

void UWidget_SkillStatusOnHUD::ReceiveGameplayEffectAddedToSelf(class UAbilitySystemComponent** AbilitySystem, struct FGameplayEffectSpec* effectSpec, struct FActiveGameplayEffectHandle* activeEffectHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.ReceiveGameplayEffectAddedToSelf");

	UWidget_SkillStatusOnHUD_ReceiveGameplayEffectAddedToSelf_Params params;
	params.AbilitySystem = AbilitySystem;
	params.effectSpec = effectSpec;
	params.activeEffectHandle = activeEffectHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillRemoved
// (Event, Protected, BlueprintEvent)

void UWidget_SkillStatusOnHUD::BP_ReceiveSkillRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillRemoved");

	UWidget_SkillStatusOnHUD_BP_ReceiveSkillRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillDeactivated
// (Event, Protected, BlueprintEvent)

void UWidget_SkillStatusOnHUD::BP_ReceiveSkillDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillDeactivated");

	UWidget_SkillStatusOnHUD_BP_ReceiveSkillDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillCooldown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UWidget_SkillStatusOnHUD::BP_ReceiveSkillCooldown(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillCooldown");

	UWidget_SkillStatusOnHUD_BP_ReceiveSkillCooldown_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillAdded
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FItemInstance*          skillItem                      (ConstParm, Parm, OutParm, ReferenceParm)

void UWidget_SkillStatusOnHUD::BP_ReceiveSkillAdded(struct FItemInstance* skillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillAdded");

	UWidget_SkillStatusOnHUD_BP_ReceiveSkillAdded_Params params;
	params.skillItem = skillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillActivated
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           skillTag                       (ConstParm, Parm, OutParm, ReferenceParm)

void UWidget_SkillStatusOnHUD::BP_ReceiveSkillActivated(float* Duration, struct FGameplayTag* skillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.Widget_SkillStatusOnHUD.BP_ReceiveSkillActivated");

	UWidget_SkillStatusOnHUD_BP_ReceiveSkillActivated_Params params;
	params.Duration = Duration;
	params.skillTag = skillTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.UnselectZoneForPlayer
// (Final, Native, Public, BlueprintCallable)

void UZoneSelectionMenu::UnselectZoneForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.UnselectZoneForPlayer");

	UZoneSelectionMenu_UnselectZoneForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.SetModels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlayerSpawnSystemComponent** PlayerSpawnSystem              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ABasePlayerState**       PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::SetModels(class UPlayerSpawnSystemComponent** PlayerSpawnSystem, class ABasePlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.SetModels");

	UZoneSelectionMenu_SetModels_Params params;
	params.PlayerSpawnSystem = PlayerSpawnSystem;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.SelectZoneForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           zoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::SelectZoneForPlayer(int* zoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.SelectZoneForPlayer");

	UZoneSelectionMenu_SelectZoneForPlayer_Params params;
	params.zoneIndex = zoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.ReceiveZoneInfosModified
// (Event, Public, BlueprintEvent)

void UZoneSelectionMenu::ReceiveZoneInfosModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.ReceiveZoneInfosModified");

	UZoneSelectionMenu_ReceiveZoneInfosModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.ReceivePlayerSpawnZoneIndexChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           previousZoneIndex              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           newZoneIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::ReceivePlayerSpawnZoneIndexChanged(int* previousZoneIndex, int* newZoneIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.ReceivePlayerSpawnZoneIndexChanged");

	UZoneSelectionMenu_ReceivePlayerSpawnZoneIndexChanged_Params params;
	params.previousZoneIndex = previousZoneIndex;
	params.newZoneIndex = newZoneIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.ReceivePlayerCountPerZoneModified
// (Event, Public, BlueprintEvent)

void UZoneSelectionMenu::ReceivePlayerCountPerZoneModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.ReceivePlayerCountPerZoneModified");

	UZoneSelectionMenu_ReceivePlayerCountPerZoneModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.OnModelsChanged
// (Native, Event, Public, BlueprintEvent)

void UZoneSelectionMenu::OnModelsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.OnModelsChanged");

	UZoneSelectionMenu_OnModelsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         GamePhaseDuration              (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::DisplayZoneSelectionMenu(float* GamePhaseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionMenu");

	UZoneSelectionMenu_DisplayZoneSelectionMenu_Params params;
	params.GamePhaseDuration = GamePhaseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         GamePhaseDuration              (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::DisplayZoneSelectionCountdown(float* GamePhaseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.DisplayZoneSelectionCountdown");

	UZoneSelectionMenu_DisplayZoneSelectionCountdown_Params params;
	params.GamePhaseDuration = GamePhaseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.DisplayMatchLoadingScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         GamePhaseDuration              (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::DisplayMatchLoadingScreen(float* GamePhaseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.DisplayMatchLoadingScreen");

	UZoneSelectionMenu_DisplayMatchLoadingScreen_Params params;
	params.GamePhaseDuration = GamePhaseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea.ZoneSelectionMenu.DisplayLaunchMatchCountdown
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         GamePhaseDuration              (Parm, ZeroConstructor, IsPlainOldData)

void UZoneSelectionMenu::DisplayLaunchMatchCountdown(float* GamePhaseDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea.ZoneSelectionMenu.DisplayLaunchMatchCountdown");

	UZoneSelectionMenu_DisplayLaunchMatchCountdown_Params params;
	params.GamePhaseDuration = GamePhaseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
