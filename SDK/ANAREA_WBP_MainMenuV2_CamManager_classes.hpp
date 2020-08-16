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

// BlueprintGeneratedClass WBP_MainMenuV2_CamManager.WBP_MainMenuV2_CamManager_C
// 0x0058 (0x0270 - 0x0218)
class AWBP_MainMenuV2_CamManager_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0218(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<TEnumAsByte<E_MainMenuCamLocations>, class ACineCameraActor*> Cameras;                                                  // 0x0220(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WBP_MainMenuV2_CamManager.WBP_MainMenuV2_CamManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
