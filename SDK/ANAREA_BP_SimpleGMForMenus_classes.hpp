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

// BlueprintGeneratedClass BP_SimpleGMForMenus.BP_SimpleGMForMenus_C
// 0x0008 (0x02C0 - 0x02B8)
class ABP_SimpleGMForMenus_C : public AGameModeBase
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SimpleGMForMenus.BP_SimpleGMForMenus_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
