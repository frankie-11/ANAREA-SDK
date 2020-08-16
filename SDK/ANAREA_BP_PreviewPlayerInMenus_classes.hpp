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

// BlueprintGeneratedClass BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C
// 0x0089 (0x02C1 - 0x0238)
class ABP_PreviewPlayerInMenus_C : public APreviewPlayerInMenu
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ZoomSpeed;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationSpeed;                                            // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanningSpeed;                                             // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PanningLimitsX;                                           // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PanningLimitsY;                                           // 0x0264(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<E_PreviewPlayerIdleAnimType>, class UAnimSequenceBase*> AnimMap;                                                  // 0x0270(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<E_PreviewPlayerIdleAnimType>           CurrentAnim;                                              // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PreviewPlayerInMenus.BP_PreviewPlayerInMenus_C");
		return ptr;
	}


	void ApplyAnim(TEnumAsByte<E_PreviewPlayerIdleAnimType>* Key);
	void EquipCharacterModel(class USkeletalMesh** SkeletalMesh, TMap<struct FName, class UMaterialInterface*>* Materials);
	void EquipBackpack(class USkeletalMesh** Mesh, class UMaterialInterface** Material);
	void Panning(struct FVector2D* Offset);
	void Zoom(float* ZoomDelta);
	void Rotate(float* DeltaYaw);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
