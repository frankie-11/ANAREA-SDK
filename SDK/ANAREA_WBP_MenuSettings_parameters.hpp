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

// Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingSettings
struct UWBP_MenuSettings_C_ClearPendingSettings_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.ClearPendingInputSettings
struct UWBP_MenuSettings_C_ClearPendingInputSettings_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeAudioVolume
struct UWBP_MenuSettings_C_ChangeAudioVolume_Params
{
	EVolumeType*                                       volumeType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VolumeValue;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveAudio
struct UWBP_MenuSettings_C_SaveAudio_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllAudioSettings
struct UWBP_MenuSettings_C_InitAllAudioSettings_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.PreInit
struct UWBP_MenuSettings_C_PreInit_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllGraphicsSettings
struct UWBP_MenuSettings_C_InitAllGraphicsSettings_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveGraphics
struct UWBP_MenuSettings_C_SaveGraphics_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAxis
struct UWBP_MenuSettings_C_ChangeInputAxis_Params
{
	struct FName*                                      InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputChord*                                NewKey;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.SaveInputs
struct UWBP_MenuSettings_C_SaveInputs_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.ChangeInputAction
struct UWBP_MenuSettings_C_ChangeInputAction_Params
{
	struct FName*                                      InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FInputChord*                                NewKey;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.InitAllInputSettings
struct UWBP_MenuSettings_C_InitAllInputSettings_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.InitInputKey
struct UWBP_MenuSettings_C_InitInputKey_Params
{
	class UInputKeySelector**                          InputKeyWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      InputName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__FullscreenParam_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__TextureParam_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ViewDistanceParam_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__PostProcessParam_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__FrameRateParam_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__FoliageParam_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__InputKeySelector_155_K2Node_ComponentBoundEvent_13_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Aim_K2Node_ComponentBoundEvent_20_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Crouch_K2Node_ComponentBoundEvent_21_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Heal01_K2Node_ComponentBoundEvent_22_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Heal02_K2Node_ComponentBoundEvent_23_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__MainAction_K2Node_ComponentBoundEvent_24_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Reload_K2Node_ComponentBoundEvent_25_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SelectWeapon01_K2Node_ComponentBoundEvent_26_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SelectWeapon02_K2Node_ComponentBoundEvent_27_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SelectWeapon03_K2Node_ComponentBoundEvent_28_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.Construct
struct UWBP_MenuSettings_C_Construct_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.Open
struct UWBP_MenuSettings_C_Open_Params
{
	class UWidget**                                    ParentWidge;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              HideParent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.Close
struct UWBP_MenuSettings_C_Close_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__VisualParam_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Left_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Right_K2Node_ComponentBoundEvent_7_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Backward_K2Node_ComponentBoundEvent_11_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Forward_K2Node_ComponentBoundEvent_12_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__MoveDown_K2Node_ComponentBoundEvent_30_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__MoveUp_K2Node_ComponentBoundEvent_31_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityX_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityY_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ComboBox_crosshair_K2Node_ComponentBoundEvent_33_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ShadowQualityParam_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_PlayerMenu_K2Node_ComponentBoundEvent_41_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_PauseMenu_K2Node_ComponentBoundEvent_42_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_Interact_K2Node_ComponentBoundEvent_43_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_MapMenu_K2Node_ComponentBoundEvent_44_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_SelectGrenade_K2Node_ComponentBoundEvent_45_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Btn_ApplySettings_K2Node_ComponentBoundEvent_46_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__WBP_ExitButton_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
{
	struct FName*                                      BtnName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Dropdown_ScreenResolutions_K2Node_ComponentBoundEvent_49_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_ResolutionScale_K2Node_ComponentBoundEvent_50_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_MasterVolume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_EffectsVolume_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_VoicesVolume_K2Node_ComponentBoundEvent_51_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_MusicVolume_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__HideHUDParam_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_HolsterWeapon_K2Node_ComponentBoundEvent_1_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Slider_FOV_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Checkbox_EnableCSM_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_AutoRun_K2Node_ComponentBoundEvent_35_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ShowFPSLatencyParam_1_K2Node_ComponentBoundEvent_36_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityWhileAimingX_K2Node_ComponentBoundEvent_37_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__SpinBox_MouseSensitivityWhileAiming_y_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__testflood_K2Node_ComponentBoundEvent_39_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Lenghtfocale_1_K2Node_ComponentBoundEvent_40_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ShadowParam_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__MaxSpeed_K2Node_ComponentBoundEvent_53_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Maxspeedcame_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__Input_Sprint_K2Node_ComponentBoundEvent_55_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__AntiAliasingQualityParam_K2Node_ComponentBoundEvent_58_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString*                                    SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__VSyncBox_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
struct UWBP_MenuSettings_C_BndEvt__ToggleSprint_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.ExecuteUbergraph_WBP_MenuSettings
struct UWBP_MenuSettings_C_ExecuteUbergraph_WBP_MenuSettings_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.OnClosed__DelegateSignature
struct UWBP_MenuSettings_C_OnClosed__DelegateSignature_Params
{
};

// Function WBP_MenuSettings.WBP_MenuSettings_C.OnOpened__DelegateSignature
struct UWBP_MenuSettings_C_OnOpened__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
