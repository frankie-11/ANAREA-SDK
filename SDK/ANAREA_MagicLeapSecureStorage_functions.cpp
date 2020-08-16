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

// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FVector*                DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureVector(struct FString* Key, struct FVector* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector");

	UMagicLeapSecureStorage_PutSecureVector_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FTransform*             DataToStore                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureTransform(struct FString* Key, struct FTransform* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform");

	UMagicLeapSecureStorage_PutSecureTransform_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FString*                DataToStore                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureString(struct FString* Key, struct FString* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString");

	UMagicLeapSecureStorage_PutSecureString_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// class USaveGame**              ObjectToStore                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureSaveGame(struct FString* Key, class USaveGame** ObjectToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame");

	UMagicLeapSecureStorage_PutSecureSaveGame_Params params;
	params.Key = Key;
	params.ObjectToStore = ObjectToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FRotator*               DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureRotator(struct FString* Key, struct FRotator* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator");

	UMagicLeapSecureStorage_PutSecureRotator_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// int64_t*                       DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureInt64(struct FString* Key, int64_t* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64");

	UMagicLeapSecureStorage_PutSecureInt64_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// int*                           DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureInt(struct FString* Key, int* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt");

	UMagicLeapSecureStorage_PutSecureInt_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// float*                         DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureFloat(struct FString* Key, float* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat");

	UMagicLeapSecureStorage_PutSecureFloat_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// unsigned char*                 DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureByte(struct FString* Key, unsigned char* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte");

	UMagicLeapSecureStorage_PutSecureByte_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// bool*                          DataToStore                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureBool(struct FString* Key, bool* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool");

	UMagicLeapSecureStorage_PutSecureBool_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// TArray<int>*                   DataToStore                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_PutSecureArray(struct FString* Key, TArray<int>* DataToStore)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray");

	UMagicLeapSecureStorage_PutSecureArray_Params params;
	params.Key = Key;
	params.DataToStore = DataToStore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FVector                 DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureVector(struct FString* Key, struct FVector* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector");

	UMagicLeapSecureStorage_GetSecureVector_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FTransform              DataToRetrieve                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureTransform(struct FString* Key, struct FTransform* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform");

	UMagicLeapSecureStorage_GetSecureTransform_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FString                 DataToRetrieve                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureString(struct FString* Key, struct FString* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString");

	UMagicLeapSecureStorage_GetSecureString_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// class USaveGame*               ObjectToRetrieve               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureSaveGame(struct FString* Key, class USaveGame** ObjectToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame");

	UMagicLeapSecureStorage_GetSecureSaveGame_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectToRetrieve != nullptr)
		*ObjectToRetrieve = params.ObjectToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// struct FRotator                DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureRotator(struct FString* Key, struct FRotator* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator");

	UMagicLeapSecureStorage_GetSecureRotator_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// int64_t                        DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureInt64(struct FString* Key, int64_t* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64");

	UMagicLeapSecureStorage_GetSecureInt64_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// int                            DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureInt(struct FString* Key, int* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt");

	UMagicLeapSecureStorage_GetSecureInt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// float                          DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureFloat(struct FString* Key, float* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat");

	UMagicLeapSecureStorage_GetSecureFloat_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// unsigned char                  DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureByte(struct FString* Key, unsigned char* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte");

	UMagicLeapSecureStorage_GetSecureByte_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// bool                           DataToRetrieve                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureBool(struct FString* Key, bool* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool");

	UMagicLeapSecureStorage_GetSecureBool_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// TArray<int>                    DataToRetrieve                 (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_GetSecureArray(struct FString* Key, TArray<int>* DataToRetrieve)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray");

	UMagicLeapSecureStorage_GetSecureArray_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataToRetrieve != nullptr)
		*DataToRetrieve = params.DataToRetrieve;

	return params.ReturnValue;
}


// Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString*                Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapSecureStorage::STATIC_DeleteSecureData(struct FString* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData");

	UMagicLeapSecureStorage_DeleteSecureData_Params params;
	params.Key = Key;

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
