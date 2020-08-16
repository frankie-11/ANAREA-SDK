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

// WidgetBlueprintGeneratedClass WBP_WelcomeScreen.WBP_WelcomeScreen_C
// 0x00B8 (0x02E8 - 0x0230)
class UWBP_WelcomeScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                             Combo_Region;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UEditableTextBox*                            EditableTextBox_Name;                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_87;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Txt_ErrorMsg;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWBP_MenuBtn_OnlyText_C*                     WBP_MenuBtn_OnlyText;                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EPlayFabMatchmakingRegion                          ChosenRegion;                                             // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnClose;                                                  // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0261(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UPlayFabJsonObject*                          TMP;                                                      // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ChosenName;                                               // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      PlayerNameRequestSucceeded;                               // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ServerRegionRequestSucceeded;                             // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EPlayFabMatchmakingRegion                          LocalRegionEnumIterCopy;                                  // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EPlayFabMatchmakingRegion, struct FText>      RegionNames;                                              // 0x0298(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WelcomeScreen.WBP_WelcomeScreen_C");
		return ptr;
	}


	struct FString GetRegionName(EPlayFabMatchmakingRegion* Region);
	void CheckPlayerNameValidity(struct FString* playerName, bool* IsValid);
	void OnPlayFabResponse_A492DCF347E7B4BBA7674EACF1AD7616(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void OnPlayFabResponse_379B5D9C4F5522F55DB89BBE90B9368A(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void OnPlayFabResponse_DF6A737A4BF3B64E373DA19FCE41592A(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void OnPlayFabResponse_0D7B8B1E442EE90B83FD2E960B2F4C74(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void PreConstruct(bool* IsDesignTime);
	void BndEvt__WBP_MenuBtn_OnlyText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct FName* BtnName);
	void NameUpdated_Success(struct FClientUpdateUserTitleDisplayNameResult* Result, class UObject** customData);
	void NameUpdated_Error(struct FPlayFabError* Error, class UObject** customData);
	void Init();
	void QueryResult_GetPlayerName(struct FClientGetAccountInfoResult* Result, class UObject** customData);
	void QueryError_GetPlayerName(struct FPlayFabError* Error, class UObject** customData);
	void QueryResult_GetPreferredRegion(struct FClientGetUserDataResult* Result, class UObject** customData);
	void QueryError_GetPreferredRegion(struct FPlayFabError* Error, class UObject** customData);
	void CustomEvent_1(struct FClientUpdateUserDataResult* Result, class UObject** customData);
	void CustomEvent_2(struct FPlayFabError* Error, class UObject** customData);
	void OnLogin();
	void QueryBackendData();
	void ExecuteUbergraph_WBP_WelcomeScreen(int* EntryPoint);
	void OnClose__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
