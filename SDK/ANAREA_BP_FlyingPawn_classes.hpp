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

// BlueprintGeneratedClass BP_FlyingPawn.BP_FlyingPawn_C
// 0x0010 (0x02B0 - 0x02A0)
class ABP_FlyingPawn_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                        CineCamera;                                               // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingPawn.BP_FlyingPawn_C");
		return ptr;
	}


	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_4(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float* AxisValue);
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_6(float* AxisValue);
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_7(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1(float* AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float* AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_8(float* AxisValue);
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_5(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_6(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_4(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_3(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_7(float* AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_8(float* AxisValue);
	void ExecuteUbergraph_BP_FlyingPawn(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
