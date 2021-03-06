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

// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone = 0,
	EChaosBreakingSortMethod__SortByHighestMass = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed = 2,
	EChaosBreakingSortMethod__SortByNearestFirst = 3,
	EChaosBreakingSortMethod__Count = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX = 5
};


// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone = 0,
	EChaosCollisionSortMethod__SortByHighestMass = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse = 3,
	EChaosCollisionSortMethod__SortByNearestFirst = 4,
	EChaosCollisionSortMethod__Count = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX = 6
};


// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone = 0,
	EChaosTrailingSortMethod__SortByHighestMass = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed = 2,
	EChaosTrailingSortMethod__SortByNearestFirst = 3,
	EChaosTrailingSortMethod__Count = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX = 5
};


// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};


// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform = 0,
	ECollectionGroupEnum__Chaos_Max = 1
};


// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active = 0,
	ECollectionAttributeEnum__Chaos_DynamicState = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup = 2,
	ECollectionAttributeEnum__Chaos_Max = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// 0x0018
struct FChaosCollisionEventRequestSettings
{
	int                                                MaxNumberResults;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinImpulse;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EChaosCollisionSortMethod                          SortMethod;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// 0x0018
struct FChaosBreakingEventRequestSettings
{
	int                                                MaxNumberOfResults;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRadius;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EChaosBreakingSortMethod                           SortMethod;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// 0x0018
struct FChaosTrailingEventRequestSettings
{
	int                                                MaxNumberOfResults;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinMass;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAngularSpeed;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EChaosTrailingSortMethod                           SortMethod;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// 0x002C
struct FChaosTrailingEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// 0x0058
struct FChaosCollisionEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity1;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity2;                                                // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass1;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass2;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0044(0x0014) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// 0x0020
struct FChaosBreakingEventData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x0050
struct FGeomComponentCacheParameters
{
	EGeometryCollectionCacheType                       CacheMode;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UGeometryCollectionCache*                    TargetCache;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReverseCacheBeginTime;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCollisionData;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoGenerateCollisionData;                                  // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CollisionDataSizeMax;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoCollisionDataSpatialHash;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionDataSpatialHashRadius;                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxCollisionPerCell;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveBreakingData;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoGenerateBreakingData;                                   // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BreakingDataSizeMax;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoBreakingDataSpatialHash;                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakingDataSpatialHashRadius;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBreakingPerCell;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveTrailingData;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DoGenerateTrailingData;                                   // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TrailingDataSizeMax;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinSpeedThreshold;                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TrailingMinVolumeThreshold;                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// 0x0001
struct FGeometryCollectionDebugDrawWarningMessage
{

};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// 0x0018
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AChaosSolverActor*                           Solver;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGeometryCollectionActor*                    GeometryCollection;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// 0x0024
struct FGeometryCollectionSizeSpecificData
{
	float                                              MaxSize;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECollisionTypeEnum                                 CollisionType;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EImplicitTypeEnum                                  ImplicitType;                                             // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinLevelSetResolution;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxLevelSetResolution;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinClusterLevelSetResolution;                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxClusterLevelSetResolution;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CollisionObjectReductionPercentage;                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionParticlesFraction;                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaximumCollisionParticles;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
