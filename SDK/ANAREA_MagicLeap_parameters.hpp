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

// Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync
struct UInAppPurchaseComponent_TryPurchaseItemAsync_Params
{
	struct FPurchaseItemDetails*                       ItemDetails;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync
struct UInAppPurchaseComponent_TryGetPurchaseHistoryAsync_Params
{
	int*                                               InNumPages;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync
struct UInAppPurchaseComponent_TryGetItemsDetailsAsync_Params
{
	TArray<struct FString>*                            ItemIds;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationSuccess__DelegateSignature_Params
{
	struct FPurchaseConfirmation*                      PurchaseConfirmations;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature
struct UInAppPurchaseComponent_PurchaseConfirmationFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature
struct UInAppPurchaseComponent_InAppPurchaseLogMessage__DelegateSignature_Params
{
	struct FString*                                    LogMessage;                                               // (Parm, ZeroConstructor)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistorySuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseConfirmation>*              PurchaseHistory;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature
struct UInAppPurchaseComponent_GetPurchaseHistoryFailure__DelegateSignature_Params
{
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsSuccess__DelegateSignature_Params
{
	TArray<struct FPurchaseItemDetails>*               ItemsDetails;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature
struct UInAppPurchaseComponent_GetItemsDetailsFailure__DelegateSignature_Params
{
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor
struct UMagicLeapHMDFunctionLibrary_SetStabilizationDepthActor_Params
{
	class AActor**                                     InStabilizationDepthActor;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetFocusActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor
struct UMagicLeapHMDFunctionLibrary_SetFocusActor_Params
{
	class AActor**                                     InFocusActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetStabilizationActor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation
struct UMagicLeapHMDFunctionLibrary_SetBaseRotation_Params
{
	struct FRotator*                                   InBaseRotation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition
struct UMagicLeapHMDFunctionLibrary_SetBasePosition_Params
{
	struct FVector*                                    InBasePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation
struct UMagicLeapHMDFunctionLibrary_SetBaseOrientation_Params
{
	struct FQuat*                                      InBaseOrientation;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady
struct UMagicLeapHMDFunctionLibrary_SetAppReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD
struct UMagicLeapHMDFunctionLibrary_IsRunningOnMagicLeapHMD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionRevision_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMinor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersionMajor_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion
struct UMagicLeapHMDFunctionLibrary_GetMLSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingState_Params
{
	struct FMagicLeapHeadTrackingState                 State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents
struct UMagicLeapHMDFunctionLibrary_GetHeadTrackingMapEvents_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks
struct UMagicLeapMeshBlockSelectorInterface_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo*                 NewMeshInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeap.MeshTrackerComponent.SelectMeshBlocks
struct UMeshTrackerComponent_SelectMeshBlocks_Params
{
	struct FMagicLeapTrackingMeshInfo*                 NewMeshInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FMagicLeapMeshBlockRequest>          RequestedMesh;                                            // (Parm, OutParm, ZeroConstructor)
};

// DelegateFunction MagicLeap.MeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature
struct UMeshTrackerComponent_OnMeshTrackerUpdated__DelegateSignature_Params
{
	struct FGuid*                                      ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>*                            Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>*                                       Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>*                            Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>*                                     Confidence;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeap.MeshTrackerComponent.GetNumQueuedBlockUpdates
struct UMeshTrackerComponent_GetNumQueuedBlockUpdates_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.DisconnectMRMesh
struct UMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent**                           InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.DisconnectBlockSelector
struct UMeshTrackerComponent_DisconnectBlockSelector_Params
{
};

// Function MagicLeap.MeshTrackerComponent.ConnectMRMesh
struct UMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent**                           InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MagicLeap.MeshTrackerComponent.ConnectBlockSelector
struct UMeshTrackerComponent_ConnectBlockSelector_Params
{
	TScriptInterface<class UMagicLeapMeshBlockSelectorInterface>* Selector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast
struct UMagicLeapRaycastComponent_RequestRaycast_Params
{
	struct FMagicLeapRaycastQueryParams*               RequestParams;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate*                            ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature
struct UMagicLeapRaycastComponent_RaycastResultDelegate__DelegateSignature_Params
{
	struct FMagicLeapRaycastHitResult*                 HitResult;                                                // (Parm)
};

// Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams
struct UMagicLeapRaycastFunctionLibrary_MakeRaycastQueryParams_Params
{
	struct FVector*                                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    UpVector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HorizontalFovDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CollideWithUnobserved;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UserData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMagicLeapRaycastQueryParams                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
