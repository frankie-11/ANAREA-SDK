#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DungeonBuilderRuntime.ECellTopology
enum class ECellTopology : uint8_t
{
	ECellTopology__None            = 0,
	ECellTopology__Edge            = 1,
	ECellTopology__ExternalCorner  = 2,
	ECellTopology__DeadEnd         = 3,
	ECellTopology__Bridge          = 4,
	ECellTopology__Isolated        = 5,
	ECellTopology__ECellTopology_MAX = 6
};


// Enum DungeonBuilderRuntime.EUniqueCellDirections4
enum class EUniqueCellDirections4 : uint8_t
{
	EUniqueCellDirections4__None   = 0,
	EUniqueCellDirections4__Up     = 1,
	EUniqueCellDirections4__Right  = 2,
	EUniqueCellDirections4__Down   = 3,
	EUniqueCellDirections4__Left   = 4,
	EUniqueCellDirections4__EUniqueCellDirections4_MAX = 5
};


// Enum DungeonBuilderRuntime.EUniqueCellDirections8
enum class EUniqueCellDirections8 : uint8_t
{
	EUniqueCellDirections8__None   = 0,
	EUniqueCellDirections8__Up     = 1,
	EUniqueCellDirections8__Up_Right = 2,
	EUniqueCellDirections8__Right  = 3,
	EUniqueCellDirections8__Right_Down = 4,
	EUniqueCellDirections8__Down   = 5,
	EUniqueCellDirections8__Down_Left = 6,
	EUniqueCellDirections8__Left   = 7,
	EUniqueCellDirections8__Left_Up = 8,
	EUniqueCellDirections8__EUniqueCellDirections8_MAX = 9
};


// Enum DungeonBuilderRuntime.ECellDirections8
enum class ECellDirections8 : uint8_t
{
	ECellDirections8__None         = 0,
	ECellDirections8__Up           = 1,
	ECellDirections8__Up_Right     = 2,
	ECellDirections8__Right        = 3,
	ECellDirections8__Right_Down   = 4,
	ECellDirections8__Down         = 5,
	ECellDirections8__Down_Left    = 6,
	ECellDirections8__Left         = 7,
	ECellDirections8__Left_Up      = 8,
	ECellDirections8__ECellDirections8_MAX = 9
};


// Enum DungeonBuilderRuntime.ECellDirections4
enum class ECellDirections4 : uint8_t
{
	ECellDirections4__None         = 0,
	ECellDirections4__Up           = 1,
	ECellDirections4__Right        = 2,
	ECellDirections4__Down         = 3,
	ECellDirections4__Left         = 4,
	ECellDirections4__ECellDirections4_MAX = 5
};


// Enum DungeonBuilderRuntime.ECellDiagonalDirections
enum class ECellDiagonalDirections : uint8_t
{
	ECellDiagonalDirections__None  = 0,
	ECellDiagonalDirections__Up_Right = 1,
	ECellDiagonalDirections__Right_Down = 2,
	ECellDiagonalDirections__Down_Left = 3,
	ECellDiagonalDirections__Left_Up = 4,
	ECellDiagonalDirections__ECellDiagonalDirections_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DungeonBuilderRuntime.CellInfos
// 0x002C
struct FCellInfos
{
	ECellDiagonalDirections                            ExternalCornerDirs;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECellDiagonalDirections                            InternalCornerDirs;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NeighborCount;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECellDirections4                                   NeighborDirs;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECellDirections4                                   EmptyDirs;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECellTopology                                      Topology;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	ECellDirections8                                   OpenDirs;                                                 // 0x000B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections8                             MainDir;                                                  // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CellCategory;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CellGroupName;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CellTag;                                                  // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CellGroupID;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DungeonBuilderRuntime.CellsArray
// 0x0018
struct FCellsArray
{
	TArray<struct FCellInfos>                          Cells;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       LayerName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct DungeonBuilderRuntime.CellsLayerArray
// 0x0018
struct FCellsLayerArray
{
	TArray<struct FCellsArray>                         Layers;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                LevelIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DungeonBuilderRuntime.DungeonLayerInfos
// 0x000C
struct FDungeonLayerInfos
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsVisible;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DungeonBuilderRuntime.DungeonInstanceCellData
// 0x0020
struct FDungeonInstanceCellData
{
	TArray<class AActor*>                              ActorsInCell;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<class USceneComponent*>                     ComponentsInCell;                                         // 0x0010(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.DungeonInstanceLayerData
// 0x0010
struct FDungeonInstanceLayerData
{
	TArray<struct FDungeonInstanceCellData>            LayersDatas;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.DungeonInstanceFloorData
// 0x0018
struct FDungeonInstanceFloorData
{
	TArray<struct FDungeonInstanceLayerData>           FloorDatas;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                FloorIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DungeonBuilderRuntime.CellIdx2D
// 0x0008
struct FCellIdx2D
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct DungeonBuilderRuntime.Offset2D
// 0x0008
struct FOffset2D
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct DungeonBuilderRuntime.MovedCells_PerLayer
// 0x0050
struct FMovedCells_PerLayer
{
	TMap<int, struct FCellInfos>                       Cells;                                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.MovedCells_PerLevel
// 0x0050
struct FMovedCells_PerLevel
{
	TMap<int, struct FMovedCells_PerLayer>             CellsPerLayer;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.MovedCells
// 0x0050
struct FMovedCells
{
	TMap<int, struct FMovedCells_PerLevel>             CellsPerLevel;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.CellsSelection_PerLayer
// 0x0050
struct FCellsSelection_PerLayer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty DungeonBuilderRuntime.CellsSelection_PerLayer.CellIndices
};

// ScriptStruct DungeonBuilderRuntime.CellsSelection_PerLevel
// 0x0050
struct FCellsSelection_PerLevel
{
	TMap<int, struct FCellsSelection_PerLayer>         CellsPerLayer;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.CellsSelection
// 0x0050
struct FCellsSelection
{
	TMap<int, struct FCellsSelection_PerLevel>         CellsPerLevel;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct DungeonBuilderRuntime.CellPaintSettings
// 0x0038
struct FCellPaintSettings
{
	unsigned char                                      EditCellCategory;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CellCategory;                                             // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditCellGroupName;                                        // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CellGroupName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditCellTag;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CellTag;                                                  // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditOpenDirs;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      OpenDirs;                                                 // 0x0025(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditMainDir;                                              // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	EUniqueCellDirections8                             MainDir;                                                  // 0x0027(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EditCellGroupID;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                CellGroupID;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ForceEditOneProperty;                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
