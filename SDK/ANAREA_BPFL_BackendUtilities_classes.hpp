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

// BlueprintGeneratedClass BPFL_BackendUtilities.BPFL_BackendUtilities_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_BackendUtilities_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFL_BackendUtilities.BPFL_BackendUtilities_C");
		return ptr;
	}


	void STATIC_ResolveRegionChoice(struct FString* RegionName, class UObject** __WorldContext, EPlayFabMatchmakingRegion* RegionEnum);
	void STATIC_FormatResult_AllData(struct FClientGetPlayerStatisticsResult* ClientGetPlayerStatisticsResult, class UObject** __WorldContext, int* Level, int* XP, int* TotalKillCount, int* TotalMatchPlayed, int* TotalMatchWon);
	void STATIC_FormatResult_BestMatches(struct FClientGetUserDataResult* ClientGetUserDataResult, class UObject** __WorldContext, TArray<struct FPlayerMatchData>* Array);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
