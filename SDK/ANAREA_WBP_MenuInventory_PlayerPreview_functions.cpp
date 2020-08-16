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

// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_MenuInventory_PlayerPreview_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseWheel");

	UWBP_MenuInventory_PlayerPreview_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_MenuInventory_PlayerPreview_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragOver");

	UWBP_MenuInventory_PlayerPreview_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_PlayerPreview_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnDragDetected");

	UWBP_MenuInventory_PlayerPreview_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_MenuInventory_PlayerPreview_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.OnMouseButtonDown");

	UWBP_MenuInventory_PlayerPreview_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuInventory_PlayerPreview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.Construct");

	UWBP_MenuInventory_PlayerPreview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ApplyAnimOnPreviewPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_PreviewPlayerIdleAnimType>* AnimType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_PlayerPreview_C::ApplyAnimOnPreviewPlayer(TEnumAsByte<E_PreviewPlayerIdleAnimType>* AnimType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ApplyAnimOnPreviewPlayer");

	UWBP_MenuInventory_PlayerPreview_C_ApplyAnimOnPreviewPlayer_Params params;
	params.AnimType = AnimType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ExecuteUbergraph_WBP_MenuInventory_PlayerPreview
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MenuInventory_PlayerPreview_C::ExecuteUbergraph_WBP_MenuInventory_PlayerPreview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MenuInventory_PlayerPreview.WBP_MenuInventory_PlayerPreview_C.ExecuteUbergraph_WBP_MenuInventory_PlayerPreview");

	UWBP_MenuInventory_PlayerPreview_C_ExecuteUbergraph_WBP_MenuInventory_PlayerPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
