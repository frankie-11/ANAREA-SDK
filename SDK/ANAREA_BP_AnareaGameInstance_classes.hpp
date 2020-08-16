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

// BlueprintGeneratedClass BP_AnareaGameInstance.BP_AnareaGameInstance_C
// 0x0018 (0x02E8 - 0x02D0)
class UBP_AnareaGameInstance_C : public UAnareaGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnKeyBindingChanged;                                      // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnareaGameInstance.BP_AnareaGameInstance_C");
		return ptr;
	}


	void ApplySettingsToGame();
	void OverrideAudioVolume(EVolumeType* volumeType, float* Volume);
	void ApplyAudioSettings();
	class UItemDatabase* GetItemDatabase();
	void ReceiveInit();
	void ReceiveUserSettingsApplied(class UAnareaGameUserSettings** GameUserSettings);
	void ExecuteUbergraph_BP_AnareaGameInstance(int* EntryPoint);
	void OnKeyBindingChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
