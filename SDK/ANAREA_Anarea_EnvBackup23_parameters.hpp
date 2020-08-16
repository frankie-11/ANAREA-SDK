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

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.IsDST
struct AAnarea_EnvBackup23_C_IsDST_Params
{
	bool*                                              DSTEnable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DSTStartMonth;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DSTStartDay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DSTEndMonth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DSTEndDay;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DSTSwitchHour;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsDST;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.GetHMSFromSolarTime
struct AAnarea_EnvBackup23_C_GetHMSFromSolarTime_Params
{
	float*                                             SolarTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Second;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSun
struct AAnarea_EnvBackup23_C_UpdateSun_Params
{
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSky
struct AAnarea_EnvBackup23_C_UpdateSky_Params
{
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UserConstructionScript
struct AAnarea_EnvBackup23_C_UserConstructionScript_Params
{
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ReceiveBeginPlay
struct AAnarea_EnvBackup23_C_ReceiveBeginPlay_Params
{
};

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ExecuteUbergraph_Anarea_EnvBackup23
struct AAnarea_EnvBackup23_C_ExecuteUbergraph_Anarea_EnvBackup23_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
