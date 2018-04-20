#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_PlayerPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn.PlayerPawn_C.UserConstructionScript
struct APlayerPawn_C_UserConstructionScript_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateTickForJumpKickSounds
struct APlayerPawn_C_UpdateTickForJumpKickSounds_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateTickForGravityTransitions
struct APlayerPawn_C_UpdateTickForGravityTransitions_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateTickFor3pAmmoDisplays
struct APlayerPawn_C_UpdateTickFor3pAmmoDisplays_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateTeamHighlights
struct APlayerPawn_C_UpdateTeamHighlights_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateLastFrameVariables
struct APlayerPawn_C_UpdateLastFrameVariables_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateInGravityPostProcessEvent
struct APlayerPawn_C_UpdateInGravityPostProcessEvent_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateGravityTransitionPostEffect
struct APlayerPawn_C_UpdateGravityTransitionPostEffect_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateGameplayFresnel
struct APlayerPawn_C_UpdateGameplayFresnel_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateDebugPostIndices
struct APlayerPawn_C_UpdateDebugPostIndices_Params
{
};

// Function PlayerPawn.PlayerPawn_C.UpdateAmmoData
struct APlayerPawn_C_UpdateAmmoData_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Timeline_0__UpdateFunc
struct APlayerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Timeline_0__FinishedFunc
struct APlayerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Stop Confetti Buff
struct APlayerPawn_C_Stop_Confetti_Buff_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Start Confetti Buff
struct APlayerPawn_C_Start_Confetti_Buff_Params
{
};

// Function PlayerPawn.PlayerPawn_C.SetupSpawnStateForFX
struct APlayerPawn_C_SetupSpawnStateForFX_Params
{
};

// Function PlayerPawn.PlayerPawn_C.SetRNRPostOnFirstAndThirdPersonCamera
struct APlayerPawn_C_SetRNRPostOnFirstAndThirdPersonCamera_Params
{
};

// Function PlayerPawn.PlayerPawn_C.SetPlayerSideAudioSwitch
struct APlayerPawn_C_SetPlayerSideAudioSwitch_Params
{
};

// Function PlayerPawn.PlayerPawn_C.SetLocalTeamNumberForFX
struct APlayerPawn_C_SetLocalTeamNumberForFX_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Screen Effect Confetti Start__UpdateFunc
struct APlayerPawn_C_Screen_Effect_Confetti_Start__UpdateFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Screen Effect Confetti Start__FinishedFunc
struct APlayerPawn_C_Screen_Effect_Confetti_Start__FinishedFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Screen Effect Confetti End__UpdateFunc
struct APlayerPawn_C_Screen_Effect_Confetti_End__UpdateFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.Screen Effect Confetti End__FinishedFunc
struct APlayerPawn_C_Screen_Effect_Confetti_End__FinishedFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.ScreenDirtTimeline__UpdateFunc
struct APlayerPawn_C_ScreenDirtTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.ScreenDirtTimeline__FinishedFunc
struct APlayerPawn_C_ScreenDirtTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn.PlayerPawn_C.ResetRTPCValues
struct APlayerPawn_C_ResetRTPCValues_Params
{
};

// Function PlayerPawn.PlayerPawn_C.RequestUpdateToCharacterIndex3P
struct APlayerPawn_C_RequestUpdateToCharacterIndex3P_Params
{
};

// Function PlayerPawn.PlayerPawn_C.ReceiveTick
struct APlayerPawn_C_ReceiveTick_Params
{
	float                                              bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.ReceiveBeginPlay
struct APlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn.PlayerPawn_C.OnStopSpectating
struct APlayerPawn_C_OnStopSpectating_Params
{
};

// Function PlayerPawn.PlayerPawn_C.OnSpectatorTargetChanged
struct APlayerPawn_C_OnSpectatorTargetChanged_Params
{
	class AShooterCharacter*                           bpp__NewTarget__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.OnSetPostIndiceForThirdPersonPawnEvent
struct APlayerPawn_C_OnSetPostIndiceForThirdPersonPawnEvent_Params
{
};

// Function PlayerPawn.PlayerPawn_C.OnLocalPlayerTookDamage
struct APlayerPawn_C_OnLocalPlayerTookDamage_Params
{
	float                                              bpp__Damage__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      bpp__DamageType__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       bpp__InstigatingPawn__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      bpp__DamageCauser__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.OnLocalPlayerDealtDamage
struct APlayerPawn_C_OnLocalPlayerDealtDamage_Params
{
	class AShooterCharacter*                           bpp__DamagedPlayer__pf__const;                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      bpp__DamageType__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bpp__DamageDealt__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__HealthFraction__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bWasHeadShot__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.OnEndOfMatchOverlaySet
struct APlayerPawn_C_OnEndOfMatchOverlaySet_Params
{
};

// Function PlayerPawn.PlayerPawn_C.OnEndOfMatchOverlayCleared
struct APlayerPawn_C_OnEndOfMatchOverlayCleared_Params
{
};

// Function PlayerPawn.PlayerPawn_C.OnCharacterCustomizationCompleted
struct APlayerPawn_C_OnCharacterCustomizationCompleted_Params
{
};

// Function PlayerPawn.PlayerPawn_C.GetBloodSplatMaterialParamaterName
struct APlayerPawn_C_GetBloodSplatMaterialParamaterName_Params
{
	struct FName                                       bpp__firstPersonBloodSplatStrengthMaterialParamFName__pf; // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.GetAmmoInfo
struct APlayerPawn_C_GetAmmoInfo_Params
{
	int                                                bpp__FirexMode__pfT;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bpp__CurrentxAmmo__pfT;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                bpp__MaxxAmmo__pfT;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__InfoIsValid__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.FindLevelMusicActorIfNotAlreadyFound
struct APlayerPawn_C_FindLevelMusicActorIfNotAlreadyFound_Params
{
};

// Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn_17
struct APlayerPawn_C_ExecuteUbergraph_PlayerPawn_17_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn_14
struct APlayerPawn_C_ExecuteUbergraph_PlayerPawn_14_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn_13
struct APlayerPawn_C_ExecuteUbergraph_PlayerPawn_13_Params
{
	int                                                bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.EventOnHealWidgetUpdate
struct APlayerPawn_C_EventOnHealWidgetUpdate_Params
{
	TEnumAsByte<EHealWidgetState>                      bpp__HealWidgetState__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bActive__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.DampIIR
struct APlayerPawn_C_DampIIR_Params
{
	float                                              bpp__NewValue__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__PreviousValue__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__DampFactor__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__DeltaTime__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              bpp__DampedValue__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.BPToggleDangerZone
struct APlayerPawn_C_BPToggleDangerZone_Params
{
	bool                                               bpp__bEntered__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.BlueprintEventDeath
struct APlayerPawn_C_BlueprintEventDeath_Params
{
	class UClass*                                      bpp__DamageType__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__bWasFirstPerson__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.BeginDeathFX
struct APlayerPawn_C_BeginDeathFX_Params
{
	class UClass*                                      bpp__DamageType__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn.PlayerPawn_C.AdjustPostEffectsForLocalPlayerHealth
struct APlayerPawn_C_AdjustPostEffectsForLocalPlayerHealth_Params
{
};

// DelegateFunction PlayerPawn.PlayerPawn_C.SpectatorTargetChanged__DelegateSignature
struct APlayerPawn_C_SpectatorTargetChanged__DelegateSignature_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
