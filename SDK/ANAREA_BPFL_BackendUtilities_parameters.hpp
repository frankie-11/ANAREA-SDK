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

// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.ResolveRegionChoice
struct UBPFL_BackendUtilities_C_ResolveRegionChoice_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPlayFabMatchmakingRegion                          RegionEnum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_AllData
struct UBPFL_BackendUtilities_C_FormatResult_AllData_Params
{
	struct FClientGetPlayerStatisticsResult*           ClientGetPlayerStatisticsResult;                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                XP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalKillCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalMatchPlayed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalMatchWon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_BestMatches
struct UBPFL_BackendUtilities_C_FormatResult_BestMatches_Params
{
	struct FClientGetUserDataResult*                   ClientGetUserDataResult;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerMatchData>*                   Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
