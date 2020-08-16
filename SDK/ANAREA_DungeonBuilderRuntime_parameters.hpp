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

// Function DungeonBuilderRuntime.DungeonBuilderComponent.SpawnAndRegisterActor
struct UDungeonBuilderComponent_SpawnAndRegisterActor_Params
{
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     actorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 actorTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.RegisterSpawnedContent
struct UDungeonBuilderComponent_RegisterSpawnedContent_Params
{
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             actorsToRegister;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USceneComponent*>*                    componentsToRegister;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdxValid
struct UDungeonBuilderComponent_IsCellIdxValid_Params
{
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellIdx2DValid
struct UDungeonBuilderComponent_IsCellIdx2DValid_Params
{
	struct FCellIdx2D*                                 CellIdx2D;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.IsCellEmpty
struct UDungeonBuilderComponent_IsCellEmpty_Params
{
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx2DToIdx1D
struct UDungeonBuilderComponent_Idx2DToIdx1D_Params
{
	struct FCellIdx2D*                                 CellIdx2D;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.Idx1DToIdx2D
struct UDungeonBuilderComponent_Idx1DToIdx2D_Params
{
	int*                                               idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCellIdx2D                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerNameFromIndex
struct UDungeonBuilderComponent_GetLayerNameFromIndex_Params
{
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetLayerIndexFromName
struct UDungeonBuilderComponent_GetLayerIndexFromName_Params
{
	struct FName*                                      LayerName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocationAndRotation
struct UDungeonBuilderComponent_GetCellLocationAndRotation_Params
{
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     outCellLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    outCellRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellLocation
struct UDungeonBuilderComponent_GetCellLocation_Params
{
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     outCellLocation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellInfos
struct UDungeonBuilderComponent_GetCellInfos_Params
{
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCellInfos                                  outCellInfos;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection8
struct UDungeonBuilderComponent_GetCellIdxInDirection8_Params
{
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections8*                            uniqueDirection8;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.GetCellIdxInDirection4
struct UDungeonBuilderComponent_GetCellIdxInDirection4_Params
{
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections4*                            uniqueDirection4;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.Get8NeighborCells
struct UDungeonBuilderComponent_Get8NeighborCells_Params
{
	TArray<int>                                        outArray;                                                 // (Parm, OutParm, ZeroConstructor)
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              sameGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuilderComponent.Get4NeighborCells
struct UDungeonBuilderComponent_Get4NeighborCells_Params
{
	TArray<int>                                        outArray;                                                 // (Parm, OutParm, ZeroConstructor)
	int*                                               levelIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              sameGroup;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuildingLogic.SpawnContentInCellBP
struct UDungeonBuildingLogic_SpawnContentInCellBP_Params
{
	class UDungeonBuilderComponent**                   DungeonBuilder;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonBuildingLogic.RegisterSpawnedContent
struct UDungeonBuildingLogic_RegisterSpawnedContent_Params
{
	class UDungeonBuilderComponent**                   DungeonBuilder;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               floorIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               layerIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               cellIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             actorsToRegister;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USceneComponent*>*                    componentsToRegister;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir8
struct UDungeonLayoutUtils_NextCellDir8_Params
{
	ECellDirections8*                                  dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.NextCellDir4
struct UDungeonLayoutUtils_NextCellDir4_Params
{
	ECellDirections8*                                  dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir8
struct UDungeonLayoutUtils_LastCellDir8_Params
{
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.LastCellDir4
struct UDungeonLayoutUtils_LastCellDir4_Params
{
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetsFromDirections
struct UDungeonLayoutUtils_GetOffsetsFromDirections_Params
{
	ECellDirections8*                                  directions;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             outOffsets;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection8
struct UDungeonLayoutUtils_GetOffsetFromDirection8_Params
{
	EUniqueCellDirections8*                            uniqueDirection8;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetOffsetFromDirection4
struct UDungeonLayoutUtils_GetOffsetFromDirection4_Params
{
	EUniqueCellDirections4*                            uniqueDirection4;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetInternalCornersDirsArray
struct UDungeonLayoutUtils_GetInternalCornersDirsArray_Params
{
	struct FCellInfos*                                 CellInfos;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<EUniqueCellDirections8>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetExternalCornersDirsArray
struct UDungeonLayoutUtils_GetExternalCornersDirsArray_Params
{
	struct FCellInfos*                                 CellInfos;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<EUniqueCellDirections8>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirections
struct UDungeonLayoutUtils_GetDeltaIdxFromDirections_Params
{
	ECellDirections8*                                  directions;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FOffset2D>                           outOffsets;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection8
struct UDungeonLayoutUtils_GetDeltaIdxFromDirection8_Params
{
	EUniqueCellDirections8*                            uniqueDirection8;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOffset2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetDeltaIdxFromDirection4
struct UDungeonLayoutUtils_GetDeltaIdxFromDirection4_Params
{
	EUniqueCellDirections4*                            uniqueDirection4;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FOffset2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections8
struct UDungeonLayoutUtils_GetArrayOfCellDirections8_Params
{
	ECellDirections8*                                  cellDirections;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EUniqueCellDirections8>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.GetArrayOfCellDirections4
struct UDungeonLayoutUtils_GetArrayOfCellDirections4_Params
{
	ECellDirections4*                                  cellDirections;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EUniqueCellDirections4>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.FirstCellDir
struct UDungeonLayoutUtils_FirstCellDir_Params
{
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.DoesCellsBelongsToSameGroup
struct UDungeonLayoutUtils_DoesCellsBelongsToSameGroup_Params
{
	struct FCellInfos*                                 firstCell;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FCellInfos*                                 secondCell;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection8ToUniqueCellDirection4
struct UDungeonLayoutUtils_CastUniqueCellDirection8ToUniqueCellDirection4_Params
{
	EUniqueCellDirections8*                            uniqueCellDirection8;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections4                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastUniqueCellDirection4ToUniqueCellDirection8
struct UDungeonLayoutUtils_CastUniqueCellDirection4ToUniqueCellDirection8_Params
{
	EUniqueCellDirections4*                            uniqueCellDirection4;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections8                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection8ToCellDirection4
struct UDungeonLayoutUtils_CastCellDirection8ToCellDirection4_Params
{
	ECellDirections8*                                  cellDirection8;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ECellDirections4                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDirection4ToCellDirection8
struct UDungeonLayoutUtils_CastCellDirection4ToCellDirection8_Params
{
	ECellDirections4*                                  cellDirection4;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DungeonBuilderRuntime.DungeonLayoutUtils.CastCellDiagonalDirectionToCellDirection8
struct UDungeonLayoutUtils_CastCellDiagonalDirectionToCellDirection8_Params
{
	ECellDiagonalDirections*                           diagonalDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	ECellDirections8                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
