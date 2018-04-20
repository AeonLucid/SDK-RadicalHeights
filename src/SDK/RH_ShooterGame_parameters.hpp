#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShooterGame.ShooterState_RevivedFromDown.OnReviveCompleted
struct UShooterState_RevivedFromDown_OnReviveCompleted_Params
{
};

// Function ShooterGame.CustomAccountPortraitData.IsFlipBook
struct UCustomAccountPortraitData_IsFlipBook_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomAccountPortraitData.GetSmallPortraitObject
struct UCustomAccountPortraitData_GetSmallPortraitObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomAccountPortraitData.GetMediumPortraitObject
struct UCustomAccountPortraitData_GetMediumPortraitObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomAccountPortraitData.GetLargePortraitObject
struct UCustomAccountPortraitData_GetLargePortraitObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.CustomizationBlueprintActor.PlayWeaponCustomFX
struct ACustomizationBlueprintActor_PlayWeaponCustomFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               IdleSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CustomMenuFX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomFXPerspective>                  MenuPerspective;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimary;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationBlueprintActor.PlayOffHandWeaponCustomFX
struct ACustomizationBlueprintActor_PlayOffHandWeaponCustomFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               IdleSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CustomMenuFX;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECustomFXPerspective>                  MenuPerspective;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationBlueprintActor.PlayCharacterCustomFX
struct ACustomizationBlueprintActor_PlayCharacterCustomFX_Params
{
	class UParticleSystem*                             TeamEmitterTemplate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EnemyEmitterTemplate;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIsFirstPersonOverride>                IsFirstPersonOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayInFirst;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayInThird;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationBlueprintActor.OnStartCustomization
struct ACustomizationBlueprintActor_OnStartCustomization_Params
{
};

// Function ShooterGame.CustomizationBlueprintActor.OnKickKill
struct ACustomizationBlueprintActor_OnKickKill_Params
{
};

// Function ShooterGame.CustomizationBlueprintActor.GetLocalActiveCamera
struct ACustomizationBlueprintActor_GetLocalActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.CustomizationContainerBlueprint.PlayWeaponCustomFX
struct ACustomizationContainerBlueprint_PlayWeaponCustomFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               IdleSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimary;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationContainerBlueprint.PlayOffHandWeaponCustomFX
struct ACustomizationContainerBlueprint_PlayOffHandWeaponCustomFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               IdleSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationContainerBlueprint.PlayCharacterCustomFX
struct ACustomizationContainerBlueprint_PlayCharacterCustomFX_Params
{
	class UParticleSystem*                             TeamEmitterTemplate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EnemyEmitterTemplate;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIsFirstPersonOverride>                IsFirstPersonOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayInFirst;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayInThird;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.CustomizationContainerBlueprint.OnStartCustomization
struct ACustomizationContainerBlueprint_OnStartCustomization_Params
{
};

// Function ShooterGame.DialogueBlueprint.PlayDialogue
struct UDialogueBlueprint_PlayDialogue_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnDiscardSound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePriorityConflictResolution;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPriorityConflictResolution;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumReplayTimeInSeconds;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumWaitTimeBeforeInterruptingInSeconds;               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenOwnerDestroyed;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.DialogueBlueprint.GetAssociatedWorld
struct UDialogueBlueprint_GetAssociatedWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.DialogueBlueprint.GetAssociatedActor
struct UDialogueBlueprint_GetAssociatedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.DialogueBlueprint.BlueprintTick
struct UDialogueBlueprint_BlueprintTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterVendingMachine.SetItemRarity
struct AShooterVendingMachine_SetItemRarity_Params
{
	int                                                ItemRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterVendingMachine.OnItemPurchased
struct AShooterVendingMachine_OnItemPurchased_Params
{
};

// Function ShooterGame.ShooterVendingMachine.OnInsufficientFunds
struct AShooterVendingMachine_OnInsufficientFunds_Params
{
};

// Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseSucceeded
struct AShooterVendingMachine_NetMulticastPurchaseSucceeded_Params
{
};

// Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseFailed
struct AShooterVendingMachine_NetMulticastPurchaseFailed_Params
{
};

// Function ShooterGame.ShooterPickup.OnRep_VendingOwner
struct AShooterPickup_OnRep_VendingOwner_Params
{
};

// Function ShooterGame.ShooterPickup.OnRep_FinalCost
struct AShooterPickup_OnRep_FinalCost_Params
{
};

// Function ShooterGame.ShooterPickup.OnPickupAlt
struct AShooterPickup_OnPickupAlt_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPickup.OnPickup
struct AShooterPickup_OnPickup_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPickup.NetMulticastPlayPickupFX
struct AShooterPickup_NetMulticastPlayPickupFX_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameData.Get
struct UShooterGameData_Get_Params
{
	class UShooterGameData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueAnnouncer.OnRoundEnd
struct UShooterDialogueAnnouncer_OnRoundEnd_Params
{
};

// Function ShooterGame.ShooterDialogueAnnouncer.OnGameStarted
struct UShooterDialogueAnnouncer_OnGameStarted_Params
{
};

// Function ShooterGame.ShooterDialogueAnnouncer.OnGameEnded
struct UShooterDialogueAnnouncer_OnGameEnded_Params
{
};

// Function ShooterGame.ShooterDialogueAnnouncer.GetLocalPlayerController
struct UShooterDialogueAnnouncer_GetLocalPlayerController_Params
{
	class AShooterPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueAnnouncer.GetLocalCharacter
struct UShooterDialogueAnnouncer_GetLocalCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPhysicsVolume_Gravity.SetVolumeGravityType
struct AShooterPhysicsVolume_Gravity_SetVolumeGravityType_Params
{
	TEnumAsByte<EGravityBubble>                        NewGravityType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGravitySeed.GetProjectileGravityScale
struct AShooterGravitySeed_GetProjectileGravityScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.SpawnPhysicsPickup
struct UShooterGameUtils_SpawnPhysicsPickup_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialDirection;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.SpawnBloodSplatterDecals
struct UShooterGameUtils_SpawnBloodSplatterDecals_Params
{
	class AActor*                                      FromActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DecalArray;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RandomAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumDecals;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnOnActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAttached
struct UShooterGameUtils_ShooterSpawnEmitterAttached_Params
{
	class UParticleSystem*                             TeamEmitterTemplate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EnemyEmitterTemplate;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EIsFirstPersonOverride>                IsFirstPersonOverride;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAtLocation
struct UShooterGameUtils_ShooterSpawnEmitterAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TeamEmitterTemplate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EnemyEmitterTemplate;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.SetSurfaceSwitch
struct UShooterGameUtils_SetSurfaceSwitch_Params
{
	TEnumAsByte<EShooterPhysMaterialType>              SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsImpact;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterialsForAllMeshes
struct UShooterGameUtils_SetScalarParamForAllMaterialsForAllMeshes_Params
{
	class AShooterCharacter*                           playerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ParamVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterials
struct UShooterGameUtils_SetScalarParamForAllMaterials_Params
{
	class USkeletalMeshComponent*                      InMesh;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ParamVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.PredictProjectilePath
struct UShooterGameUtils_PredictProjectilePath_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<struct FVector>                             OutPathPositions;                                         // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     OutLastTraceDestination;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTracePath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DrawDebugTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreNonBlocking;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SimFrequency;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.PlayVoiceOver
struct UShooterGameUtils_PlayVoiceOver_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVoiceOverData                              VOData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ObjectivePlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.PlayDialogueTeamSpecific
struct UShooterGameUtils_PlayDialogueTeamSpecific_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FriendlyEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EnemyEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ObjectivePlayerEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorLawEvent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorBreakersEvent;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ObjectivePlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinReplayTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePrioConflictResolution;                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPrioConflictResolution;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEnemyIfEmpty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEarsTeamSpecific
struct UShooterGameUtils_PlayAkAudioEventInEarsTeamSpecific_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               FriendlyEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EnemyEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkSoundInstance*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEars
struct UShooterGameUtils_PlayAkAudioEventInEars_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkSoundInstance*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.LineTraceActors
struct UShooterGameUtils_LineTraceActors_Params
{
	class AActor*                                      Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Destination;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnorePlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsPS4Build
struct UShooterGameUtils_IsPS4Build_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsPositionInWarningOrDangerZone
struct UShooterGameUtils_IsPositionInWarningOrDangerZone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsPositionInsideDome
struct UShooterGameUtils_IsPositionInsideDome_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CheckLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsPositionInDangerZone
struct UShooterGameUtils_IsPositionInDangerZone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsInEditor
struct UShooterGameUtils_IsInEditor_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludePlayInEditor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsGoreEnabled
struct UShooterGameUtils_IsGoreEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForViewedPlayer
struct UShooterGameUtils_IsFriendlyTeamForViewedPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFreeCamIsFriendly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForLocalPlayer
struct UShooterGameUtils_IsFriendlyTeamForLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFreeCamIsFriendly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.HideCharacter
struct UShooterGameUtils_HideCharacter_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetViewedPlayerTeamNum
struct UShooterGameUtils_GetViewedPlayerTeamNum_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetShooterProjectilesInRadius
struct UShooterGameUtils_GetShooterProjectilesInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterProjectile*>                  OutShooterProjectiles;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetShooterHUD
struct UShooterGameUtils_GetShooterHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetShooterDroidsInRadius
struct UShooterGameUtils_GetShooterDroidsInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterBaseDroid*>                   OutShooterDroids;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetShooterCharactersPartitionedByRadius
struct UShooterGameUtils_GetShooterCharactersPartitionedByRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharactersInRadius;                             // (Parm, OutParm, ZeroConstructor)
	TArray<class AShooterCharacter*>                   OutShooterCharactersOutOfRadius;                          // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetShooterCharactersInRadius
struct UShooterGameUtils_GetShooterCharactersInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetShooterCharacterCarryingFlag
struct UShooterGameUtils_GetShooterCharacterCarryingFlag_Params
{
	class AShooterCharacter*                           Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterFlag*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetPlayerMovementCardinalDirection
struct UShooterGameUtils_GetPlayerMovementCardinalDirection_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetNumLiveAndNotDownCharactersOnTeam
struct UShooterGameUtils_GetNumLiveAndNotDownCharactersOnTeam_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetNeutralColorSecondary
struct UShooterGameUtils_GetNeutralColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetNeutralColorPrimary
struct UShooterGameUtils_GetNeutralColorPrimary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetMyTeamColorSecondary
struct UShooterGameUtils_GetMyTeamColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetMyTeamColor
struct UShooterGameUtils_GetMyTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetMainHudWidget
struct UShooterGameUtils_GetMainHudWidget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UShooterHudWidget*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetLocalTeamNum
struct UShooterGameUtils_GetLocalTeamNum_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetLocallyControlledOrSpectatedCharacter
struct UShooterGameUtils_GetLocallyControlledOrSpectatedCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeamAsActors
struct UShooterGameUtils_GetLiveCharactersOnTeamAsActors_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeam
struct UShooterGameUtils_GetLiveCharactersOnTeam_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameUtils.GetInterceptLocation
struct UShooterGameUtils_GetInterceptLocation_Params
{
	float                                              ObjSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ObjPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetPos;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TargetAccel;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InMaxInterations;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetGravitySeedsInRadius
struct UShooterGameUtils_GetGravitySeedsInRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterGravitySeed*>                 OutSeeds;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetFriendsNearPosition
struct UShooterGameUtils_GetFriendsNearPosition_Params
{
	class AController*                                 InInstigator;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetFlagFromTeamNum
struct UShooterGameUtils_GetFlagFromTeamNum_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterFlag*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetEnemyTeamColorSecondary
struct UShooterGameUtils_GetEnemyTeamColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetEnemyTeamColor
struct UShooterGameUtils_GetEnemyTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetEnemiesNearPosition
struct UShooterGameUtils_GetEnemiesNearPosition_Params
{
	class AController*                                 InInstigator;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetEnemiesNearCharacter
struct UShooterGameUtils_GetEnemiesNearCharacter_Params
{
	class AShooterCharacter*                           InCharacter;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetDistanceToFloor
struct UShooterGameUtils_GetDistanceToFloor_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetCursorizedRightVelocity
struct UShooterGameUtils_GetCursorizedRightVelocity_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetCursorizedForwardVelocity
struct UShooterGameUtils_GetCursorizedForwardVelocity_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetClosestPointOnGroundAround
struct UShooterGameUtils_GetClosestPointOnGroundAround_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetClosestCharacterToPosition
struct UShooterGameUtils_GetClosestCharacterToPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetCardinalDirection
struct UShooterGameUtils_GetCardinalDirection_Params
{
	struct FVector                                     Input;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Right;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetAnimMorphTarget
struct UShooterGameUtils_GetAnimMorphTarget_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MorphTargetName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetAmmoCursor
struct UShooterGameUtils_GetAmmoCursor_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.GetAllShooterCharacters
struct UShooterGameUtils_GetAllShooterCharacters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.GetAllActorsOfClassFromWorld
struct UShooterGameUtils_GetAllActorsOfClassFromWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterGameUtils.FindClosestLOSAllies
struct UShooterGameUtils_FindClosestLOSAllies_Params
{
	class AShooterCharacter*                           SourceCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   OutShooterCharacters;                                     // (Parm, OutParm, ZeroConstructor)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.EnableMultiPassOnActorWithMaterial
struct UShooterGameUtils_EnableMultiPassOnActorWithMaterial_Params
{
	class AShooterCharacter*                           TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialForMultipass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIncludeWeapon;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.DisableMultiPassOnActor
struct UShooterGameUtils_DisableMultiPassOnActor_Params
{
	class AShooterCharacter*                           TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldIncludeWeapon;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.DampVector
struct UShooterGameUtils_DampVector_Params
{
	struct FVector                                     Source;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DampFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.DampFloat
struct UShooterGameUtils_DampFloat_Params
{
	float                                              Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DampFactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.ComputePlayerMovementCardinalDirection
struct UShooterGameUtils_ComputePlayerMovementCardinalDirection_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.BluePrintSpawnNewBuff
struct UShooterGameUtils_BluePrintSpawnNewBuff_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffToCreate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooter_BuffBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.BlueprintGetClosestShooterCharacterToAim
struct UShooterGameUtils_BlueprintGetClosestShooterCharacterToAim_Params
{
	class AShooterCharacter*                           Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BillBoardX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BillBoardY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchForTeammates;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchForAll;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.ActiveButton_SetButton
struct UShooterGameUtils_ActiveButton_SetButton_Params
{
	struct FActiveButton                               ActiveButton;                                             // (Parm, OutParm, ReferenceParm)
	class UButton*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameUtils.ActiveButton_Deactivate
struct UShooterGameUtils_ActiveButton_Deactivate_Params
{
	struct FActiveButton                               ActiveButton;                                             // (Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameUtils.ActiveButton_CreateButton
struct UShooterGameUtils_ActiveButton_CreateButton_Params
{
	class UButton*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveButton                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterGameUtils.ActiveButton_Activate
struct UShooterGameUtils_ActiveButton_Activate_Params
{
	struct FActiveButton                               ActiveButton;                                             // (Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterAbility.StopAbility
struct UShooterAbility_StopAbility_Params
{
};

// Function ShooterGame.ShooterAbility.StartAbility
struct UShooterAbility_StartAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.ShouldOverrideMaxSpeed
struct UShooterAbility_ShouldOverrideMaxSpeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.ShouldOverrideBrakingFlyDecel
struct UShooterAbility_ShouldOverrideBrakingFlyDecel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.ShouldOverrideAccel
struct UShooterAbility_ShouldOverrideAccel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.SetOverrideMaxSpeed
struct UShooterAbility_SetOverrideMaxSpeed_Params
{
	bool                                               ShouldOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.SetOverrideBrakingFlyingDecel
struct UShooterAbility_SetOverrideBrakingFlyingDecel_Params
{
	bool                                               ShouldOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.SetOverrideAccel
struct UShooterAbility_SetOverrideAccel_Params
{
	bool                                               ShouldOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.SetIgnoreGravity
struct UShooterAbility_SetIgnoreGravity_Params
{
	bool                                               ShouldIgnore;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.ServerStopAbility
struct UShooterAbility_ServerStopAbility_Params
{
};

// Function ShooterGame.ShooterAbility.ServerStartAbility
struct UShooterAbility_ServerStartAbility_Params
{
};

// Function ShooterGame.ShooterAbility.RequestCooldown
struct UShooterAbility_RequestCooldown_Params
{
};

// Function ShooterGame.ShooterAbility.ReplenishFuel
struct UShooterAbility_ReplenishFuel_Params
{
};

// Function ShooterGame.ShooterAbility.OnRep_CurrentCooldownTimeCompressed
struct UShooterAbility_OnRep_CurrentCooldownTimeCompressed_Params
{
};

// Function ShooterGame.ShooterAbility.OnReceiveDamagePreMitigation
struct UShooterAbility_OnReceiveDamagePreMitigation_Params
{
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnLand
struct UShooterAbility_OnLand_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Falldistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnKillorAssist
struct UShooterAbility_OnKillorAssist_Params
{
	class AShooterPlayerState*                         KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnJump
struct UShooterAbility_OnJump_Params
{
};

// Function ShooterGame.ShooterAbility.OnImpact
struct UShooterAbility_OnImpact_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnHealReceived
struct UShooterAbility_OnHealReceived_Params
{
	float                                              HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnHealPerformed
struct UShooterAbility_OnHealPerformed_Params
{
	float                                              HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnGlobalDeath
struct UShooterAbility_OnGlobalDeath_Params
{
	class AShooterPlayerState*                         KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnFriendSpawned
struct UShooterAbility_OnFriendSpawned_Params
{
	class AShooterCharacter*                           SpawnedFriend;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnFireWeapon
struct UShooterAbility_OnFireWeapon_Params
{
};

// Function ShooterGame.ShooterAbility.OnFall
struct UShooterAbility_OnFall_Params
{
};

// Function ShooterGame.ShooterAbility.OnDeath
struct UShooterAbility_OnDeath_Params
{
	class AShooterPlayerState*                         InKillerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                InDamageEvent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterAbility.OnDamageDealt
struct UShooterAbility_OnDamageDealt_Params
{
	float                                              DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.OnAbilityUpdate
struct UShooterAbility_OnAbilityUpdate_Params
{
};

// Function ShooterGame.ShooterAbility.OnAbilityStop
struct UShooterAbility_OnAbilityStop_Params
{
};

// Function ShooterGame.ShooterAbility.OnAbilityStart
struct UShooterAbility_OnAbilityStart_Params
{
};

// Function ShooterGame.ShooterAbility.NetMulticastStopAbility
struct UShooterAbility_NetMulticastStopAbility_Params
{
};

// Function ShooterGame.ShooterAbility.NetMulticastStartFOVTransitionOut
struct UShooterAbility_NetMulticastStartFOVTransitionOut_Params
{
};

// Function ShooterGame.ShooterAbility.NetMulticastStartAbility
struct UShooterAbility_NetMulticastStartAbility_Params
{
};

// Function ShooterGame.ShooterAbility.IsCoolDownReady
struct UShooterAbility_IsCoolDownReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.IsAbilityAvailable
struct UShooterAbility_IsAbilityAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.IsAbilityActive
struct UShooterAbility_IsAbilityActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.HasCoolDown
struct UShooterAbility_HasCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetShooterCharacterOwner
struct UShooterAbility_GetShooterCharacterOwner_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetOverrideAccel
struct UShooterAbility_GetOverrideAccel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetMaxSpeedMultiplier
struct UShooterAbility_GetMaxSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetMaxSpeed
struct UShooterAbility_GetMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetMaxAcceleration
struct UShooterAbility_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetIgnoreGravity
struct UShooterAbility_GetIgnoreGravity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetFlyingBrakingDecel
struct UShooterAbility_GetFlyingBrakingDecel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetCurrentAcceleration
struct UShooterAbility_GetCurrentAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetCoolDownPercent
struct UShooterAbility_GetCoolDownPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.GetChargeCount
struct UShooterAbility_GetChargeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility.ClientStopAbility
struct UShooterAbility_ClientStopAbility_Params
{
};

// Function ShooterGame.ShooterAbility.ClientStartAbility
struct UShooterAbility_ClientStartAbility_Params
{
};

// Function ShooterGame.ShooterAbility.ClientNotifyRechargeCompleted
struct UShooterAbility_ClientNotifyRechargeCompleted_Params
{
};

// Function ShooterGame.ShooterAbility.ClientCooldownStarted
struct UShooterAbility_ClientCooldownStarted_Params
{
};

// Function ShooterGame.ShooterAbility.ClientCancelAbility
struct UShooterAbility_ClientCancelAbility_Params
{
};

// Function ShooterGame.ShooterAbility.ActivateSpecialAbilityKick
struct UShooterAbility_ActivateSpecialAbilityKick_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.PlaySoundOnCharacter
struct UShooterDialogueCharacter_PlaySoundOnCharacter_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnTaunt
struct UShooterDialogueCharacter_OnTaunt_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnTargeting
struct UShooterDialogueCharacter_OnTargeting_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnTargetHitConfirmation
struct UShooterDialogueCharacter_OnTargetHitConfirmation_Params
{
	bool                                               UsedPrimaryWeapon;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UsedSecondaryWeapon;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         HitClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitFlesh
struct UShooterDialogueCharacter_OnSwipeHitFlesh_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitArmor
struct UShooterDialogueCharacter_OnSwipeHitArmor_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnStopAbility
struct UShooterDialogueCharacter_OnStopAbility_Params
{
	class UShooterAbility*                             Ability;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnStartAbility
struct UShooterDialogueCharacter_OnStartAbility_Params
{
	class UShooterAbility*                             Ability;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnSplitterFullyCharged
struct UShooterDialogueCharacter_OnSplitterFullyCharged_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnSelfHitConfirmation
struct UShooterDialogueCharacter_OnSelfHitConfirmation_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnRunStop
struct UShooterDialogueCharacter_OnRunStop_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnRunLoop
struct UShooterDialogueCharacter_OnRunLoop_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnRespawn
struct UShooterDialogueCharacter_OnRespawn_Params
{
	class UShooterCharacterDefinition*                 CharacterDefinition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnReceivedEnforcerBuff
struct UShooterDialogueCharacter_OnReceivedEnforcerBuff_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnOniWrathStart
struct UShooterDialogueCharacter_OnOniWrathStart_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnOniWrathEnd
struct UShooterDialogueCharacter_OnOniWrathEnd_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnNinjaKickImpact
struct UShooterDialogueCharacter_OnNinjaKickImpact_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnMedicHeal
struct UShooterDialogueCharacter_OnMedicHeal_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnMedicDroneSent
struct UShooterDialogueCharacter_OnMedicDroneSent_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnLowHealth
struct UShooterDialogueCharacter_OnLowHealth_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnKill
struct UShooterDialogueCharacter_OnKill_Params
{
	TEnumAsByte<EShooterGang>                          KilledGang;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasKick;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         KilledClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAbilityType>                          KillerAbilityType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnHitVocal
struct UShooterDialogueCharacter_OnHitVocal_Params
{
	TEnumAsByte<EAudioDamageCategory>                  DamageCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnHealSomeone
struct UShooterDialogueCharacter_OnHealSomeone_Params
{
	int                                                HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PawnYouHealed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealthPercentage;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHealthPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnHealedBy
struct UShooterDialogueCharacter_OnHealedBy_Params
{
	int                                                HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HealCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealthPercentage;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHealthPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeUntag
struct UShooterDialogueCharacter_OnHawkeyeUntag_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeTag
struct UShooterDialogueCharacter_OnHawkeyeTag_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactWall
struct UShooterDialogueCharacter_OnGrappleImpactWall_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactEnemy
struct UShooterDialogueCharacter_OnGrappleImpactEnemy_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnGaveEnforcerBuff
struct UShooterDialogueCharacter_OnGaveEnforcerBuff_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnFlagCapture
struct UShooterDialogueCharacter_OnFlagCapture_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnDeath
struct UShooterDialogueCharacter_OnDeath_Params
{
	TEnumAsByte<EAudioDamageCategory>                  KillingDamageCategory;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBelow
struct UShooterDialogueCharacter_OnDamageWarningBelow_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBehind
struct UShooterDialogueCharacter_OnDamageWarningBehind_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningAbove
struct UShooterDialogueCharacter_OnDamageWarningAbove_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnCheerAllyKill
struct UShooterDialogueCharacter_OnCheerAllyKill_Params
{
	TEnumAsByte<EShooterClass>                         CheerTargetClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.OnBatteryPickup
struct UShooterDialogueCharacter_OnBatteryPickup_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnBatteryDrop
struct UShooterDialogueCharacter_OnBatteryDrop_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnArmorBreak
struct UShooterDialogueCharacter_OnArmorBreak_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveEncourage
struct UShooterDialogueCharacter_OnAllyObjectiveEncourage_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveAffirm
struct UShooterDialogueCharacter_OnAllyObjectiveAffirm_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.OnAbilityFail
struct UShooterDialogueCharacter_OnAbilityFail_Params
{
};

// Function ShooterGame.ShooterDialogueCharacter.GetShooterCharacter
struct UShooterDialogueCharacter_GetShooterCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.FindTauntTarget
struct UShooterDialogueCharacter_FindTauntTarget_Params
{
	float                                              DeltaX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDialogueCharacter.FindKillCheerAlly
struct UShooterDialogueCharacter_FindKillCheerAlly_Params
{
	class AShooterCharacter*                           Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.FlyingDroneMovementComponent.ServerSetMovePosition
struct UFlyingDroneMovementComponent_ServerSetMovePosition_Params
{
	struct FVector                                     MovePos;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.FlyingDroneMovementComponent.ClientSetNewPos
struct UFlyingDroneMovementComponent_ClientSetNewPos_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.GraphWidget.AddSample
struct UGraphWidget_AddSample_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.HealthBar.SetHealthValueDirectlyNoAnimation
struct UHealthBar_SetHealthValueDirectlyNoAnimation_Params
{
};

// Function ShooterGame.HealthBar.SetHealthFillColorAndOpacity
struct UHealthBar_SetHealthFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.HealthBar.SetCharacter
struct UHealthBar_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.HealthBar.SetArmorFillColorAndOpacity
struct UHealthBar_SetArmorFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerRemoved__DelegateSignature
struct UMapMarkerManager_ComponentMarkerRemoved__DelegateSignature_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerAdded__DelegateSignature
struct UMapMarkerManager_ComponentMarkerAdded__DelegateSignature_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBaseDroid.ReceiveDetonate
struct AShooterBaseDroid_ReceiveDetonate_Params
{
};

// Function ShooterGame.ShooterBaseDroid.OnRep_SetShooterOwner
struct AShooterBaseDroid_OnRep_SetShooterOwner_Params
{
};

// Function ShooterGame.ShooterBaseDroid.NetMultiCastStartFX
struct AShooterBaseDroid_NetMultiCastStartFX_Params
{
	class UParticleSystem*                             FXtoPlay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    StateFxComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TeamFXtoPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAttached;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayDisableFX
struct AShooterBaseDroid_NetMultiCastPlayDisableFX_Params
{
	bool                                               bDestroyed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayActiveFX
struct AShooterBaseDroid_NetMultiCastPlayActiveFX_Params
{
};

// Function ShooterGame.ShooterBaseDroid.Detonate
struct AShooterBaseDroid_Detonate_Params
{
};

// Function ShooterGame.ShooterBaseDroid.AttachToPlayer
struct AShooterBaseDroid_AttachToPlayer_Params
{
	class AShooterCharacter*                           PlayerToAttach;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterPlayerController.UserSettingsChangedEvent__DelegateSignature
struct AShooterPlayerController_UserSettingsChangedEvent__DelegateSignature_Params
{
	bool                                               bUseGamePad;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.UserSettingsChanged
struct AShooterPlayerController_UserSettingsChanged_Params
{
};

// Function ShooterGame.ShooterPlayerController.TurnPlayer
struct AShooterPlayerController_TurnPlayer_Params
{
	float                                              TurnSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.TryChangeClass
struct AShooterPlayerController_TryChangeClass_Params
{
	int                                                ClassIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.TestWingsuit
struct AShooterPlayerController_TestWingsuit_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.TestOpenHighlightSummary
struct AShooterPlayerController_TestOpenHighlightSummary_Params
{
};

// Function ShooterGame.ShooterPlayerController.TestGetMatchHighlightCount
struct AShooterPlayerController_TestGetMatchHighlightCount_Params
{
};

// Function ShooterGame.ShooterPlayerController.TeleportToCosmetic
struct AShooterPlayerController_TeleportToCosmetic_Params
{
	int                                                CosmeticIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.Suicide
struct AShooterPlayerController_Suicide_Params
{
};

// Function ShooterGame.ShooterPlayerController.StartMapWithMode
struct AShooterPlayerController_StartMapWithMode_Params
{
	class FString                                      Map;                                                      // (Parm, ZeroConstructor)
	class FString                                      Mode;                                                     // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.StartLocalPerfFlyThrough
struct AShooterPlayerController_StartLocalPerfFlyThrough_Params
{
};

// Function ShooterGame.ShooterPlayerController.StartFinalShowdown
struct AShooterPlayerController_StartFinalShowdown_Params
{
};

// Function ShooterGame.ShooterPlayerController.StartCountdown
struct AShooterPlayerController_StartCountdown_Params
{
};

// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorTargetChanged__DelegateSignature
struct AShooterPlayerController_SpectatorTargetChanged__DelegateSignature_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorIndexChosen__DelegateSignature
struct AShooterPlayerController_SpectatorIndexChosen__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorFlagChanged__DelegateSignature
struct AShooterPlayerController_SpectatorFlagChanged__DelegateSignature_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SpawnVehicle
struct AShooterPlayerController_SpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SpawnLoot
struct AShooterPlayerController_SpawnLoot_Params
{
	unsigned char                                      LootIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SpawnAllLoot
struct AShooterPlayerController_SpawnAllLoot_Params
{
	unsigned char                                      GridSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spacing;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SimulateInputKey
struct AShooterPlayerController_SimulateInputKey_Params
{
	struct FKEY                                        KEY;                                                      // (Parm)
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ShowExternalPlayers
struct AShooterPlayerController_ShowExternalPlayers_Params
{
	int                                                bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetYControlRotation
struct AShooterPlayerController_SetYControlRotation_Params
{
	float                                              InNewRot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetTeamScore
struct AShooterPlayerController_SetTeamScore_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetSpectatorModeDelayTime
struct AShooterPlayerController_SetSpectatorModeDelayTime_Params
{
	float                                              SpectatorDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetSkipSpawnVO
struct AShooterPlayerController_SetSkipSpawnVO_Params
{
	bool                                               bSkipVO;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetMaxImpactSounds
struct AShooterPlayerController_SetMaxImpactSounds_Params
{
	int                                                NewMaxSounds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetMaxImpactParticles
struct AShooterPlayerController_SetMaxImpactParticles_Params
{
	int                                                NewMaxParticles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetMaxImpactDecals
struct AShooterPlayerController_SetMaxImpactDecals_Params
{
	int                                                NewMaxDecals;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetMaxFireSounds
struct AShooterPlayerController_SetMaxFireSounds_Params
{
	int                                                NewFireSounds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetGuest
struct AShooterPlayerController_SetGuest_Params
{
	bool                                               IsGuest;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetGodMode
struct AShooterPlayerController_SetGodMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetFixedVehicleCamera
struct AShooterPlayerController_SetFixedVehicleCamera_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetDeathCameraDelayTime
struct AShooterPlayerController_SetDeathCameraDelayTime_Params
{
	float                                              DeathCameraDelay;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetCountdown
struct AShooterPlayerController_SetCountdown_Params
{
	int                                                CountdownTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SetCanChangeClassInPlace
struct AShooterPlayerController_SetCanChangeClassInPlace_Params
{
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerValidateClassChange
struct AShooterPlayerController_ServerValidateClassChange_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Skin;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bChangeClassInPlace;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerTrySetDedicatedSpectatorMode
struct AShooterPlayerController_ServerTrySetDedicatedSpectatorMode_Params
{
	bool                                               bSpectator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerToggleQAStopMessage
struct AShooterPlayerController_ServerToggleQAStopMessage_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerTestWingsuit
struct AShooterPlayerController_ServerTestWingsuit_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerTeleportToCosmetic
struct AShooterPlayerController_ServerTeleportToCosmetic_Params
{
	int                                                CosmeticIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSuicide
struct AShooterPlayerController_ServerSuicide_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerStartMapWithMode
struct AShooterPlayerController_ServerStartMapWithMode_Params
{
	class FString                                      Map;                                                      // (Parm, ZeroConstructor)
	class FString                                      Mode;                                                     // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerStartCountdown
struct AShooterPlayerController_ServerStartCountdown_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerSpawnVehicle
struct AShooterPlayerController_ServerSpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSpawnLoot
struct AShooterPlayerController_ServerSpawnLoot_Params
{
	TEnumAsByte<ELootType>                             LootIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LootSpawnLocation;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSpawnFinalShowdown
struct AShooterPlayerController_ServerSpawnFinalShowdown_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerSetTeamScore
struct AShooterPlayerController_ServerSetTeamScore_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetSpectatorMode
struct AShooterPlayerController_ServerSetSpectatorMode_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetInCharacterSelect
struct AShooterPlayerController_ServerSetInCharacterSelect_Params
{
	bool                                               InCharSelect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetCustomizationIDs
struct AShooterPlayerController_ServerSetCustomizationIDs_Params
{
	struct FName                                       CharacterSkinName;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       CharacterMaterialName;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponASkinName;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponAMaterialName;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponBSkinName;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponBMaterialName;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponASticker;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponBSticker;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       KickDecalLoadName;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponADeathDecalName;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       WeaponBDeathDecalName;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetCountdown
struct AShooterPlayerController_ServerSetCountdown_Params
{
	int                                                CountdownTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetChosenLoadClassName
struct AShooterPlayerController_ServerSetChosenLoadClassName_Params
{
	struct FName                                       LoadClassName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSetChosenClass
struct AShooterPlayerController_ServerSetChosenClass_Params
{
	int                                                ClassIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSendPCPumpData
struct AShooterPlayerController_ServerSendPCPumpData_Params
{
	struct FPumpData                                   PumpedData;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSendNGSMessage
struct AShooterPlayerController_ServerSendNGSMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerController.ServerScoreLimit
struct AShooterPlayerController_ServerScoreLimit_Params
{
	int                                                NewScoreLimit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerSay
struct AShooterPlayerController_ServerSay_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerResumeOrChasePrevPlayer
struct AShooterPlayerController_ServerResumeOrChasePrevPlayer_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerRequestPickupAttachments
struct AShooterPlayerController_ServerRequestPickupAttachments_Params
{
	class AShooterWeaponPickup*                        RequestingPickup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestCharacterChange
struct AShooterPlayerController_ServerRequestCharacterChange_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerRequestChangeTeam
struct AShooterPlayerController_ServerRequestChangeTeam_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerPaxPlayerNameWasSet
struct AShooterPlayerController_ServerPaxPlayerNameWasSet_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerNextMap
struct AShooterPlayerController_ServerNextMap_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerFullyLoaded
struct AShooterPlayerController_ServerFullyLoaded_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerExit
struct AShooterPlayerController_ServerExit_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerEndMatch
struct AShooterPlayerController_ServerEndMatch_Params
{
	int                                                ForceWinningTeam;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerDisableIdleKick
struct AShooterPlayerController_ServerDisableIdleKick_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerDemoStop
struct AShooterPlayerController_ServerDemoStop_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerDemoRecord
struct AShooterPlayerController_ServerDemoRecord_Params
{
};

// Function ShooterGame.ShooterPlayerController.ServerDebugHeadPositions
struct AShooterPlayerController_ServerDebugHeadPositions_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerDamagePawn
struct AShooterPlayerController_ServerDamagePawn_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerCheat
struct AShooterPlayerController_ServerCheat_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ServerChaseNextPrevPlayerOrResume
struct AShooterPlayerController_ServerChaseNextPrevPlayerOrResume_Params
{
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ServerChaseCharacterFellFromWorld
struct AShooterPlayerController_ServerChaseCharacterFellFromWorld_Params
{
};

// Function ShooterGame.ShooterPlayerController.Server_SetGuest
struct AShooterPlayerController_Server_SetGuest_Params
{
	bool                                               IsGuest;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.Server_MicroprofileDump
struct AShooterPlayerController_Server_MicroprofileDump_Params
{
	int                                                DetailMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.Server_ExecuteConsoleCommand
struct AShooterPlayerController_Server_ExecuteConsoleCommand_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.SelectNextSpawnableClass
struct AShooterPlayerController_SelectNextSpawnableClass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.SelectDevClass
struct AShooterPlayerController_SelectDevClass_Params
{
	int                                                ClassID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ScoreLimit
struct AShooterPlayerController_ScoreLimit_Params
{
	int                                                NewScoreLimit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.RequestStateSync
struct AShooterPlayerController_RequestStateSync_Params
{
	class AShooterCharacter*                           PlayerToSync;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.Remote
struct AShooterPlayerController_Remote_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterPlayerController.ProfanityMature
struct AShooterPlayerController_ProfanityMature_Params
{
};

// Function ShooterGame.ShooterPlayerController.ProfanityClean
struct AShooterPlayerController_ProfanityClean_Params
{
};

// Function ShooterGame.ShooterPlayerController.PlayScoreSoundEvent
struct AShooterPlayerController_PlayScoreSoundEvent_Params
{
	struct FScoreSound                                 InSoundEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerController.PickClassByNameAndSkin
struct AShooterPlayerController_PickClassByNameAndSkin_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Skin;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterPlayerController.PerfFlyThroughStarted__DelegateSignature
struct AShooterPlayerController_PerfFlyThroughStarted__DelegateSignature_Params
{
};

// Function ShooterGame.ShooterPlayerController.OpenHighlightsSummary
struct AShooterPlayerController_OpenHighlightsSummary_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorXRayVision
struct AShooterPlayerController_OnToggleSpectatorXRayVision_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorToolbar
struct AShooterPlayerController_OnToggleSpectatorToolbar_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorSettings
struct AShooterPlayerController_OnToggleSpectatorSettings_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorScoreboard
struct AShooterPlayerController_OnToggleSpectatorScoreboard_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorReticle
struct AShooterPlayerController_OnToggleSpectatorReticle_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorLoadout
struct AShooterPlayerController_OnToggleSpectatorLoadout_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorKillFeed
struct AShooterPlayerController_OnToggleSpectatorKillFeed_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorHUD
struct AShooterPlayerController_OnToggleSpectatorHUD_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorGameMode
struct AShooterPlayerController_OnToggleSpectatorGameMode_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorChat
struct AShooterPlayerController_OnToggleSpectatorChat_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnSpectatorViewStats
struct AShooterPlayerController_OnSpectatorViewStats_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnRep_ObjectiveZoneChanged
struct AShooterPlayerController_OnRep_ObjectiveZoneChanged_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnRep_GUID
struct AShooterPlayerController_OnRep_GUID_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnRep_CanChangeClassInPlace
struct AShooterPlayerController_OnRep_CanChangeClassInPlace_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnPrevSpectatorSetting
struct AShooterPlayerController_OnPrevSpectatorSetting_Params
{
};

// DelegateFunction ShooterGame.ShooterPlayerController.OnOneTeammateLeftDelegate__DelegateSignature
struct AShooterPlayerController_OnOneTeammateLeftDelegate__DelegateSignature_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnNextSpectatorSetting
struct AShooterPlayerController_OnNextSpectatorSetting_Params
{
};

// DelegateFunction ShooterGame.ShooterPlayerController.OnInventoryUpdateDelegate__DelegateSignature
struct AShooterPlayerController_OnInventoryUpdateDelegate__DelegateSignature_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnChasePrevPlayer
struct AShooterPlayerController_OnChasePrevPlayer_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnChaseNextPlayer
struct AShooterPlayerController_OnChaseNextPlayer_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingRight
struct AShooterPlayerController_OnChangeSpectatorSettingRight_Params
{
};

// Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingLeft
struct AShooterPlayerController_OnChangeSpectatorSettingLeft_Params
{
};

// Function ShooterGame.ShooterPlayerController.NextMap
struct AShooterPlayerController_NextMap_Params
{
};

// Function ShooterGame.ShooterPlayerController.MusicUnMute
struct AShooterPlayerController_MusicUnMute_Params
{
};

// Function ShooterGame.ShooterPlayerController.MusicMute
struct AShooterPlayerController_MusicMute_Params
{
};

// Function ShooterGame.ShooterPlayerController.MovePlayerSideways
struct AShooterPlayerController_MovePlayerSideways_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.MovePlayerRandomly
struct AShooterPlayerController_MovePlayerRandomly_Params
{
	float                                              MoveInterval;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.MovePlayerForward
struct AShooterPlayerController_MovePlayerForward_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.MicroprofileDumpServer
struct AShooterPlayerController_MicroprofileDumpServer_Params
{
	int                                                DetailMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.MaxVoices
struct AShooterPlayerController_MaxVoices_Params
{
	int                                                MaxNumberOfVoices;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsSpectatorTargetLoading
struct AShooterPlayerController_IsSpectatorTargetLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsPlayerUsingGamepad
struct AShooterPlayerController_IsPlayerUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsGameInputAllowed
struct AShooterPlayerController_IsGameInputAllowed_Params
{
	bool                                               bAllowForInventoryMenu;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsEndMatchActive
struct AShooterPlayerController_IsEndMatchActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsClassIndexSpawnable
struct AShooterPlayerController_IsClassIndexSpawnable_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.IsChosenClassIndexSpawnable
struct AShooterPlayerController_IsChosenClassIndexSpawnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.HideZoneStatic
struct AShooterPlayerController_HideZoneStatic_Params
{
	unsigned char                                      bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetViewedPlayerState
struct AShooterPlayerController_GetViewedPlayerState_Params
{
	class AShooterPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetViewedCharacter
struct AShooterPlayerController_GetViewedCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetSpectatorCamera
struct AShooterPlayerController_GetSpectatorCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetShooterGameData
struct AShooterPlayerController_GetShooterGameData_Params
{
	class UShooterGameData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetShooterCharacter
struct AShooterPlayerController_GetShooterCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetPawnInfo
struct AShooterPlayerController_GetPawnInfo_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintFlowControl>                 OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FShooterPawnInfo                            OutPawnInfo;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetKeysForBinding
struct AShooterPlayerController_GetKeysForBinding_Params
{
	struct FName                                       BindingName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKEY>                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterPlayerController.GetKeysForAction
struct AShooterPlayerController_GetKeysForAction_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerController.GetIsControllerWinner
struct AShooterPlayerController_GetIsControllerWinner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetChosenPawnInfo
struct AShooterPlayerController_GetChosenPawnInfo_Params
{
	struct FShooterPawnInfo                            PawnInfo;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetChosenClassIndex
struct AShooterPlayerController_GetChosenClassIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetChaseCharacter
struct AShooterPlayerController_GetChaseCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.GetActiveCamera
struct AShooterPlayerController_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ForceShoot
struct AShooterPlayerController_ForceShoot_Params
{
	bool                                               ToForce;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ExitServer
struct AShooterPlayerController_ExitServer_Params
{
};

// Function ShooterGame.ShooterPlayerController.EndMatch
struct AShooterPlayerController_EndMatch_Params
{
	int                                                ForceWinningTeam;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.DumpNonDormantActors
struct AShooterPlayerController_DumpNonDormantActors_Params
{
};

// Function ShooterGame.ShooterPlayerController.DumpCollisionInfo
struct AShooterPlayerController_DumpCollisionInfo_Params
{
};

// Function ShooterGame.ShooterPlayerController.DisableIdleKick
struct AShooterPlayerController_DisableIdleKick_Params
{
};

// Function ShooterGame.ShooterPlayerController.DialogUnMute
struct AShooterPlayerController_DialogUnMute_Params
{
};

// Function ShooterGame.ShooterPlayerController.DialogMute
struct AShooterPlayerController_DialogMute_Params
{
};

// Function ShooterGame.ShooterPlayerController.DebugHeadPositions
struct AShooterPlayerController_DebugHeadPositions_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.DamagePawn
struct AShooterPlayerController_DamagePawn_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientToggleCharacterAbilityUse
struct AShooterPlayerController_ClientToggleCharacterAbilityUse_Params
{
	bool                                               bLock;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame
struct AShooterPlayerController_ClientStartOnlineGame_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientStartMatchSlowDown
struct AShooterPlayerController_ClientStartMatchSlowDown_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientStartDemoRegistration
struct AShooterPlayerController_ClientStartDemoRegistration_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientSpectatorNotifyAbilityKillAssist
struct AShooterPlayerController_ClientSpectatorNotifyAbilityKillAssist_Params
{
	class APlayerState*                                ForPlayer;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KilledPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSetLastKillerCharacter
struct AShooterPlayerController_ClientSetLastKillerCharacter_Params
{
	class AShooterCharacter*                           LastKiller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSetInitialLocationAndRotation
struct AShooterPlayerController_ClientSetInitialLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSetDedicatedSpectatorMode
struct AShooterPlayerController_ClientSetDedicatedSpectatorMode_Params
{
	bool                                               bSpectator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent
struct AShooterPlayerController_ClientSendRoundEndEvent_Params
{
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpendedTimeInSeconds;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendPickupAttachments
struct AShooterPlayerController_ClientSendPickupAttachments_Params
{
	class AShooterWeaponPickup*                        RequestingPickup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBarrel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScope;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnderbarrel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMisc;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientSendNGSMessage
struct AShooterPlayerController_ClientSendNGSMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerController.ClientResetPHACKSCharacterName
struct AShooterPlayerController_ClientResetPHACKSCharacterName_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientResetChosenClass
struct AShooterPlayerController_ClientResetChosenClass_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientOnClassChangeValidated
struct AShooterPlayerController_ClientOnClassChangeValidated_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       Skin;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bChangeClassInPlace;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClassLimitReached;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyShotFailed
struct AShooterPlayerController_ClientNotifyShotFailed_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientNotifyDamageDealt
struct AShooterPlayerController_ClientNotifyDamageDealt_Params
{
	uint16_t                                           DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint16_t                                           MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t                                           CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHitType>                              HitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeToTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientIgnoreNextDisconnect
struct AShooterPlayerController_ClientIgnoreNextDisconnect_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientIdleWarning
struct AShooterPlayerController_ClientIdleWarning_Params
{
	float                                              TimeBeforeKick;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasWarned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientHideIdleWarning
struct AShooterPlayerController_ClientHideIdleWarning_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientGoToEoM
struct AShooterPlayerController_ClientGoToEoM_Params
{
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.ClientGameStarted
struct AShooterPlayerController_ClientGameStarted_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientFreeze
struct AShooterPlayerController_ClientFreeze_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame
struct AShooterPlayerController_ClientEndOnlineGame_Params
{
};

// Function ShooterGame.ShooterPlayerController.ClientDebugHeadPositions
struct AShooterPlayerController_ClientDebugHeadPositions_Params
{
	TArray<struct FVector>                             HeadPositions;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerController.ClearMatchEndOverLay
struct AShooterPlayerController_ClearMatchEndOverLay_Params
{
	bool                                               bIsWinner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerController.CanChangeClass
struct AShooterPlayerController_CanChangeClass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.Shooter_BuffBase.OnRep_SetTarget
struct AShooter_BuffBase_OnRep_SetTarget_Params
{
};

// Function ShooterGame.Shooter_BuffBase.NetMultiCastPlayBuffFX
struct AShooter_BuffBase_NetMultiCastPlayBuffFX_Params
{
};

// Function ShooterGame.Shooter_BuffBase.GetBuffTarget
struct AShooter_BuffBase_GetBuffTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.Shooter_BuffBase.GetBuffDurationCursorized
struct AShooter_BuffBase_GetBuffDurationCursorized_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.Shooter_BuffBase.ActivateMultiPassMaterials
struct AShooter_BuffBase_ActivateMultiPassMaterials_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.PlayDialogue
struct UShooterBlueprintUtilities_PlayDialogue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnDiscardSound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePriorityConflictResolution;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPriorityConflictResolution;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumReplayTimeInSeconds;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumWaitTimeBeforeInterruptingInSeconds;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.Pick
struct UShooterBlueprintUtilities_Pick_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColorBlender                               Fader;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.IsEventBuild
struct UShooterBlueprintUtilities_IsEventBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.GetVisibility
struct UShooterBlueprintUtilities_GetVisibility_Params
{
	bool                                               IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.GetShooterGameState
struct UShooterBlueprintUtilities_GetShooterGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterGameState*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.GetLocalPlayer
struct UShooterBlueprintUtilities_GetLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.GetLocalHUD
struct UShooterBlueprintUtilities_GetLocalHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.GetLocalCurrentEquipedWeapon
struct UShooterBlueprintUtilities_GetLocalCurrentEquipedWeapon_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.ColorPickerRef
struct UShooterBlueprintUtilities_ColorPickerRef_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorA;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.ColorPicker
struct UShooterBlueprintUtilities_ColorPicker_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.ColorFaderRef
struct UShooterBlueprintUtilities_ColorFaderRef_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorA;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ValueC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.ColorFader
struct UShooterBlueprintUtilities_ColorFader_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.BranchInt
struct UShooterBlueprintUtilities_BranchInt_Params
{
	int                                                ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintOperator>                    InOperator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.BranchFloat
struct UShooterBlueprintUtilities_BranchFloat_Params
{
	float                                              ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintOperator>                    InOperator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.BranchBool
struct UShooterBlueprintUtilities_BranchBool_Params
{
	bool                                               ValueA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValueB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintOperator>                    InOperator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.BlendColorClamped
struct UShooterBlueprintUtilities_BlendColorClamped_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.BlendColor
struct UShooterBlueprintUtilities_BlendColor_Params
{
	struct FLinearColor                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBlueprintUtilities.Blend
struct UShooterBlueprintUtilities_Blend_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColorBlender                               Fader;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.WidgetReceiveChatMessage
struct UShooterUserWidget_WidgetReceiveChatMessage_Params
{
	class FString                                      inString;                                                 // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterUserWidget.TriggerOnScreen
struct UShooterUserWidget_TriggerOnScreen_Params
{
};

// Function ShooterGame.ShooterUserWidget.TriggerOffScreen
struct UShooterUserWidget_TriggerOffScreen_Params
{
};

// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateWithType
struct UShooterUserWidget_SetVisibleAndInvalidateWithType_Params
{
	class UWidget*                                     inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      HiddenType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateAndClear
struct UShooterUserWidget_SetVisibleAndInvalidateAndClear_Params
{
	class UWidget*                                     inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidate
struct UShooterUserWidget_SetVisibleAndInvalidate_Params
{
	class UWidget*                                     inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetVisibilityOnChildren
struct UShooterUserWidget_SetVisibilityOnChildren_Params
{
	TEnumAsByte<ESlateVisibility>                      InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetTextAndInvalidate
struct UShooterUserWidget_SetTextAndInvalidate_Params
{
	class UTextBlock*                                  inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterUserWidget.SetScrollingTextAndInvalidate
struct UShooterUserWidget_SetScrollingTextAndInvalidate_Params
{
	class UTextBlock*                                  inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UScrollBox*                                  ScrollBox;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetSafePositionInViewport
struct UShooterUserWidget_SetSafePositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToPixels;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetOverrideTickFrequency
struct UShooterUserWidget_SetOverrideTickFrequency_Params
{
	float                                              InFrequency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetOverrideCacheNodeVisibility
struct UShooterUserWidget_SetOverrideCacheNodeVisibility_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetColorOnChild
struct UShooterUserWidget_SetColorOnChild_Params
{
	class UImage*                                      InImage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetColorAndInvalidateOnImage
struct UShooterUserWidget_SetColorAndInvalidateOnImage_Params
{
	class UImage*                                      inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetColorAndInvalidate
struct UShooterUserWidget_SetColorAndInvalidate_Params
{
	class UWidget*                                     inWidget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.SetActiveWidgetIndexAndInvalidate
struct UShooterUserWidget_SetActiveWidgetIndexAndInvalidate_Params
{
	class UWidgetSwitcher*                             WidgetSwitcher;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.RequestTick
struct UShooterUserWidget_RequestTick_Params
{
};

// Function ShooterGame.ShooterUserWidget.RequestSlateWidgetTickDuringRender
struct UShooterUserWidget_RequestSlateWidgetTickDuringRender_Params
{
	class UWidget*                                     WidgetToTickDuringRender;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.RequestRenderAndClear
struct UShooterUserWidget_RequestRenderAndClear_Params
{
};

// Function ShooterGame.ShooterUserWidget.RequestRender
struct UShooterUserWidget_RequestRender_Params
{
};

// Function ShooterGame.ShooterUserWidget.OnHUDWidgetShown
struct UShooterUserWidget_OnHUDWidgetShown_Params
{
};

// Function ShooterGame.ShooterUserWidget.OnHUDWidgetHidden
struct UShooterUserWidget_OnHUDWidgetHidden_Params
{
};

// Function ShooterGame.ShooterUserWidget.IsOnScreen
struct UShooterUserWidget_IsOnScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.HasEverRendered
struct UShooterUserWidget_HasEverRendered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerState
struct UShooterUserWidget_GetOwningShooterPlayerState_Params
{
	class AShooterPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerController
struct UShooterUserWidget_GetOwningShooterPlayerController_Params
{
	class AShooterPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningShooterHUD
struct UShooterUserWidget_GetOwningShooterHUD_Params
{
	class AShooterHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningShooterCharacter
struct UShooterUserWidget_GetOwningShooterCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterPlayerState
struct UShooterUserWidget_GetOwningOrSpectatedShooterPlayerState_Params
{
	class AShooterPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterCharacter
struct UShooterUserWidget_GetOwningOrSpectatedShooterCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetNeutralColorSecondary
struct UShooterUserWidget_GetNeutralColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetNeutralColorPrimary
struct UShooterUserWidget_GetNeutralColorPrimary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetMyTeamColorSecondary
struct UShooterUserWidget_GetMyTeamColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetMyTeamColor
struct UShooterUserWidget_GetMyTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetLawColorSecondary
struct UShooterUserWidget_GetLawColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetLawColorPrimary
struct UShooterUserWidget_GetLawColorPrimary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetHUDReleventActor
struct UShooterUserWidget_GetHUDReleventActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetEnemyTeamColorSecondary
struct UShooterUserWidget_GetEnemyTeamColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetEnemyTeamColor
struct UShooterUserWidget_GetEnemyTeamColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetBreakerColorSecondary
struct UShooterUserWidget_GetBreakerColorSecondary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.GetBreakerColorPrimary
struct UShooterUserWidget_GetBreakerColorPrimary_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.EnableCacheNode
struct UShooterUserWidget_EnableCacheNode_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUserWidget.AddScrollBoxForAutoScrollingText
struct UShooterUserWidget_AddScrollBoxForAutoScrollingText_Params
{
	class UScrollBox*                                  ScrollBox;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.SetGameModeWidget
struct AShooterGameState_SetGameModeWidget_Params
{
	class UShooterGameModeWidget*                      InGameModeWidget;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.ScoreTeamEvent
struct AShooterGameState_ScoreTeamEvent_Params
{
	struct FName                                       InWinningTeamEventName;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       InLosingTeamEventName;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                InTeamNumber;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.RequestTimeDilation
struct AShooterGameState_RequestTimeDilation_Params
{
	float                                              InMultiplier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.PreGameTimeChanged
struct AShooterGameState_PreGameTimeChanged_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_WaitingForPlayersTimeRounded
struct AShooterGameState_OnRep_WaitingForPlayersTimeRounded_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_TeamScores
struct AShooterGameState_OnRep_TeamScores_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_SetScoreProcessorClass
struct AShooterGameState_OnRep_SetScoreProcessorClass_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_ServerPerformance
struct AShooterGameState_OnRep_ServerPerformance_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_ScoreLimit
struct AShooterGameState_OnRep_ScoreLimit_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_PreGameTimeRounded
struct AShooterGameState_OnRep_PreGameTimeRounded_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_PreGameEnded
struct AShooterGameState_OnRep_PreGameEnded_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_ObjectiveTimeRounded
struct AShooterGameState_OnRep_ObjectiveTimeRounded_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_FinalCountdownTimeRounded
struct AShooterGameState_OnRep_FinalCountdownTimeRounded_Params
{
};

// Function ShooterGame.ShooterGameState.OnRep_FinalCountdownEnded
struct AShooterGameState_OnRep_FinalCountdownEnded_Params
{
};

// Function ShooterGame.ShooterGameState.OnMatchEnding
struct AShooterGameState_OnMatchEnding_Params
{
	int                                                WinnerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.OnLocalPlayerObjectiveZoneChanged
struct AShooterGameState_OnLocalPlayerObjectiveZoneChanged_Params
{
	class AShooterObjectiveZone*                       CurrentObjectiveZone;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.ObjectiveTimeChanged
struct AShooterGameState_ObjectiveTimeChanged_Params
{
};

// Function ShooterGame.ShooterGameState.NetMultiForceWinningTeamOnEndMatch
struct AShooterGameState_NetMultiForceWinningTeamOnEndMatch_Params
{
	int                                                ForceWinningTeam;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.NetMulticastCharacterSpawned
struct AShooterGameState_NetMulticastCharacterSpawned_Params
{
	class AShooterCharacter*                           SpawnedCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastTimeDilation
struct AShooterGameState_MulticastTimeDilation_Params
{
	float                                              InMuliplier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastMatchEnding
struct AShooterGameState_MulticastMatchEnding_Params
{
	int                                                WinnerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastDebugString
struct AShooterGameState_MulticastDebugString_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (ConstParm, Parm, ReferenceParm)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      BaseActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastDebugSphere
struct AShooterGameState_MulticastDebugSphere_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TIME;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastDebugLineList
struct AShooterGameState_MulticastDebugLineList_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	float                                              TIME;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastDebugLine
struct AShooterGameState_MulticastDebugLine_Params
{
	struct FVector_NetQuantize                         StartLocation;                                            // (Parm)
	struct FVector_NetQuantize                         EndLocation;                                              // (Parm)
	float                                              TIME;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.MulticastDebugCone
struct AShooterGameState_MulticastDebugCone_Params
{
	struct FVector_NetQuantize                         Origin;                                                   // (ConstParm, Parm, ReferenceParm)
	struct FVector_NetQuantize                         Direction;                                                // (ConstParm, Parm, ReferenceParm)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bPersistentLines;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.IsTutorialGame
struct AShooterGameState_IsTutorialGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.IsMatchEnded
struct AShooterGameState_IsMatchEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.GetLivePlayersArrayForTeam
struct AShooterGameState_GetLivePlayersArrayForTeam_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameState.FinalCountdownTimeChanged
struct AShooterGameState_FinalCountdownTimeChanged_Params
{
};

// Function ShooterGame.ShooterGameState.CharacterSpawned
struct AShooterGameState_CharacterSpawned_Params
{
	class AShooterCharacter*                           SpawnedCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState.AreEOMResultsActive
struct AShooterGameState_AreEOMResultsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterTutorialWorldWidget.UpdateKeyBinding
struct UShooterTutorialWorldWidget_UpdateKeyBinding_Params
{
};

// Function ShooterGame.ShooterGameState_Tutorial.UpdateTutorialCompletionPercent
struct AShooterGameState_Tutorial_UpdateTutorialCompletionPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_Tutorial.ShowTutorialToolTip
struct AShooterGameState_Tutorial_ShowTutorialToolTip_Params
{
	struct FTutorialToolTipInfo                        ToolTipInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameState_Tutorial.ServerEndTutorial
struct AShooterGameState_Tutorial_ServerEndTutorial_Params
{
};

// Function ShooterGame.ShooterGameState_Tutorial.OnBotTookDamage
struct AShooterGameState_Tutorial_OnBotTookDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_Tutorial.NotifyPlayerClassUpdated
struct AShooterGameState_Tutorial_NotifyPlayerClassUpdated_Params
{
};

// Function ShooterGame.ShooterGameState_Tutorial.NetMulticastBotTookDamage
struct AShooterGameState_Tutorial_NetMulticastBotTookDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_Tutorial.MulticastFetchTutorialWidgets
struct AShooterGameState_Tutorial_MulticastFetchTutorialWidgets_Params
{
};

// Function ShooterGame.ShooterGameState_Tutorial.HideTutorialToolTip
struct AShooterGameState_Tutorial_HideTutorialToolTip_Params
{
};

// Function ShooterGame.ShooterGameState_Tutorial.EndTutorial
struct AShooterGameState_Tutorial_EndTutorial_Params
{
};

// Function ShooterGame.ShooterToolTipCatalogue.GetToolTip
struct UShooterToolTipCatalogue_GetToolTip_Params
{
	TEnumAsByte<EShooterClass>                         ShooterClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGeneric;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTutorialToolTipInfo                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterZipLine.GetZipLineStart
struct AShooterZipLine_GetZipLineStart_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterZipLine.GetZipLineEnd
struct AShooterZipLine_GetZipLineEnd_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.WantsToRun
struct AShooterCharacter_WantsToRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.WantsToFire
struct AShooterCharacter_WantsToFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.WantsToBlindFire
struct AShooterCharacter_WantsToBlindFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.WantsToAltFire
struct AShooterCharacter_WantsToAltFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.UpdatePerspectiveFXWithTrace
struct AShooterCharacter_UpdatePerspectiveFXWithTrace_Params
{
	struct FName                                       ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPerspectiveFXData                          FXData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.UpdateInventoryUI
struct AShooterCharacter_UpdateInventoryUI_Params
{
};

// Function ShooterGame.ShooterCharacter.StopPerspectiveFX
struct AShooterCharacter_StopPerspectiveFX_Params
{
	struct FName                                       ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SpawnPerspectiveFX
struct AShooterCharacter_SpawnPerspectiveFX_Params
{
	struct FName                                       ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPerspectiveFXData                          FXData;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AShooterWeapon*                              OptionalWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOffHandWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetWantsToFire
struct AShooterCharacter_SetWantsToFire_Params
{
	bool                                               Want;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetWantsToAltFire
struct AShooterCharacter_SetWantsToAltFire_Params
{
	bool                                               Want;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetTurnOnPointAlpha
struct AShooterCharacter_SetTurnOnPointAlpha_Params
{
	float                                              InTurnOnPointCursor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              inSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetSurfaceSwitch
struct AShooterCharacter_SetSurfaceSwitch_Params
{
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterialsIncludingWeapons
struct AShooterCharacter_SetScalarParamForAllMaterialsIncludingWeapons_Params
{
	struct FName                                       ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ParamVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnThirdPersonOnly;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterials
struct AShooterCharacter_SetScalarParamForAllMaterials_Params
{
	struct FName                                       ParamName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ParamVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetRenderCustomDepthForAllMeshes
struct AShooterCharacter_SetRenderCustomDepthForAllMeshes_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockSpawnAnimation
struct AShooterCharacter_SetLockSpawnAnimation_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockShiftAbility
struct AShooterCharacter_SetLockShiftAbility_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockQAbility
struct AShooterCharacter_SetLockQAbility_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockPrimaryFire
struct AShooterCharacter_SetLockPrimaryFire_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockMovement
struct AShooterCharacter_SetLockMovement_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockEAbility
struct AShooterCharacter_SetLockEAbility_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetLockAltFire
struct AShooterCharacter_SetLockAltFire_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetForceNoOcclusionForAllMeshes
struct AShooterCharacter_SetForceNoOcclusionForAllMeshes_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetCharacterScalarParam
struct AShooterCharacter_SetCharacterScalarParam_Params
{
	struct FName                                       ShaderParamName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterCharacterMaterialPerson>       WhichPerson;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterCharacterMaterialSetMode>      SetMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetCharacterHealed
struct AShooterCharacter_SetCharacterHealed_Params
{
	bool                                               IsHealed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealSoundType>                        SoundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.SetBeingRevived
struct AShooterCharacter_SetBeingRevived_Params
{
	class AShooterCharacter*                           Unused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerUnstuck
struct AShooterCharacter_ServerUnstuck_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerTryStartDoorKick
struct AShooterCharacter_ServerTryStartDoorKick_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerToggleJumpStartState
struct AShooterCharacter_ServerToggleJumpStartState_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerToggleDodgeStartState
struct AShooterCharacter_ServerToggleDodgeStartState_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerThrowThrowable
struct AShooterCharacter_ServerThrowThrowable_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerSwitchFireAction
struct AShooterCharacter_ServerSwitchFireAction_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerSwitchCameraShoulder
struct AShooterCharacter_ServerSwitchCameraShoulder_Params
{
	bool                                               bIsSwitched;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSwitchAmmoType
struct AShooterCharacter_ServerSwitchAmmoType_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerStartSearchDestroy
struct AShooterCharacter_ServerStartSearchDestroy_Params
{
	int                                                AmmoToFire;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetThrowTarget
struct AShooterCharacter_ServerSetThrowTarget_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetTargeting
struct AShooterCharacter_ServerSetTargeting_Params
{
	bool                                               bNewTargeting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetRunning
struct AShooterCharacter_ServerSetRunning_Params
{
	bool                                               bNewRunning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bToggle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERunType>                              RunType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetPrimaryFireInput
struct AShooterCharacter_ServerSetPrimaryFireInput_Params
{
	bool                                               bIsPressed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetMoveSpeedModifier
struct AShooterCharacter_ServerSetMoveSpeedModifier_Params
{
	float                                              MoveSpeedModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetJumpKeyDown
struct AShooterCharacter_ServerSetJumpKeyDown_Params
{
	bool                                               bKeyDown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetJetGliderMaxSpeed
struct AShooterCharacter_ServerSetJetGliderMaxSpeed_Params
{
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetEnergyDamageMultiplier
struct AShooterCharacter_ServerSetEnergyDamageMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetDesiredWeaponIndex
struct AShooterCharacter_ServerSetDesiredWeaponIndex_Params
{
	int                                                DesiredWeaponID;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetChargeCursor
struct AShooterCharacter_ServerSetChargeCursor_Params
{
	float                                              Cursor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetBuoyancyActive
struct AShooterCharacter_ServerSetBuoyancyActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetBallisticDamageMultiplier
struct AShooterCharacter_ServerSetBallisticDamageMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetArmStrengthAnimationSpeed
struct AShooterCharacter_ServerSetArmStrengthAnimationSpeed_Params
{
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetAirDive
struct AShooterCharacter_ServerSetAirDive_Params
{
	bool                                               TryAirDive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerSetAimState
struct AShooterCharacter_ServerSetAimState_Params
{
	TEnumAsByte<EAimState>                             NewAimState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestUseItem
struct AShooterCharacter_ServerRequestUseItem_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerRequestStopInteract
struct AShooterCharacter_ServerRequestStopInteract_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestStartInteract
struct AShooterCharacter_ServerRequestStartInteract_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestSpawnKickDecal
struct AShooterCharacter_ServerRequestSpawnKickDecal_Params
{
	class UTexture2D*                                  KickDecalTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGolden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestKickInDoor
struct AShooterCharacter_ServerRequestKickInDoor_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestInteract
struct AShooterCharacter_ServerRequestInteract_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                SwapInventoryIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestEquipWeapon
struct AShooterCharacter_ServerRequestEquipWeapon_Params
{
	int                                                InventoryIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestAutoPickup
struct AShooterCharacter_ServerRequestAutoPickup_Params
{
	TArray<class AShooterPickup*>                      AmmoPickups;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterCharacter.ServerRequestATM_Withdraw
struct AShooterCharacter_ServerRequestATM_Withdraw_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRequestATM_Deposit
struct AShooterCharacter_ServerRequestATM_Deposit_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerReloadWeapon
struct AShooterCharacter_ServerReloadWeapon_Params
{
	class AShooterWeapon*                              NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerRedirectProjectile
struct AShooterCharacter_ServerRedirectProjectile_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerRecycleItemConfirmed
struct AShooterCharacter_ServerRecycleItemConfirmed_Params
{
	class AShooterRecycleBin*                          BinToNotify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              RecycledItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerPlaySound
struct AShooterCharacter_ServerPlaySound_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipLocalCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerPlayloopedSound
struct AShooterCharacter_ServerPlayloopedSound_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            NewID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerGoToState
struct AShooterCharacter_ServerGoToState_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerDropCurrentItem
struct AShooterCharacter_ServerDropCurrentItem_Params
{
	bool                                               bSpawnPickup;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerDropCosmetic
struct AShooterCharacter_ServerDropCosmetic_Params
{
	unsigned char                                      CosmeticIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerDropAmmo
struct AShooterCharacter_ServerDropAmmo_Params
{
	TEnumAsByte<EAmmoType>                             AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerDetonateLastProjectile
struct AShooterCharacter_ServerDetonateLastProjectile_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerDeactivateDodge
struct AShooterCharacter_ServerDeactivateDodge_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerATMInteract
struct AShooterCharacter_ServerATMInteract_Params
{
	class UShooterInteractComponent*                   ATM;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ServerArmProjectile
struct AShooterCharacter_ServerArmProjectile_Params
{
};

// Function ShooterGame.ShooterCharacter.ServerAddForce
struct AShooterCharacter_ServerAddForce_Params
{
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.RequestProjectileHit
struct AShooterCharacter_RequestProjectileHit_Params
{
	class AShooterCharacter*                           Shooter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                clientProjectileID;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              DistanceTraveled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.RequestInteract
struct AShooterCharacter_RequestInteract_Params
{
	class UShooterInteractComponent*                   Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ReplicasSetTargeting
struct AShooterCharacter_ReplicasSetTargeting_Params
{
	bool                                               bNewTargeting;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ReplicasGoToState
struct AShooterCharacter_ReplicasGoToState_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ReceiveHealing
struct AShooterCharacter_ReceiveHealing_Params
{
	float                                              Heal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HealCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               HealSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.PlayPerspectiveSound
struct AShooterCharacter_PlayPerspectiveSound_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.PlayDialogue
struct AShooterCharacter_PlayDialogue_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnDiscardSound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePriorityConflictResolution;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPriorityConflictResolution;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumReplayTimeInSeconds;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumWaitTimeBeforeInterruptingInSeconds;               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.PlayAnimMontageAlt
struct AShooterCharacter_PlayAnimMontageAlt_Params
{
	class UAnimMontage*                                Anim;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AltAnim;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PlayedInState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnSwitchMeshPerspectives
struct AShooterCharacter_OnSwitchMeshPerspectives_Params
{
	bool                                               bThirdPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnStopSpectating
struct AShooterCharacter_OnStopSpectating_Params
{
};

// Function ShooterGame.ShooterCharacter.OnSpectatorTargetChange
struct AShooterCharacter_OnSpectatorTargetChange_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnSlowTimeStart
struct AShooterCharacter_OnSlowTimeStart_Params
{
};

// Function ShooterGame.ShooterCharacter.OnSlowTimeEnd
struct AShooterCharacter_OnSlowTimeEnd_Params
{
};

// Function ShooterGame.ShooterCharacter.OnSendDrone
struct AShooterCharacter_OnSendDrone_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnRep_Vehicle
struct AShooterCharacter_OnRep_Vehicle_Params
{
	class AActor*                                      PreviousVehicle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnRep_ServerEquippedWeapon
struct AShooterCharacter_OnRep_ServerEquippedWeapon_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo
struct AShooterCharacter_OnRep_LastTakeHitInfo_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_IsInDangerZone
struct AShooterCharacter_OnRep_IsInDangerZone_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_IsCameraShoulderSwitched
struct AShooterCharacter_OnRep_IsCameraShoulderSwitched_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_Inventory
struct AShooterCharacter_OnRep_Inventory_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_HelmetArmorData
struct AShooterCharacter_OnRep_HelmetArmorData_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_Health
struct AShooterCharacter_OnRep_Health_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_CurrentZipLine
struct AShooterCharacter_OnRep_CurrentZipLine_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_CurrentWeaponSlots
struct AShooterCharacter_OnRep_CurrentWeaponSlots_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_CurrentItemSlots
struct AShooterCharacter_OnRep_CurrentItemSlots_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_CurrentAimState
struct AShooterCharacter_OnRep_CurrentAimState_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_bUsingWingsuit
struct AShooterCharacter_OnRep_bUsingWingsuit_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_Boost
struct AShooterCharacter_OnRep_Boost_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_BodyArmorData
struct AShooterCharacter_OnRep_BodyArmorData_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_AmmoCounts
struct AShooterCharacter_OnRep_AmmoCounts_Params
{
};

// Function ShooterGame.ShooterCharacter.OnRep_Abilities
struct AShooterCharacter_OnRep_Abilities_Params
{
};

// Function ShooterGame.ShooterCharacter.OnLocalPlayerTookDamage
struct AShooterCharacter_OnLocalPlayerTookDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnLocalPlayerDealtDamage
struct AShooterCharacter_OnLocalPlayerDealtDamage_Params
{
	class AShooterCharacter*                           DamagedPlayer;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealthFraction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasHeadShot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnInteract
struct AShooterCharacter_OnInteract_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnFootstep
struct AShooterCharacter_OnFootstep_Params
{
	class UAkAudioEvent*                               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftFoot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnFancyJump
struct AShooterCharacter_OnFancyJump_Params
{
};

// Function ShooterGame.ShooterCharacter.OnExitTooltipZone
struct AShooterCharacter_OnExitTooltipZone_Params
{
};

// Function ShooterGame.ShooterCharacter.OnEnterTooltipZone
struct AShooterCharacter_OnEnterTooltipZone_Params
{
	TEnumAsByte<ETutorialTooltipCategory>              Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnEnterExitNoProneZone
struct AShooterCharacter_OnEnterExitNoProneZone_Params
{
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlaySet
struct AShooterCharacter_OnEndOfMatchOverlaySet_Params
{
};

// Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlayCleared
struct AShooterCharacter_OnEndOfMatchOverlayCleared_Params
{
};

// Function ShooterGame.ShooterCharacter.OnEnableHighlight
struct AShooterCharacter_OnEnableHighlight_Params
{
};

// Function ShooterGame.ShooterCharacter.OnDroneSpawn
struct AShooterCharacter_OnDroneSpawn_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnDisableHighlight
struct AShooterCharacter_OnDisableHighlight_Params
{
};

// Function ShooterGame.ShooterCharacter.OnDedicatedSpectatorToggled
struct AShooterCharacter_OnDedicatedSpectatorToggled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnCharacterShieldedEnd
struct AShooterCharacter_OnCharacterShieldedEnd_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasDestroyed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnCharacterShieldedBegin
struct AShooterCharacter_OnCharacterShieldedBegin_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnCharacterHealedEnd
struct AShooterCharacter_OnCharacterHealedEnd_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnCharacterHealedBegin
struct AShooterCharacter_OnCharacterHealedBegin_Params
{
	bool                                               bFirstPerson;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.OnCharacterCustomizationCompleted
struct AShooterCharacter_OnCharacterCustomizationCompleted_Params
{
};

// Function ShooterGame.ShooterCharacter.OnAbilityStatusChanged
struct AShooterCharacter_OnAbilityStatusChanged_Params
{
};

// Function ShooterGame.ShooterCharacter.NotifyBuffRemoved
struct AShooterCharacter_NotifyBuffRemoved_Params
{
	TEnumAsByte<EBuffType>                             BuffType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NotifyBuffApplied
struct AShooterCharacter_NotifyBuffApplied_Params
{
	TEnumAsByte<EBuffType>                             BuffType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastUnstuck
struct AShooterCharacter_NetMultiCastUnstuck_Params
{
};

// Function ShooterGame.ShooterCharacter.NetMultiCastToggleJumpStartState
struct AShooterCharacter_NetMultiCastToggleJumpStartState_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastToggleDodgeStartState
struct AShooterCharacter_NetMultiCastToggleDodgeStartState_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastStopLoopedSound
struct AShooterCharacter_NetMultiCastStopLoopedSound_Params
{
	int64_t                                            NewID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastStopFall
struct AShooterCharacter_NetMultiCastStopFall_Params
{
};

// Function ShooterGame.ShooterCharacter.NetMultiCastStopAttachedTeamFX
struct AShooterCharacter_NetMultiCastStopAttachedTeamFX_Params
{
};

// Function ShooterGame.ShooterCharacter.NetMultiCastStartFall
struct AShooterCharacter_NetMultiCastStartFall_Params
{
};

// Function ShooterGame.ShooterCharacter.NetMulticastSpawnKickDecal
struct AShooterCharacter_NetMulticastSpawnKickDecal_Params
{
	class UTexture2D*                                  KickDecalTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGolden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastSetSoundSwitch
struct AShooterCharacter_NetMultiCastSetSoundSwitch_Params
{
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PerspectiveState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastSetImpactSwitch
struct AShooterCharacter_NetMultiCastSetImpactSwitch_Params
{
	TArray<class AShooterCharacter*>                   Victims;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastSetCharacterHealed
struct AShooterCharacter_NetMultiCastSetCharacterHealed_Params
{
	bool                                               Healed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealSoundType>                        SoundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastServerBodyPositions
struct AShooterCharacter_NetMultiCastServerBodyPositions_Params
{
	TArray<struct FDebugBodyPosition>                  BodyPositions;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	struct FColor                                      Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMulticastRemoveCharacterScalar
struct AShooterCharacter_NetMulticastRemoveCharacterScalar_Params
{
	struct FName                                       ParamName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MatParamValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlaySoundInternal
struct AShooterCharacter_NetMultiCastPlaySoundInternal_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterDialogueCharacterFunction>     InDialogue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipLocalCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlayLoopedSoundInternal
struct AShooterCharacter_NetMultiCastPlayLoopedSoundInternal_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            NewID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlayFXAtLocation
struct AShooterCharacter_NetMultiCastPlayFXAtLocation_Params
{
	class UParticleSystem*                             FXtoPlay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedTeamFX
struct AShooterCharacter_NetMultiCastPlayAttachedTeamFX_Params
{
	class UParticleSystem*                             TeamFXtoPlayFirstPerson;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TeamFXtoPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EnemyFXtoPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedFX
struct AShooterCharacter_NetMultiCastPlayAttachedFX_Params
{
	class UParticleSystem*                             FXtoPlay;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAbilitySoundInternal
struct AShooterCharacter_NetMultiCastPlayAbilitySoundInternal_Params
{
	class UShooterAbility*                             Ability;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EShooterAbilitySoundType>              SoundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           RandomSeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastOnHealedByOther
struct AShooterCharacter_NetMultiCastOnHealedByOther_Params
{
	int                                                HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HealCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealthPercentage;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHealthPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastOnHealCharacter
struct AShooterCharacter_NetMultiCastOnHealCharacter_Params
{
	int                                                HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PawnYouHealed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousHealthPercentage;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHealthPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMulticastDeath
struct AShooterCharacter_NetMulticastDeath_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, ReferenceParm)
	class APawn*                                       InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserLocation;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       BoneHit;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                DeathAnimationIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         DeadManPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMulticastBloodImpactFX
struct AShooterCharacter_NetMulticastBloodImpactFX_Params
{
	unsigned char                                      BloodIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int16_t                                            BoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Offset;                                                   // (ConstParm, Parm, ReferenceParm)
	struct FVector_NetQuantizeNormal                   Direction;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastAddNewBuff
struct AShooterCharacter_NetMultiCastAddNewBuff_Params
{
	class AShooter_BuffBase*                           NewBuff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.NetMultiCastAddCharacterScalar
struct AShooterCharacter_NetMultiCastAddCharacterScalar_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MatParamValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastSpawnImpactEffect
struct AShooterCharacter_MultiCastSpawnImpactEffect_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, IsPlainOldData)
	class UClass*                                      ImpactEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastSetVelocity
struct AShooterCharacter_MultiCastSetVelocity_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MulticastSetDesiredWeaponIndex
struct AShooterCharacter_MulticastSetDesiredWeaponIndex_Params
{
	int                                                DesiredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MulticastRemoveTetheredCharacter
struct AShooterCharacter_MulticastRemoveTetheredCharacter_Params
{
	class AShooterCharacter*                           CharacterToRemove;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastImpulseTarget
struct AShooterCharacter_MultiCastImpulseTarget_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelfImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MulticastHealMe
struct AShooterCharacter_MulticastHealMe_Params
{
};

// Function ShooterGame.ShooterCharacter.MultiCastGoToState
struct AShooterCharacter_MultiCastGoToState_Params
{
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastEvent_DisplacePawn
struct AShooterCharacter_MultiCastEvent_DisplacePawn_Params
{
	struct FVector                                     displaceVector;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastApplyRadialImpulseTarget
struct AShooterCharacter_MultiCastApplyRadialImpulseTarget_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MulticastAddTetheredCharacter
struct AShooterCharacter_MulticastAddTetheredCharacter_Params
{
	class AShooterCharacter*                           CharacterToAdd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TetherFX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.MultiCastAddForceToTarget
struct AShooterCharacter_MultiCastAddForceToTarget_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsUsingScope
struct AShooterCharacter_IsUsingScope_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsUpperBodyMontagePlaying
struct AShooterCharacter_IsUpperBodyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsTurnOnPointMontagePlaying
struct AShooterCharacter_IsTurnOnPointMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsTargeting
struct AShooterCharacter_IsTargeting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsSprinting
struct AShooterCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsRolling
struct AShooterCharacter_IsRolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsPerspectiveFXActive
struct AShooterCharacter_IsPerspectiveFXActive_Params
{
	struct FName                                       ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsOnWall
struct AShooterCharacter_IsOnWall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlotBranch
struct AShooterCharacter_IsMontagePlayingInSlotBranch_Params
{
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlot
struct AShooterCharacter_IsMontagePlayingInSlot_Params
{
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsMontagePlaying
struct AShooterCharacter_IsMontagePlaying_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsMantleActive
struct AShooterCharacter_IsMantleActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsLowerBodyIdleRunActive
struct AShooterCharacter_IsLowerBodyIdleRunActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsLookingNearPosition
struct AShooterCharacter_IsLookingNearPosition_Params
{
	struct FVector                                     TargetPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsJumpActive
struct AShooterCharacter_IsJumpActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsInOzone
struct AShooterCharacter_IsInOzone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFullBodySlotMontagePlaying
struct AShooterCharacter_IsFullBodySlotMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFullBodyMontagePlaying
struct AShooterCharacter_IsFullBodyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFreightTrainDashActive
struct AShooterCharacter_IsFreightTrainDashActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFreightTrainActive
struct AShooterCharacter_IsFreightTrainActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFirstPerson
struct AShooterCharacter_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFiring
struct AShooterCharacter_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsFallActive
struct AShooterCharacter_IsFallActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsDoubleJumpActive
struct AShooterCharacter_IsDoubleJumpActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsCurrentWeaponPrimary
struct AShooterCharacter_IsCurrentWeaponPrimary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBuffed
struct AShooterCharacter_IsBuffed_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBeingViewedNotFromLevelCamera
struct AShooterCharacter_IsBeingViewedNotFromLevelCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBeingViewed
struct AShooterCharacter_IsBeingViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBeingSpectatedNotFromLevelCamera
struct AShooterCharacter_IsBeingSpectatedNotFromLevelCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsBeingSpectated
struct AShooterCharacter_IsBeingSpectated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsAlive
struct AShooterCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.IsAirDiveActive
struct AShooterCharacter_IsAirDiveActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetXYSpeed
struct AShooterCharacter_GetXYSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetWeaponIKTransform
struct AShooterCharacter_GetWeaponIKTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetWeaponDownAimOffset
struct AShooterCharacter_GetWeaponDownAimOffset_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetWeaponByIndex
struct AShooterCharacter_GetWeaponByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetWeapon
struct AShooterCharacter_GetWeapon_Params
{
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetViewingPlayerController
struct AShooterCharacter_GetViewingPlayerController_Params
{
	class AShooterPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetVerticalSpeed
struct AShooterCharacter_GetVerticalSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetVehicleSeatState
struct AShooterCharacter_GetVehicleSeatState_Params
{
	TEnumAsByte<EVehicleSeatState>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetUpperBodyMontage
struct AShooterCharacter_GetUpperBodyMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetUpperBody2Montage
struct AShooterCharacter_GetUpperBody2Montage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetTotalAmmoByType
struct AShooterCharacter_GetTotalAmmoByType_Params
{
	TEnumAsByte<EAmmoType>                             TypeToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetThirdPersonCamera
struct AShooterCharacter_GetThirdPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetThirdPersonAimOffset
struct AShooterCharacter_GetThirdPersonAimOffset_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetTeamNum
struct AShooterCharacter_GetTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
struct AShooterCharacter_GetTargetingSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetStance
struct AShooterCharacter_GetStance_Params
{
	TEnumAsByte<ECharacterMovementStance>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetSpeed
struct AShooterCharacter_GetSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetSpecifcPawnMesh
struct AShooterCharacter_GetSpecifcPawnMesh_Params
{
	TEnumAsByte<EPawnMesh>                             MeshType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetSkeletonType
struct AShooterCharacter_GetSkeletonType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetShooterPlayerController
struct AShooterCharacter_GetShooterPlayerController_Params
{
	class AShooterPlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier
struct AShooterCharacter_GetRunningSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetRollRotation
struct AShooterCharacter_GetRollRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetProceduralWeaponSway
struct AShooterCharacter_GetProceduralWeaponSway_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetPreviousWeaponIndex
struct AShooterCharacter_GetPreviousWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetPlayerState
struct AShooterCharacter_GetPlayerState_Params
{
	class AShooterPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetPitch
struct AShooterCharacter_GetPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetPerspectiveFXSpawnedParticles
struct AShooterCharacter_GetPerspectiveFXSpawnedParticles_Params
{
	struct FName                                       ReferenceName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            OutSpawnedParticles;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterCharacter.GetPawnMesh
struct AShooterCharacter_GetPawnMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetOverrideFX
struct AShooterCharacter_GetOverrideFX_Params
{
	struct FName                                       OverrideName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UParticleSystem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterCharacter.GetOtherWeapon
struct AShooterCharacter_GetOtherWeapon_Params
{
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetOrComputeAimPoint
struct AShooterCharacter_GetOrComputeAimPoint_Params
{
	float                                              TraceRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetNormalizedHelmetHealth
struct AShooterCharacter_GetNormalizedHelmetHealth_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetNormalizedHealth
struct AShooterCharacter_GetNormalizedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetNormalizedBodyArmorHealth
struct AShooterCharacter_GetNormalizedBodyArmorHealth_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetMontagePlayingInSlot
struct AShooterCharacter_GetMontagePlayingInSlot_Params
{
	struct FName                                       SlotName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetMeleeKickAttack
struct AShooterCharacter_GetMeleeKickAttack_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetMaxHealth
struct AShooterCharacter_GetMaxHealth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetMasterAnimPackage
struct AShooterCharacter_GetMasterAnimPackage_Params
{
	class UShooterAnimationPackage*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetLastHitTime
struct AShooterCharacter_GetLastHitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetLastHitByLocalPlayerTime
struct AShooterCharacter_GetLastHitByLocalPlayerTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetLastDamageDealtTime
struct AShooterCharacter_GetLastDamageDealtTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetInventoryWeapon
struct AShooterCharacter_GetInventoryWeapon_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetInventoryCount
struct AShooterCharacter_GetInventoryCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetInputRotation
struct AShooterCharacter_GetInputRotation_Params
{
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetInitialWeaponReset
struct AShooterCharacter_GetInitialWeaponReset_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetHUD
struct AShooterCharacter_GetHUD_Params
{
	class AShooterHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetGravityScaleWithDecay
struct AShooterCharacter_GetGravityScaleWithDecay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetGravityScaleNormalized
struct AShooterCharacter_GetGravityScaleNormalized_Params
{
	bool                                               bShouldIgnoreOverrides;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedMinGravity;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectectedMaxGravity;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDefaultGravity;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetGravityScaleIgnoreOverrides
struct AShooterCharacter_GetGravityScaleIgnoreOverrides_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetFullBodyMontage
struct AShooterCharacter_GetFullBodyMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetFractionOfTurnRadius
struct AShooterCharacter_GetFractionOfTurnRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDampedTurnSpeed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetFirstPersonCamera
struct AShooterCharacter_GetFirstPersonCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetCurrentWeaponIndex
struct AShooterCharacter_GetCurrentWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetCurrentWeapon
struct AShooterCharacter_GetCurrentWeapon_Params
{
	class AShooterWeapon*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetCurrentAmmo
struct AShooterCharacter_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetCharacterType
struct AShooterCharacter_GetCharacterType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetCharacterDefinition
struct AShooterCharacter_GetCharacterDefinition_Params
{
	class UShooterCharacterDefinition*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetBuff
struct AShooterCharacter_GetBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooter_BuffBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetBlindFireOut
struct AShooterCharacter_GetBlindFireOut_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetBlindFireIn
struct AShooterCharacter_GetBlindFireIn_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetBlindFireAimOffset
struct AShooterCharacter_GetBlindFireAimOffset_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAmmoByType
struct AShooterCharacter_GetAmmoByType_Params
{
	TEnumAsByte<EAmmoType>                             TypeToCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAimState
struct AShooterCharacter_GetAimState_Params
{
	TEnumAsByte<EAimState>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAimOffsetYaw
struct AShooterCharacter_GetAimOffsetYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAimOffsets
struct AShooterCharacter_GetAimOffsets_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAimOffsetPitch
struct AShooterCharacter_GetAimOffsetPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAimDirectionNoCollision
struct AShooterCharacter_GetAimDirectionNoCollision_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetADSTransOut
struct AShooterCharacter_GetADSTransOut_Params
{
	class UAnimMontage*                                OutAltPerspective;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetADSTransIn
struct AShooterCharacter_GetADSTransIn_Params
{
	class UAnimMontage*                                OutAltPerspective;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAdditionalMultipassMeshes
struct AShooterCharacter_GetAdditionalMultipassMeshes_Params
{
	TArray<class UMeshComponent*>                      Meshes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterCharacter.GetActorLocalMoveYawFromInput
struct AShooterCharacter_GetActorLocalMoveYawFromInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetActorLocalMoveYaw
struct AShooterCharacter_GetActorLocalMoveYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetActorLocalMoveRawInput
struct AShooterCharacter_GetActorLocalMoveRawInput_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetActiveCamera
struct AShooterCharacter_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAbilityUseAbilityBar
struct AShooterCharacter_GetAbilityUseAbilityBar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.GetAbility
struct AShooterCharacter_GetAbility_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UShooterAbility*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ExitedLowGravityFX
struct AShooterCharacter_ExitedLowGravityFX_Params
{
};

// Function ShooterGame.ShooterCharacter.ExitedIncreasedGravityFX
struct AShooterCharacter_ExitedIncreasedGravityFX_Params
{
};

// Function ShooterGame.ShooterCharacter.EventOnHealWidgetUpdate
struct AShooterCharacter_EventOnHealWidgetUpdate_Params
{
	TEnumAsByte<EHealWidgetState>                      HealWidgetState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.EnteredLowGravityFX
struct AShooterCharacter_EnteredLowGravityFX_Params
{
};

// Function ShooterGame.ShooterCharacter.EnteredIncreasedGravityFX
struct AShooterCharacter_EnteredIncreasedGravityFX_Params
{
};

// Function ShooterGame.ShooterCharacter.EndHealthPickupFX
struct AShooterCharacter_EndHealthPickupFX_Params
{
};

// Function ShooterGame.ShooterCharacter.ComputeTurnOnPoint
struct AShooterCharacter_ComputeTurnOnPoint_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientUpdateThreatIndicator
struct AShooterCharacter_ClientUpdateThreatIndicator_Params
{
	class AShooterCharacter*                           Threat;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DmgType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientSwapToDesiredWeapon
struct AShooterCharacter_ClientSwapToDesiredWeapon_Params
{
	int                                                DesiredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientStartReload
struct AShooterCharacter_ClientStartReload_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientSetThrowAmmoAmount
struct AShooterCharacter_ClientSetThrowAmmoAmount_Params
{
	int                                                Ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientSetLockPrimaryFire
struct AShooterCharacter_ClientSetLockPrimaryFire_Params
{
	bool                                               bNewLock;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientSetBeingRevived
struct AShooterCharacter_ClientSetBeingRevived_Params
{
	bool                                               InBeingRevived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientSetAccelDebuffTime
struct AShooterCharacter_ClientSetAccelDebuffTime_Params
{
	float                                              AccelDebuffTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientRecycleItem
struct AShooterCharacter_ClientRecycleItem_Params
{
	class AShooterRecycleBin*                          BinToNotify;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterWeapon*                              ItemToRecycle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedAmmoInClip;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPopupText
struct AShooterCharacter_ClientPopupText_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	TEnumAsByte<EPopupTextTemplate>                    Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShooterCharacter*                           AroundCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPlaySoundAtLocation
struct AShooterCharacter_ClientPlaySoundAtLocation_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterDialogueCharacterFunction>     InDialogue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPlaySound
struct AShooterCharacter_ClientPlaySound_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterDialogueCharacterFunction>     InDialogue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPlayHealSound
struct AShooterCharacter_ClientPlayHealSound_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPlay2DHitSounds
struct AShooterCharacter_ClientPlay2DHitSounds_Params
{
	float                                              TargetRemainingHealth;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetRemainingArmor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientPickupFail
struct AShooterCharacter_ClientPickupFail_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientNotifyQuickUseItem
struct AShooterCharacter_ClientNotifyQuickUseItem_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientNotifyItemWasUsed
struct AShooterCharacter_ClientNotifyItemWasUsed_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientInteractRequestFailed
struct AShooterCharacter_ClientInteractRequestFailed_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientEvent_Stagger
struct AShooterCharacter_ClientEvent_Stagger_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientEvent_NotifyAbilityKillAssist
struct AShooterCharacter_ClientEvent_NotifyAbilityKillAssist_Params
{
	class AShooterPlayerState*                         KilledPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClientEvent_FlagSound
struct AShooterCharacter_ClientEvent_FlagSound_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientDropCurrentItem
struct AShooterCharacter_ClientDropCurrentItem_Params
{
};

// Function ShooterGame.ShooterCharacter.ClientCheerObjective
struct AShooterCharacter_ClientCheerObjective_Params
{
	int                                                NumCheerers;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShooterDialogueCharacterFunction>     CalloutID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.ClearBeingRevived
struct AShooterCharacter_ClearBeingRevived_Params
{
	class AShooterCharacter*                           Unused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.BPToggleDangerZone
struct AShooterCharacter_BPToggleDangerZone_Params
{
	bool                                               bEntered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.BlueprintEventDeath
struct AShooterCharacter_BlueprintEventDeath_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasFirstPerson;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.BeginZipLine
struct AShooterCharacter_BeginZipLine_Params
{
	class AShooterZipLine*                             ZipLineActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.BeginDeathFX
struct AShooterCharacter_BeginDeathFX_Params
{
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AnimNotifyThrow
struct AShooterCharacter_AnimNotifyThrow_Params
{
};

// Function ShooterGame.ShooterCharacter.AnimNotifyReload
struct AShooterCharacter_AnimNotifyReload_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AnimNotifyAllowWeaponCancel
struct AShooterCharacter_AnimNotifyAllowWeaponCancel_Params
{
};

// Function ShooterGame.ShooterCharacter.AdjustCashWallet
struct AShooterCharacter_AdjustCashWallet_Params
{
	int                                                ToAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AdjustAmmoByType
struct AShooterCharacter_AdjustAmmoByType_Params
{
	TEnumAsByte<EAmmoType>                             TypeToAdjust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacter.AddOverrideFX
struct AShooterCharacter_AddOverrideFX_Params
{
	struct FName                                       OverrideName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UParticleSystem*                             OverrideFX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             OverrideTeamFX;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterIntelBuff.OnDedicatedSpectatorToggled
struct AShooterIntelBuff_OnDedicatedSpectatorToggled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastStopBuffActiveFX
struct UShooterAbility_AmpedUp_NetMultiCastStopBuffActiveFX_Params
{
};

// Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastPlayBuffActiveFX
struct UShooterAbility_AmpedUp_NetMultiCastPlayBuffActiveFX_Params
{
};

// Function ShooterGame.ShooterAbility_BattleDroneAttack.ClientFire
struct UShooterAbility_BattleDroneAttack_ClientFire_Params
{
};

// Function ShooterGame.ShooterAbility_BattleHeal.NotifyBattleBuff
struct UShooterAbility_BattleHeal_NotifyBattleBuff_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           PlayerGettingBuffed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_Throw.ServerRequestThrow
struct UShooterAbility_Throw_ServerRequestThrow_Params
{
};

// Function ShooterGame.ShooterAbility_Throw.ClientSetPredictionData
struct UShooterAbility_Throw_ClientSetPredictionData_Params
{
	struct FShooterProjectilePredictionData            PredictionData;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.ShooterAbility_DroneManager.ToggleDroneFrenzy
struct UShooterAbility_DroneManager_ToggleDroneFrenzy_Params
{
	bool                                               bFrenzy;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      LeftDrone;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      RightDrone;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPSendDroneFX
struct UShooterAbility_DroneManager_NetMulticastTPSendDroneFX_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPBeginSendDroneFX
struct UShooterAbility_DroneManager_NetMulticastTPBeginSendDroneFX_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastPlayDroneDeployDialogue
struct UShooterAbility_DroneManager_NetMulticastPlayDroneDeployDialogue_Params
{
	class AShooterCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.GetTPDrone
struct UShooterAbility_DroneManager_GetTPDrone_Params
{
	bool                                               bLeftDrone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHealMine*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.ClientResetDrone
struct UShooterAbility_DroneManager_ClientResetDrone_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_DroneManager.ClientHideDrone
struct UShooterAbility_DroneManager_ClientHideDrone_Params
{
	bool                                               isLeftDrone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_GhostScoutMode.OnRep_StealthActive
struct UShooterAbility_GhostScoutMode_OnRep_StealthActive_Params
{
};

// Function ShooterGame.ShooterAbility_HackerDrone.OnRep_Drone
struct UShooterAbility_HackerDrone_OnRep_Drone_Params
{
};

// Function ShooterGame.ShooterAbility_KneeSlide.ServerSetIsBackDash
struct UShooterAbility_KneeSlide_ServerSetIsBackDash_Params
{
	bool                                               InIsBackDash;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_LaunchLobberMine.ServerStopMine
struct UShooterAbility_LaunchLobberMine_ServerStopMine_Params
{
};

// Function ShooterGame.ShooterAbility_Paladin.NetMulticastPlayPushbackSound
struct UShooterAbility_Paladin_NetMulticastPlayPushbackSound_Params
{
	class AShooterCharacter*                           Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_PaladinFervor.PlayPulseFX
struct UShooterAbility_PaladinFervor_PlayPulseFX_Params
{
};

// Function ShooterGame.ShooterAbility_PaladinFervor.BroadcastSetHealFX
struct UShooterAbility_PaladinFervor_BroadcastSetHealFX_Params
{
	TArray<class AShooterCharacter*>                   Characters;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               IsHealed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_PassiveHeal.NetMulticastUpdateHealingFX
struct UShooterAbility_PassiveHeal_NetMulticastUpdateHealingFX_Params
{
	bool                                               IsHealed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_PlaceShieldGen.ClientNotifyThumperPlaced
struct UShooterAbility_PlaceShieldGen_ClientNotifyThumperPlaced_Params
{
	class AActor*                                      Thumper;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_PowerGun.GetCurrentCooldownCursorizedForDisplay
struct UShooterAbility_PowerGun_GetCurrentCooldownCursorizedForDisplay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_RailGun.NetMulticastSpawnChargeFX
struct UShooterAbility_RailGun_NetMulticastSpawnChargeFX_Params
{
};

// Function ShooterGame.ShooterAbility_SamuraiBoostJump.ServerStartBoost
struct UShooterAbility_SamuraiBoostJump_ServerStartBoost_Params
{
	bool                                               Boost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.UseHUDAmmoCounter
struct AShooterWeapon_UseHUDAmmoCounter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetWeaponIDLEFX
struct AShooterWeapon_SetWeaponIDLEFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetRenderCustomDepthForAllMeshes
struct AShooterWeapon_SetRenderCustomDepthForAllMeshes_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetReloadHalfDone
struct AShooterWeapon_SetReloadHalfDone_Params
{
	bool                                               isHalfDone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetOffHandWeaponIDLEFX
struct AShooterWeapon_SetOffHandWeaponIDLEFX_Params
{
	class UParticleSystem*                             FirstPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ThirdPersonFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetOffhandIdleSound
struct AShooterWeapon_SetOffhandIdleSound_Params
{
	class UAkAudioEvent*                               NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.SetIdleSound
struct AShooterWeapon_SetIdleSound_Params
{
	class UAkAudioEvent*                               NewSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerStopReload
struct AShooterWeapon_ServerStopReload_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerStopFire
struct AShooterWeapon_ServerStopFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerStartReload
struct AShooterWeapon_ServerStartReload_Params
{
};

// Function ShooterGame.ShooterWeapon.ServerRotateFirePattern
struct AShooterWeapon_ServerRotateFirePattern_Params
{
	bool                                               bNewFirePatternRotated;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerRequestSimpleHit
struct AShooterWeapon_ServerRequestSimpleHit_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // (ConstParm, Parm)
	uint16_t                                           ProjectileID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerRequestReload
struct AShooterWeapon_ServerRequestReload_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerRequestFire
struct AShooterWeapon_ServerRequestFire_Params
{
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ServerActiveReload
struct AShooterWeapon_ServerActiveReload_Params
{
};

// Function ShooterGame.ShooterWeapon.OnWeaponCustomizationCompleted
struct AShooterWeapon_OnWeaponCustomizationCompleted_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_Reload
struct AShooterWeapon_OnRep_Reload_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_MyPawn
struct AShooterWeapon_OnRep_MyPawn_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_ExtendedMagAmmo
struct AShooterWeapon_OnRep_ExtendedMagAmmo_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_CurrentUnderbarrel
struct AShooterWeapon_OnRep_CurrentUnderbarrel_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_CurrentScope
struct AShooterWeapon_OnRep_CurrentScope_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_CurrentMag
struct AShooterWeapon_OnRep_CurrentMag_Params
{
};

// Function ShooterGame.ShooterWeapon.OnRep_CurrentBarrel
struct AShooterWeapon_OnRep_CurrentBarrel_Params
{
};

// Function ShooterGame.ShooterWeapon.NotifyRefireCooldownComplete
struct AShooterWeapon_NotifyRefireCooldownComplete_Params
{
	int                                                FireModeIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.NotifyRefireCooldown
struct AShooterWeapon_NotifyRefireCooldown_Params
{
	int                                                FireModeIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CursorizedTimeLeft;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.NetMultiCastSimulateWeaponFire
struct AShooterWeapon_NetMultiCastSimulateWeaponFire_Params
{
	bool                                               OnOff;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.NetMulticastSimulateProjectileFire
struct AShooterWeapon_NetMulticastSimulateProjectileFire_Params
{
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.MulticastInstantHits
struct AShooterWeapon_MulticastInstantHits_Params
{
	TArray<struct FVector_NetQuantize>                 ImpactLocations;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterWeapon.MulticastInstantHit
struct AShooterWeapon_MulticastInstantHit_Params
{
	struct FVector_NetQuantize                         ImpactLocation;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.ShooterWeapon.IsThrown
struct AShooterWeapon_IsThrown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.IsMeleeWeapon
struct AShooterWeapon_IsMeleeWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.IsLowAmmo
struct AShooterWeapon_IsLowAmmo_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.IsConsumable
struct AShooterWeapon_IsConsumable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetWeaponPackage
struct AShooterWeapon_GetWeaponPackage_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetWeaponNameForAnim
struct AShooterWeapon_GetWeaponNameForAnim_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetWeaponName
struct AShooterWeapon_GetWeaponName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterWeapon.GetWeaponMesh
struct AShooterWeapon_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetWeaponIcon
struct AShooterWeapon_GetWeaponIcon_Params
{
	TEnumAsByte<EWeaponIconType>                       DesiredIconType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterWeapon.GetWeaponConfig
struct AShooterWeapon_GetWeaponConfig_Params
{
	struct FWeaponData                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterWeapon.GetWeaponClass
struct AShooterWeapon_GetWeaponClass_Params
{
	TEnumAsByte<EWeaponClass>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetUseDefaultReticle
struct AShooterWeapon_GetUseDefaultReticle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetTimeBetweenShots
struct AShooterWeapon_GetTimeBetweenShots_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetThirdPersonAnimPackage
struct AShooterWeapon_GetThirdPersonAnimPackage_Params
{
	class UShooterAnimationPackage*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetSetMasterPose
struct AShooterWeapon_GetSetMasterPose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetScopeType
struct AShooterWeapon_GetScopeType_Params
{
	TEnumAsByte<EAttachmentScope>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetPawnOwner
struct AShooterWeapon_GetPawnOwner_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForThirdPerson
struct AShooterWeapon_GetOffhandWeaponMeshForThirdPerson_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForFirstPerson
struct AShooterWeapon_GetOffhandWeaponMeshForFirstPerson_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMesh
struct AShooterWeapon_GetOffhandWeaponMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetMesh3P
struct AShooterWeapon_GetMesh3P_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetLastFireTime
struct AShooterWeapon_GetLastFireTime_Params
{
	int                                                ModeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetIsReloadHalfDone
struct AShooterWeapon_GetIsReloadHalfDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetFirstPersonAnimPackage
struct AShooterWeapon_GetFirstPersonAnimPackage_Params
{
	class UShooterAnimationPackage*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetCurrentFireModeNum
struct AShooterWeapon_GetCurrentFireModeNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetCurrentAmmoInClip
struct AShooterWeapon_GetCurrentAmmoInClip_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetCurrentAmmo
struct AShooterWeapon_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetCurrentAction
struct AShooterWeapon_GetCurrentAction_Params
{
	TEnumAsByte<EWeaponAction>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetAmmoPerClip
struct AShooterWeapon_GetAmmoPerClip_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.GetAmmoCursor
struct AShooterWeapon_GetAmmoCursor_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ClientStartReload
struct AShooterWeapon_ClientStartReload_Params
{
};

// Function ShooterGame.ShooterWeapon.ClientProjectileHitRequestFailed
struct AShooterWeapon_ClientProjectileHitRequestFailed_Params
{
	uint16_t                                           ProjectileID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ClientDrawRejectedWeaponTrace
struct AShooterWeapon_ClientDrawRejectedWeaponTrace_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.ClientDrawDebugShot
struct AShooterWeapon_ClientDrawDebugShot_Params
{
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.CanMoveAndUse
struct AShooterWeapon_CanMoveAndUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.BlueprintSimulateFire
struct AShooterWeapon_BlueprintSimulateFire_Params
{
	bool                                               IsFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponFireIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeapon.BlueprintReloadStop
struct AShooterWeapon_BlueprintReloadStop_Params
{
};

// Function ShooterGame.ShooterWeapon.BlueprintReloadStart
struct AShooterWeapon_BlueprintReloadStart_Params
{
};

// Function ShooterGame.ShooterWeapon.AnimNotify_FullAuto_Settle
struct AShooterWeapon_AnimNotify_FullAuto_Settle_Params
{
};

// Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedStart
struct AShooterWeapon_AnimNotify_AmmoDiscardedStart_Params
{
};

// Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedEnd
struct AShooterWeapon_AnimNotify_AmmoDiscardedEnd_Params
{
};

// Function ShooterGame.ShooterWeapon.AllowADS
struct AShooterWeapon_AllowADS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetPunchFinisher
struct UShooterAbility_ShockWavePunch_ServerSetPunchFinisher_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetInputPressed
struct UShooterAbility_ShockWavePunch_ServerSetInputPressed_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_SkyGrab.NetMultiCastReflectDamageFX
struct UShooterAbility_SkyGrab_NetMultiCastReflectDamageFX_Params
{
	class AShooterCharacter*                           TargetEnemy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_Sprint.OnLand
struct UShooterAbility_Sprint_OnLand_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Falldistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterTotem.OnRep_CurrentHealth
struct AShooterTotem_OnRep_CurrentHealth_Params
{
};

// Function ShooterGame.ShooterTotem.OnHealthChanged
struct AShooterTotem_OnHealthChanged_Params
{
};

// Function ShooterGame.ShooterTotem.MulticastTotemHitSound
struct AShooterTotem_MulticastTotemHitSound_Params
{
};

// Function ShooterGame.ShooterTotem.BeginDestroyTotem
struct AShooterTotem_BeginDestroyTotem_Params
{
};

// Function ShooterGame.ShooterAbility_Totem.ServerDestroyShield
struct UShooterAbility_Totem_ServerDestroyShield_Params
{
};

// Function ShooterGame.ShooterAbility_TPNade.RequestTP
struct UShooterAbility_TPNade_RequestTP_Params
{
};

// Function ShooterGame.ShooterAbility_TPNade.ReplyTP
struct UShooterAbility_TPNade_ReplyTP_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_TPNade.NetMultiCastNotifyTP
struct UShooterAbility_TPNade_NetMultiCastNotifyTP_Params
{
	struct FVector                                     Pos;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbility_TripWire.RequestSpawnTripWire
struct UShooterAbility_TripWire_RequestSpawnTripWire_Params
{
	struct FVector                                     StartPos;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterBotAIController.NotifyInventoryChanged
struct AShooterBotAIController_NotifyInventoryChanged_Params
{
	class AShooterWeapon*                              InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAirDrone.OnRep_TotalAmountHealed
struct AShooterAirDrone_OnRep_TotalAmountHealed_Params
{
};

// Function ShooterGame.ShooterAirDrone.OnRep_SetFollowTarget
struct AShooterAirDrone_OnRep_SetFollowTarget_Params
{
};

// Function ShooterGame.ShooterAirDrone.NetMultiCastPlayIdleSound
struct AShooterAirDrone_NetMultiCastPlayIdleSound_Params
{
};

// Function ShooterGame.ShooterAnimHelpers.FacialSystemMorphNormals
struct UShooterAnimHelpers_FacialSystemMorphNormals_Params
{
	class USkeletalMeshComponent*                      SourceMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DestinationMesh;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FacialLayerAlpha;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacterMovement.ServerSetDebugSprintSpeedModifier
struct UShooterCharacterMovement_ServerSetDebugSprintSpeedModifier_Params
{
	float                                              Modifier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacterMovement.ServerRequestCompressedMoves
struct UShooterCharacterMovement_ServerRequestCompressedMoves_Params
{
	TArray<struct FCompressedMove>                     CompressedMoves;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterCharacterMovement.ServerOverrideMaxAccel
struct UShooterCharacterMovement_ServerOverrideMaxAccel_Params
{
	float                                              Modifier;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacterMovement.IsFallingForAnim
struct UShooterCharacterMovement_IsFallingForAnim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCharacterMovement.ClientAckCompressedMove
struct UShooterCharacterMovement_ClientAckCompressedMove_Params
{
	struct FCompressedMoveAck                          AckMove;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickKillJumpOnLand
struct UShooterAnimInstance_OnBlueprintTickKillJumpOnLand_Params
{
};

// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickFacialSystemLogic
struct UShooterAnimInstance_OnBlueprintTickFacialSystemLogic_Params
{
};

// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickCharacterSpecificLogic
struct UShooterAnimInstance_OnBlueprintTickCharacterSpecificLogic_Params
{
};

// Function ShooterGame.ShooterAnimInstance.OnBlueprintPackageInit
struct UShooterAnimInstance_OnBlueprintPackageInit_Params
{
};

// Function ShooterGame.ShooterAnimInstance.OnBlueprintDirectionChangeAnimLogic
struct UShooterAnimInstance_OnBlueprintDirectionChangeAnimLogic_Params
{
};

// Function ShooterGame.ShooterATM.OnWithdraw
struct AShooterATM_OnWithdraw_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterATM.OnDeposit
struct AShooterATM_OnDeposit_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBeamSentry.MulticastRemoveTetheredCharacter
struct AShooterBeamSentry_MulticastRemoveTetheredCharacter_Params
{
	class AShooterCharacter*                           CharacterToRemove;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBeamSentry.MulticastPullTarget
struct AShooterBeamSentry_MulticastPullTarget_Params
{
	struct FVector                                     TractorForce;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBeamSentry.MulticastAddTetheredCharacter
struct AShooterBeamSentry_MulticastAddTetheredCharacter_Params
{
	class AShooterCharacter*                           CharacterToAdd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlackjack.OnRep_MyPawn
struct AShooterBlackjack_OnRep_MyPawn_Params
{
};

// Function ShooterGame.ShooterCachedWidget.SetOverrideTickFrequency
struct UShooterCachedWidget_SetOverrideTickFrequency_Params
{
	float                                              InFrequency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.SetOverlayEffectDrawState
struct UShooterCachedWidget_SetOverlayEffectDrawState_Params
{
	TEnumAsByte<ECachedWidgetEffect>                   InState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.SetColorAndOpacity
struct UShooterCachedWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.RequestTick
struct UShooterCachedWidget_RequestTick_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.RequestSlateWidgetTickDuringRender
struct UShooterCachedWidget_RequestSlateWidgetTickDuringRender_Params
{
	class UWidget*                                     WidgetToTickDuringRender;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.RequestRenderAndClear
struct UShooterCachedWidget_RequestRenderAndClear_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.RequestRender
struct UShooterCachedWidget_RequestRender_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.RequestFocus
struct UShooterCachedWidget_RequestFocus_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.GetActiveTickFrequency
struct UShooterCachedWidget_GetActiveTickFrequency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCachedWidget.ForceInvalidateCache
struct UShooterCachedWidget_ForceInvalidateCache_Params
{
};

// Function ShooterGame.ShooterCachedWidget.AddScrollBoxForAutoScrollingText
struct UShooterCachedWidget_AddScrollBoxForAutoScrollingText_Params
{
	class UScrollBox*                                  ScrollBox;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCashDrop.OnStartCashDrop
struct AShooterCashDrop_OnStartCashDrop_Params
{
};

// Function ShooterGame.ShooterCashDrop.OnEndCashDrop
struct AShooterCashDrop_OnEndCashDrop_Params
{
};

// Function ShooterGame.ShooterCashDrop.MulticastEndCashDrop
struct AShooterCashDrop_MulticastEndCashDrop_Params
{
};

// Function ShooterGame.ShooterCheatManager.TogglePickupRarityFX
struct UShooterCheatManager_TogglePickupRarityFX_Params
{
	int                                                ToggleOn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.ToggleMatchTimer
struct UShooterCheatManager_ToggleMatchTimer_Params
{
};

// Function ShooterGame.ShooterCheatManager.SpawnPlayerSim
struct UShooterCheatManager_SpawnPlayerSim_Params
{
};

// Function ShooterGame.ShooterCheatManager.SetTeamScore
struct UShooterCheatManager_SetTeamScore_Params
{
	int                                                TeamIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.SetSprintSpeedModifier
struct UShooterCheatManager_SetSprintSpeedModifier_Params
{
	float                                              InMoveSpeedModifier;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCheatManager.ForceMatchStart
struct UShooterCheatManager_ForceMatchStart_Params
{
};

// Function ShooterGame.ShooterCheatManager.Cheat
struct UShooterCheatManager_Cheat_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterCheatManager.ChangeTeam
struct UShooterCheatManager_ChangeTeam_Params
{
	int                                                NewTeamNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterClientProjectile.OnDeactivateBegin
struct AShooterClientProjectile_OnDeactivateBegin_Params
{
};

// Function ShooterGame.ShooterClientProjectile.OnBeginTimedExplodeFX
struct AShooterClientProjectile_OnBeginTimedExplodeFX_Params
{
};

// Function ShooterGame.ShooterCustomizationComponent.SetLoadoutItem
struct UShooterCustomizationComponent_SetLoadoutItem_Params
{
	struct FName                                       PartName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCustomizationComponent.SetLoadout
struct UShooterCustomizationComponent_SetLoadout_Params
{
	struct FShooterCustomizationLoadout                Loadout;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterCustomizationComponent.SetBodyType
struct UShooterCustomizationComponent_SetBodyType_Params
{
	struct FName                                       BodyType;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCustomizationComponent.OnRep_NetworkDebugId
struct UShooterCustomizationComponent_OnRep_NetworkDebugId_Params
{
};

// Function ShooterGame.ShooterCustomizationComponent.OnRep_CompressedDesiredLoadout
struct UShooterCustomizationComponent_OnRep_CompressedDesiredLoadout_Params
{
};

// Function ShooterGame.ShooterCustomizationComponent.GetDesiredLoadout
struct UShooterCustomizationComponent_GetDesiredLoadout_Params
{
	struct FShooterCustomizationLoadout                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerState.SetLastKnownPosition
struct AShooterPlayerState_SetLastKnownPosition_Params
{
	struct FVector                                     Pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.SetClientCashValues
struct AShooterPlayerState_SetClientCashValues_Params
{
	int                                                NewCarriedCashAmount;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewDeathTaxAmount;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewWinnerBonusAmount;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InFinalCashAmount;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerSetIsTrial
struct AShooterPlayerState_ServerSetIsTrial_Params
{
	bool                                               bIsTrial;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerScoreAnEvent
struct AShooterPlayerState_ServerScoreAnEvent_Params
{
	struct FName                                       InEventName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ServerNotifySquadMarkerChanged
struct AShooterPlayerState_ServerNotifySquadMarkerChanged_Params
{
	struct FVector2D                                   MarkerPosition;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bMarkerActive;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ScoreAnEventWithVictim
struct AShooterPlayerState_ScoreAnEventWithVictim_Params
{
	struct FName                                       InEventName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AShooterPlayerState*                         Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ScoreAnEvent
struct AShooterPlayerState_ScoreAnEvent_Params
{
	struct FName                                       InEventName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              InCounter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.RequestTeamChange
struct AShooterPlayerState_RequestTeamChange_Params
{
	int                                                NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.OnRep_TeamColor
struct AShooterPlayerState_OnRep_TeamColor_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_Position
struct AShooterPlayerState_OnRep_Position_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_CosmeticItems
struct AShooterPlayerState_OnRep_CosmeticItems_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoStickerName
struct AShooterPlayerState_OnRep_ChosenWeaponTwoStickerName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoSkinName
struct AShooterPlayerState_OnRep_ChosenWeaponTwoSkinName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoDeathDecalName
struct AShooterPlayerState_OnRep_ChosenWeaponTwoDeathDecalName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneStickerName
struct AShooterPlayerState_OnRep_ChosenWeaponOneStickerName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneSkinName
struct AShooterPlayerState_OnRep_ChosenWeaponOneSkinName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneDeathDecalName
struct AShooterPlayerState_OnRep_ChosenWeaponOneDeathDecalName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenMVPTauntName
struct AShooterPlayerState_OnRep_ChosenMVPTauntName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenClassIndex
struct AShooterPlayerState_OnRep_ChosenClassIndex_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenCharacterSkineName
struct AShooterPlayerState_OnRep_ChosenCharacterSkineName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_ChosenAccounterPortraitName
struct AShooterPlayerState_OnRep_ChosenAccounterPortraitName_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_Cash
struct AShooterPlayerState_OnRep_Cash_Params
{
};

// Function ShooterGame.ShooterPlayerState.OnRep_bIsPlayerLoadedInWorld
struct AShooterPlayerState_OnRep_bIsPlayerLoadedInWorld_Params
{
};

// Function ShooterGame.ShooterPlayerState.NetMulticastSetIsExternalPlayer
struct AShooterPlayerState_NetMulticastSetIsExternalPlayer_Params
{
	bool                                               bInIsExternalPlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.NetMulticastLoadCharacterCustomization
struct AShooterPlayerState_NetMulticastLoadCharacterCustomization_Params
{
	int                                                ClassIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCustomizationData                          CustomizationData;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerState.IsQuitter
struct AShooterPlayerState_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.IsPawnAlive
struct AShooterPlayerState_IsPawnAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.InformAboutKill
struct AShooterPlayerState_InformAboutKill_Params
{
	class AShooterPlayerState*                         KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      KillerDamageType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KilledPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetWeaponBSticker
struct AShooterPlayerState_GetWeaponBSticker_Params
{
	class UCustomStickerData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetWeaponBDeathDecalObject
struct AShooterPlayerState_GetWeaponBDeathDecalObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetWeaponASticker
struct AShooterPlayerState_GetWeaponASticker_Params
{
	class UCustomStickerData*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetWeaponADeathDecalObject
struct AShooterPlayerState_GetWeaponADeathDecalObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetShortPlayerName
struct AShooterPlayerState_GetShortPlayerName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterPlayerState.GetShooterPawn
struct AShooterPlayerState_GetShooterPawn_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetScore
struct AShooterPlayerState_GetScore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetPositionIndex
struct AShooterPlayerState_GetPositionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetPersonalCashBoost
struct AShooterPlayerState_GetPersonalCashBoost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetNumRocketsFired
struct AShooterPlayerState_GetNumRocketsFired_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetNumBulletsFired
struct AShooterPlayerState_GetNumBulletsFired_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetLastValidPositionIndex
struct AShooterPlayerState_GetLastValidPositionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetLastKnowPosition
struct AShooterPlayerState_GetLastKnowPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetLastKillType
struct AShooterPlayerState_GetLastKillType_Params
{
	class UDamageType*                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetLastKillMessage
struct AShooterPlayerState_GetLastKillMessage_Params
{
	struct FKillFeedMessage                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterPlayerState.GetLastKiller
struct AShooterPlayerState_GetLastKiller_Params
{
	class AShooterPlayerState*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetLastKillChanged
struct AShooterPlayerState_GetLastKillChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetKills
struct AShooterPlayerState_GetKills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetDeaths
struct AShooterPlayerState_GetDeaths_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetChosenPawnInfo
struct AShooterPlayerState_GetChosenPawnInfo_Params
{
	struct FShooterPawnInfo                            PawnInfo;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetAssists
struct AShooterPlayerState_GetAssists_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.GetAccountPortraitObject
struct AShooterPlayerState_GetAccountPortraitObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ClientSetCanSeeExternalPlayer
struct AShooterPlayerState_ClientSetCanSeeExternalPlayer_Params
{
	bool                                               bInCanSeeExternalPlayer;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ClientProcessScoreEvent
struct AShooterPlayerState_ClientProcessScoreEvent_Params
{
	int                                                InScoreAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InScoreMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InScoreIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         InVictimPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TriggerCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ClientNotifySquadMarkerChanged
struct AShooterPlayerState_ClientNotifySquadMarkerChanged_Params
{
	class AShooterPlayerState*                         MarkerOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MarkerPosition;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ColorIndex;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bMarkerActive;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.ClientInformAboutDeath
struct AShooterPlayerState_ClientInformAboutDeath_Params
{
	TArray<struct FDamageSource>                       DamageSources;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FPlayerCustomizationBodyPart>        kill_card;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterPlayerState.ClearLastKillChanged
struct AShooterPlayerState_ClearLastKillChanged_Params
{
};

// Function ShooterGame.ShooterPlayerState.BroadcastScoreEvent
struct AShooterPlayerState_BroadcastScoreEvent_Params
{
	int                                                InScoreAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InScoreMultiplier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InScoreIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         InKillerr;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         InVictim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TriggerCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerState.BroadcastGoodbyeMessage
struct AShooterPlayerState_BroadcastGoodbyeMessage_Params
{
};

// Function ShooterGame.ShooterPlayerState.BroadcastDeath
struct AShooterPlayerState_BroadcastDeath_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KillerPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      KillerDamageType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KilledPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTriggerCounter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateMouseWheelDelta
struct AShooterMenuLevelMessageHandler_UpdateMouseWheelDelta_Params
{
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateFollowCamDelta
struct AShooterMenuLevelMessageHandler_UpdateFollowCamDelta_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.StartMouseDown
struct AShooterMenuLevelMessageHandler_StartMouseDown_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.OnSetupComplete
struct AShooterMenuLevelMessageHandler_OnSetupComplete_Params
{
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.OnEndMouseDown
struct AShooterMenuLevelMessageHandler_OnEndMouseDown_Params
{
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorData
struct AShooterMenuLevelMessageHandler_GetMenuActorData_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
	struct FShooterFrontEndMenuData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorClasses
struct AShooterMenuLevelMessageHandler_GetMenuActorClasses_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterMenuLevelMessageHandler.DebugStepMenuStates
struct AShooterMenuLevelMessageHandler_DebugStepMenuStates_Params
{
};

// Function ShooterGame.ShooterMenuActor.WasCustomizationApplied
struct AShooterMenuActor_WasCustomizationApplied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.SetIsSpawning
struct AShooterMenuActor_SetIsSpawning_Params
{
	bool                                               bIsSpawning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideSpawnRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.SetIsDespawning
struct AShooterMenuActor_SetIsDespawning_Params
{
	bool                                               bIsDespawning;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideSpawnRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.OnMenuActorCustomizationCompleted
struct AShooterMenuActor_OnMenuActorCustomizationCompleted_Params
{
};

// Function ShooterGame.ShooterMenuActor.NotifyCustomizationCompleted
struct AShooterMenuActor_NotifyCustomizationCompleted_Params
{
};

// Function ShooterGame.ShooterMenuActor.GetScaleForScene
struct AShooterMenuActor_GetScaleForScene_Params
{
	TEnumAsByte<EMenuWorldState>                       MenuScene;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.ForceFinishSpawn
struct AShooterMenuActor_ForceFinishSpawn_Params
{
};

// Function ShooterGame.ShooterMenuActor.ForceFinishDespawn
struct AShooterMenuActor_ForceFinishDespawn_Params
{
};

// Function ShooterGame.ShooterMenuActor.EnableDemoMode
struct AShooterMenuActor_EnableDemoMode_Params
{
};

// Function ShooterGame.ShooterMenuActor.DestroyMenuActor
struct AShooterMenuActor_DestroyMenuActor_Params
{
};

// Function ShooterGame.ShooterMenuActor.BPToggleCustomizationFocus
struct AShooterMenuActor_BPToggleCustomizationFocus_Params
{
	bool                                               bWeaponFocused;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponPrimary;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuWorldState>                       CurrentScene;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.BPSetupForLobby
struct AShooterMenuActor_BPSetupForLobby_Params
{
	int                                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.BPSetupForCustomization
struct AShooterMenuActor_BPSetupForCustomization_Params
{
	bool                                               bWeaponFocused;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponPrimary;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActor.BPSetupForCharacterSelect
struct AShooterMenuActor_BPSetupForCharacterSelect_Params
{
};

// Function ShooterGame.ShooterMenuActor.BPOnLoadoutApplied
struct AShooterMenuActor_BPOnLoadoutApplied_Params
{
	int                                                LobbySlot;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActorSpawner.SpawnMenuActorFromClass
struct AShooterMenuActorSpawner_SpawnMenuActorFromClass_Params
{
	class UClass*                                      InMenuActorClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPlayerCustomizationLoadoutPreference       CustomizationData;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EMenuActorAnimState>                   SpawnState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AnimSlot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceNoLoadParticles;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterMenuActor*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterMenuActorSpawner.DestroyMenuActor
struct AShooterMenuActorSpawner_DestroyMenuActor_Params
{
};

// Function ShooterGame.ShooterDestructibleObject.StageDestroyed
struct AShooterDestructibleObject_StageDestroyed_Params
{
	int                                                StageIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDestructibleObject.ResetDestruction
struct AShooterDestructibleObject_ResetDestruction_Params
{
};

// Function ShooterGame.ShooterDestructibleObject.OnRep_DestructionStage
struct AShooterDestructibleObject_OnRep_DestructionStage_Params
{
};

// Function ShooterGame.ShooterDestructibleObject.DestructionReset
struct AShooterDestructibleObject_DestructionReset_Params
{
};

// Function ShooterGame.ShooterDomeSpawnPlatform.OnWingsuitOverlap
struct AShooterDomeSpawnPlatform_OnWingsuitOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDomeSpawnPlatform.NetMulticastStartSlowFall
struct AShooterDomeSpawnPlatform_NetMulticastStartSlowFall_Params
{
	class AShooterCharacter*                           OverlappingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.Open
struct AShooterDoor_Open_Params
{
	bool                                               OpenReverse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.OnTweenCompleted
struct AShooterDoor_OnTweenCompleted_Params
{
};

// Function ShooterGame.ShooterDoor.OnRep_DoorPieces
struct AShooterDoor_OnRep_DoorPieces_Params
{
};

// Function ShooterGame.ShooterDoor.OnRep_DoorOpenState
struct AShooterDoor_OnRep_DoorOpenState_Params
{
};

// Function ShooterGame.ShooterDoor.OnInteractAlt
struct AShooterDoor_OnInteractAlt_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.OnInteract
struct AShooterDoor_OnInteract_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.OnDoorPieceDestroy
struct AShooterDoor_OnDoorPieceDestroy_Params
{
	class UActorComponent*                             CompToDestroy;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.OnDoorOpened
struct AShooterDoor_OnDoorOpened_Params
{
};

// Function ShooterGame.ShooterDoor.OnDoorKickedIn
struct AShooterDoor_OnDoorKickedIn_Params
{
};

// Function ShooterGame.ShooterDoor.OnDoorClosed
struct AShooterDoor_OnDoorClosed_Params
{
};

// Function ShooterGame.ShooterDoor.OnBeginPlayerOverlap
struct AShooterDoor_OnBeginPlayerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.NotifyBotTriggerOverlap
struct AShooterDoor_NotifyBotTriggerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.DestroyDoorPiece
struct AShooterDoor_DestroyDoorPiece_Params
{
	class UActorComponent*                             CompToDestroy;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterDoor.Close
struct AShooterDoor_Close_Params
{
};

// Function ShooterGame.ShooterDoor.AttemptCloseAutomatic
struct AShooterDoor_AttemptCloseAutomatic_Params
{
};

// Function ShooterGame.ShooterEliminationCore.UpdateSphereSize
struct AShooterEliminationCore_UpdateSphereSize_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterFinalShowdown.OnShowdownSpawn
struct AShooterFinalShowdown_OnShowdownSpawn_Params
{
};

// Function ShooterGame.ShooterFinalShowdown.OnShowdownLowered
struct AShooterFinalShowdown_OnShowdownLowered_Params
{
};

// Function ShooterGame.ShooterGameInstance.IsPartyLeader
struct UShooterGameInstance_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameInstance.GotoPlayingState
struct UShooterGameInstance_GotoPlayingState_Params
{
};

// Function ShooterGame.ShooterGameMode.SetRespawnTimeForTeam
struct AShooterGameMode_SetRespawnTimeForTeam_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ReinitializeTeams
struct AShooterGameMode_ReinitializeTeams_Params
{
	bool                                               bResetScoresAndCooldowns;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.OnGameModeModifiersUpdated
struct AShooterGameMode_OnGameModeModifiersUpdated_Params
{
	class UShooterGameModeModifier*                    InUpdatedModifier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.OnCompletionCriteriaReached
struct AShooterGameMode_OnCompletionCriteriaReached_Params
{
	int                                                WinnerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.ObjectiveTimerEnded
struct AShooterGameMode_ObjectiveTimerEnded_Params
{
};

// Function ShooterGame.ShooterGameMode.MatchStartedEvent
struct AShooterGameMode_MatchStartedEvent_Params
{
};

// Function ShooterGame.ShooterGameMode.KilledOrDestroyed
struct AShooterGameMode_KilledOrDestroyed_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.Killed
struct AShooterGameMode_Killed_Params
{
	float                                              KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       KilledPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.IsWinner
struct AShooterGameMode_IsWinner_Params
{
	class AShooterPlayerState*                         PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.IsCustomGame
struct AShooterGameMode_IsCustomGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.HasWinner
struct AShooterGameMode_HasWinner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetShooterGameState
struct AShooterGameMode_GetShooterGameState_Params
{
	class AShooterGameState*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.GetRespawnTimeForTeam
struct AShooterGameMode_GetRespawnTimeForTeam_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode.FinishMatch
struct AShooterGameMode_FinishMatch_Params
{
};

// Function ShooterGame.ShooterGameMode.AssistedKill
struct AShooterGameMode_AssistedKill_Params
{
	class AShooterPlayerState*                         Assister;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerState*                         KilledPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScoreTriggerType                           InTriggerType;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterGameState_RoundBased.OnRep_TimeToRespawnRounded
struct AShooterGameState_RoundBased_OnRep_TimeToRespawnRounded_Params
{
};

// Function ShooterGame.ShooterGameState_RoundBased.OnRep_RoundState
struct AShooterGameState_RoundBased_OnRep_RoundState_Params
{
};

// Function ShooterGame.ShooterGameMode_RoundBased.GetRoundState
struct AShooterGameMode_RoundBased_GetRoundState_Params
{
	TEnumAsByte<ERoundState>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameMode_RoundBased.ChangeRoundState
struct AShooterGameMode_RoundBased_ChangeRoundState_Params
{
	TEnumAsByte<ERoundState>                           NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterKeyMapSettings.GetKeyMapSettings
struct UShooterKeyMapSettings_GetKeyMapSettings_Params
{
	class UShooterKeyMapSettings*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGamepadMapSettings.GetGamepadMapSettings
struct UShooterGamepadMapSettings_GetGamepadMapSettings_Params
{
	class UShooterGamepadMapSettings*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_KillConf.SetMVP
struct AShooterGameState_KillConf_SetMVP_Params
{
	class AShooterPlayerState*                         ShooterPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_KillConf.IsPlayerMVP
struct AShooterGameState_KillConf_IsPlayerMVP_Params
{
	class AShooterPlayerState*                         ShooterPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.ShowEndOfMatch
struct AShooterGameState_LastManStanding_ShowEndOfMatch_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnVictory
struct AShooterGameState_LastManStanding_OnVictory_Params
{
	class AShooterCharacter*                           Victor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnSpinToWinFinished
struct AShooterGameState_LastManStanding_OnSpinToWinFinished_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnShowdownClosureBegan
struct AShooterGameState_LastManStanding_OnShowdownClosureBegan_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_Zones
struct AShooterGameState_LastManStanding_OnRep_Zones_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_WarningTimer
struct AShooterGameState_LastManStanding_OnRep_WarningTimer_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_NumAlive
struct AShooterGameState_LastManStanding_OnRep_NumAlive_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_FinalShowdown
struct AShooterGameState_LastManStanding_OnRep_FinalShowdown_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_CashDrop
struct AShooterGameState_LastManStanding_OnRep_CashDrop_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeVOFinished
struct AShooterGameState_LastManStanding_OnPreludeVOFinished_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeCountdownFinished
struct AShooterGameState_LastManStanding_OnPreludeCountdownFinished_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnMatchFinished
struct AShooterGameState_LastManStanding_OnMatchFinished_Params
{
	TArray<class AShooterCharacter*>                   Winners;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function ShooterGame.ShooterGameState_LastManStanding.OnBikeFaceFinished
struct AShooterGameState_LastManStanding_OnBikeFaceFinished_Params
{
};

// Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastPlayPrelude
struct AShooterGameState_LastManStanding_NetMulticastPlayPrelude_Params
{
	int                                                AnnouncerVOIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastFinalShowdown
struct AShooterGameState_LastManStanding_NetMulticastFinalShowdown_Params
{
	struct FVector                                     ShowdownPos;                                              // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.MulticastSpinToWin
struct AShooterGameState_LastManStanding_MulticastSpinToWin_Params
{
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.MulticastBikeRace
struct AShooterGameState_LastManStanding_MulticastBikeRace_Params
{
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.GetZoneCountdown
struct AShooterGameState_LastManStanding_GetZoneCountdown_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterGameState_LastManStanding.GetStartingPlayerCount
struct AShooterGameState_LastManStanding_GetStartingPlayerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.GetNumAlive
struct AShooterGameState_LastManStanding_GetNumAlive_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_LastManStanding.GetFinalShowdownRadius
struct AShooterGameState_LastManStanding_GetFinalShowdownRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameState_Elimination.OnRep_EliminationSphereRadius
struct AShooterGameState_Elimination_OnRep_EliminationSphereRadius_Params
{
};

// Function ShooterGame.ShooterGameState_Uplink.GetTeamViewCount
struct AShooterGameState_Uplink_GetTeamViewCount_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterGameViewportClient.SpectateNextMatch
struct UShooterGameViewportClient_SpectateNextMatch_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameViewportClient.SkipLobbyTimer
struct UShooterGameViewportClient_SkipLobbyTimer_Params
{
};

// Function ShooterGame.ShooterGameViewportClient.MatchSpectate
struct UShooterGameViewportClient_MatchSpectate_Params
{
	class FString                                      ServerAddress;                                            // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterGravityComponent.RemoveGravityScale
struct UShooterGravityComponent_RemoveGravityScale_Params
{
	class UObject*                                     GravityObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGravityComponent.AddGravityScale
struct UShooterGravityComponent_AddGravityScale_Params
{
	float                                              GravityScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FallingDownGravityScale;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 GravityScaleOverTime;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GravityPriority;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     GravityObject;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterVoipEntryWidget.SetVoipState
struct UShooterVoipEntryWidget_SetVoipState_Params
{
	TEnumAsByte<EVoipState>                            VoipState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterVoipEntryWidget.SetVoipName
struct UShooterVoipEntryWidget_SetVoipName_Params
{
	struct FText                                       NewName;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterHUD.ToggleChat
struct AShooterHUD_ToggleChat_Params
{
};

// Function ShooterGame.ShooterHUD.SwitchChatMode
struct AShooterHUD_SwitchChatMode_Params
{
};

// Function ShooterGame.ShooterHUD.ShowToolTip
struct AShooterHUD_ShowToolTip_Params
{
	struct FTutorialToolTipInfo                        InToolTipInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterHUD.SendChatLine
struct AShooterHUD_SendChatLine_Params
{
	struct FText                                       ChatString;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSendToAll;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.ReceiveChatLine
struct AShooterHUD_ReceiveChatLine_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	class FString                                      MessageBody;                                              // (Parm, ZeroConstructor)
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<EChatMode>                             Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.NotifyBoxVisibility
struct AShooterHUD_NotifyBoxVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.NotifyBatteryInCenter
struct AShooterHUD_NotifyBatteryInCenter_Params
{
};

// Function ShooterGame.ShooterHUD.IsInBatteryZone
struct AShooterHUD_IsInBatteryZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.HideToolTip
struct AShooterHUD_HideToolTip_Params
{
};

// Function ShooterGame.ShooterHUD.GetTeamScoreByIndex
struct AShooterHUD_GetTeamScoreByIndex_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetShooterCharacterForHealthUserWidget
struct AShooterHUD_GetShooterCharacterForHealthUserWidget_Params
{
	class UUserWidget*                                 HealthWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetRespawnTimerAsFloat
struct AShooterHUD_GetRespawnTimerAsFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetRankedPlayerNameByIndexAndTeam
struct AShooterHUD_GetRankedPlayerNameByIndexAndTeam_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetRankedPlayerKillsByIndexAndTeam
struct AShooterHUD_GetRankedPlayerKillsByIndexAndTeam_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetOptionsMenuWidget
struct AShooterHUD_GetOptionsMenuWidget_Params
{
	class UShooterOptionsMenu*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetObjectiveTimeString
struct AShooterHUD_GetObjectiveTimeString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetNotifyItemByIndex
struct AShooterHUD_GetNotifyItemByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetMyPlayerName
struct AShooterHUD_GetMyPlayerName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetMyPlayerKills
struct AShooterHUD_GetMyPlayerKills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetMyLastKiller
struct AShooterHUD_GetMyLastKiller_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetMatchTimeString
struct AShooterHUD_GetMatchTimeString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ShooterGame.ShooterHUD.GetMapWidget
struct AShooterHUD_GetMapWidget_Params
{
	class UShooterMapWidget*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetHudWidget
struct AShooterHUD_GetHudWidget_Params
{
	class UShooterHudWidget*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetHUDRelevantActor
struct AShooterHUD_GetHUDRelevantActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetGlobalUIData
struct AShooterHUD_GetGlobalUIData_Params
{
	class UShooterGlobalUIData*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetGameTextWidget
struct AShooterHUD_GetGameTextWidget_Params
{
	class UShooterGameTextWidget*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetGameModeStatusWidget
struct AShooterHUD_GetGameModeStatusWidget_Params
{
	class UShooterGameModeStatusWidget*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD.GetFrontendKillcardWidget
struct AShooterHUD_GetFrontendKillcardWidget_Params
{
	class UShooterEomKillCardWidget*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterIconComponent.SetGameplayVisibility
struct UShooterIconComponent_SetGameplayVisibility_Params
{
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterIconComponent.Enable
struct UShooterIconComponent_Enable_Params
{
};

// Function ShooterGame.ShooterIconComponent.Disable
struct UShooterIconComponent_Disable_Params
{
};

// DelegateFunction ShooterGame.ShooterInteractComponent.OnStopInteractDelegate__DelegateSignature
struct UShooterInteractComponent_OnStopInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterInteractComponent.OnStartInteractDelegate__DelegateSignature
struct UShooterInteractComponent_OnStartInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterInteractComponent.OnRep_InteractActive
struct UShooterInteractComponent_OnRep_InteractActive_Params
{
};

// DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractDelegate__DelegateSignature
struct UShooterInteractComponent_OnInteractDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractAltDelegate__DelegateSignature
struct UShooterInteractComponent_OnInteractAltDelegate__DelegateSignature_Params
{
	class AShooterCharacter*                           Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedTargetInfo
struct AShooterLiveSpectatorCharacterData_OnRep_SpectatedTargetInfo_Params
{
};

// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedPing
struct AShooterLiveSpectatorCharacterData_OnRep_SpectatedPing_Params
{
};

// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedMovement
struct AShooterLiveSpectatorCharacterData_OnRep_SpectatedMovement_Params
{
};

// Function ShooterGame.ShooterLootGroup.SpawnAllItems
struct AShooterLootGroup_SpawnAllItems_Params
{
	bool                                               SkipTrace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMysteryDoor.UpdateProgressBars
struct AShooterMysteryDoor_UpdateProgressBars_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMysteryDoor.OnStopMusic
struct AShooterMysteryDoor_OnStopMusic_Params
{
};

// Function ShooterGame.ShooterMysteryDoor.OnStartMusic
struct AShooterMysteryDoor_OnStartMusic_Params
{
};

// Function ShooterGame.ShooterMysteryDoor.OnDoorOpened
struct AShooterMysteryDoor_OnDoorOpened_Params
{
};

// Function ShooterGame.ShooterObjectiveZone.PlayerLeftOnHost
struct AShooterObjectiveZone_PlayerLeftOnHost_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterObjectiveZone.PlayerEnteredOnHost
struct AShooterObjectiveZone_PlayerEnteredOnHost_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterObjectiveZone.GetTeamPlayersInZone
struct AShooterObjectiveZone_GetTeamPlayersInZone_Params
{
	int                                                InTeamNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AShooterCharacter*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ShooterGame.ShooterObjectiveZone.GetNumTeamPlayersInZone
struct AShooterObjectiveZone_GetNumTeamPlayersInZone_Params
{
	int                                                InTeamNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam1
struct AShooterObjectiveZone_GetNumPlayersTeam1_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam0
struct AShooterObjectiveZone_GetNumPlayersTeam0_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersInZone
struct AShooterObjectiveZone_GetNumPlayersInZone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPawnHelpers.IsThirdPersonPawnNative
struct UShooterPawnHelpers_IsThirdPersonPawnNative_Params
{
	class AShooterCharacter*                           InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPawnHelpers.IsThirdPersonAndBranch
struct UShooterPawnHelpers_IsThirdPersonAndBranch_Params
{
	class AShooterCharacter*                           InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBluePrintBranchControl>               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPawnHelpers.IsAliveFirstPersonPawnNative
struct UShooterPawnHelpers_IsAliveFirstPersonPawnNative_Params
{
	class AShooterCharacter*                           InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPawnHelpers.FergNormalizeFloatToOne
struct UShooterPawnHelpers_FergNormalizeFloatToOne_Params
{
	float                                              CurrentTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCosmeticLootSpawner.OnRep_CosmeticData
struct AShooterCosmeticLootSpawner_OnRep_CosmeticData_Params
{
};

// Function ShooterGame.ShooterCosmeticLootSpawner.OnLoadoutApplied
struct AShooterCosmeticLootSpawner_OnLoadoutApplied_Params
{
};

// Function ShooterGame.ShooterPickup_Armor.OnPickup
struct AShooterPickup_Armor_OnPickup_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPickup_Armor.NetMulticastSetHealthPercentage
struct AShooterPickup_Armor_NetMulticastSetHealthPercentage_Params
{
	float                                              NewHealthPercentage;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeaponPickup.SetItemAmount
struct AShooterWeaponPickup_SetItemAmount_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVendingAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWeaponPickup_BouncePad.NetMulticastPlayBounceFX
struct AShooterWeaponPickup_BouncePad_NetMulticastPlayBounceFX_Params
{
	class AShooterCharacter*                           UserCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerCameraManager.HandleFOVUpdatedFromUI
struct AShooterPlayerCameraManager_HandleFOVUpdatedFromUI_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPrimitiveImpactHandler.SetSoundsEnabled
struct UShooterPrimitiveImpactHandler_SetSoundsEnabled_Params
{
	bool                                               bIsOn;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPrimitiveImpactHandler.SetDecalsEnabled
struct UShooterPrimitiveImpactHandler_SetDecalsEnabled_Params
{
	bool                                               bIsOn;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPrimitiveImpactHandler.OnImpact
struct UShooterPrimitiveImpactHandler_OnImpact_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterRecycleBin.OnInteract
struct AShooterRecycleBin_OnInteract_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterRecycleBin.OnCashOutDelayFinished
struct AShooterRecycleBin_OnCashOutDelayFinished_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CashOutValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterRecycleBin.NetMulticastInteractStarted
struct AShooterRecycleBin_NetMulticastInteractStarted_Params
{
};

// Function ShooterGame.ShooterRecycleBin.NetMulticastInteractCompleted
struct AShooterRecycleBin_NetMulticastInteractCompleted_Params
{
};

// Function ShooterGame.HackerDrone.ClientAckDroneMovement
struct AHackerDrone_ClientAckDroneMovement_Params
{
	struct FDroneMoveAck                               MoveAck;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function ShooterGame.Shooter_FireZone.PlayTeamFX
struct AShooter_FireZone_PlayTeamFX_Params
{
	int                                                MyTeamNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAccelGate.OnGateOverlapped
struct AShooterAccelGate_OnGateOverlapped_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDeployableShield.NetMultiCastSetShieldPosRot
struct AShooterDeployableShield_NetMultiCastSetShieldPosRot_Params
{
	struct FVector                                     Pos;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDroid_Bomb.NetMulticastPlayDetonateFX
struct AShooterDroid_Bomb_NetMulticastPlayDetonateFX_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterDroidShield.OnSpectatorTargetChanged
struct AShooterDroidShield_OnSpectatorTargetChanged_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDroidShield.OnDedicatedSpectatorToggled
struct AShooterDroidShield_OnDedicatedSpectatorToggled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDroidShield.NetMulticastSetEnterExitFX
struct AShooterDroidShield_NetMulticastSetEnterExitFX_Params
{
	TArray<class AShooterCharacter*>                   Characters;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	bool                                               IsEntering;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDroidShield.NetMulticastBeginDestroy
struct AShooterDroidShield_NetMulticastBeginDestroy_Params
{
};

// Function ShooterGame.ShooterDroidShield.HandleDestroyFX
struct AShooterDroidShield_HandleDestroyFX_Params
{
};

// Function ShooterGame.ShooterHealMine.OnRep_IsLeftDrone
struct AShooterHealMine_OnRep_IsLeftDrone_Params
{
};

// Function ShooterGame.ShooterHealMine.NetMulticastSpawnDroneWarpInFX
struct AShooterHealMine_NetMulticastSpawnDroneWarpInFX_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHealMine.AttachToPlayer
struct AShooterHealMine_AttachToPlayer_Params
{
	class AShooterCharacter*                           PlayerToAttach;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterLightingSphere.MulticastRemoveShockedCharacter
struct AShooterLightingSphere_MulticastRemoveShockedCharacter_Params
{
	class AShooterCharacter*                           CharacterToRemove;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterLightingSphere.MulticastAddShockedCharacter
struct AShooterLightingSphere_MulticastAddShockedCharacter_Params
{
	class AShooterCharacter*                           CharacterToAdd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterReconTrackerBomb.NetMultiCastPlayPingFX
struct AShooterReconTrackerBomb_NetMultiCastPlayPingFX_Params
{
};

// Function ShooterGame.ShooterReconTrackerBomb.MulticastNotifyExplosion
struct AShooterReconTrackerBomb_MulticastNotifyExplosion_Params
{
	TArray<class AActor*>                              DamagedActors;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class AShooterCharacter*                           PlayerOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	class AShooterCharacter*                           Attached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterReconTrackerBomb.AttachToPlayer
struct AShooterReconTrackerBomb_AttachToPlayer_Params
{
	class AShooterCharacter*                           PlayerToAttach;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterTripWire.OnRep_EndPoint
struct AShooterTripWire_OnRep_EndPoint_Params
{
};

// Function ShooterGame.ShooterProjectile.OnRep_Exploded
struct AShooterProjectile_OnRep_Exploded_Params
{
};

// Function ShooterGame.ShooterProjectile.NotifyReturnToPool
struct AShooterProjectile_NotifyReturnToPool_Params
{
};

// Function ShooterGame.ShooterProjectile.BlueprintExplode
struct AShooterProjectile_BlueprintExplode_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile.BlueprintEnableTicking
struct AShooterProjectile_BlueprintEnableTicking_Params
{
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile_Bomb.NetMulticastSpawnExplosionFX
struct AShooterProjectile_Bomb_NetMulticastSpawnExplosionFX_Params
{
};

// Function ShooterGame.ShooterProjectile_Bomb.Detonate
struct AShooterProjectile_Bomb_Detonate_Params
{
};

// Function ShooterGame.ShooterProjectile_BounceNade.OnRep_TimedExplodeFXStarted
struct AShooterProjectile_BounceNade_OnRep_TimedExplodeFXStarted_Params
{
};

// Function ShooterGame.ShooterProjectile_BounceNade.OnBounce
struct AShooterProjectile_BounceNade_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile_BounceNade.OnBeginTimedExplodeFX
struct AShooterProjectile_BounceNade_OnBeginTimedExplodeFX_Params
{
};

// Function ShooterGame.ShooterProjectile_BounceNade.NotifyBounce
struct AShooterProjectile_BounceNade_NotifyBounce_Params
{
};

// Function ShooterGame.ShooterProjectile_Disruptor.OnBounce
struct AShooterProjectile_Disruptor_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile_Flame.OnOverlapBegin
struct AShooterProjectile_Flame_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterProjectile_GroundDetonate.OnBounce
struct AShooterProjectile_GroundDetonate_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShieldedObject.SpawnShield
struct AShooterShieldedObject_SpawnShield_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterShield*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShieldedObject.ShieldDamaged
struct AShooterShieldedObject_ShieldDamaged_Params
{
};

// Function ShooterGame.ShooterShieldedObject.SetShieldFullHealth
struct AShooterShieldedObject_SetShieldFullHealth_Params
{
	float                                              Health;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterShieldedObject.GetShieldCursorizedHealth
struct AShooterShieldedObject_GetShieldCursorizedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShieldedObject.AdjustShieldHealth
struct AShooterShieldedObject_AdjustShieldHealth_Params
{
	float                                              HealthIncrement;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.UserDrop
struct AShooterCarryObject_UserDrop_Params
{
};

// Function ShooterGame.ShooterCarryObject.SetPickupAllowed
struct AShooterCarryObject_SetPickupAllowed_Params
{
	bool                                               bInPickupAllowed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.ResetToNearestPoint
struct AShooterCarryObject_ResetToNearestPoint_Params
{
};

// Function ShooterGame.ShooterCarryObject.ResetPosition
struct AShooterCarryObject_ResetPosition_Params
{
};

// Function ShooterGame.ShooterCarryObject.PlayDialogueTeamSpecific
struct AShooterCarryObject_PlayDialogueTeamSpecific_Params
{
	class UAkAudioEvent*                               FriendlyEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EnemyEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpectatorEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               CarrierEvent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           CarrierPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinReplayTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaitTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.PlayDialogue
struct AShooterCarryObject_PlayDialogue_Params
{
	class UAkAudioEvent*                               Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OnDiscardSound;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           SamePriorityConflictResolution;                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDialogueConflictResolution>           LowerPriorityConflictResolution;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumReplayTimeInSeconds;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumWaitTimeBeforeInterruptingInSeconds;               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopWhenOwnerDestroyed;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.PickUp
struct AShooterCarryObject_PickUp_Params
{
	class AShooterCharacter*                           Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.PickedUpOnHost
struct AShooterCarryObject_PickedUpOnHost_Params
{
};

// Function ShooterGame.ShooterCarryObject.PickedUpOnClient
struct AShooterCarryObject_PickedUpOnClient_Params
{
};

// Function ShooterGame.ShooterCarryObject.OnRep_Carrier
struct AShooterCarryObject_OnRep_Carrier_Params
{
};

// Function ShooterGame.ShooterCarryObject.OnOzoneReset
struct AShooterCarryObject_OnOzoneReset_Params
{
};

// Function ShooterGame.ShooterCarryObject.OnOutOfWorld
struct AShooterCarryObject_OnOutOfWorld_Params
{
};

// Function ShooterGame.ShooterCarryObject.IsPickupAllowed
struct AShooterCarryObject_IsPickupAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterCarryObject.DroppedOnHost
struct AShooterCarryObject_DroppedOnHost_Params
{
};

// Function ShooterGame.ShooterCarryObject.DroppedOnClient
struct AShooterCarryObject_DroppedOnClient_Params
{
};

// Function ShooterGame.ShooterCarryObject.Drop
struct AShooterCarryObject_Drop_Params
{
	bool                                               bEnableMovement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicle.OnInteract
struct AShooterSimpleVehicle_OnInteract_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicle.GetDriver
struct AShooterSimpleVehicle_GetDriver_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicle.ClientAckVehicleMovement
struct AShooterSimpleVehicle_ClientAckVehicleMovement_Params
{
	struct FVehicleMoveAck                             MoveAck;                                                  // (Parm)
};

// Function ShooterGame.ShooterBike.SetBikeRaceActive
struct AShooterBike_SetBikeRaceActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBike.OnRep_BikeRace
struct AShooterBike_OnRep_BikeRace_Params
{
};

// Function ShooterGame.ShooterShield.ShieldDamaged
struct AShooterShield_ShieldDamaged_Params
{
};

// Function ShooterGame.ShooterShield.SetFullHealth
struct AShooterShield_SetFullHealth_Params
{
	float                                              Health;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterShield.SetCurrentHealth
struct AShooterShield_SetCurrentHealth_Params
{
	float                                              NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterShield.PlayersExitedDepletionZoneHost
struct AShooterShield_PlayersExitedDepletionZoneHost_Params
{
};

// Function ShooterGame.ShooterShield.PlayersEnteredDepletionZoneHost
struct AShooterShield_PlayersEnteredDepletionZoneHost_Params
{
};

// Function ShooterGame.ShooterShield.OnRep_MaxHealth
struct AShooterShield_OnRep_MaxHealth_Params
{
};

// Function ShooterGame.ShooterShield.OnRep_CurrentHealthCompressed
struct AShooterShield_OnRep_CurrentHealthCompressed_Params
{
};

// Function ShooterGame.ShooterShield.IsLocalPlayerWithinRadius
struct AShooterShield_IsLocalPlayerWithinRadius_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShield.GetCursorizedHealth
struct AShooterShield_GetCursorizedHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShield.GetCurrentHealth
struct AShooterShield_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterShield.AdjustHealth
struct AShooterShield_AdjustHealth_Params
{
	float                                              HealthIncrement;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStopped
struct UShooterSimpleVehicleAnimInstance_OnVehicleStopped_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStartedMoving
struct UShooterSimpleVehicleAnimInstance_OnVehicleStartedMoving_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprintingStopped
struct UShooterSimpleVehicleAnimInstance_OnVehicleSprintingStopped_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprinting
struct UShooterSimpleVehicleAnimInstance_OnVehicleSprinting_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLiftoff
struct UShooterSimpleVehicleAnimInstance_OnVehicleLiftoff_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLanded
struct UShooterSimpleVehicleAnimInstance_OnVehicleLanded_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumped
struct UShooterSimpleVehicleAnimInstance_OnVehicleJumped_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumpCharging
struct UShooterSimpleVehicleAnimInstance_OnVehicleJumpCharging_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleExited
struct UShooterSimpleVehicleAnimInstance_OnVehicleExited_Params
{
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleEntered
struct UShooterSimpleVehicleAnimInstance_OnVehicleEntered_Params
{
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleBraking
struct UShooterSimpleVehicleAnimInstance_OnVehicleBraking_Params
{
	bool                                               bWasMovingForward;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAnimValuesUpdated
struct UShooterSimpleVehicleAnimInstance_OnVehicleAnimValuesUpdated_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAccelerationStopped
struct UShooterSimpleVehicleAnimInstance_OnVehicleAccelerationStopped_Params
{
};

// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAcceleration
struct UShooterSimpleVehicleAnimInstance_OnVehicleAcceleration_Params
{
};

// Function ShooterGame.ShooterSpectatorPawn.ResetLookRoll
struct AShooterSpectatorPawn_ResetLookRoll_Params
{
};

// Function ShooterGame.ShooterSpectatorPawn.AddMoveSpeedInput
struct AShooterSpectatorPawn_AddMoveSpeedInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpectatorPawn.AddMoveDeccelInput
struct AShooterSpectatorPawn_AddMoveDeccelInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpectatorPawn.AddMoveAccelInput
struct AShooterSpectatorPawn_AddMoveAccelInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpectatorPawn.AddLookSpeedInput
struct AShooterSpectatorPawn_AddLookSpeedInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpectatorPawn.AddDOFScaleInput
struct AShooterSpectatorPawn_AddDOFScaleInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpectatorPawn.AddDOFFocalDistanceInput
struct AShooterSpectatorPawn_AddDOFFocalDistanceInput_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpin2WinCrate.OnStartSpin2WinCrateEvent
struct AShooterSpin2WinCrate_OnStartSpin2WinCrateEvent_Params
{
};

// Function ShooterGame.ShooterSpin2WinCrate.OnRep_IsDropping
struct AShooterSpin2WinCrate_OnRep_IsDropping_Params
{
};

// Function ShooterGame.ShooterSpin2WinCrate.OnReleaseSpin2WinCrateEvent
struct AShooterSpin2WinCrate_OnReleaseSpin2WinCrateEvent_Params
{
};

// Function ShooterGame.ShooterSpin2WinCrate.OnLandSpin2WinCrateEvent
struct AShooterSpin2WinCrate_OnLandSpin2WinCrateEvent_Params
{
};

// Function ShooterGame.ShooterSpin2WinCrate.NetMulticast_OnLandSpin2WinCrate
struct AShooterSpin2WinCrate_NetMulticast_OnLandSpin2WinCrate_Params
{
};

// Function ShooterGame.ShooterStashBox.NotifySpawnFXFinished
struct AShooterStashBox_NotifySpawnFXFinished_Params
{
};

// Function ShooterGame.ShooterStashBox.BPSpawnContents
struct AShooterStashBox_BPSpawnContents_Params
{
	TEnumAsByte<ERarityLevel>                          ContentsQuality;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterStashBox.BPDisableLoopingParticles
struct AShooterStashBox_BPDisableLoopingParticles_Params
{
};

// Function ShooterGame.ShooterStashBox.BPCleanupBox
struct AShooterStashBox_BPCleanupBox_Params
{
	bool                                               bForceInstant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSupplyLinePackage.SpawnItems
struct AShooterSupplyLinePackage_SpawnItems_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterTimeOfDayController.OnMatchStart
struct AShooterTimeOfDayController_OnMatchStart_Params
{
};

// Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownStart
struct AShooterTimeOfDayController_OnFinalShowdownStart_Params
{
};

// Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownReachGround
struct AShooterTimeOfDayController_OnFinalShowdownReachGround_Params
{
};

// Function ShooterGame.ShooterUrgentCare.OnInteractStop
struct AShooterUrgentCare_OnInteractStop_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterUrgentCare.OnInteractStart
struct AShooterUrgentCare_OnInteractStart_Params
{
	class AShooterCharacter*                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.AbilityLayoutWidget.SetCharacter
struct UAbilityLayoutWidget_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.AbilityLayoutWidget.GetAttachedCharacter
struct UAbilityLayoutWidget_GetAttachedCharacter_Params
{
	class AShooterCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.GameStateWidgetRnR.SlideOut
struct UGameStateWidgetRnR_SlideOut_Params
{
};

// Function ShooterGame.GameStateWidgetRnR.SlideIn
struct UGameStateWidgetRnR_SlideIn_Params
{
};

// Function ShooterGame.GameStateWidgetRnR.AliveCountChanged
struct UGameStateWidgetRnR_AliveCountChanged_Params
{
};

// Function ShooterGame.GaugeWidget.SetNewColor
struct UGaugeWidget_SetNewColor_Params
{
	struct FLinearColor                                InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.HealthGaugeWidget.SetCharacter
struct UHealthGaugeWidget_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.HealthGaugeWidget.GetColor
struct UHealthGaugeWidget_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.HudGameModesWidget.NotifyBatteryInCenter
struct UHudGameModesWidget_NotifyBatteryInCenter_Params
{
};

// Function ShooterGame.HudGameModesWidget.HideBatteryInCenter
struct UHudGameModesWidget_HideBatteryInCenter_Params
{
};

// Function ShooterGame.ShooterAbilityWidget.UpdateKeyMapping
struct UShooterAbilityWidget_UpdateKeyMapping_Params
{
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.IsAbilityReadyVisible
struct UShooterAbilityWidget_IsAbilityReadyVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.IsAbilityReady
struct UShooterAbilityWidget_IsAbilityReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.IsAbilityActive
struct UShooterAbilityWidget_IsAbilityActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.GetCoolDownVisible
struct UShooterAbilityWidget_GetCoolDownVisible_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.GetCoolDownPercent
struct UShooterAbilityWidget_GetCoolDownPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.GetChargeCount
struct UShooterAbilityWidget_GetChargeCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterAbilityWidget.GetAbility
struct UShooterAbilityWidget_GetAbility_Params
{
	class UShooterAbility*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ShooterGame.ShooterBindableKeyWidget.UpdateKeyBinding
struct UShooterBindableKeyWidget_UpdateKeyBinding_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterBlitzGoalWidget.UpdateColor
struct UShooterBlitzGoalWidget_UpdateColor_Params
{
	int                                                Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterInputHoldWidget.UpdateButtonImage
struct UShooterInputHoldWidget_UpdateButtonImage_Params
{
	struct FKEY                                        KEY;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterCharacterInfoWidget.ShowSupplyLineError
struct UShooterCharacterInfoWidget_ShowSupplyLineError_Params
{
};

// Function ShooterGame.ShooterCharacterInfoWidget.ShowProneError
struct UShooterCharacterInfoWidget_ShowProneError_Params
{
};

// Function ShooterGame.ShooterCharacterInfoWidget.SetCharacter
struct UShooterCharacterInfoWidget_SetCharacter_Params
{
	class AShooterCharacter*                           InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterChatMasterWidget.TextCommitted
struct UShooterChatMasterWidget_TextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterChatMasterWidget.TextChanged
struct UShooterChatMasterWidget_TextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterChatWidget.TextCommitted
struct UShooterChatWidget_TextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterChatWidget.TextChanged
struct UShooterChatWidget_TextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterCompassWidget.ComponentMarkerRemoved
struct UShooterCompassWidget_ComponentMarkerRemoved_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCompassWidget.ComponentMarkerAdded
struct UShooterCompassWidget_ComponentMarkerAdded_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponSwapFireMode
struct UShooterCrosshairWidget_WeaponSwapFireMode_Params
{
	bool                                               StandardMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStop
struct UShooterCrosshairWidget_WeaponSuperFireStop_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStart
struct UShooterCrosshairWidget_WeaponSuperFireStart_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponStartCharge
struct UShooterCrosshairWidget_WeaponStartCharge_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponRemoteDetonateInRange
struct UShooterCrosshairWidget_WeaponRemoteDetonateInRange_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponReloadStart
struct UShooterCrosshairWidget_WeaponReloadStart_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponReloadFinished
struct UShooterCrosshairWidget_WeaponReloadFinished_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponPumpStart
struct UShooterCrosshairWidget_WeaponPumpStart_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponLoseKillTarget
struct UShooterCrosshairWidget_WeaponLoseKillTarget_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponGainKillTarget
struct UShooterCrosshairWidget_WeaponGainKillTarget_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponFired
struct UShooterCrosshairWidget_WeaponFired_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponEquipStarted
struct UShooterCrosshairWidget_WeaponEquipStarted_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponEquipFinished
struct UShooterCrosshairWidget_WeaponEquipFinished_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.WeaponChargeFire
struct UShooterCrosshairWidget_WeaponChargeFire_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.UserSettingsChanged
struct UShooterCrosshairWidget_UserSettingsChanged_Params
{
};

// Function ShooterGame.ShooterCrosshairWidget.ItemRecharge
struct UShooterCrosshairWidget_ItemRecharge_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCrosshairWidget.ItemReady
struct UShooterCrosshairWidget_ItemReady_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCrosshairWidget.ItemDeployed
struct UShooterCrosshairWidget_ItemDeployed_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterCrosshairWidget.CrosshairColorChanged
struct UShooterCrosshairWidget_CrosshairColorChanged_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterDroneHealWidget.StopHealingAnimation
struct UShooterDroneHealWidget_StopHealingAnimation_Params
{
};

// Function ShooterGame.ShooterDroneHealWidget.PlayHealingAnimation
struct UShooterDroneHealWidget_PlayHealingAnimation_Params
{
};

// Function ShooterGame.ShooterEomRankWidget.SuperlativeChanged
struct UShooterEomRankWidget_SuperlativeChanged_Params
{
};

// Function ShooterGame.ShooterEomRankWidget.RankCountdownComplete
struct UShooterEomRankWidget_RankCountdownComplete_Params
{
};

// Function ShooterGame.ShooterEoMWidgetRNR.SpectateClicked
struct UShooterEoMWidgetRNR_SpectateClicked_Params
{
};

// Function ShooterGame.ShooterEoMWidgetRNR.ExitClicked
struct UShooterEoMWidgetRNR_ExitClicked_Params
{
};

// Function ShooterGame.ShooterFadeWidget.OnFadeComplete
struct UShooterFadeWidget_OnFadeComplete_Params
{
};

// Function ShooterGame.ShooterFadeWidget.Cut
struct UShooterFadeWidget_Cut_Params
{
	bool                                               bToBlack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterFadeWidget.BeginFade
struct UShooterFadeWidget_BeginFade_Params
{
	bool                                               bToBlack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameModeStatusWidget.StatusTextShown
struct UShooterGameModeStatusWidget_StatusTextShown_Params
{
};

// Function ShooterGame.ShooterGameModeStatusWidget.StatusTextHidden
struct UShooterGameModeStatusWidget_StatusTextHidden_Params
{
};

// Function ShooterGame.ShooterGameModeStatusWidget.SetAndShowStatusText
struct UShooterGameModeStatusWidget_SetAndShowStatusText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function ShooterGame.ShooterGameModeStatusWidget.HideStatusText
struct UShooterGameModeStatusWidget_HideStatusText_Params
{
};

// Function ShooterGame.ShooterGameModeWidget.ScoreLimitChanged
struct UShooterGameModeWidget_ScoreLimitChanged_Params
{
	int                                                NewScoreLimit;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterGameModeWidget.OnTeamUpdate
struct UShooterGameModeWidget_OnTeamUpdate_Params
{
};

// Function ShooterGame.ShooterGameModeWidget.LivePlayerCountsChanged
struct UShooterGameModeWidget_LivePlayerCountsChanged_Params
{
	int                                                LivePlayersTeam0;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LivePlayersTeam1;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterTurfWarWidget.TurfWarZoneOwnership
struct UShooterTurfWarWidget_TurfWarZoneOwnership_Params
{
	int                                                ZoneIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ZoneTeam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterTurfWarWidget.TurfWarInIntermissionChanged
struct UShooterTurfWarWidget_TurfWarInIntermissionChanged_Params
{
	bool                                               bIntermissionActive;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHitReticleWidget.UpdateHitPipParameters
struct UShooterHitReticleWidget_UpdateHitPipParameters_Params
{
	float                                              StartFraction;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndFraction;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHitType>                              HitType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHitReticleWidget.UpdateHitColorIntensity
struct UShooterHitReticleWidget_UpdateHitColorIntensity_Params
{
	float                                              TimeSinceDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterHUD_LMS.ZoneWarning_6
struct UShooterHUD_LMS_ZoneWarning_6_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.ZoneWarning_31
struct UShooterHUD_LMS_ZoneWarning_31_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnZoneCloseWarning
struct UShooterHUD_LMS_OnZoneCloseWarning_Params
{
	struct FText                                       WarningText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterHUD_LMS.OnSpinToWinStart
struct UShooterHUD_LMS_OnSpinToWinStart_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnSpinToWinEnd
struct UShooterHUD_LMS_OnSpinToWinEnd_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnHideAdvice
struct UShooterHUD_LMS_OnHideAdvice_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownCountdown
struct UShooterHUD_LMS_OnFinalShowdownCountdown_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownClosing
struct UShooterHUD_LMS_OnFinalShowdownClosing_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnEnterWarningZone
struct UShooterHUD_LMS_OnEnterWarningZone_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnEnterDangerZone
struct UShooterHUD_LMS_OnEnterDangerZone_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnBikeRaceStart
struct UShooterHUD_LMS_OnBikeRaceStart_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.OnBikeRaceEnd
struct UShooterHUD_LMS_OnBikeRaceEnd_Params
{
};

// Function ShooterGame.ShooterHUD_LMS.GetCurrentStance
struct UShooterHUD_LMS_GetCurrentStance_Params
{
	TEnumAsByte<ECharacterMovementStance>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterHudWidget.OnLocalRespawn
struct UShooterHudWidget_OnLocalRespawn_Params
{
};

// Function ShooterGame.ShooterInvCard.OnInventoryUpdate
struct UShooterInvCard_OnInventoryUpdate_Params
{
};

// Function ShooterGame.ShooterInventoryButtons.UpdateKeyBinding
struct UShooterInventoryButtons_UpdateKeyBinding_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterInventoryEquippedItemInfo.OnInventoryUpdate
struct UShooterInventoryEquippedItemInfo_OnInventoryUpdate_Params
{
};

// Function ShooterGame.ShooterInventoryListEntry.UpdateKeyBinding
struct UShooterInventoryListEntry_UpdateKeyBinding_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterInventoryBaseList.OnInventoryUpdate
struct UShooterInventoryBaseList_OnInventoryUpdate_Params
{
};

// Function ShooterGame.ShooterJuggernautWidget.ToggleFuelState
struct UShooterJuggernautWidget_ToggleFuelState_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterKillFeed.OnDedicatedSpectatorToggled
struct UShooterKillFeed_OnDedicatedSpectatorToggled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterLockOnIcon.UpdateLockCursor
struct UShooterLockOnIcon_UpdateLockCursor_Params
{
	float                                              LockCursor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMapWidget.MyMarkerClicked
struct UShooterMapWidget_MyMarkerClicked_Params
{
	struct FGeometry                                   InGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterMapWidget.MapScrolled
struct UShooterMapWidget_MapScrolled_Params
{
	struct FGeometry                                   InGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterMapWidget.MapClicked
struct UShooterMapWidget_MapClicked_Params
{
	struct FGeometry                                   InGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ShooterGame.ShooterMapWidget.ComponentMarkerRemoved
struct UShooterMapWidget_ComponentMarkerRemoved_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterMapWidget.ComponentMarkerAdded
struct UShooterMapWidget_ComponentMarkerAdded_Params
{
	uint32_t                                           ComponentID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCHealMeWidget.ToggleHealLockOn
struct UShooterNPCHealMeWidget_ToggleHealLockOn_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCHealMeWidget.OnResetVisuals
struct UShooterNPCHealMeWidget_OnResetVisuals_Params
{
};

// Function ShooterGame.ShooterNPCHealMeWidget.OnRequestHeal
struct UShooterNPCHealMeWidget_OnRequestHeal_Params
{
};

// Function ShooterGame.ShooterNPCHealMeWidget.OnHealPerformed
struct UShooterNPCHealMeWidget_OnHealPerformed_Params
{
};

// Function ShooterGame.ShooterNPCHealthBar.SetCharacter
struct UShooterNPCHealthBar_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForSpectatorScoreboard;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCHealthBar.OnRequestHeal
struct UShooterNPCHealthBar_OnRequestHeal_Params
{
};

// Function ShooterGame.ShooterNPCHealthBar.OnLowHealthStateChange
struct UShooterNPCHealthBar_OnLowHealthStateChange_Params
{
	bool                                               bLowHealth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCMasterWidget.SetCharacter
struct UShooterNPCMasterWidget_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCMasterWidget.GetScaleCanvasWidget
struct UShooterNPCMasterWidget_GetScaleCanvasWidget_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCMasterWidget.GetNameWidget
struct UShooterNPCMasterWidget_GetNameWidget_Params
{
	class UShooterNPCNameWidget*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCMasterWidget.GetHealthBarWidget
struct UShooterNPCMasterWidget_GetHealthBarWidget_Params
{
	class UShooterNPCHealthBar*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCMasterWidget.GetHealMeWidget
struct UShooterNPCMasterWidget_GetHealMeWidget_Params
{
	class UShooterNPCHealMeWidget*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCNameWidget.ToggleHealLockOn
struct UShooterNPCNameWidget_ToggleHealLockOn_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCNameWidget.SetCharacter
struct UShooterNPCNameWidget_SetCharacter_Params
{
	class AShooterCharacter*                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterNPCNameWidget.OnUpdatePlayerName
struct UShooterNPCNameWidget_OnUpdatePlayerName_Params
{
	struct FText                                       NewName;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterObjectiveWorldWidget.SetCountdownTimer
struct UShooterObjectiveWorldWidget_SetCountdownTimer_Params
{
	int                                                NewTimeInSeconds;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterOptionsMenu.ToggleOptionsMenu
struct UShooterOptionsMenu_ToggleOptionsMenu_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.SetMapAndModeNames
struct UShooterOptionsMenu_SetMapAndModeNames_Params
{
	struct FText                                       ModeName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       MapName;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ModeDescription;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterOptionsMenu.QuitGame
struct UShooterOptionsMenu_QuitGame_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.PreGameEnded
struct UShooterOptionsMenu_PreGameEnded_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.OnSpectatorToggled
struct UShooterOptionsMenu_OnSpectatorToggled_Params
{
	bool                                               bSpectator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterOptionsMenu.LeaveWithParty
struct UShooterOptionsMenu_LeaveWithParty_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.LeaveMatch
struct UShooterOptionsMenu_LeaveMatch_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GoToSettings
struct UShooterOptionsMenu_GoToSettings_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GoToRoleDetails
struct UShooterOptionsMenu_GoToRoleDetails_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GoToProfile
struct UShooterOptionsMenu_GoToProfile_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GoToPlayerOptions
struct UShooterOptionsMenu_GoToPlayerOptions_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GoToCharacterSelect
struct UShooterOptionsMenu_GoToCharacterSelect_Params
{
};

// Function ShooterGame.ShooterOptionsMenu.GetModeImage
struct UShooterOptionsMenu_GetModeImage_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterOptionsMenu.GetMapImage
struct UShooterOptionsMenu_GetMapImage_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerList.OnEntryVisibilityChanged
struct UShooterPlayerList_OnEntryVisibilityChanged_Params
{
	class UShooterPlayerListEntry*                     Entry;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerImageEntry.OnPlayerStatusChanged
struct UShooterPlayerImageEntry_OnPlayerStatusChanged_Params
{
	TEnumAsByte<EShooterPlayerStatus>                  PlayerStatus;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterSpecScoreboardEntry.OnCarryObjectChanged
struct UShooterSpecScoreboardEntry_OnCarryObjectChanged_Params
{
	class AShooterCarryObject*                         CarryObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerScoreWidget.OnSpectatorTargetChanged
struct UShooterPlayerScoreWidget_OnSpectatorTargetChanged_Params
{
	class AShooterCharacter*                           NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterPlayerStatusWidget.OnAdrenalineBoost
struct UShooterPlayerStatusWidget_OnAdrenalineBoost_Params
{
};

// Function ShooterGame.ShooterRadarIcon.HideImages
struct UShooterRadarIcon_HideImages_Params
{
};

// Function ShooterGame.ShooterRadarIcon.FadeOutWidget
struct UShooterRadarIcon_FadeOutWidget_Params
{
};

// Function ShooterGame.ShooterRadarIcon.FadeInWidget
struct UShooterRadarIcon_FadeInWidget_Params
{
};

// Function ShooterGame.ShooterRadar.UpdateRadarIcon
struct UShooterRadar_UpdateRadarIcon_Params
{
	class UShooterRadarIcon*                           RadarIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShooterRadarIconSet                        EnemyIconSet;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FShooterRadarIconSet                        TeamIconSet;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ShooterGame.ShooterRadar.GatherActiveRadarIcons
struct UShooterRadar_GatherActiveRadarIcons_Params
{
	class UOverlay*                                    ParentOverlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UShooterRadarIcon*>                   OutActiveRadarIcons;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function ShooterGame.ShooterShieldGenWidget.UpdateHealth
struct UShooterShieldGenWidget_UpdateHealth_Params
{
	float                                              healthCursor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterThreatIndicator.PlayHitAnim
struct UShooterThreatIndicator_PlayHitAnim_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterThreatIndicator.ClearThreatIndicators
struct UShooterThreatIndicator_ClearThreatIndicators_Params
{
};

// Function ShooterGame.ShooterToastWidget.QueueToastMessage
struct UShooterToastWidget_QueueToastMessage_Params
{
	struct FText                                       ToastDescription;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ToastLabel;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       FlairText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       FlairText2;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ToastImageName;                                           // (Parm, ZeroConstructor)
};

// Function ShooterGame.ShooterToastWidget.BPToastMessage
struct UShooterToastWidget_BPToastMessage_Params
{
	struct FText                                       ToastDescription;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ToastLabel;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       FlairText1;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       FlairText2;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  AchievementImage;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterToastWidget.BPHideToast
struct UShooterToastWidget_BPHideToast_Params
{
};

// Function ShooterGame.ShooterTooltipWidget.SetText
struct UShooterTooltipWidget_SetText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterTutorialTooltipWidget.UpdateAndShowTooltipInfo
struct UShooterTutorialTooltipWidget_UpdateAndShowTooltipInfo_Params
{
	struct FTutorialToolTipInfo                        ToolTipInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ShooterGame.ShooterTutorialTooltipWidget.SetTooltipKeybinding
struct UShooterTutorialTooltipWidget_SetTooltipKeybinding_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMovementAction;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterTutorialTooltipWidget.HideToolTip
struct UShooterTutorialTooltipWidget_HideToolTip_Params
{
};

// Function ShooterGame.ShooterUserWidget_ATM.ToggleMenu
struct UShooterUserWidget_ATM_ToggleMenu_Params
{
};

// Function ShooterGame.ShooterUserWidget_ATM.ShowMenu
struct UShooterUserWidget_ATM_ShowMenu_Params
{
};

// Function ShooterGame.ShooterUserWidget_ATM.OnWithdraw
struct UShooterUserWidget_ATM_OnWithdraw_Params
{
};

// Function ShooterGame.ShooterUserWidget_ATM.OnDeposit
struct UShooterUserWidget_ATM_OnDeposit_Params
{
};

// Function ShooterGame.ShooterUserWidget_ATM.HideMenu
struct UShooterUserWidget_ATM_HideMenu_Params
{
};

// Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStop
struct UZonelockTimerWidget_OnZoneTimerWarningStop_Params
{
};

// Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStart
struct UZonelockTimerWidget_OnZoneTimerWarningStart_Params
{
};

// Function ShooterGame.ShooterWeapon_Detonator.ServerDetonatePlacedExplosives
struct AShooterWeapon_Detonator_ServerDetonatePlacedExplosives_Params
{
};

// Function ShooterGame.ShooterWeapon_SupplyLine.ClientNotifyUseFailed
struct AShooterWeapon_SupplyLine_ClientNotifyUseFailed_Params
{
};

// Function ShooterGame.ShooterWeapon_Scanner.NetMulticastPingEnemiesForTeam
struct AShooterWeapon_Scanner_NetMulticastPingEnemiesForTeam_Params
{
	TArray<struct FVector>                             EnemyPositionsInRange;                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class AShooterCharacter*                           UsingCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.ShooterWheeledVehicle.OnInteract
struct AShooterWheeledVehicle_OnInteract_Params
{
	class AShooterCharacter*                           OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShooterGame.TerminatorSpawner.NetMulticast_OnSpawnDone
struct ATerminatorSpawner_NetMulticast_OnSpawnDone_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
