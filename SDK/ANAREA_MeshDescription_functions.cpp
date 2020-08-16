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

// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// struct FVector*                Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UMeshDescriptionBase::SetVertexPosition(struct FVertexID* VertexID, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetVertexPosition");

	UMeshDescriptionBase_SetVertexPosition_Params params;
	params.VertexID = VertexID;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// int*                           PerimeterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexInstanceID*      VertexInstanceID               (Parm)

void UMeshDescriptionBase::SetPolygonVertexInstance(struct FPolygonID* PolygonID, int* PerimeterIndex, struct FVertexInstanceID* VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance");

	UMeshDescriptionBase_SetPolygonVertexInstance_Params params;
	params.PolygonID = PolygonID;
	params.PerimeterIndex = PerimeterIndex;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)

void UMeshDescriptionBase::SetPolygonPolygonGroup(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup");

	UMeshDescriptionBase_SetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)

void UMeshDescriptionBase::ReversePolygonFacing(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing");

	UMeshDescriptionBase_ReversePolygonFacing_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewVertices            (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewVertices(int* NumberOfNewVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertices");

	UMeshDescriptionBase_ReserveNewVertices_Params params;
	params.NumberOfNewVertices = NumberOfNewVertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewVertexInstances     (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewVertexInstances(int* NumberOfNewVertexInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances");

	UMeshDescriptionBase_ReserveNewVertexInstances_Params params;
	params.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewTriangles           (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewTriangles(int* NumberOfNewTriangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles");

	UMeshDescriptionBase_ReserveNewTriangles_Params params;
	params.NumberOfNewTriangles = NumberOfNewTriangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewPolygons            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewPolygons(int* NumberOfNewPolygons)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons");

	UMeshDescriptionBase_ReserveNewPolygons_Params params;
	params.NumberOfNewPolygons = NumberOfNewPolygons;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewPolygonGroups       (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewPolygonGroups(int* NumberOfNewPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups");

	UMeshDescriptionBase_ReserveNewPolygonGroups_Params params;
	params.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           NumberOfNewEdges               (Parm, ZeroConstructor, IsPlainOldData)

void UMeshDescriptionBase::ReserveNewEdges(int* NumberOfNewEdges)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ReserveNewEdges");

	UMeshDescriptionBase_ReserveNewEdges_Params params;
	params.NumberOfNewEdges = NumberOfNewEdges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsVertexValid(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexValid");

	UMeshDescriptionBase_IsVertexValid_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsVertexOrphaned(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned");

	UMeshDescriptionBase_IsVertexOrphaned_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsVertexInstanceValid(struct FVertexInstanceID* VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid");

	UMeshDescriptionBase_IsVertexInstanceValid_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsTriangleValid(struct FTriangleID* TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTriangleValid");

	UMeshDescriptionBase_IsTriangleValid_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsTrianglePartOfNgon(struct FTriangleID* TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon");

	UMeshDescriptionBase_IsTrianglePartOfNgon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsPolygonValid(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonValid");

	UMeshDescriptionBase_IsPolygonValid_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsPolygonGroupValid(struct FPolygonGroupID* PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid");

	UMeshDescriptionBase_IsPolygonGroupValid_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEmpty");

	UMeshDescriptionBase_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsEdgeValid(struct FEdgeID* EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeValid");

	UMeshDescriptionBase_IsEdgeValid_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// struct FPolygonID*             PolygonID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(struct FEdgeID* EdgeID, struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon");

	UMeshDescriptionBase_IsEdgeInternalToPolygon_Params params;
	params.EdgeID = EdgeID;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMeshDescriptionBase::IsEdgeInternal(struct FEdgeID* EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.IsEdgeInternal");

	UMeshDescriptionBase_IsEdgeInternal_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexVertexInstances(struct FVertexID* VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances");

	UMeshDescriptionBase_GetVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UMeshDescriptionBase::GetVertexPosition(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPosition");

	UMeshDescriptionBase_GetVertexPosition_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID0                      (Parm)
// struct FVertexID*              VertexID1                      (Parm)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEdgeID UMeshDescriptionBase::GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge");

	UMeshDescriptionBase_GetVertexPairEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex");

	UMeshDescriptionBase_GetVertexInstanceVertex_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID0              (Parm)
// struct FVertexInstanceID*      VertexInstanceID1              (Parm)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(struct FVertexInstanceID* VertexInstanceID0, struct FVertexInstanceID* VertexInstanceID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge");

	UMeshDescriptionBase_GetVertexInstancePairEdge_Params params;
	params.VertexInstanceID0 = VertexInstanceID0;
	params.VertexInstanceID1 = VertexInstanceID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// struct FVertexID*              VertexID                       (Parm)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(struct FTriangleID* TriangleID, struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex");

	UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params params;
	params.TriangleID = TriangleID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// struct FVertexID*              VertexID                       (Parm)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex");

	UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params params;
	params.PolygonID = PolygonID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles");

	UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons");

	UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexConnectedTriangles(struct FVertexID* VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles");

	UMeshDescriptionBase_GetVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexConnectedPolygons(struct FVertexID* VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons");

	UMeshDescriptionBase_GetVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexConnectedEdges(struct FVertexID* VertexID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges");

	UMeshDescriptionBase_GetVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// TArray<struct FVertexID>       OutAdjacentVertexIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetVertexAdjacentVertices(struct FVertexID* VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices");

	UMeshDescriptionBase_GetVertexAdjacentVertices_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetTriangleVertices(struct FTriangleID* TriangleID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertices");

	UMeshDescriptionBase_GetTriangleVertices_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetTriangleVertexInstances(struct FTriangleID* TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances");

	UMeshDescriptionBase_GetTriangleVertexInstances_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(struct FTriangleID* TriangleID, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance");

	UMeshDescriptionBase_GetTriangleVertexInstance_Params params;
	params.TriangleID = TriangleID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(struct FTriangleID* TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup");

	UMeshDescriptionBase_GetTrianglePolygonGroup_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPolygonID UMeshDescriptionBase::GetTrianglePolygon(struct FTriangleID* TriangleID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon");

	UMeshDescriptionBase_GetTrianglePolygon_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetTriangleEdges(struct FTriangleID* TriangleID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleEdges");

	UMeshDescriptionBase_GetTriangleEdges_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// TArray<struct FTriangleID>     OutTriangleIDs                 (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(struct FTriangleID* TriangleID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles");

	UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonVertices(struct FPolygonID* PolygonID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertices");

	UMeshDescriptionBase_GetPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FVertexInstanceID> OutVertexInstanceIDs           (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonVertexInstances(struct FPolygonID* PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances");

	UMeshDescriptionBase_GetPolygonVertexInstances_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexInstanceIDs != nullptr)
		*OutVertexInstanceIDs = params.OutVertexInstanceIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FTriangleID>     OutTriangleIDs                 (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonTriangles(struct FPolygonID* PolygonID, TArray<struct FTriangleID>* OutTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles");

	UMeshDescriptionBase_GetPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTriangleIDs != nullptr)
		*OutTriangleIDs = params.OutTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup");

	UMeshDescriptionBase_GetPolygonPolygonGroup_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges");

	UMeshDescriptionBase_GetPolygonPerimeterEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FEdgeID>         OutEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonInternalEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges");

	UMeshDescriptionBase_GetPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEdgeIDs != nullptr)
		*OutEdgeIDs = params.OutEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// TArray<struct FPolygonID>      OutPolygonIDs                  (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons");

	UMeshDescriptionBase_GetPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FPolygonID>      OutPolygonIDs                  (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, TArray<struct FPolygonID>* OutPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons");

	UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPolygonIDs != nullptr)
		*OutPolygonIDs = params.OutPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexVertexInstances(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances");

	UMeshDescriptionBase_GetNumVertexVertexInstances_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles");

	UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons");

	UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexConnectedTriangles(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles");

	UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexConnectedPolygons(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons");

	UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumVertexConnectedEdges(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges");

	UMeshDescriptionBase_GetNumVertexConnectedEdges_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumPolygonVertices(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices");

	UMeshDescriptionBase_GetNumPolygonVertices_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumPolygonTriangles(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles");

	UMeshDescriptionBase_GetNumPolygonTriangles_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumPolygonInternalEdges(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges");

	UMeshDescriptionBase_GetNumPolygonInternalEdges_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons");

	UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumEdgeConnectedTriangles(struct FEdgeID* EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles");

	UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMeshDescriptionBase::GetNumEdgeConnectedPolygons(struct FEdgeID* EdgeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons");

	UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (ConstParm, Parm)
// TArray<struct FVertexID>       OutVertexIDs                   (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetEdgeVertices(struct FEdgeID* EdgeID, TArray<struct FVertexID>* OutVertexIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertices");

	UMeshDescriptionBase_GetEdgeVertices_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVertexIDs != nullptr)
		*OutVertexIDs = params.OutVertexIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// int*                           VertexNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexID UMeshDescriptionBase::GetEdgeVertex(struct FEdgeID* EdgeID, int* VertexNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeVertex");

	UMeshDescriptionBase_GetEdgeVertex_Params params;
	params.EdgeID = EdgeID;
	params.VertexNumber = VertexNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// TArray<struct FTriangleID>     OutConnectedTriangleIDs        (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetEdgeConnectedTriangles(struct FEdgeID* EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles");

	UMeshDescriptionBase_GetEdgeConnectedTriangles_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedTriangleIDs != nullptr)
		*OutConnectedTriangleIDs = params.OutConnectedTriangleIDs;
}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// TArray<struct FPolygonID>      OutConnectedPolygonIDs         (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons");

	UMeshDescriptionBase_GetEdgeConnectedPolygons_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
}


// Function MeshDescription.MeshDescriptionBase.Empty
// (Final, Native, Public, BlueprintCallable)

void UMeshDescriptionBase::Empty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.Empty");

	UMeshDescriptionBase_Empty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// TArray<struct FVertexID>       OrphanedVertices               (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::DeleteVertexInstance(struct FVertexInstanceID* VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance");

	UMeshDescriptionBase_DeleteVertexInstance_Params params;
	params.VertexInstanceID = VertexInstanceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)

void UMeshDescriptionBase::DeleteVertex(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteVertex");

	UMeshDescriptionBase_DeleteVertex_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// TArray<struct FEdgeID>         OrphanedEdges                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroupsPtr       (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::DeleteTriangle(struct FTriangleID* TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteTriangle");

	UMeshDescriptionBase_DeleteTriangle_Params params;
	params.TriangleID = TriangleID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroupsPtr != nullptr)
		*OrphanedPolygonGroupsPtr = params.OrphanedPolygonGroupsPtr;
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)

void UMeshDescriptionBase::DeletePolygonGroup(struct FPolygonGroupID* PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup");

	UMeshDescriptionBase_DeletePolygonGroup_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// TArray<struct FEdgeID>         OrphanedEdges                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FVertexInstanceID> OrphanedVertexInstances        (Parm, OutParm, ZeroConstructor)
// TArray<struct FPolygonGroupID> OrphanedPolygonGroups          (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::DeletePolygon(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeletePolygon");

	UMeshDescriptionBase_DeletePolygon_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedEdges != nullptr)
		*OrphanedEdges = params.OrphanedEdges;
	if (OrphanedVertexInstances != nullptr)
		*OrphanedVertexInstances = params.OrphanedVertexInstances;
	if (OrphanedPolygonGroups != nullptr)
		*OrphanedPolygonGroups = params.OrphanedPolygonGroups;
}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// TArray<struct FVertexID>       OrphanedVertices               (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::DeleteEdge(struct FEdgeID* EdgeID, TArray<struct FVertexID>* OrphanedVertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.DeleteEdge");

	UMeshDescriptionBase_DeleteEdge_Params params;
	params.EdgeID = EdgeID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrphanedVertices != nullptr)
		*OrphanedVertices = params.OrphanedVertices;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)

void UMeshDescriptionBase::CreateVertexWithID(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexWithID");

	UMeshDescriptionBase_CreateVertexWithID_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID*      VertexInstanceID               (Parm)
// struct FVertexID*              VertexID                       (Parm)

void UMeshDescriptionBase::CreateVertexInstanceWithID(struct FVertexInstanceID* VertexInstanceID, struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID");

	UMeshDescriptionBase_CreateVertexInstanceWithID_Params params;
	params.VertexInstanceID = VertexInstanceID;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID                       (Parm)
// struct FVertexInstanceID       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(struct FVertexID* VertexID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertexInstance");

	UMeshDescriptionBase_CreateVertexInstance_Params params;
	params.VertexID = VertexID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVertexID UMeshDescriptionBase::CreateVertex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateVertex");

	UMeshDescriptionBase_CreateVertex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTriangleID*            TriangleID                     (Parm)
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// TArray<struct FVertexInstanceID>* VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::CreateTriangleWithID(struct FTriangleID* TriangleID, struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID");

	UMeshDescriptionBase_CreateTriangleWithID_Params params;
	params.TriangleID = TriangleID;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// TArray<struct FVertexInstanceID>* VertexInstanceIDs              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)
// struct FTriangleID             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTriangleID UMeshDescriptionBase::CreateTriangle(struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateTriangle");

	UMeshDescriptionBase_CreateTriangle_Params params;
	params.PolygonGroupID = PolygonGroupID;
	params.VertexInstanceIDs = VertexInstanceIDs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)

void UMeshDescriptionBase::CreatePolygonWithID(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID");

	UMeshDescriptionBase_CreatePolygonWithID_Params params;
	params.PolygonID = PolygonID;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)

void UMeshDescriptionBase::CreatePolygonGroupWithID(struct FPolygonGroupID* PolygonGroupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID");

	UMeshDescriptionBase_CreatePolygonGroupWithID_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup");

	UMeshDescriptionBase_CreatePolygonGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID*        PolygonGroupID                 (Parm)
// TArray<struct FVertexInstanceID> VertexInstanceIDs              (Parm, OutParm, ZeroConstructor)
// TArray<struct FEdgeID>         NewEdgeIDs                     (Parm, OutParm, ZeroConstructor)
// struct FPolygonID              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPolygonID UMeshDescriptionBase::CreatePolygon(struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreatePolygon");

	UMeshDescriptionBase_CreatePolygon_Params params;
	params.PolygonGroupID = PolygonGroupID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VertexInstanceIDs != nullptr)
		*VertexInstanceIDs = params.VertexInstanceIDs;
	if (NewEdgeIDs != nullptr)
		*NewEdgeIDs = params.NewEdgeIDs;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID*                EdgeID                         (Parm)
// struct FVertexID*              VertexID0                      (Parm)
// struct FVertexID*              VertexID1                      (Parm)

void UMeshDescriptionBase::CreateEdgeWithID(struct FEdgeID* EdgeID, struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID");

	UMeshDescriptionBase_CreateEdgeWithID_Params params;
	params.EdgeID = EdgeID;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID*              VertexID0                      (Parm)
// struct FVertexID*              VertexID1                      (Parm)
// struct FEdgeID                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEdgeID UMeshDescriptionBase::CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.CreateEdge");

	UMeshDescriptionBase_CreateEdge_Params params;
	params.VertexID0 = VertexID0;
	params.VertexID1 = VertexID1;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID*             PolygonID                      (Parm)

void UMeshDescriptionBase::ComputePolygonTriangulation(struct FPolygonID* PolygonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation");

	UMeshDescriptionBase_ComputePolygonTriangulation_Params params;
	params.PolygonID = PolygonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
