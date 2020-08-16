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

// ScriptStruct SunPosition.SunPositionData
// 0x0028
struct FSunPositionData
{
	float                                              Elevation;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CorrectedElevation;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Azimuth;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   SunriseTime;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   SunsetTime;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTimespan                                   SolarNoon;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
