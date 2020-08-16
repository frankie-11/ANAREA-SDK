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

// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsUnlocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::SetIsUnlocked(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsUnlocked");

	UWBP_CosmeticItemWidget_C_SetIsUnlocked_Params params;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::SetIsEquipped(bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.SetIsEquipped");

	UWBP_CosmeticItemWidget_C_SetIsEquipped_Params params;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.UnSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CosmeticItemWidget_C::UnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.UnSelect");

	UWBP_CosmeticItemWidget_C_UnSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CosmeticItemWidget_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.Select");

	UWBP_CosmeticItemWidget_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CosmeticItemWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseButtonDown");

	UWBP_CosmeticItemWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromWeaponSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponSkinBackendInfo* WeaponSkinInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::InitFromWeaponSkin(struct FWeaponSkinBackendInfo* WeaponSkinInfo, bool* IsUnlocked, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromWeaponSkin");

	UWBP_CosmeticItemWidget_C_InitFromWeaponSkin_Params params;
	params.WeaponSkinInfo = WeaponSkinInfo;
	params.IsUnlocked = IsUnlocked;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.PreConstruct");

	UWBP_CosmeticItemWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ECosmeticsRarity*              Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::InitBase(class UTexture2D** Icon, struct FText* Label, ECosmeticsRarity* Rarity, bool* IsUnlocked, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitBase");

	UWBP_CosmeticItemWidget_C_InitBase_Params params;
	params.Icon = Icon;
	params.Label = Label;
	params.Rarity = Rarity;
	params.IsUnlocked = IsUnlocked;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromBackpackInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBackpackBackendInfo*   BackpackInfo                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::InitFromBackpackInfo(struct FBackpackBackendInfo* BackpackInfo, bool* IsUnlocked, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromBackpackInfo");

	UWBP_CosmeticItemWidget_C_InitFromBackpackInfo_Params params;
	params.BackpackInfo = BackpackInfo;
	params.IsUnlocked = IsUnlocked;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromCharacterModelInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterModelBackendInfo* CharacterModelInfo             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipped                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::InitFromCharacterModelInfo(struct FCharacterModelBackendInfo* CharacterModelInfo, bool* IsUnlocked, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.InitFromCharacterModelInfo");

	UWBP_CosmeticItemWidget_C_InitFromCharacterModelInfo_Params params;
	params.CharacterModelInfo = CharacterModelInfo;
	params.IsUnlocked = IsUnlocked;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CosmeticItemWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnMouseEnter");

	UWBP_CosmeticItemWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.ExecuteUbergraph_WBP_CosmeticItemWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::ExecuteUbergraph_WBP_CosmeticItemWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.ExecuteUbergraph_WBP_CosmeticItemWidget");

	UWBP_CosmeticItemWidget_C_ExecuteUbergraph_WBP_CosmeticItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CosmeticName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CosmeticItemWidget_C::OnClicked__DelegateSignature(struct FName* CosmeticName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItemWidget.WBP_CosmeticItemWidget_C.OnClicked__DelegateSignature");

	UWBP_CosmeticItemWidget_C_OnClicked__DelegateSignature_Params params;
	params.CosmeticName = CosmeticName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
