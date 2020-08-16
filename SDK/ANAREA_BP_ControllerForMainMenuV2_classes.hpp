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

// BlueprintGeneratedClass BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C
// 0x003D (0x05CD - 0x0590)
class ABP_ControllerForMainMenuV2_C : public APlayerControllerInMenus
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACameraRig_Rail*                             CamRail;                                                  // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACineCameraActor*                            Cam;                                                      // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCameraReachedLocation;                                  // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UWBP_MainMenu_V2_C*                          Menu;                                                     // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                TargetFrame;                                              // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MainMenuCamLocations>                TargetCamLocation;                                        // 0x05CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControllerForMainMenuV2.BP_ControllerForMainMenuV2_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void MoveCamToLocation(int* Frame, TEnumAsByte<E_MainMenuCamLocations>* CamLocation);
	void ReceiveCamReachLocation(TEnumAsByte<E_MainMenuCamLocations>* CamLocation);
	void ExecuteUbergraph_BP_ControllerForMainMenuV2(int* EntryPoint);
	void OnCameraReachedLocation__DelegateSignature(TEnumAsByte<E_MainMenuCamLocations>* CamLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
