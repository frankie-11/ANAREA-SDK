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

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	UMagicLeapPlanesComponent_RequestPlanesAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags>* InPriority                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags>* InFlagsToReorder               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> OutReorderedFlags              (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanesFunctionLibrary::STATIC_ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags>* InPriority, TArray<EMagicLeapPlaneQueryFlags>* InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags");

	UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params params;
	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags>* InQueryFlags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags>* InResultFlags                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> OutFlags                       (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanesFunctionLibrary::STATIC_RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags>* InQueryFlags, TArray<EMagicLeapPlaneQueryFlags>* InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery");

	UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params params;
	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery*  Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery* Query, struct FScriptDelegate* ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync");

	UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params params;
	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_IsTrackerValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid");

	UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor**                 ContentActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMagicLeapPlaneResult*  PlaneResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMagicLeapPlanesFunctionLibrary::STATIC_GetContentScale(class AActor** ContentActor, struct FMagicLeapPlaneResult* PlaneResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale");

	UMagicLeapPlanesFunctionLibrary_GetContentScale_Params params;
	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_DestroyTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker");

	UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_CreateTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker");

	UMagicLeapPlanesFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
