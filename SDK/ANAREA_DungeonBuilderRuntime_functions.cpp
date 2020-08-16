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

// Function DungeonBuilderRuntime.DungeonBuilderComponent.SpawnAndRegisterActor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 actorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             actorTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDungeonBuilderComponent::SpawnAndRegisterActor(int* floorIdx, int* layerIdx, int* cellIdx, class UClass** actorClass, struct FTransform* actorTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.SpawnAndRegisterActor");

	UDungeonBuilderComponent_SpawnAndRegisterActor_Params params;
	params.floorIdx = floorIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.actorClass = actorClass;
	params.actorTransform = actorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.RegisterSpawnedContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         actorsToRegister               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USceneComponent*>* componentsToRegister           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDungeonBuilderComponent::RegisterSpawnedContent(int* floorIdx, int* layerIdx, int* cellIdx, TArray<class AActor*>* actorsToRegister, TArray<class USceneComponent*>* componentsToRegister)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.RegisterSpawnedContent");

	UDungeonBuilderComponent_RegisterSpawnedContent_Params params;
	params.floorIdx = floorIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.actorsToRegister = actorsToRegister;
	params.componentsToRegister = componentsToRegister;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdxValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::IsCellIdxValid(int* cellIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdxValid");

	UDungeonBuilderComponent_IsCellIdxValid_Params params;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdx2DValid
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCellIdx2D*             CellIdx2D                      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::IsCellIdx2DValid(struct FCellIdx2D* CellIdx2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdx2DValid");

	UDungeonBuilderComponent_IsCellIdx2DValid_Params params;
	params.CellIdx2D = CellIdx2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::IsCellEmpty(int* levelIdx, int* layerIdx, int* cellIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellEmpty");

	UDungeonBuilderComponent_IsCellEmpty_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx2DToIdx1D
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCellIdx2D*             CellIdx2D                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDungeonBuilderComponent::Idx2DToIdx1D(struct FCellIdx2D* CellIdx2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx2DToIdx1D");

	UDungeonBuilderComponent_Idx2DToIdx1D_Params params;
	params.CellIdx2D = CellIdx2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx1DToIdx2D
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           idx                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FCellIdx2D              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCellIdx2D UDungeonBuilderComponent::Idx1DToIdx2D(int* idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx1DToIdx2D");

	UDungeonBuilderComponent_Idx1DToIdx2D_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerNameFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDungeonBuilderComponent::GetLayerNameFromIndex(int* layerIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerNameFromIndex");

	UDungeonBuilderComponent_GetLayerNameFromIndex_Params params;
	params.layerIdx = layerIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerIndexFromName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  LayerName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDungeonBuilderComponent::GetLayerIndexFromName(struct FName* LayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerIndexFromName");

	UDungeonBuilderComponent_GetLayerIndexFromName_Params params;
	params.LayerName = LayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 outCellLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                outCellRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::GetCellLocationAndRotation(int* floorIdx, int* cellIdx, struct FVector* outCellLocation, struct FRotator* outCellRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocationAndRotation");

	UDungeonBuilderComponent_GetCellLocationAndRotation_Params params;
	params.floorIdx = floorIdx;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCellLocation != nullptr)
		*outCellLocation = params.outCellLocation;
	if (outCellRotation != nullptr)
		*outCellRotation = params.outCellRotation;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 outCellLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::GetCellLocation(int* floorIdx, int* cellIdx, struct FVector* outCellLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocation");

	UDungeonBuilderComponent_GetCellLocation_Params params;
	params.floorIdx = floorIdx;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCellLocation != nullptr)
		*outCellLocation = params.outCellLocation;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellInfos
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FCellInfos              outCellInfos                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonBuilderComponent::GetCellInfos(int* levelIdx, int* layerIdx, int* cellIdx, struct FCellInfos* outCellInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellInfos");

	UDungeonBuilderComponent_GetCellInfos_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outCellInfos != nullptr)
		*outCellInfos = params.outCellInfos;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection8
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// EUniqueCellDirections8*        uniqueDirection8               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDungeonBuilderComponent::GetCellIdxInDirection8(int* levelIdx, int* layerIdx, int* cellIdx, EUniqueCellDirections8* uniqueDirection8)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection8");

	UDungeonBuilderComponent_GetCellIdxInDirection8_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.uniqueDirection8 = uniqueDirection8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection4
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// EUniqueCellDirections4*        uniqueDirection4               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDungeonBuilderComponent::GetCellIdxInDirection4(int* levelIdx, int* layerIdx, int* cellIdx, EUniqueCellDirections4* uniqueDirection4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection4");

	UDungeonBuilderComponent_GetCellIdxInDirection4_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.uniqueDirection4 = uniqueDirection4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.Get8NeighborCells
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    outArray                       (Parm, OutParm, ZeroConstructor)
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          sameGroup                      (Parm, ZeroConstructor, IsPlainOldData)

void UDungeonBuilderComponent::Get8NeighborCells(int* levelIdx, int* layerIdx, int* cellIdx, bool* sameGroup, TArray<int>* outArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.Get8NeighborCells");

	UDungeonBuilderComponent_Get8NeighborCells_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.sameGroup = sameGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outArray != nullptr)
		*outArray = params.outArray;
}


// Function DungeonBuilderRuntime.DungeonBuilderComponent.Get4NeighborCells
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    outArray                       (Parm, OutParm, ZeroConstructor)
// int*                           levelIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          sameGroup                      (Parm, ZeroConstructor, IsPlainOldData)

void UDungeonBuilderComponent::Get4NeighborCells(int* levelIdx, int* layerIdx, int* cellIdx, bool* sameGroup, TArray<int>* outArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuilderComponent.Get4NeighborCells");

	UDungeonBuilderComponent_Get4NeighborCells_Params params;
	params.levelIdx = levelIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.sameGroup = sameGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outArray != nullptr)
		*outArray = params.outArray;
}


// Function DungeonBuilderRuntime.DungeonBuildingLogic.SpawnContentInCellBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UDungeonBuilderComponent** DungeonBuilder                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UDungeonBuildingLogic::SpawnContentInCellBP(class UDungeonBuilderComponent** DungeonBuilder, int* floorIdx, int* layerIdx, int* cellIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuildingLogic.SpawnContentInCellBP");

	UDungeonBuildingLogic_SpawnContentInCellBP_Params params;
	params.DungeonBuilder = DungeonBuilder;
	params.floorIdx = floorIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonBuilderRuntime.DungeonBuildingLogic.RegisterSpawnedContent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDungeonBuilderComponent** DungeonBuilder                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           floorIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           layerIdx                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           cellIdx                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         actorsToRegister               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class USceneComponent*>* componentsToRegister           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDungeonBuildingLogic::RegisterSpawnedContent(class UDungeonBuilderComponent** DungeonBuilder, int* floorIdx, int* layerIdx, int* cellIdx, TArray<class AActor*>* actorsToRegister, TArray<class USceneComponent*>* componentsToRegister)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonBuildingLogic.RegisterSpawnedContent");

	UDungeonBuildingLogic_RegisterSpawnedContent_Params params;
	params.DungeonBuilder = DungeonBuilder;
	params.floorIdx = floorIdx;
	params.layerIdx = layerIdx;
	params.cellIdx = cellIdx;
	params.actorsToRegister = actorsToRegister;
	params.componentsToRegister = componentsToRegister;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8*              dir                            (Parm, ZeroConstructor, IsPlainOldData)
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_NextCellDir8(ECellDirections8* dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir8");

	UDungeonLayoutUtils_NextCellDir8_Params params;
	params.dir = dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8*              dir                            (Parm, ZeroConstructor, IsPlainOldData)
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_NextCellDir4(ECellDirections8* dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir4");

	UDungeonLayoutUtils_NextCellDir4_Params params;
	params.dir = dir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_LastCellDir8()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir8");

	UDungeonLayoutUtils_LastCellDir8_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_LastCellDir4()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir4");

	UDungeonLayoutUtils_LastCellDir4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetsFromDirections
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ECellDirections8*              directions                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         outOffsets                     (Parm, OutParm, ZeroConstructor)

void UDungeonLayoutUtils::STATIC_GetOffsetsFromDirections(ECellDirections8* directions, TArray<struct FVector>* outOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetsFromDirections");

	UDungeonLayoutUtils_GetOffsetsFromDirections_Params params;
	params.directions = directions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outOffsets != nullptr)
		*outOffsets = params.outOffsets;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection8
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EUniqueCellDirections8*        uniqueDirection8               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDungeonLayoutUtils::STATIC_GetOffsetFromDirection8(EUniqueCellDirections8* uniqueDirection8)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection8");

	UDungeonLayoutUtils_GetOffsetFromDirection8_Params params;
	params.uniqueDirection8 = uniqueDirection8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection4
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EUniqueCellDirections4*        uniqueDirection4               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDungeonLayoutUtils::STATIC_GetOffsetFromDirection4(EUniqueCellDirections4* uniqueDirection4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection4");

	UDungeonLayoutUtils_GetOffsetFromDirection4_Params params;
	params.uniqueDirection4 = uniqueDirection4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetInternalCornersDirsArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCellInfos*             CellInfos                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<EUniqueCellDirections8> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EUniqueCellDirections8> UDungeonLayoutUtils::STATIC_GetInternalCornersDirsArray(struct FCellInfos* CellInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetInternalCornersDirsArray");

	UDungeonLayoutUtils_GetInternalCornersDirsArray_Params params;
	params.CellInfos = CellInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetExternalCornersDirsArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCellInfos*             CellInfos                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<EUniqueCellDirections8> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EUniqueCellDirections8> UDungeonLayoutUtils::STATIC_GetExternalCornersDirsArray(struct FCellInfos* CellInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetExternalCornersDirsArray");

	UDungeonLayoutUtils_GetExternalCornersDirsArray_Params params;
	params.CellInfos = CellInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirections
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ECellDirections8*              directions                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOffset2D>       outOffsets                     (Parm, OutParm, ZeroConstructor)

void UDungeonLayoutUtils::STATIC_GetDeltaIdxFromDirections(ECellDirections8* directions, TArray<struct FOffset2D>* outOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirections");

	UDungeonLayoutUtils_GetDeltaIdxFromDirections_Params params;
	params.directions = directions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outOffsets != nullptr)
		*outOffsets = params.outOffsets;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUniqueCellDirections8*        uniqueDirection8               (Parm, ZeroConstructor, IsPlainOldData)
// struct FOffset2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOffset2D UDungeonLayoutUtils::STATIC_GetDeltaIdxFromDirection8(EUniqueCellDirections8* uniqueDirection8)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection8");

	UDungeonLayoutUtils_GetDeltaIdxFromDirection8_Params params;
	params.uniqueDirection8 = uniqueDirection8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUniqueCellDirections4*        uniqueDirection4               (Parm, ZeroConstructor, IsPlainOldData)
// struct FOffset2D               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FOffset2D UDungeonLayoutUtils::STATIC_GetDeltaIdxFromDirection4(EUniqueCellDirections4* uniqueDirection4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection4");

	UDungeonLayoutUtils_GetDeltaIdxFromDirection4_Params params;
	params.uniqueDirection4 = uniqueDirection4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8*              cellDirections                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<EUniqueCellDirections8> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EUniqueCellDirections8> UDungeonLayoutUtils::STATIC_GetArrayOfCellDirections8(ECellDirections8* cellDirections)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections8");

	UDungeonLayoutUtils_GetArrayOfCellDirections8_Params params;
	params.cellDirections = cellDirections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections4*              cellDirections                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<EUniqueCellDirections4> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<EUniqueCellDirections4> UDungeonLayoutUtils::STATIC_GetArrayOfCellDirections4(ECellDirections4* cellDirections)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections4");

	UDungeonLayoutUtils_GetArrayOfCellDirections4_Params params;
	params.cellDirections = cellDirections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.FirstCellDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_FirstCellDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.FirstCellDir");

	UDungeonLayoutUtils_FirstCellDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.DoesCellsBelongsToSameGroup
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCellInfos*             firstCell                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCellInfos*             secondCell                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDungeonLayoutUtils::STATIC_DoesCellsBelongsToSameGroup(struct FCellInfos* firstCell, struct FCellInfos* secondCell)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.DoesCellsBelongsToSameGroup");

	UDungeonLayoutUtils_DoesCellsBelongsToSameGroup_Params params;
	params.firstCell = firstCell;
	params.secondCell = secondCell;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection8ToUniqueCellDirection4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUniqueCellDirections8*        uniqueCellDirection8           (Parm, ZeroConstructor, IsPlainOldData)
// EUniqueCellDirections4         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUniqueCellDirections4 UDungeonLayoutUtils::STATIC_CastUniqueCellDirection8ToUniqueCellDirection4(EUniqueCellDirections8* uniqueCellDirection8)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection8ToUniqueCellDirection4");

	UDungeonLayoutUtils_CastUniqueCellDirection8ToUniqueCellDirection4_Params params;
	params.uniqueCellDirection8 = uniqueCellDirection8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection4ToUniqueCellDirection8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUniqueCellDirections4*        uniqueCellDirection4           (Parm, ZeroConstructor, IsPlainOldData)
// EUniqueCellDirections8         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUniqueCellDirections8 UDungeonLayoutUtils::STATIC_CastUniqueCellDirection4ToUniqueCellDirection8(EUniqueCellDirections4* uniqueCellDirection4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection4ToUniqueCellDirection8");

	UDungeonLayoutUtils_CastUniqueCellDirection4ToUniqueCellDirection8_Params params;
	params.uniqueCellDirection4 = uniqueCellDirection4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection8ToCellDirection4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections8*              cellDirection8                 (Parm, ZeroConstructor, IsPlainOldData)
// ECellDirections4               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections4 UDungeonLayoutUtils::STATIC_CastCellDirection8ToCellDirection4(ECellDirections8* cellDirection8)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection8ToCellDirection4");

	UDungeonLayoutUtils_CastCellDirection8ToCellDirection4_Params params;
	params.cellDirection8 = cellDirection8;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection4ToCellDirection8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDirections4*              cellDirection4                 (Parm, ZeroConstructor, IsPlainOldData)
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_CastCellDirection4ToCellDirection8(ECellDirections4* cellDirection4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection4ToCellDirection8");

	UDungeonLayoutUtils_CastCellDirection4ToCellDirection8_Params params;
	params.cellDirection4 = cellDirection4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDiagonalDirectionToCellDirection8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECellDiagonalDirections*       diagonalDirection              (Parm, ZeroConstructor, IsPlainOldData)
// ECellDirections8               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECellDirections8 UDungeonLayoutUtils::STATIC_CastCellDiagonalDirectionToCellDirection8(ECellDiagonalDirections* diagonalDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDiagonalDirectionToCellDirection8");

	UDungeonLayoutUtils_CastCellDiagonalDirectionToCellDirection8_Params params;
	params.diagonalDirection = diagonalDirection;

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
