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

// Class LoadingScreen.LoadingScreenSettings
// 0x0208 (0x0240 - 0x0038)
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FLoadingScreenDescription                   StartupScreen;                                            // 0x0038(0x00A8) (Edit, Config)
	struct FLoadingScreenDescription                   DefaultScreen;                                            // 0x00E0(0x00A8) (Edit, Config)
	struct FSlateFontInfo                              TipFont;                                                  // 0x0188(0x0050) (Edit, BlueprintVisible, Config)
	struct FSlateFontInfo                              LoadingFont;                                              // 0x01D8(0x0050) (Edit, BlueprintVisible, Config)
	float                                              TipWrapAt;                                                // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FText>                               Tips;                                                     // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LoadingScreen.LoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
