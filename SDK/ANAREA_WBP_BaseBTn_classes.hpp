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

// WidgetBlueprintGeneratedClass WBP_BaseBTn.WBP_BaseBtn_C
// 0x0050 (0x0280 - 0x0230)
class UWBP_BaseBtn_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0230(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       Name;                                                     // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0248(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0260(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0270(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BaseBTn.WBP_BaseBtn_C");
		return ptr;
	}


	void SetLabelColorAndOpacity(struct FLinearColor* Color);
	void OnUnhovered__DelegateSignature(struct FName* BtnName);
	void OnHovered__DelegateSignature(struct FName* BtnName);
	void OnClicked__DelegateSignature(struct FName* BtnName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
