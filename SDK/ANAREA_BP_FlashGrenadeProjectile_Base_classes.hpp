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

// BlueprintGeneratedClass BP_FlashGrenadeProjectile_Base.BP_FlashGrenadeProjectile_Base_C
// 0x0008 (0x02A0 - 0x0298)
class ABP_FlashGrenadeProjectile_Base_C : public AFlashGrenadeProjectile
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlashGrenadeProjectile_Base.BP_FlashGrenadeProjectile_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
