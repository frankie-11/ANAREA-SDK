#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SunPosition.SunPositionFunctionLibrary.GetSunPosition
struct USunPositionFunctionLibrary_GetSunPosition_Params
{
	float*                                             Latitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Longitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TimeZone;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDaylightSavingTime;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Year;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Month;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Day;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSunPositionData                            SunPositionData;                                          // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
