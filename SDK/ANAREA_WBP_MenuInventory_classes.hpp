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

// WidgetBlueprintGeneratedClass WBP_MenuInventory.WBP_MenuInventory_C
// 0x0030 (0x0260 - 0x0230)
class UWBP_MenuInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MenuInventory_PlayerPreview_C*          WBP_MenuInventory_PlayerPreview;                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_MenuInventoryContent_C*                 WBP_MenuInventoryContent;                                 // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnCloseRequested;                                         // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0248(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class ABP_PreviewPlayerInMenus_C*                  PlayerPreviewActorRef;                                    // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MenuInventory.WBP_MenuInventory_C");
		return ptr;
	}


	bool OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void OnLoaded_11B10B9B4FA8F797667B0C846B41AE3C(class UClass** Loaded);
	void BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_2_OnChangeWeaponPreviewRequested__DelegateSignature(struct FName* weaponName);
	void Construct();
	void BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_1_OnChangeWeaponSkinPreviewRequested__DelegateSignature(struct FName* WeaponSkinName, struct FName* weaponName);
	void BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_3_OnChangeBackpackPreviewRequested__DelegateSignature(struct FName* backpackName);
	void BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_0_OnCloseRequested__DelegateSignature();
	void BndEvt__WBP_MenuInventoryContent_K2Node_ComponentBoundEvent_4_OnChangeCharacterModelPreviewRequested__DelegateSignature(struct FName* characterModelName);
	void ExecuteUbergraph_WBP_MenuInventory(int* EntryPoint);
	void OnCloseRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
