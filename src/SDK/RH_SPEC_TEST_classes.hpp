#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_SPEC_TEST_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass SPEC_TEST.SPEC_TEST_C
// 0x0510 (0x0758 - 0x0248)
class USPEC_TEST_C : public UShooterUserWidget
{
public:
	class UWidgetAnimation*                            ANIM_SCOREBOARD_Bar_OUT;                                  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_SCOREBOARD_Bar_IN;                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_ROLE_OUT;                                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_ROLE_IN;                                             // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_MENU_HIDE;                                           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_MENU_SHOW;                                           // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_SETTINGS_OUT;                                        // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            ANIM_SETTINGS_IN;                                         // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class ULetterBoxWidget*                            LetterBoxWidget_1;                                        // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USpec_Loadout_C*                             Spec_Loadout_384;                                         // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USpec_Settings_C*                            Spec_Settings;                                            // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USpec_Top_Menu_C*                            Spec_Top_Menu_1;                                          // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USpec_Scoreboard_Bar_C*                      SpecScoreboardBar;                                        // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      TargetLoadingSpinner;                                     // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsInFreeCamera;                                           // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldLoadoutBeVisible;                                   // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02BA(0x0006) MISSED OFFSET
	class UAkAudioEvent*                               SpectatorStart;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ToolBarSlideIn;                                           // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ToolBarSlideOut;                                          // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScoreboardSlideIn;                                        // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScoreboardSlideOut;                                       // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SettingsSlideIn;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SettingsSlideOut;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LoadoutSlideIn;                                           // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               LoadoutSlideOut;                                          // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x0308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0310(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UObject*                                     Temp_object_Variable;                                     // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0330(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TScriptInterface<class USpec_PanelInterface_C>     K2Node_DynamicCast_AsSpec_Panel_Interface;                // 0x0340(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0350(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable2;                                       // 0x0354(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0358(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UObject*                                     Temp_object_Variable2;                                    // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class USpec_PanelInterface_C>     K2Node_DynamicCast_AsSpec_Panel_Interface2;               // 0x0368(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0x0378(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable3;                                       // 0x037C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x0380(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x0390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UObject*                                     Temp_object_Variable3;                                    // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class USpec_PanelInterface_C>     K2Node_DynamicCast_AsSpec_Panel_Interface3;               // 0x03A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0x03B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x03B8(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                Temp_int_Variable4;                                       // 0x03C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate5;                    // 0x03D0(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x03E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue;                           // 0x03E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue2;                          // 0x03E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue3;                          // 0x03E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue4;                          // 0x03E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue5;                          // 0x03E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue6;                          // 0x03E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue;    // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_NewTarget;                             // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSpectatorTargetLoading_ReturnValue;            // 0x0400(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0401(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x0402(0x0006) MISSED OFFSET
	class AShooterPlayerState*                         CallFunc_GetPlayerState_ReturnValue;                      // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	struct FShooterPawnInfo                            CallFunc_GetChosenPawnInfo_PawnInfo;                      // 0x0418(0x00D8) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetChosenPawnInfo_ReturnValue;                   // 0x04F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x04F1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetChaseCharacter_ReturnValue;                   // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetChaseCharacter_ReturnValue2;                  // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class AShooterPlayerState*                         CallFunc_GetPlayerState_ReturnValue2;                     // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPlayerUsingGamepad_ReturnValue;                // 0x0518(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0519(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x051A(0x0006) MISSED OFFSET
	struct FShooterPawnInfo                            CallFunc_GetChosenPawnInfo_PawnInfo2;                     // 0x0520(0x00D8) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetChosenPawnInfo_ReturnValue2;                  // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled6;                             // 0x05F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled5;                             // 0x05FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled4;                             // 0x05FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UWidgetAnimation*                            K2Node_Event_Animation;                                   // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetOwningShooterPlayerController_ReturnValue2;   // 0x0608(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue;                  // 0x0610(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0611(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue2;                 // 0x0612(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue3;                 // 0x0613(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue4;                 // 0x0614(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0615(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0616(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue5;                 // 0x0617(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue6;                 // 0x0619(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x061A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x061B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	class UObject*                                     Temp_object_Variable4;                                    // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue7;                 // 0x0628(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	TScriptInterface<class USpec_PanelInterface_C>     K2Node_DynamicCast_AsSpec_Panel_Interface4;               // 0x0630(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess4;                             // 0x0640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x0641(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x0642(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue8;                 // 0x0643(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x0644(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x0645(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue9;                 // 0x0646(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue5;            // 0x0647(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue10;                // 0x0648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled3;                             // 0x0649(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue11;                // 0x064A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x064B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue6;            // 0x064C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue12;                // 0x064D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x064E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x064F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue13;                // 0x0650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue7;            // 0x0651(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue14;                // 0x0652(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue7;                          // 0x0653(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue8;                          // 0x0654(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue15;                // 0x0655(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue10;                         // 0x0656(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue8;            // 0x0657(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue11;                         // 0x0658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue16;                // 0x0659(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue12;                         // 0x065A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled2;                             // 0x065B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bUseGamePad;                           // 0x065C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x065D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate6;                    // 0x0660(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate7;                    // 0x0670(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TArray<class UObject*>                             K2Node_MakeArray_Array;                                   // 0x0680(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     CallFunc_Array_Get_Item;                                  // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0698(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x069C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x069D(0x0003) MISSED OFFSET
	class ULevelStreaming*                             K2Node_DynamicCast_AsLevel_Streaming;                     // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess5;                             // 0x06A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class ALevelScriptActor*                           CallFunc_GetLevelScriptActor_ReturnValue;                 // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_Array_Get_Item2;                                 // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ULevelStreaming*                             K2Node_DynamicCast_AsLevel_Streaming2;                    // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess6;                             // 0x06C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x06C9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x06CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ALevelScriptActor*                           CallFunc_GetLevelScriptActor_ReturnValue2;                // 0x06D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x06D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x06D9(0x0007) MISSED OFFSET
	class UObject*                                     CallFunc_Array_Get_Item3;                                 // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x06E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x06EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class ULevelStreaming*                             K2Node_DynamicCast_AsLevel_Streaming3;                    // 0x06F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess7;                             // 0x06F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET
	class ALevelScriptActor*                           CallFunc_GetLevelScriptActor_ReturnValue3;                // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_Array_Get_Item4;                                 // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ULevelStreaming*                             K2Node_DynamicCast_AsLevel_Streaming4;                    // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess8;                             // 0x0718(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0719(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x071C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ALevelScriptActor*                           CallFunc_GetLevelScriptActor_ReturnValue4;                // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x0728(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate8;                    // 0x0730(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TScriptInterface<class USpec_PanelInterface_C>     K2Node_DynamicCast_AsSpec_Panel_Interface5;               // 0x0740(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess9;                             // 0x0750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bEnabled;                              // 0x0751(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x6];                                       // 0x0752(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass SPEC_TEST.SPEC_TEST_C");
		return ptr;
	}


	void OnUserSettingsChanged(bool bpp__bUseGamepad__pf);
	void OnSpectatorToolbarToggled(bool bpp__bEnabled__pf);
	void OnSpectatorTargetLoading(bool bpp__bEnabled__pf);
	void OnSpectatorTargetChanged_Event(class AShooterCharacter* bpp__NewTarget__pf);
	void OnSpectatorSettingsToggled(bool bpp__bEnabled__pf);
	void OnSpectatorScoreboardToggled(bool bpp__bEnabled__pf);
	void OnSpectatorLoadoutShouldBeVisible(bool bpp__bEnabled__pf);
	void OnSpectatorHUDShouldBeVisible(bool bpp__bEnabled__pf);
	void Construct();
	void UserSettingsChangedEvent__DelegateSignature(bool bUseGamePad);
	void SpectatorTargetChanged__DelegateSignature(class AShooterCharacter* NewTarget);
	void SpectatorFlagChanged__DelegateSignature(bool bEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
