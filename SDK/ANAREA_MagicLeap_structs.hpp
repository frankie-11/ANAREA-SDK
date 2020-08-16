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

// Enum MagicLeap.PurchaseType
enum class EPurchaseType : uint8_t
{
	PurchaseType__Consumable       = 0,
	PurchaseType__Nonconsumable    = 1,
	PurchaseType__Undefined        = 2,
	PurchaseType__PurchaseType_MAX = 3
};


// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t
{
	EMagicLeapMeshLOD__Minimum     = 0,
	EMagicLeapMeshLOD__Medium      = 1,
	EMagicLeapMeshLOD__Maximum     = 2,
	EMagicLeapMeshLOD__EMagicLeapMeshLOD_MAX = 3
};


// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t
{
	EMagicLeapMeshState__New       = 0,
	EMagicLeapMeshState__Updated   = 1,
	EMagicLeapMeshState__Deleted   = 2,
	EMagicLeapMeshState__Unchanged = 3,
	EMagicLeapMeshState__EMagicLeapMeshState_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	EMagicLeapMeshVertexColorMode__None = 0,
	EMagicLeapMeshVertexColorMode__Confidence = 1,
	EMagicLeapMeshVertexColorMode__Block = 2,
	EMagicLeapMeshVertexColorMode__LOD = 3,
	EMagicLeapMeshVertexColorMode__EMagicLeapMeshVertexColorMode_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t
{
	EMagicLeapMeshType__Triangles  = 0,
	EMagicLeapMeshType__PointCloud = 1,
	EMagicLeapMeshType__EMagicLeapMeshType_MAX = 2
};


// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t
{
	EMagicLeapRaycastResultState__RequestFailed = 0,
	EMagicLeapRaycastResultState__NoCollision = 1,
	EMagicLeapRaycastResultState__HitUnobserved = 2,
	EMagicLeapRaycastResultState__HitObserved = 3,
	EMagicLeapRaycastResultState__EMagicLeapRaycastResultState_MAX = 4
};


// Enum MagicLeap.CloudStatus
enum class ECloudStatus : uint8_t
{
	CloudStatus__CloudStatus_NotDone = 0,
	CloudStatus__CloudStatus_Done  = 1,
	CloudStatus__CloudStatus_MAX   = 2
};


// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	EMagicLeapHeadTrackingMapEvent__Lost = 0,
	EMagicLeapHeadTrackingMapEvent__Recovered = 1,
	EMagicLeapHeadTrackingMapEvent__RecoveryFailed = 2,
	EMagicLeapHeadTrackingMapEvent__NewSession = 3,
	EMagicLeapHeadTrackingMapEvent__EMagicLeapHeadTrackingMapEvent_MAX = 4
};


// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	EMagicLeapHeadTrackingMode__PositionAndOrientation = 0,
	EMagicLeapHeadTrackingMode__Unavailable = 1,
	EMagicLeapHeadTrackingMode__Unknown = 2,
	EMagicLeapHeadTrackingMode__EMagicLeapHeadTrackingMode_MAX = 3
};


// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t
{
	EMagicLeapHeadTrackingError__None = 0,
	EMagicLeapHeadTrackingError__NotEnoughFeatures = 1,
	EMagicLeapHeadTrackingError__LowLight = 2,
	EMagicLeapHeadTrackingError__Unknown = 3,
	EMagicLeapHeadTrackingError__EMagicLeapHeadTrackingError_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeap.PurchaseItemDetails
// 0x0040
struct FPurchaseItemDetails
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     Price;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPurchaseType                                      Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// 0x0050
struct FPurchaseConfirmation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     PackageName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
	EPurchaseType                                      Type;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// 0x0008
struct FMagicLeapHeadTrackingState
{
	EMagicLeapHeadTrackingMode                         Mode;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapHeadTrackingError                        Error;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// 0x0048
struct FMagicLeapMeshBlockInfo
{
	struct FGuid                                       BlockID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     BlockPosition;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BlockOrientation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     BlockDimensions;                                          // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTimespan                                   Timestamp;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EMagicLeapMeshState                                BlockState;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// 0x0018
struct FMagicLeapTrackingMeshInfo
{
	struct FTimespan                                   Timestamp;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FMagicLeapMeshBlockInfo>             BlockData;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// 0x0014
struct FMagicLeapMeshBlockRequest
{
	struct FGuid                                       BlockID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapMeshLOD                                  LevelOfDetail;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// 0x0038
struct FMagicLeapRaycastQueryParams
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalFovDegrees;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CollideWithUnobserved;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UserData;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// 0x0024
struct FMagicLeapRaycastHitResult
{
	EMagicLeapRaycastResultState                       HitState;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPoint;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UserData;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
