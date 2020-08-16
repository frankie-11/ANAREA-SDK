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

// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapSecureStorage : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapSecureStorage.MagicLeapSecureStorage");
		return ptr;
	}


	bool STATIC_PutSecureVector(struct FString* Key, struct FVector* DataToStore);
	bool STATIC_PutSecureTransform(struct FString* Key, struct FTransform* DataToStore);
	bool STATIC_PutSecureString(struct FString* Key, struct FString* DataToStore);
	bool STATIC_PutSecureSaveGame(struct FString* Key, class USaveGame** ObjectToStore);
	bool STATIC_PutSecureRotator(struct FString* Key, struct FRotator* DataToStore);
	bool STATIC_PutSecureInt64(struct FString* Key, int64_t* DataToStore);
	bool STATIC_PutSecureInt(struct FString* Key, int* DataToStore);
	bool STATIC_PutSecureFloat(struct FString* Key, float* DataToStore);
	bool STATIC_PutSecureByte(struct FString* Key, unsigned char* DataToStore);
	bool STATIC_PutSecureBool(struct FString* Key, bool* DataToStore);
	bool STATIC_PutSecureArray(struct FString* Key, TArray<int>* DataToStore);
	bool STATIC_GetSecureVector(struct FString* Key, struct FVector* DataToRetrieve);
	bool STATIC_GetSecureTransform(struct FString* Key, struct FTransform* DataToRetrieve);
	bool STATIC_GetSecureString(struct FString* Key, struct FString* DataToRetrieve);
	bool STATIC_GetSecureSaveGame(struct FString* Key, class USaveGame** ObjectToRetrieve);
	bool STATIC_GetSecureRotator(struct FString* Key, struct FRotator* DataToRetrieve);
	bool STATIC_GetSecureInt64(struct FString* Key, int64_t* DataToRetrieve);
	bool STATIC_GetSecureInt(struct FString* Key, int* DataToRetrieve);
	bool STATIC_GetSecureFloat(struct FString* Key, float* DataToRetrieve);
	bool STATIC_GetSecureByte(struct FString* Key, unsigned char* DataToRetrieve);
	bool STATIC_GetSecureBool(struct FString* Key, bool* DataToRetrieve);
	bool STATIC_GetSecureArray(struct FString* Key, TArray<int>* DataToRetrieve);
	bool STATIC_DeleteSecureData(struct FString* Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
