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

// BlueprintGeneratedClass BP_SmokeGrenadeProjectile_Base.BP_SmokeGrenadeProjectile_Base_C
// 0x0008 (0x0268 - 0x0260)
class ABP_SmokeGrenadeProjectile_Base_C : public ASmokeGrenadeProjectile
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmokeGrenadeProjectile_Base.BP_SmokeGrenadeProjectile_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
