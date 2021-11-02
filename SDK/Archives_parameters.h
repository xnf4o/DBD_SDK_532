#pragma once

// Name: DBD, Version: 5.3.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
struct UAfterExitOpenQEEvaluator_OnExitGateOpened_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
struct UBloodPointsQEEvaluator_OnFinishedPlaying_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
struct UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SpecialBehaviourId;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
struct UContextualQuestUtilities_PlayerHasAssociatedQuest_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SpecialBehaviourId;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
struct UDoBeforeEscapeQEEvaluator_OnEscaped_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.DoBeforeHookQEEvaluator.OnHooked
struct UDoBeforeHookQEEvaluator_OnHooked_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
struct UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
struct UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
struct UEndOfGameQEEvaluator_OnFinishedPlaying_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.OnRep_PlayersWithVisibility
struct AGlyph_OnRep_PlayersWithVisibility_Params
{
};

// Function Archives.Glyph.DoesLocalPlayerHaveVisibility
struct AGlyph_DoesLocalPlayerHaveVisibility_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnStoppedInteracting
struct AGlyph_Cosmetic_OnStoppedInteracting_Params
{
};

// Function Archives.Glyph.Cosmetic_OnStartedInteracting
struct AGlyph_Cosmetic_OnStartedInteracting_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              interactionDuration;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnInteractionCompleted
struct AGlyph_Cosmetic_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
struct AGlyph_Cosmetic_OnGlyphVisibilityChanged_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID
struct AGlyph_Authority_TrackPlayerWithBehaviourID_Params
{
	class ADBDPlayer*                                  DBDPlayer;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
struct AGlyph_Authority_OnPlayerBreachedRangeThreshold_Params
{
	bool                                               isWithinRange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      trackedActor;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.Glyph.Authority_OnIntroCompleted
struct AGlyph_Authority_OnIntroCompleted_Params
{
};

// Function Archives.Glyph.Authority_OnInteractionCompleted
struct AGlyph_Authority_OnInteractionCompleted_Params
{
	class ADBDPlayer*                                  interactingPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearKillerQEEvaluator.OnRangeChanged
struct UNearKillerQEEvaluator_OnRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
struct UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
struct UHideNearKillerQEEvaluator_OnHarpoonHit_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
struct UHideNearKillerQEEvaluator_OnFinishedPlaying_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnChaseStart
struct UHideNearKillerQEEvaluator_OnChaseStart_Params
{
	class ADBDPlayer*                                  chasedSurvivor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
struct UHideNearKillerQEEvaluator_OnChaseEnd_Params
{
	class ADBDPlayer*                                  chasedSurvivor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              chaseTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
struct UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
struct UMaxEventCountQEEvaluator_OnStopEventCount_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
struct UMaxEventCountQEEvaluator_OnIncrementEventCount_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
struct UMaxEventCountQEEvaluator_OnDecrementEventCount_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
struct USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
struct USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
struct UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
struct UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
struct UItemConsumedQEEvaluator_OnItemConsumed_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.ItemUsedQEEvaluator.OnItemUsed
struct UItemUsedQEEvaluator_OnItemUsed_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
struct ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params
{
	class ACamperPlayer*                               survivorRemoved;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
struct ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params
{
	class ACamperPlayer*                               survivorAdded;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.StopTrackingActor
struct UNearTrackedActorComponent_StopTrackingActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.StartTrackingActor
struct UNearTrackedActorComponent_StartTrackingActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.SetDistanceThreshold
struct UNearTrackedActorComponent_SetDistanceThreshold_Params
{
	float                                              value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
struct UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params
{
	bool                                               isWithinRange;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      trackedActor;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.NearTrackedActorComponent.IsActorWithinRange
struct UNearTrackedActorComponent_IsActorWithinRange_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.StopGlyphMovement
struct UPurpleGlyphComponent_StopGlyphMovement_Params
{
	bool                                               useDeceleration;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.StartGlyphMovement
struct UPurpleGlyphComponent_StartGlyphMovement_Params
{
};

// Function Archives.PurpleGlyphComponent.ResumeGlyphMovement
struct UPurpleGlyphComponent_ResumeGlyphMovement_Params
{
	bool                                               useAcceleration;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay
struct UPurpleGlyphComponent_OnLevelReadyToPlay_Params
{
};

// Function Archives.PurpleGlyphComponent.GetTrackedPlayer
struct UPurpleGlyphComponent_GetTrackedPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.GetOwningGlyph
struct UPurpleGlyphComponent_GetOwningGlyph_Params
{
	class AGlyph*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
struct UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Params
{
	struct FVector                                     goalLocation;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.Authority_MoveTo
struct UPurpleGlyphComponent_Authority_MoveTo_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.Authority_GetNextLocation
struct UPurpleGlyphComponent_Authority_GetNextLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
struct UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Params
{
};

// Function Archives.PurpleGlyphComponent.Authority_AbortMove
struct UPurpleGlyphComponent_Authority_AbortMove_Params
{
};

// Function Archives.QuestEventsHandler.OnPlayergameStateChanged
struct UQuestEventsHandler_OnPlayergameStateChanged_Params
{
	DBDSharedTypes_EGameState                          GameState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.QuestEventsHandler.OnGameEnded
struct UQuestEventsHandler_OnGameEnded_Params
{
	DeadByDaylight_EEndGameReason                      reason;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.QuestEventsHandler.OnFinishedPlaying
struct UQuestEventsHandler_OnFinishedPlaying_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
struct UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params
{
};

// Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
struct UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params
{
	int                                                amount;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
struct UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params
{
	class UQuestEventsHandler*                         QuestEventsHandler;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
struct USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
struct USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Archives.YellowGlyphComponent.TriggerSkillCheck
struct UYellowGlyphComponent_TriggerSkillCheck_Params
{
	float                                              currentTickerLocation;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX
struct UYellowGlyphComponent_StartGlyphPreTeleportVFX_Params
{
};

// Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
struct UYellowGlyphComponent_StartGlyphPostTeleportVFX_Params
{
};

// Function Archives.YellowGlyphComponent.OnSkillCheck
struct UYellowGlyphComponent_OnSkillCheck_Params
{
	bool                                               hadInput;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bonus;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.YellowGlyphComponent.OnLevelReadyToPlay
struct UYellowGlyphComponent_OnLevelReadyToPlay_Params
{
};

// Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph
struct UYellowGlyphComponent_Multicast_TeleportGlyph_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.YellowGlyphComponent.GetOwningGlyph
struct UYellowGlyphComponent_GetOwningGlyph_Params
{
	class AGlyph*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Archives.YellowGlyphComponent.Authority_TeleportGlyph
struct UYellowGlyphComponent_Authority_TeleportGlyph_Params
{
	int                                                maxNumberOfTries;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
