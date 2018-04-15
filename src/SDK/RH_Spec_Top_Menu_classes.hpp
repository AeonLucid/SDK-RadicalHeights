#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Spec_Top_Menu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Spec_Top_Menu.Spec_Top_Menu_C
// 0x1228 (0x1470 - 0x0248)
class USpec_Top_Menu_C : public UShooterUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	class UImage*                                      CyclePlayerLeftGamePad;                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CyclePlayerLeftMouse;                                     // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CyclePlayerRightGamePad;                                  // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      CyclePlayerRightMouse;                                    // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     CyclePlayersNextButton;                                   // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     CyclePlayersPrevButton;                                   // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UBorder*                                     MenuBackground;                                           // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     ScoreboardButton;                                         // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ScoreboardGamePadButton;                                  // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              ScoreboardKey;                                            // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     SettingsButton;                                           // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SettingsGamePadButton;                                    // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              SettingsKey;                                              // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     ToolBarButton;                                            // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ToolbarGamePadButton;                                     // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              ToolbarKey;                                               // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     ViewStatsButton;                                          // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      ViewStatsGamePadButton;                                   // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UHorizontalBox*                              ViewStatsKey;                                             // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET
	struct FActiveButton                               FirstPersonActiveButton;                                  // 0x02F0(0x0570) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveButton                               ThirdPersonActiveButton;                                  // 0x0860(0x0570) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveButton                               FreeCameraActiveButton;                                   // 0x0DD0(0x0570) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                NeutralColor;                                             // 0x1340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnHoveredSound;                                           // 0x1350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnClickedSound;                                           // 0x1358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnAcceptSound;                                            // 0x1360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           CurrentChaseCharacter;                                    // 0x1368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable;                            // 0x1370(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                Temp_struct_Variable;                                     // 0x1374(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1388(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1398(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x139C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x13A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable2;                           // 0x13A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue;    // 0x13A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    K2Node_Event_Allegiance;                                  // 0x13B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x13B1(0x0007) MISSED OFFSET
	struct FText                                       K2Node_Event_Role;                                        // 0x13B8(0x0018) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_Event_Target;                                      // 0x13D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetBreakerColorPrimary_ReturnValue;              // 0x13D8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetLawColorPrimary_ReturnValue;                  // 0x13E8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bUseGamepad;                                 // 0x13F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x13F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EShooterAllegiance>                    Temp_byte_Variable;                                       // 0x13FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x13FB(0x0001) MISSED OFFSET
	struct FLinearColor                                K2Node_Select_Default;                                    // 0x13FC(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x140C(0x0004) MISSED OFFSET
	TArray<class UImage*>                              K2Node_MakeArray_Array;                                   // 0x1410(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x1420(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UImage*                                      CallFunc_Array_Get_Item;                                  // 0x1430(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1438(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x143C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x143D(0x0003) MISSED OFFSET
	TArray<class UWidget*>                             K2Node_MakeArray_Array2;                                  // 0x1440(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget*                                     CallFunc_Array_Get_Item2;                                 // 0x1450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1458(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x145C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x145D(0x0003) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue2;   // 0x1460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x1468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Spec_Top_Menu.Spec_Top_Menu_C");
		return ptr;
	}


	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorTargetChanged(TEnumAsByte<EShooterAllegiance> bpp__Allegiance__pf, const struct FText& bpp__Role__pf, class AShooterCharacter* bpp__Target__pf);
	void OnOneTeammateLeft();
	void Construct();
	void BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_318_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ViewStatsButton_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ToolBarButton_K2Node_ComponentBoundEvent_476_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_448_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MenuModeButton_K2Node_ComponentBoundEvent_205_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HudButton_K2Node_ComponentBoundEvent_690_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HideMenuButton_K2Node_ComponentBoundEvent_235_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GameModeButton_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_387_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CyclePlayersPrevButton_K2Node_ComponentBoundEvent_193_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CyclePlayersNextButton_K2Node_ComponentBoundEvent_413_OnButtonHoverEvent__DelegateSignature();
	void OnOneTeammateLeftDelegate__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
