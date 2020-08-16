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

// Function PlayFabServer.PlayFabGameModeBase.RequestExit
struct APlayFabGameModeBase_RequestExit_Params
{
};

// Function PlayFabServer.PlayFabServerSubsystem.StopBackfilling
struct UPlayFabServerSubsystem_StopBackfilling_Params
{
};

// Function PlayFabServer.PlayFabServerSubsystem.StartBackfilling
struct UPlayFabServerSubsystem_StartBackfilling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayFabServer.PlayFabServerSubsystem.GetMatchID
struct UPlayFabServerSubsystem_GetMatchID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlayFabServer.PlayFabServerSubsystem.GetIsBackfilling
struct UPlayFabServerSubsystem_GetIsBackfilling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
