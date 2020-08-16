// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SunPosition.SunPositionFunctionLibrary.GetSunPosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float*                         Latitude                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Longitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TimeZone                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsDaylightSavingTime          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Day                            (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Hours                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Minutes                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSunPositionData        SunPositionData                (Parm, OutParm)

void USunPositionFunctionLibrary::STATIC_GetSunPosition(float* Latitude, float* Longitude, float* TimeZone, bool* bIsDaylightSavingTime, int* Year, int* Month, int* Day, int* Hours, int* Minutes, int* Seconds, struct FSunPositionData* SunPositionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function SunPosition.SunPositionFunctionLibrary.GetSunPosition");

	USunPositionFunctionLibrary_GetSunPosition_Params params;
	params.Latitude = Latitude;
	params.Longitude = Longitude;
	params.TimeZone = TimeZone;
	params.bIsDaylightSavingTime = bIsDaylightSavingTime;
	params.Year = Year;
	params.Month = Month;
	params.Day = Day;
	params.Hours = Hours;
	params.Minutes = Minutes;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SunPositionData != nullptr)
		*SunPositionData = params.SunPositionData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
