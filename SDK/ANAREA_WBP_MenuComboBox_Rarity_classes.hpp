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

// WidgetBlueprintGeneratedClass WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C
// 0x0018 (0x0278 - 0x0260)
class UWBP_MenuComboBox_Rarity_C : public UWBP_MenuComboBox_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnRaritySelected;                                         // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0268(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MenuComboBox_Rarity.WBP_MenuComboBox_Rarity_C");
		return ptr;
	}


	void ReceiveComboBoxSelectionChanged(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType);
	void PreConstruct(bool* IsDesignTime);
	void OnInitialized();
	void ExecuteUbergraph_WBP_MenuComboBox_Rarity(int* EntryPoint);
	void OnRaritySelected__DelegateSignature(bool* SelectAll, ECosmeticsRarity* SelectedRarity, struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
