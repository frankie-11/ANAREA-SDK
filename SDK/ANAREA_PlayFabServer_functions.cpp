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

// Function PlayFabServer.PlayFabGameModeBase.RequestExit
// (Final, Native, Public, BlueprintCallable)

void APlayFabGameModeBase::RequestExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabServer.PlayFabGameModeBase.RequestExit");

	APlayFabGameModeBase_RequestExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabServer.PlayFabServerSubsystem.StopBackfilling
// (Final, Native, Public, BlueprintCallable)

void UPlayFabServerSubsystem::StopBackfilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabServer.PlayFabServerSubsystem.StopBackfilling");

	UPlayFabServerSubsystem_StopBackfilling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayFabServer.PlayFabServerSubsystem.StartBackfilling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayFabServerSubsystem::StartBackfilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabServer.PlayFabServerSubsystem.StartBackfilling");

	UPlayFabServerSubsystem_StartBackfilling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabServer.PlayFabServerSubsystem.GetMatchID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlayFabServerSubsystem::GetMatchID()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabServer.PlayFabServerSubsystem.GetMatchID");

	UPlayFabServerSubsystem_GetMatchID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayFabServer.PlayFabServerSubsystem.GetIsBackfilling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlayFabServerSubsystem::GetIsBackfilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayFabServer.PlayFabServerSubsystem.GetIsBackfilling");

	UPlayFabServerSubsystem_GetIsBackfilling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
