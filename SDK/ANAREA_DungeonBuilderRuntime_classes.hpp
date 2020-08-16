#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DungeonBuilderRuntime.DungeonBuilderComponent
// 0x0178 (0x0228 - 0x00B0)
class UDungeonBuilderComponent : public UActorComponent
{
public:
	int                                                ColCount;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowCount;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FCellsLayerArray>                 LayersPerLevel;                                           // 0x00B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) UNKNOWN PROPERTY: SetProperty DungeonBuilderRuntime.DungeonBuilderComponent.LayoutCategory
	unsigned char                                      UnknownData01[0x50];                                      // 0x0158(0x0050) UNKNOWN PROPERTY: SetProperty DungeonBuilderRuntime.DungeonBuilderComponent.LayoutTags
	TArray<struct FDungeonLayerInfos>                  LayerInfos;                                               // 0x01A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FDungeonInstanceFloorData>        CellsDatasPerFloor;                                       // 0x01B8(0x0050) (ZeroConstructor)
	int                                                Levelheight;                                              // 0x0208(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CellSize;                                                 // 0x020C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UseDungeonOrientationForCells;                            // 0x0210(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuildingLogicClass;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDungeonBuildingLogic*                       CurrentPaintedLogic;                                      // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DungeonBuilderRuntime.DungeonBuilderComponent");
		return ptr;
	}


	void SpawnAndRegisterActor(int* floorIdx, int* layerIdx, int* cellIdx, class UClass** actorClass, struct FTransform* actorTransform);
	void RegisterSpawnedContent(int* floorIdx, int* layerIdx, int* cellIdx, TArray<class AActor*>* actorsToRegister, TArray<class USceneComponent*>* componentsToRegister);
	bool IsCellIdxValid(int* cellIdx);
	bool IsCellIdx2DValid(struct FCellIdx2D* CellIdx2D);
	bool IsCellEmpty(int* levelIdx, int* layerIdx, int* cellIdx);
	int Idx2DToIdx1D(struct FCellIdx2D* CellIdx2D);
	struct FCellIdx2D Idx1DToIdx2D(int* idx);
	struct FName GetLayerNameFromIndex(int* layerIdx);
	int GetLayerIndexFromName(struct FName* LayerName);
	bool GetCellLocationAndRotation(int* floorIdx, int* cellIdx, struct FVector* outCellLocation, struct FRotator* outCellRotation);
	bool GetCellLocation(int* floorIdx, int* cellIdx, struct FVector* outCellLocation);
	bool GetCellInfos(int* levelIdx, int* layerIdx, int* cellIdx, struct FCellInfos* outCellInfos);
	int GetCellIdxInDirection8(int* levelIdx, int* layerIdx, int* cellIdx, EUniqueCellDirections8* uniqueDirection8);
	int GetCellIdxInDirection4(int* levelIdx, int* layerIdx, int* cellIdx, EUniqueCellDirections4* uniqueDirection4);
	void Get8NeighborCells(int* levelIdx, int* layerIdx, int* cellIdx, bool* sameGroup, TArray<int>* outArray);
	void Get4NeighborCells(int* levelIdx, int* layerIdx, int* cellIdx, bool* sameGroup, TArray<int>* outArray);
};


// Class DungeonBuilderRuntime.DungeonBuildingLogic
// 0x0000 (0x0028 - 0x0028)
class UDungeonBuildingLogic : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DungeonBuilderRuntime.DungeonBuildingLogic");
		return ptr;
	}


	void SpawnContentInCellBP(class UDungeonBuilderComponent** DungeonBuilder, int* floorIdx, int* layerIdx, int* cellIdx);
	void RegisterSpawnedContent(class UDungeonBuilderComponent** DungeonBuilder, int* floorIdx, int* layerIdx, int* cellIdx, TArray<class AActor*>* actorsToRegister, TArray<class USceneComponent*>* componentsToRegister);
};


// Class DungeonBuilderRuntime.DungeonInstanceActor
// 0x0008 (0x0220 - 0x0218)
class ADungeonInstanceActor : public AActor
{
public:
	class UDungeonBuilderComponent*                    DungeonBuilder;                                           // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DungeonBuilderRuntime.DungeonInstanceActor");
		return ptr;
	}

};


// Class DungeonBuilderRuntime.DungeonLayoutUtils
// 0x0000 (0x0028 - 0x0028)
class UDungeonLayoutUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DungeonBuilderRuntime.DungeonLayoutUtils");
		return ptr;
	}


	ECellDirections8 STATIC_NextCellDir8(ECellDirections8* dir);
	ECellDirections8 STATIC_NextCellDir4(ECellDirections8* dir);
	ECellDirections8 STATIC_LastCellDir8();
	ECellDirections8 STATIC_LastCellDir4();
	void STATIC_GetOffsetsFromDirections(ECellDirections8* directions, TArray<struct FVector>* outOffsets);
	struct FVector STATIC_GetOffsetFromDirection8(EUniqueCellDirections8* uniqueDirection8);
	struct FVector STATIC_GetOffsetFromDirection4(EUniqueCellDirections4* uniqueDirection4);
	TArray<EUniqueCellDirections8> STATIC_GetInternalCornersDirsArray(struct FCellInfos* CellInfos);
	TArray<EUniqueCellDirections8> STATIC_GetExternalCornersDirsArray(struct FCellInfos* CellInfos);
	void STATIC_GetDeltaIdxFromDirections(ECellDirections8* directions, TArray<struct FOffset2D>* outOffsets);
	struct FOffset2D STATIC_GetDeltaIdxFromDirection8(EUniqueCellDirections8* uniqueDirection8);
	struct FOffset2D STATIC_GetDeltaIdxFromDirection4(EUniqueCellDirections4* uniqueDirection4);
	TArray<EUniqueCellDirections8> STATIC_GetArrayOfCellDirections8(ECellDirections8* cellDirections);
	TArray<EUniqueCellDirections4> STATIC_GetArrayOfCellDirections4(ECellDirections4* cellDirections);
	ECellDirections8 STATIC_FirstCellDir();
	bool STATIC_DoesCellsBelongsToSameGroup(struct FCellInfos* firstCell, struct FCellInfos* secondCell);
	EUniqueCellDirections4 STATIC_CastUniqueCellDirection8ToUniqueCellDirection4(EUniqueCellDirections8* uniqueCellDirection8);
	EUniqueCellDirections8 STATIC_CastUniqueCellDirection4ToUniqueCellDirection8(EUniqueCellDirections4* uniqueCellDirection4);
	ECellDirections4 STATIC_CastCellDirection8ToCellDirection4(ECellDirections8* cellDirection8);
	ECellDirections8 STATIC_CastCellDirection4ToCellDirection8(ECellDirections4* cellDirection4);
	ECellDirections8 STATIC_CastCellDiagonalDirectionToCellDirection8(ECellDiagonalDirections* diagonalDirection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
