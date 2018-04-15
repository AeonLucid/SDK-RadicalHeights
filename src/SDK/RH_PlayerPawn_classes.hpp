#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PlayerPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass PlayerPawn.PlayerPawn_C
// 0x0690 (0x2000 - 0x1970)
class APlayerPawn_C : public AShooterCharacter
{
public:
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x1970(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UpperBodyArmor;                                           // 0x1978(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      FacialHair;                                               // 0x1980(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hair;                                                     // 0x1988(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      feet;                                                     // 0x1990(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hands;                                                    // 0x1998(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      waist;                                                    // 0x19A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      LowerBody;                                                // 0x19A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UpperBody;                                                // 0x19B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      head;                                                     // 0x19B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      face;                                                     // 0x19C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterWidgetComponent*                     ShooterNPCWidget;                                         // 0x19C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterIconComponent*                       MarkedForDeath;                                           // 0x19D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterIconComponent*                       LockOnIcon;                                               // 0x19D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterIconComponent*                       TargetingIcon;                                            // 0x19E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Screen_Effect_Confetti_Start_Confetti_Anim_56A56D84419EE08BC27F87AFC5256E16;// 0x19E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Screen_Effect_Confetti_Start__Direction_56A56D84419EE08BC27F87AFC5256E16;// 0x19EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x19ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Screen_Effect_Confetti_Start;                             // 0x19F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Screen_Effect_Confetti_End_Confetti_Anim_58B4787B46E80C1FE8298D8477C049CD;// 0x19F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Screen_Effect_Confetti_End__Direction_58B4787B46E80C1FE8298D8477C049CD;// 0x19FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x19FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Screen_Effect_Confetti_End;                               // 0x1A00(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_DamageTimeline_8DC1833C4F99B8C8DA336BBA8C6CD578;// 0x1A08(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8DC1833C4F99B8C8DA336BBA8C6CD578;   // 0x1A0C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1A0D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1A10(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScreenDirtTimeline_DirtScreenOpacityOverTime_D5E2FCDF4DA4F29D9E8ED790CC59FDDB;// 0x1A18(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScreenDirtTimeline__Direction_D5E2FCDF4DA4F29D9E8ED790CC59FDDB;// 0x1A1C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x1A1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScreenDirtTimeline;                                       // 0x1A20(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PreviousGravityParameterAudio;                            // 0x1A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaledGravityParameterAudio;                              // 0x1A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                buff_fx_state;                                            // 0x1A30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialBlurTransitionSpeed;                                // 0x1A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActorVelocityToUseRadialBlur;                             // 0x1A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x1A3C(0x0004) MISSED OFFSET
	class AS_Level_Music_C*                            LevelMusic;                                               // 0x1A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           RadialBlurPostEffectMaterial;                             // 0x1A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RadialBlurEffectIsActiveOnCamera;                         // 0x1A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HaveAppliedEmpBuffEffect;                                 // 0x1A51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x1A52(0x0006) MISSED OFFSET
	class UMaterialInstance*                           EmpPostEffectMaterialInstance;                            // 0x1A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               haveAppliedDamagePostEffect;                              // 0x1A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1A61(0x0007) MISSED OFFSET
	class UMaterialInstance*                           healthDamagedMaterial_Inst;                               // 0x1A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              deltaTimeSum;                                             // 0x1A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeOfImpactFromDeltaSum;                                 // 0x1A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeToKeepDamageEffectOnScreen;                           // 0x1A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1A7C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           SelfShooterCharRef;                                       // 0x1A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectScreenDamageInstance;                               // 0x1A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1A8C(0x0004) MISSED OFFSET
	class UMaterialInstance*                           healthDamagedLight_Inst;                                  // 0x1A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 GravityTransitionCurve;                                   // 0x1A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lastGang;                                                 // 0x1AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGravityTransitionSound;                              // 0x1AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x1AA5(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x1AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GroundNormal;                                             // 0x1AAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1AAD(0x0003) MISSED OFFSET
	int                                                NumGibBloodSplatters;                                     // 0x1AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1AB4(0x0004) MISSED OFFSET
	class UMaterialInstance*                           friendlyTeamIsLawPostEffect;                              // 0x1AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           friendlyTeamIsBreakersPostEffect;                         // 0x1AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           InGravityPostProcess;                                     // 0x1AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InGravityFX;                                              // 0x1AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1AD1(0x0003) MISSED OFFSET
	float                                              EnterGravityTimeInSeconds;                                // 0x1AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityTransitionMaxSeconds;                              // 0x1AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityTransitionTimeNegative1to1;                        // 0x1ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitGravityTimeInSeconds;                                 // 0x1AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGravityEnterAndExitStates>            LocalPlayerGravityTransitionState;                        // 0x1AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1AE5(0x0003) MISSED OFFSET
	class UMaterialInstance*                           ScreenDirtDamageMaterialInstance;                         // 0x1AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldApplyDirtToScreen;                                 // 0x1AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1AF1(0x0003) MISSED OFFSET
	float                                              SpawnInGameTimeInSeconds;                                 // 0x1AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HowLongShouldSpawnTransitionBe;                           // 0x1AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESpawnInState>                         SpawnTransitionCurrentState;                              // 0x1AFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x1AFD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x1AFE(0x0002) MISSED OFFSET
	float                                              DeathTimeInSeconds;                                       // 0x1B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastFrameInventoryCountFp;                                // 0x1B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastFrameInventoryCount3p;                                // 0x1B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveSetPostIndexForWeaponsForSpawnAndDissolve;           // 0x1B0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x1B0D(0x0003) MISSED OFFSET
	float                                              LastDealtDamageTimeInSecondsPrimary;                      // 0x1B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimeForFirstPersonBlood;                           // 0x1B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FirstPersonBloodFadeCurve;                                // 0x1B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterEventTimeInSeconds;                                  // 0x1B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HowLongWaterEffectsShouldStayOn;                          // 0x1B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FirstPersonCurve;                                         // 0x1B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ThirdPersonCurve;                                         // 0x1B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPawnInWaterStates>                    StateOfPlayerInWater;                                     // 0x1B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1B39(0x0003) MISSED OFFSET
	float                                              IKTraceDistance;                                          // 0x1B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleForIK;                                               // 0x1B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x1B44(0x0004) MISSED OFFSET
	TArray<struct FName>                               SocketListOne;                                            // 0x1B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SocketListTwo;                                            // 0x1B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LocalPawnWaterSaturationAmount0to1;                       // 0x1B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveFoundLevelMusicActor;                                // 0x1B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastFrameShouldHaveEnemyOutlinesEnabled;                  // 0x1B6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnemyHighlightsAreEnabled;                               // 0x1B6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x1B6F(0x0001) MISSED OFFSET
	class UMaterialInstance*                           firstPersonBloodFromDamagePost;                           // 0x1B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveAppliedFirstPersonBloodPost;                         // 0x1B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1B79(0x0003) MISSED OFFSET
	float                                              HowCloseGibbedPawnMustBeToAffect;                         // 0x1B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           GravityTransitionMaterialInstance;                        // 0x1B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FrameSum;                                                 // 0x1B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x1B8C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Spawn_Sound;                                              // 0x1B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerGibbed;                                             // 0x1B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GravityTransitionIsAppliedToScreen;                       // 0x1B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InGravityPostProcessEffectIsActive;                       // 0x1B9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x5];                                       // 0x1B9B(0x0005) MISSED OFFSET
	class UMaterialInstance*                           DebugCharacterIndexMat;                                   // 0x1BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldDebugCharacterIndex;                               // 0x1BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x1BA9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    P_Gravity_Streamers_USETHIS;                              // 0x1BB0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Shadow_Outline_USETHIS;                                 // 0x1BB8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Player_Gravity_Ambience_USETHIS;                        // 0x1BC0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bPostIndicesDebugPostIsApplied;                           // 0x1BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHealingAndDebuffState>                DebuffAndHealingState;                                    // 0x1BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x6];                                       // 0x1BCA(0x0006) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                HealCameraLensFX;                                         // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               DeSpawnSound;                                             // 0x1BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                ShieldCameraLensFX;                                       // 0x1BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHighlightIsDisabledByGameplayCode;                       // 0x1BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasKilledByLightingHands;                                // 0x1BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1BEA(0x0002) MISSED OFFSET
	float                                              BaseGravityScale;                                         // 0x1BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealBegin;                                                // 0x1BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealLoop;                                                 // 0x1BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HealEnd;                                                  // 0x1C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           EnforcerBuffPost;                                         // 0x1C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHaveBeenAbleToApplyPostIndicesToWeapons;                 // 0x1C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1C11(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    ShooterPlayerControllerRef;                               // 0x1C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPerspectiveFXData                          HealFX;                                                   // 0x1C20(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstance*                           ScreenGravGrenadeDamageMaterialInstance;                  // 0x1C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           RNRPostProcessInstance;                                   // 0x1C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShooterWidgetComponent*                     ShooterNPCWidget_Safe;                                    // 0x1C98(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           Camera_Effect_Confetti;                                   // 0x1CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x1CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsThirdPersonPawn_bThisIsAThirdPersonPawn;       // 0x1CA9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x2];                                       // 0x1CAA(0x0002) MISSED OFFSET
	float                                              CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1CAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_GetBloodSplatMaterialParamaterName_firstPersonBloodSplatStrengthMaterialParamFName;// 0x1CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsGoreEnabled_ReturnValue;                       // 0x1CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EHealWidgetState>                      K2Node_Event_HealWidgetState;                             // 0x1CB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bActive;                                     // 0x1CBA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x1CBB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x1CBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x1CBD(0x0003) MISSED OFFSET
	float                                              CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x1CC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScalarParameterValue_ReturnValue;             // 0x1CC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_Event_DamagedPlayer;                               // 0x1CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageType;                                  // 0x1CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_DamageDealt;                                 // 0x1CD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_HealthFraction;                              // 0x1CDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bWasHeadShot;                                // 0x1CE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x1CE1(0x0003) MISSED OFFSET
	int                                                CallFunc_FTrunc_ReturnValue;                              // 0x1CE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue;               // 0x1CE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x1CE9(0x0007) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue;                // 0x1CF0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x1CF9(0x0007) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue2;               // 0x1D00(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x1D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x1D09(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetLocalPlayerController_ReturnValue;            // 0x1D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooter_Player_Controller;           // 0x1D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x1D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x1D21(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_NewTarget;                             // 0x1D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x1D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedSpectator_ReturnValue;                // 0x1D31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x6];                                       // 0x1D32(0x0006) MISSED OFFSET
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue;                           // 0x1D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterHUD*                                 CallFunc_GetLocalHUD_ReturnValue;                         // 0x1D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue2;                          // 0x1D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x1D50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x1D51(0x0007) MISSED OFFSET
	class UShooterGameModeStatusWidget*                CallFunc_GetGameModeStatusWidget_ReturnValue;             // 0x1D58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x1D60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x1D61(0x0007) MISSED OFFSET
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue3;                          // 0x1D68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x1D70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x1D71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsEndMatchActive_ReturnValue;                    // 0x1D72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x1D73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x1D74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x1D75(0x0003) MISSED OFFSET
	class UUserWidget*                                 CallFunc_GetUserWidgetObject_ReturnValue;                 // 0x1D78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCameraComponent*                            CallFunc_GetThirdPersonCamera_ReturnValue;                // 0x1D80(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UShooterNPCMasterWidget*                     K2Node_DynamicCast_AsShooter_NPCMaster_Widget;            // 0x1D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0x1D90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x1D91(0x0007) MISSED OFFSET
	class UShooterNPCNameWidget*                       CallFunc_GetNameWidget_ReturnValue;                       // 0x1D98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x1DA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x1DA1(0x0007) MISSED OFFSET
	class UShooterNPCHealthBar*                        CallFunc_GetHealthBarWidget_ReturnValue;                  // 0x1DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterNPCHealMeWidget*                     CallFunc_GetHealMeWidget_ReturnValue;                     // 0x1DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x1DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue10;                           // 0x1DB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x6];                                       // 0x1DBA(0x0006) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetThirdPersonCamera_ReturnValue2;               // 0x1DC0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bEntered;                                    // 0x1DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue11;                           // 0x1DC9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x6];                                       // 0x1DCA(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetLocallyControlledOrSpectatedCharacter_ReturnValue;// 0x1DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    CallFunc_GetShooterPlayerController_ReturnValue;          // 0x1DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x1DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1DE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x6];                                       // 0x1DE2(0x0006) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue3;               // 0x1DE8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue12;                           // 0x1DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x1DF1(0x0007) MISSED OFFSET
	class UUserWidget*                                 CallFunc_GetUserWidgetObject_ReturnValue2;                // 0x1DF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterNPCMasterWidget*                     K2Node_DynamicCast_AsShooter_NPCMaster_Widget2;           // 0x1E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0x1E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAliveFirstPersonPawnNative_ReturnValue;        // 0x1E09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x2];                                       // 0x1E0A(0x0002) MISSED OFFSET
	float                                              K2Node_Event_Damage;                                      // 0x1E0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageType2;                                 // 0x1E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       K2Node_Event_InstigatingPawn;                             // 0x1E18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x1E20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue2;              // 0x1E28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue3;              // 0x1E29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue4;              // 0x1E2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1E2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue5;              // 0x1E2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchFloat_OutResult;                           // 0x1E2D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1E2E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x1E2F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x1E30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x1E31(0x0003) MISSED OFFSET
	float                                              CallFunc_GetGameTimeInSeconds_ReturnValue3;               // 0x1E34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_NormalizeFloat0to1_Result0to1;                   // 0x1E38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_NormalizeFloat0to1_Result0to12;                  // 0x1E3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1E40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x1E44(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x1E48(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsGoreEnabled_ReturnValue2;                      // 0x1E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x3];                                       // 0x1E59(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1E5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1E60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAliveFirstPersonPawnNative_ReturnValue2;       // 0x1E64(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x1E65(0x0003) MISSED OFFSET
	float                                              CallFunc_GetGravityScaleIgnoreOverrides_ReturnValue;      // 0x1E68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetGravityScaleNormalized_ReturnValue;           // 0x1E6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x1E70(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable;                            // 0x1E78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x1E7C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item;                                  // 0x1E80(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1E88(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMovingOnGround_ReturnValue;                    // 0x1E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue2;                // 0x1E91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue3;                // 0x1E92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x1];                                       // 0x1E93(0x0001) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x1E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue4;                          // 0x1E98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetScalarParameterValue_ReturnValue2;            // 0x1EA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1EA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1EA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x1EA9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x1EAC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue5;                          // 0x1EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AShooterCharacter*>                   CallFunc_GetAllShooterCharacters_OutShooterCharacters;    // 0x1EC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x1ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x1ED4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue2;               // 0x1EE0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue4;               // 0x1EE8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAliveOrDeadFirstPersonPawn_bThisIsAnAliveOrDeadFirstPersonPawn;// 0x1EF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x1EF1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x1EF4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x1F00(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageType3;                                 // 0x1F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue6;              // 0x1F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x1F11(0x0007) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue5;               // 0x1F18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x1F20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x1F24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x3];                                       // 0x1F25(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x1F28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x4];                                       // 0x1F2C(0x0004) MISSED OFFSET
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue6;               // 0x1F30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	class UCameraComponent*                            CallFunc_GetFirstPersonCamera_ReturnValue7;               // 0x1F38(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue13;                           // 0x1F40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue14;                           // 0x1F41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x6];                                       // 0x1F42(0x0006) MISSED OFFSET
	class AShooter_BuffBase*                           CallFunc_GetBuff_ReturnValue;                             // 0x1F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue15;                           // 0x1F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x1F51(0x0007) MISSED OFFSET
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue6;                          // 0x1F58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkSoundInstance*                            CallFunc_PostEvent_ReturnValue7;                          // 0x1F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageType4;                                 // 0x1F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bWasFirstPerson;                             // 0x1F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue7;              // 0x1F71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ClassClass_ReturnValue8;              // 0x1F72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x1F73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x1F74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1F78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x1F7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x1F7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x1F7E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x1F7F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x1F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x1F81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x1F82(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x1F83(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue2;             // 0x1F84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x3];                                       // 0x1F85(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x1F88(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0x1F98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0x1F99(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x2];                                       // 0x1F9A(0x0002) MISSED OFFSET
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1F9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x1FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x4];                                       // 0x1FA4(0x0004) MISSED OFFSET
	class UMaterialInstance*                           K2Node_Select_Default;                                    // 0x1FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstance*                           Temp_object_Variable;                                     // 0x1FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               CallFunc_BranchInt_OutResult;                             // 0x1FB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x1FB9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x1FBA(0x0002) MISSED OFFSET
	int                                                Temp_int_Variable2;                                       // 0x1FBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x1FC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x1FC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x3];                                       // 0x1FC5(0x0003) MISSED OFFSET
	class UMaterialInstance*                           K2Node_Select2_Default;                                   // 0x1FC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x1FD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Array_Index_Variable2;                           // 0x1FD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_Array_Get_Item2;                                 // 0x1FD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerPawn_C*                               K2Node_DynamicCast_AsPlayer_Pawn;                         // 0x1FE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess4;                             // 0x1FE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x3];                                       // 0x1FE9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetTeamIndexForPosts_PostScalar;                 // 0x1FEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FTrunc_ReturnValue2;                             // 0x1FF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0xC];                                       // 0x1FF4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PlayerPawn.PlayerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateTickForJumpKickSounds();
	void UpdateTickForGravityTransitions();
	void UpdateTickFor3pAmmoDisplays();
	void UpdateTeamHighlights();
	void UpdateLastFrameVariables();
	void UpdateInGravityPostProcessEvent();
	void UpdateGravityTransitionPostEffect();
	void UpdateGameplayFresnel();
	void UpdateDebugPostIndices();
	void UpdateAmmoData();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Stop_Confetti_Buff();
	void Start_Confetti_Buff();
	void SetupSpawnStateForFX();
	void SetRNRPostOnFirstAndThirdPersonCamera();
	void SetPlayerSideAudioSwitch();
	void SetLocalTeamNumberForFX();
	void Screen_Effect_Confetti_Start__UpdateFunc();
	void Screen_Effect_Confetti_Start__FinishedFunc();
	void Screen_Effect_Confetti_End__UpdateFunc();
	void Screen_Effect_Confetti_End__FinishedFunc();
	void ScreenDirtTimeline__UpdateFunc();
	void ScreenDirtTimeline__FinishedFunc();
	void ResetRTPCValues();
	void RequestUpdateToCharacterIndex3P();
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void ReceiveBeginPlay();
	void OnStopSpectating();
	void OnSpectatorTargetChanged(class AShooterCharacter* bpp__NewTarget__pf);
	void OnSetPostIndiceForThirdPersonPawnEvent();
	void OnLocalPlayerTookDamage(float bpp__Damage__pf, class UClass* bpp__DamageType__pf, class APawn* bpp__InstigatingPawn__pf, class AActor* bpp__DamageCauser__pf);
	void OnLocalPlayerDealtDamage(class AShooterCharacter* bpp__DamagedPlayer__pf__const, class UClass* bpp__DamageType__pf, int bpp__DamageDealt__pf, float bpp__HealthFraction__pf, bool bpp__bWasHeadShot__pf);
	void OnEndOfMatchOverlaySet();
	void OnEndOfMatchOverlayCleared();
	void OnCharacterCustomizationCompleted();
	void GetBloodSplatMaterialParamaterName(struct FName* bpp__firstPersonBloodSplatStrengthMaterialParamFName__pf);
	void GetAmmoInfo(int bpp__FirexMode__pfT, int* bpp__CurrentxAmmo__pfT, int* bpp__MaxxAmmo__pfT, bool* bpp__InfoIsValid__pf);
	void FindLevelMusicActorIfNotAlreadyFound();
	void ExecuteUbergraph_PlayerPawn_17(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PlayerPawn_14(int bpp__EntryPoint__pf);
	void ExecuteUbergraph_PlayerPawn_13(int bpp__EntryPoint__pf);
	void EventOnHealWidgetUpdate(TEnumAsByte<EHealWidgetState> bpp__HealWidgetState__pf, bool bpp__bActive__pf);
	void DampIIR(float bpp__NewValue__pf, float bpp__PreviousValue__pf, float bpp__DampFactor__pf, float bpp__DeltaTime__pf, float* bpp__DampedValue__pf);
	void BPToggleDangerZone(bool bpp__bEntered__pf);
	void BlueprintEventDeath(class UClass* bpp__DamageType__pf, bool bpp__bWasFirstPerson__pf);
	void BeginDeathFX(class UClass* bpp__DamageType__pf);
	void AdjustPostEffectsForLocalPlayerHealth();
	void SpectatorTargetChanged__DelegateSignature(class AShooterCharacter* NewTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
