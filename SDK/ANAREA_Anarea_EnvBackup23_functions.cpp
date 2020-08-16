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

// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.IsDST
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          DSTEnable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DSTStartMonth                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DSTStartDay                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DSTEndMonth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DSTEndDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           DSTSwitchHour                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDST                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAnarea_EnvBackup23_C::IsDST(bool* DSTEnable, int* DSTStartMonth, int* DSTStartDay, int* DSTEndMonth, int* DSTEndDay, int* DSTSwitchHour, bool* IsDST)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.IsDST");

	AAnarea_EnvBackup23_C_IsDST_Params params;
	params.DSTEnable = DSTEnable;
	params.DSTStartMonth = DSTStartMonth;
	params.DSTStartDay = DSTStartDay;
	params.DSTEndMonth = DSTEndMonth;
	params.DSTEndDay = DSTEndDay;
	params.DSTSwitchHour = DSTSwitchHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDST != nullptr)
		*IsDST = params.IsDST;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.GetHMSFromSolarTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         SolarTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Minute                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAnarea_EnvBackup23_C::GetHMSFromSolarTime(float* SolarTime, int* Hour, int* Minute, int* Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.GetHMSFromSolarTime");

	AAnarea_EnvBackup23_C_GetHMSFromSolarTime_Params params;
	params.SolarTime = SolarTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Minute != nullptr)
		*Minute = params.Minute;
	if (Second != nullptr)
		*Second = params.Second;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAnarea_EnvBackup23_C::UpdateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSun");

	AAnarea_EnvBackup23_C_UpdateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSky
// (Public, BlueprintCallable, BlueprintEvent)

void AAnarea_EnvBackup23_C::UpdateSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UpdateSky");

	AAnarea_EnvBackup23_C_UpdateSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnarea_EnvBackup23_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.UserConstructionScript");

	AAnarea_EnvBackup23_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAnarea_EnvBackup23_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ReceiveBeginPlay");

	AAnarea_EnvBackup23_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ExecuteUbergraph_Anarea_EnvBackup23
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnarea_EnvBackup23_C::ExecuteUbergraph_Anarea_EnvBackup23(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anarea_EnvBackup23.Anarea_EnvBackup23_C.ExecuteUbergraph_Anarea_EnvBackup23");

	AAnarea_EnvBackup23_C_ExecuteUbergraph_Anarea_EnvBackup23_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
