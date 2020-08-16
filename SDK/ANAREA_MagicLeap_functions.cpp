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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPurchaseItemDetails*   ItemDetails                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInAppPurchaseComponent::TryPurchaseItemAsync(struct FPurchaseItemDetails* ItemDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync");

	UInAppPurchaseComponent_TryPurchaseItemAsync_Params params;
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           InNumPages                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInAppPurchaseComponent::TryGetPurchaseHistoryAsync(int* InNumPages)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync");

	UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params params;
	params.InNumPages = InNumPages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>*        ItemIds                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInAppPurchaseComponent::TryGetItemsDetailsAsync(TArray<struct FString>* ItemIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync");

	UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params params;
	params.ItemIds = ItemIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FPurchaseConfirmation*  PurchaseConfirmations          (ConstParm, Parm, OutParm, ReferenceParm)

void UInAppPurchaseComponent::PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation* PurchaseConfirmations)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params params;
	params.PurchaseConfirmations = PurchaseConfirmations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UInAppPurchaseComponent::PurchaseConfirmationFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature");

	UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FString*                LogMessage                     (Parm, ZeroConstructor)

void UInAppPurchaseComponent::InAppPurchaseLogMessage__DelegateSignature(struct FString* LogMessage)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature");

	UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params params;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FPurchaseConfirmation>* PurchaseHistory                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInAppPurchaseComponent::GetPurchaseHistorySuccess__DelegateSignature(TArray<struct FPurchaseConfirmation>* PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UInAppPurchaseComponent::GetPurchaseHistoryFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature");

	UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FPurchaseItemDetails>* ItemsDetails                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInAppPurchaseComponent::GetItemsDetailsSuccess__DelegateSignature(TArray<struct FPurchaseItemDetails>* ItemsDetails)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params params;
	params.ItemsDetails = ItemsDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UInAppPurchaseComponent::GetItemsDetailsFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature");

	UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 InStabilizationDepthActor      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetFocusActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHMDFunctionLibrary::STATIC_SetStabilizationDepthActor(class AActor** InStabilizationDepthActor, bool* bSetFocusActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor");

	UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params params;
	params.InStabilizationDepthActor = InStabilizationDepthActor;
	params.bSetFocusActor = bSetFocusActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor**                 InFocusActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetStabilizationActor         (Parm, ZeroConstructor, IsPlainOldData)

void UMagicLeapHMDFunctionLibrary::STATIC_SetFocusActor(class AActor** InFocusActor, bool* bSetStabilizationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor");

	UMagicLeapHMDFunctionLibrary_SetFocusActor_Params params;
	params.InFocusActor = InFocusActor;
	params.bSetStabilizationActor = bSetStabilizationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator*               InBaseRotation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMagicLeapHMDFunctionLibrary::STATIC_SetBaseRotation(struct FRotator* InBaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation");

	UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params params;
	params.InBaseRotation = InBaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                InBasePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMagicLeapHMDFunctionLibrary::STATIC_SetBasePosition(struct FVector* InBasePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition");

	UMagicLeapHMDFunctionLibrary_SetBasePosition_Params params;
	params.InBasePosition = InBasePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat*                  InBaseOrientation              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMagicLeapHMDFunctionLibrary::STATIC_SetBaseOrientation(struct FQuat* InBaseOrientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation");

	UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params params;
	params.InBaseOrientation = InBaseOrientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHMDFunctionLibrary::STATIC_SetAppReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady");

	UMagicLeapHMDFunctionLibrary_SetAppReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHMDFunctionLibrary::STATIC_IsRunningOnMagicLeapHMD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD");

	UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionRevision()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMinor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersionMajor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMagicLeapHMDFunctionLibrary::STATIC_GetMLSDKVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion");

	UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMagicLeapHeadTrackingState State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingState(struct FMagicLeapHeadTrackingState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapHMDFunctionLibrary::STATIC_GetHeadTrackingMapEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents");

	UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo* NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor)

void UMagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo* NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks");

	UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMagicLeapTrackingMeshInfo* NewMeshInfo                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh                  (Parm, OutParm, ZeroConstructor)

void UMeshTrackerComponent::SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo* NewMeshInfo, TArray<struct FMagicLeapMeshBlockRequest>* RequestedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks");

	UMeshTrackerComponent_SelectMeshBlocks_Params params;
	params.NewMeshInfo = NewMeshInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedMesh != nullptr)
		*RequestedMesh = params.RequestedMesh;
}


// DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid*                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>*                   Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>*        Normals                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>*                 Confidence                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMeshTrackerComponent::OnMeshTrackerUpdated__DelegateSignature(struct FGuid* ID, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<float>* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature");

	UMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params params;
	params.ID = ID;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshTrackerComponent::GetNumQueuedBlockUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates");

	UMeshTrackerComponent_GetNumQueuedBlockUpdates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent**       InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent** InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh");

	UMeshTrackerComponent_DisconnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector
// (Final, Native, Public, BlueprintCallable)

void UMeshTrackerComponent::DisconnectBlockSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector");

	UMeshTrackerComponent_DisconnectBlockSelector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.ConnectMRMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMRMeshComponent**       InMRMeshPtr                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent** InMRMeshPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectMRMesh");

	UMeshTrackerComponent_ConnectMRMesh_Params params;
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>* Selector                       (Parm, ZeroConstructor, IsPlainOldData)

void UMeshTrackerComponent::ConnectBlockSelector(TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>* Selector)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector");

	UMeshTrackerComponent_ConnectBlockSelector_Params params;
	params.Selector = Selector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapRaycastQueryParams* RequestParams                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapRaycastComponent::RequestRaycast(struct FMagicLeapRaycastQueryParams* RequestParams, struct FScriptDelegate* ResultDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast");

	UMagicLeapRaycastComponent_RequestRaycast_Params params;
	params.RequestParams = RequestParams;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FMagicLeapRaycastHitResult* HitResult                      (Parm)

void UMagicLeapRaycastComponent::RaycastResultDelegate__DelegateSignature(struct FMagicLeapRaycastHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature");

	UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                UpVector                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         HorizontalFovDegrees           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CollideWithUnobserved          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UserData                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FMagicLeapRaycastQueryParams ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMagicLeapRaycastQueryParams UMagicLeapRaycastFunctionLibrary::STATIC_MakeRaycastQueryParams(struct FVector* Position, struct FVector* Direction, struct FVector* UpVector, int* Width, int* Height, float* HorizontalFovDegrees, bool* CollideWithUnobserved, int* UserData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams");

	UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.UpVector = UpVector;
	params.Width = Width;
	params.Height = Height;
	params.HorizontalFovDegrees = HorizontalFovDegrees;
	params.CollideWithUnobserved = CollideWithUnobserved;
	params.UserData = UserData;

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
