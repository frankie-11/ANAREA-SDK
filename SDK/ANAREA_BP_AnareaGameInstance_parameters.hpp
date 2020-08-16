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

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplySettingsToGame
struct UBP_AnareaGameInstance_C_ApplySettingsToGame_Params
{
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OverrideAudioVolume
struct UBP_AnareaGameInstance_C_OverrideAudioVolume_Params
{
	EVolumeType*                                       volumeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ApplyAudioSettings
struct UBP_AnareaGameInstance_C_ApplyAudioSettings_Params
{
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.GetItemDatabase
struct UBP_AnareaGameInstance_C_GetItemDatabase_Params
{
	class UItemDatabase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveInit
struct UBP_AnareaGameInstance_C_ReceiveInit_Params
{
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ReceiveUserSettingsApplied
struct UBP_AnareaGameInstance_C_ReceiveUserSettingsApplied_Params
{
	class UAnareaGameUserSettings**                    GameUserSettings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.ExecuteUbergraph_BP_AnareaGameInstance
struct UBP_AnareaGameInstance_C_ExecuteUbergraph_BP_AnareaGameInstance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnareaGameInstance.BP_AnareaGameInstance_C.OnKeyBindingChanged__DelegateSignature
struct UBP_AnareaGameInstance_C_OnKeyBindingChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
