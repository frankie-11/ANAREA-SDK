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

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetOnAudioJackUnpluggedDelegate(struct FScriptDelegate* ResultDelegate);
	bool STATIC_SetOnAudioJackPluggedDelegate(struct FScriptDelegate* ResultDelegate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
