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

// Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::ClearPendingSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingSettings");

	UWBP_MenuSettings_C_ClearPendingSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingInputSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::ClearPendingInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingInputSettings");

	UWBP_MenuSettings_C_ClearPendingInputSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeAudioVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVolumeType*                   volumeType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VolumeValue                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_MenuSettings_C::ChangeAudioVolume(EVolumeType* volumeType, float* VolumeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeAudioVolume");

	UWBP_MenuSettings_C_ChangeAudioVolume_Params params;
	params.volumeType = volumeType;
	params.VolumeValue = VolumeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::SaveAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.SaveAudio");

	UWBP_MenuSettings_C_SaveAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::InitAllAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllAudioSettings");

	UWBP_MenuSettings_C_InitAllAudioSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.PreInit
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::PreInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.PreInit");

	UWBP_MenuSettings_C_PreInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllGraphicsSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::InitAllGraphicsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllGraphicsSettings");

	UWBP_MenuSettings_C_InitAllGraphicsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveGraphics
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::SaveGraphics()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.SaveGraphics");

	UWBP_MenuSettings_C_SaveGraphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAxis
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInputChord*            NewKey                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::ChangeInputAxis(struct FName* InputName, struct FInputChord* NewKey, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAxis");

	UWBP_MenuSettings_C_ChangeInputAxis_Params params;
	params.InputName = InputName;
	params.NewKey = NewKey;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveInputs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::SaveInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.SaveInputs");

	UWBP_MenuSettings_C_SaveInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInputChord*            NewKey                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MenuSettings_C::ChangeInputAction(struct FName* InputName, struct FInputChord* NewKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAction");

	UWBP_MenuSettings_C_ChangeInputAction_Params params;
	params.InputName = InputName;
	params.NewKey = NewKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllInputSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::InitAllInputSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllInputSettings");

	UWBP_MenuSettings_C_InitAllInputSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.InitInputKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputKeySelector**      InputKeyWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  InputName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::InitInputKey(class UInputKeySelector** InputKeyWidget, struct FName* InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.InitInputKey");

	UWBP_MenuSettings_C_InitInputKey_Params params;
	params.InputKeyWidget = InputKeyWidget;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.Construct");

	UWBP_MenuSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ParentWidge                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          HideParent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::Open(class UWidget** ParentWidge, bool* HideParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.Open");

	UWBP_MenuSettings_C_Open_Params params;
	params.ParentWidge = ParentWidge;
	params.HideParent = HideParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.Close
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.Close");

	UWBP_MenuSettings_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName*                  BtnName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature(struct FName* BtnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params params;
	params.BtnName = BtnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MenuSettings_C::BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWBP_MenuSettings_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.ExecuteUbergraph_WBP_MenuSettings
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuSettings_C::ExecuteUbergraph_WBP_MenuSettings(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.ExecuteUbergraph_WBP_MenuSettings");

	UWBP_MenuSettings_C_ExecuteUbergraph_WBP_MenuSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.OnClosed__DelegateSignature");

	UWBP_MenuSettings_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuSettings.WBP_MenuSettings_C.OnOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_MenuSettings_C::OnOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuSettings.WBP_MenuSettings_C.OnOpened__DelegateSignature");

	UWBP_MenuSettings_C_OnOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
