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

// BlueprintGeneratedClass BP_FragGrenadeProjectile_Base.BP_FragGrenadeProjectile_Base_C
// 0x0008 (0x0280 - 0x0278)
class ABP_FragGrenadeProjectile_Base_C : public AFragGrenadeProjectile
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FragGrenadeProjectile_Base.BP_FragGrenadeProjectile_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
