#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlayFabClient.EMatchmakingType
enum class EMatchmakingType : uint8_t
{
	EMatchmakingType__MT_Solo      = 0,
	EMatchmakingType__MT_MAX       = 1
};


// Enum PlayFabClient.EPlayFabMatchmakingRegion
enum class EPlayFabMatchmakingRegion : uint8_t
{
	EPlayFabMatchmakingRegion__MR_WestEU = 0,
	EPlayFabMatchmakingRegion__MR_CentralUS = 1,
	EPlayFabMatchmakingRegion__MR_EastAsia = 2,
	EPlayFabMatchmakingRegion__MR_BrazilSouth = 3,
	EPlayFabMatchmakingRegion__MR_AustraliaEast = 4,
	EPlayFabMatchmakingRegion__MR_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlayFabClient.MatchmakingResult
// 0x0028
struct FMatchmakingResult
{
	struct FString                                     Ip;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
