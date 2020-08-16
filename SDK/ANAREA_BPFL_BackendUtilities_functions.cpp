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

// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.ResolveRegionChoice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPlayFabMatchmakingRegion      RegionEnum                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_BackendUtilities_C::STATIC_ResolveRegionChoice(struct FString* RegionName, class UObject** __WorldContext, EPlayFabMatchmakingRegion* RegionEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.ResolveRegionChoice");

	UBPFL_BackendUtilities_C_ResolveRegionChoice_Params params;
	params.RegionName = RegionName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegionEnum != nullptr)
		*RegionEnum = params.RegionEnum;
}


// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_AllData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FClientGetPlayerStatisticsResult* ClientGetPlayerStatisticsResult (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            XP                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalKillCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalMatchPlayed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TotalMatchWon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPFL_BackendUtilities_C::STATIC_FormatResult_AllData(struct FClientGetPlayerStatisticsResult* ClientGetPlayerStatisticsResult, class UObject** __WorldContext, int* Level, int* XP, int* TotalKillCount, int* TotalMatchPlayed, int* TotalMatchWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_AllData");

	UBPFL_BackendUtilities_C_FormatResult_AllData_Params params;
	params.ClientGetPlayerStatisticsResult = ClientGetPlayerStatisticsResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
	if (XP != nullptr)
		*XP = params.XP;
	if (TotalKillCount != nullptr)
		*TotalKillCount = params.TotalKillCount;
	if (TotalMatchPlayed != nullptr)
		*TotalMatchPlayed = params.TotalMatchPlayed;
	if (TotalMatchWon != nullptr)
		*TotalMatchWon = params.TotalMatchWon;
}


// Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_BestMatches
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientGetUserDataResult* ClientGetUserDataResult        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerMatchData>* Array                          (ConstParm, Parm, OutParm, ZeroConstructor)

void UBPFL_BackendUtilities_C::STATIC_FormatResult_BestMatches(struct FClientGetUserDataResult* ClientGetUserDataResult, class UObject** __WorldContext, TArray<struct FPlayerMatchData>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFL_BackendUtilities.BPFL_BackendUtilities_C.FormatResult_BestMatches");

	UBPFL_BackendUtilities_C_FormatResult_BestMatches_Params params;
	params.ClientGetUserDataResult = ClientGetUserDataResult;
	params.__WorldContext = __WorldContext;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
