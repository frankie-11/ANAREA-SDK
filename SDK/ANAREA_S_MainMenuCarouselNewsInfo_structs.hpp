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

// UserDefinedStruct S_MainMenuCarouselNewsInfo.S_MainMenuCarouselNewsInfo
// 0x0040
struct FS_MainMenuCarouselNewsInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty S_MainMenuCarouselNewsInfo.S_MainMenuCarouselNewsInfo.NewsImage_7_F3CAFFF84874562A13095891997A4CF4
	struct FText                                       NewsText_5_AAD58CA34A8DA585E012BDB314848A3C;              // 0x0028(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
