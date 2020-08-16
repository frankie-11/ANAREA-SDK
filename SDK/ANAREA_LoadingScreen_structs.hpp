#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LoadingScreen.LoadingScreenDescription
// 0x00A8
struct FLoadingScreenDescription
{
	float                                              MinimumLoadingScreenDisplayTime;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoCompleteWhenLoadingCompletes;                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMoviesAreSkippable;                                      // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWaitForManualStop;                                       // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMoviePlaybackType>                    PlaybackType;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MoviePaths;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bShowUIOverlay;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       LoadingText;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	TArray<struct FSoftObjectPath>                     Images;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoftObjectPath>                     LogoImages;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftObjectPath                             LogoImage;                                                // 0x0058(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                LogoFlipbookColCount;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LogoFlipbookRowCount;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LogoImageSize;                                            // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretch>                              ImageStretch;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0084(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TipBackgroundColor;                                       // 0x0094(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
