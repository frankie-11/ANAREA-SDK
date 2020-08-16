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

// BlueprintGeneratedClass BP_BaseItemInWorld.BP_BaseItemInWorld_C
// 0x0090 (0x0370 - 0x02E0)
class ABP_BaseItemInWorld_C : public AItemInWorld
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HighlightMesh;                                            // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                CheckStopPhysicTimer;                                     // 0x0300(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemInstance                               TmpItem;                                                  // 0x0308(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      IsPreInitialized;                                         // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      WaitStop;                                                 // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HightlightMaterial;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseItemInWorld.BP_BaseItemInWorld_C");
		return ptr;
	}


	void CreateDynMatIfNecessary();
	void SetHighlightColor(struct FGameplayTag* ItemTag);
	void ReceiveBeginPlay();
	void SetStaticMesh(struct FItemInstance* ItemInstance);
	void InitRotAndLocFromSocketIfPossible();
	void BP_ShowOulines();
	void PlaceItemWithPhysics();
	void BP_HideOulines();
	void K2_Init(struct FItemInstance* InItem);
	void ExecuteUbergraph_BP_BaseItemInWorld(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
