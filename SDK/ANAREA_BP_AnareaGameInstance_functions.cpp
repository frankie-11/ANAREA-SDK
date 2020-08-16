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

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplySettingsToGame
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AnareaGameInstance_C::ApplySettingsToGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplySettingsToGame");

	UBP_AnareaGameInstance_C_ApplySettingsToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OverrideAudioVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVolumeType*                   volumeType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnareaGameInstance_C::OverrideAudioVolume(EVolumeType* volumeType, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OverrideAudioVolume");

	UBP_AnareaGameInstance_C_OverrideAudioVolume_Params params;
	params.volumeType = volumeType;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplyAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AnareaGameInstance_C::ApplyAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplyAudioSettings");

	UBP_AnareaGameInstance_C_ApplyAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.GetItemDatabase
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UItemDatabase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemDatabase* UBP_AnareaGameInstance_C::GetItemDatabase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.GetItemDatabase");

	UBP_AnareaGameInstance_C_GetItemDatabase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_AnareaGameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveInit");

	UBP_AnareaGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveUserSettingsApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnareaGameUserSettings** GameUserSettings               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnareaGameInstance_C::ReceiveUserSettingsApplied(class UAnareaGameUserSettings** GameUserSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveUserSettingsApplied");

	UBP_AnareaGameInstance_C_ReceiveUserSettingsApplied_Params params;
	params.GameUserSettings = GameUserSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ExecuteUbergraph_BP_AnareaGameInstance
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AnareaGameInstance_C::ExecuteUbergraph_BP_AnareaGameInstance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ExecuteUbergraph_BP_AnareaGameInstance");

	UBP_AnareaGameInstance_C_ExecuteUbergraph_BP_AnareaGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OnKeyBindingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_AnareaGameInstance_C::OnKeyBindingChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OnKeyBindingChanged__DelegateSignature");

	UBP_AnareaGameInstance_C_OnKeyBindingChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
