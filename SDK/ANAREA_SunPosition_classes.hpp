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

// Class SunPosition.SunPositionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SunPosition.SunPositionFunctionLibrary");
		return ptr;
	}


	void STATIC_GetSunPosition(float* Latitude, float* Longitude, float* TimeZone, bool* bIsDaylightSavingTime, int* Year, int* Month, int* Day, int* Hours, int* Minutes, int* Seconds, struct FSunPositionData* SunPositionData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
