// Name: DBD, Version: 5.3.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x02F27470
//		Name   -> Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAfterExitOpenQEEvaluator::OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.AfterExitOpenQEEvaluator.OnExitGateOpened"));

	UAfterExitOpenQEEvaluator_OnExitGateOpened_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27690
//		Name   -> Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodPointsQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.BloodPointsQEEvaluator.OnFinishedPlaying"));

	UBloodPointsQEEvaluator_OnFinishedPlaying_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F28120
//		Name   -> Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SpecialBehaviourId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UContextualQuestUtilities::STATIC_PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, const struct FName& SpecialBehaviourId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest"));

	UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Params params {};
	params.Player = Player;
	params.SpecialBehaviourId = SpecialBehaviourId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F28040
//		Name   -> Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SpecialBehaviourId                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UContextualQuestUtilities::STATIC_PlayerHasAssociatedQuest(class ADBDPlayer* Player, const struct FName& SpecialBehaviourId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest"));

	UContextualQuestUtilities_PlayerHasAssociatedQuest_Params params {};
	params.Player = Player;
	params.SpecialBehaviourId = SpecialBehaviourId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F27580
//		Name   -> Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDoBeforeEscapeQEEvaluator::OnEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.DoBeforeEscapeQEEvaluator.OnEscaped"));

	UDoBeforeEscapeQEEvaluator_OnEscaped_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27BE0
//		Name   -> Function Archives.DoBeforeHookQEEvaluator.OnHooked
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDoBeforeHookQEEvaluator::OnHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.DoBeforeHookQEEvaluator.OnHooked"));

	UDoBeforeHookQEEvaluator_OnHooked_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27470
//		Name   -> Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDuringEndGameCollapseQEEvaluator::OnEndGameCollapseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart"));

	UDuringEndGameCollapseQEEvaluator_OnEndGameCollapseStart_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F277A0
//		Name   -> Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEarnEmblemQualityQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying"));

	UEarnEmblemQualityQEEvaluator_OnFinishedPlaying_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F278B0
//		Name   -> Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEndOfGameQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.EndOfGameQEEvaluator.OnFinishedPlaying"));

	UEndOfGameQEEvaluator_OnFinishedPlaying_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27F10
//		Name   -> Function Archives.Glyph.OnRep_PlayersWithVisibility
//		Flags  -> (Final, Native, Protected)
void AGlyph::OnRep_PlayersWithVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.OnRep_PlayersWithVisibility"));

	AGlyph_OnRep_PlayersWithVisibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F26FC0
//		Name   -> Function Archives.Glyph.DoesLocalPlayerHaveVisibility
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGlyph::DoesLocalPlayerHaveVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.DoesLocalPlayerHaveVisibility"));

	AGlyph_DoesLocalPlayerHaveVisibility_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.Glyph.Cosmetic_OnStoppedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AGlyph::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Cosmetic_OnStoppedInteracting"));

	AGlyph_Cosmetic_OnStoppedInteracting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.Glyph.Cosmetic_OnStartedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Cosmetic_OnStartedInteracting"));

	AGlyph_Cosmetic_OnStartedInteracting_Params params {};
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.Glyph.Cosmetic_OnInteractionCompleted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Cosmetic_OnInteractionCompleted"));

	AGlyph_Cosmetic_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged"));

	AGlyph_Cosmetic_OnGlyphVisibilityChanged_Params params {};
	params.interactingPlayer = interactingPlayer;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F26F40
//		Name   -> Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  DBDPlayer                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Authority_TrackPlayerWithBehaviourID"));

	AGlyph_Authority_TrackPlayerWithBehaviourID_Params params {};
	params.DBDPlayer = DBDPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F26E80
//		Name   -> Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               isWithinRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      trackedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold"));

	AGlyph_Authority_OnPlayerBreachedRangeThreshold_Params params {};
	params.isWithinRange = isWithinRange;
	params.trackedActor = trackedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F26E60
//		Name   -> Function Archives.Glyph.Authority_OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void AGlyph::Authority_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Authority_OnIntroCompleted"));

	AGlyph_Authority_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.Glyph.Authority_OnInteractionCompleted
//		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGlyph::Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.Glyph.Authority_OnInteractionCompleted"));

	AGlyph_Authority_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DFF0
//		Name   -> Function Archives.NearKillerQEEvaluator.OnRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearKillerQEEvaluator::OnRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.NearKillerQEEvaluator.OnRangeChanged"));

	UNearKillerQEEvaluator_OnRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27F30
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnSlashHarpoonedCamper(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper"));

	UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27AD0
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnHarpoonHit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnHarpoonHit"));

	UHideNearKillerQEEvaluator_OnHarpoonHit_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F279C0
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnFinishedPlaying"));

	UHideNearKillerQEEvaluator_OnFinishedPlaying_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F271D0
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnChaseStart
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  chasedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnChaseStart(class ADBDPlayer* chasedSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnChaseStart"));

	UHideNearKillerQEEvaluator_OnChaseStart_Params params {};
	params.chasedSurvivor = chasedSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27100
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnChaseEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  chasedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnChaseEnd"));

	UHideNearKillerQEEvaluator_OnChaseEnd_Params params {};
	params.chasedSurvivor = chasedSurvivor;
	params.chaseTime = chaseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F26FF0
//		Name   -> Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHideNearKillerQEEvaluator::OnCamperBreakFreeFromHarpoon(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon"));

	UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E400
//		Name   -> Function Archives.MaxEventCountQEEvaluator.OnStopEventCount
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnStopEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.MaxEventCountQEEvaluator.OnStopEventCount"));

	UMaxEventCountQEEvaluator_OnStopEventCount_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DD10
//		Name   -> Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnIncrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.MaxEventCountQEEvaluator.OnIncrementEventCount"));

	UMaxEventCountQEEvaluator_OnIncrementEventCount_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DA70
//		Name   -> Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMaxEventCountQEEvaluator::OnDecrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.MaxEventCountQEEvaluator.OnDecrementEventCount"));

	UMaxEventCountQEEvaluator_OnDecrementEventCount_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E720
//		Name   -> Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USurvivorHookSameTimeQEEvaluator::OnSurvivorUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked"));

	USurvivorHookSameTimeQEEvaluator_OnSurvivorUnhooked_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E590
//		Name   -> Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USurvivorHookSameTimeQEEvaluator::OnSurvivorHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked"));

	USurvivorHookSameTimeQEEvaluator_OnSurvivorHooked_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27360
//		Name   -> Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UInLockerNearKillerQEEvaluator::OnClosetHideExit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit"));

	UInLockerNearKillerQEEvaluator_OnClosetHideExit_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27250
//		Name   -> Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UInLockerNearKillerQEEvaluator::OnClosetHideEnter(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter"));

	UInLockerNearKillerQEEvaluator_OnClosetHideEnter_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27CF0
//		Name   -> Function Archives.ItemConsumedQEEvaluator.OnItemConsumed
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UItemConsumedQEEvaluator::OnItemConsumed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.ItemConsumedQEEvaluator.OnItemConsumed"));

	UItemConsumedQEEvaluator_OnItemConsumed_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F27E00
//		Name   -> Function Archives.ItemUsedQEEvaluator.OnItemUsed
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UItemUsedQEEvaluator::OnItemUsed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.ItemUsedQEEvaluator.OnItemUsed"));

	UItemUsedQEEvaluator_OnItemUsed_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E6A0
//		Name   -> Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivorRemoved                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULivingSurvivorsCountQEEvaluator::OnSurvivorRemoved(class ACamperPlayer* survivorRemoved)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved"));

	ULivingSurvivorsCountQEEvaluator_OnSurvivorRemoved_Params params {};
	params.survivorRemoved = survivorRemoved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E510
//		Name   -> Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivorAdded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULivingSurvivorsCountQEEvaluator::OnSurvivorAdded(class ACamperPlayer* survivorAdded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded"));

	ULivingSurvivorsCountQEEvaluator_OnSurvivorAdded_Params params {};
	params.survivorAdded = survivorAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E930
//		Name   -> Function Archives.NearTrackedActorComponent.StopTrackingActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::StopTrackingActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.NearTrackedActorComponent.StopTrackingActor"));

	UNearTrackedActorComponent_StopTrackingActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E8B0
//		Name   -> Function Archives.NearTrackedActorComponent.StartTrackingActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::StartTrackingActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.NearTrackedActorComponent.StartTrackingActor"));

	UNearTrackedActorComponent_StartTrackingActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E830
//		Name   -> Function Archives.NearTrackedActorComponent.SetDistanceThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::SetDistanceThreshold(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.NearTrackedActorComponent.SetDistanceThreshold"));

	UNearTrackedActorComponent_SetDistanceThreshold_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		bool                                               isWithinRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      trackedActor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNearTrackedActorComponent::OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature"));

	UNearTrackedActorComponent_OnIsWithinRangeChanged__DelegateSignature_Params params {};
	params.isWithinRange = isWithinRange;
	params.trackedActor = trackedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D950
//		Name   -> Function Archives.NearTrackedActorComponent.IsActorWithinRange
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNearTrackedActorComponent::IsActorWithinRange(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.NearTrackedActorComponent.IsActorWithinRange"));

	UNearTrackedActorComponent_IsActorWithinRange_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.PurpleGlyphComponent.StopGlyphMovement
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               useDeceleration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPurpleGlyphComponent::StopGlyphMovement(bool useDeceleration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.StopGlyphMovement"));

	UPurpleGlyphComponent_StopGlyphMovement_Params params {};
	params.useDeceleration = useDeceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.PurpleGlyphComponent.StartGlyphMovement
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UPurpleGlyphComponent::StartGlyphMovement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.StartGlyphMovement"));

	UPurpleGlyphComponent_StartGlyphMovement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.PurpleGlyphComponent.ResumeGlyphMovement
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               useAcceleration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPurpleGlyphComponent::ResumeGlyphMovement(bool useAcceleration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.ResumeGlyphMovement"));

	UPurpleGlyphComponent_ResumeGlyphMovement_Params params {};
	params.useAcceleration = useAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DF30
//		Name   -> Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UPurpleGlyphComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.OnLevelReadyToPlay"));

	UPurpleGlyphComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D8B0
//		Name   -> Function Archives.PurpleGlyphComponent.GetTrackedPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDPlayer* UPurpleGlyphComponent::GetTrackedPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.GetTrackedPlayer"));

	UPurpleGlyphComponent_GetTrackedPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F2D880
//		Name   -> Function Archives.PurpleGlyphComponent.GetOwningGlyph
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AGlyph*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGlyph* UPurpleGlyphComponent::GetOwningGlyph()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.GetOwningGlyph"));

	UPurpleGlyphComponent_GetOwningGlyph_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F2D6E0
//		Name   -> Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     goalLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPurpleGlyphComponent::Authority_StartMoveWithAcceleration(const struct FVector& goalLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration"));

	UPurpleGlyphComponent_Authority_StartMoveWithAcceleration_Params params {};
	params.goalLocation = goalLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D650
//		Name   -> Function Archives.PurpleGlyphComponent.Authority_MoveTo
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPurpleGlyphComponent::Authority_MoveTo(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.Authority_MoveTo"));

	UPurpleGlyphComponent_Authority_MoveTo_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D610
//		Name   -> Function Archives.PurpleGlyphComponent.Authority_GetNextLocation
//		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPurpleGlyphComponent::Authority_GetNextLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.Authority_GetNextLocation"));

	UPurpleGlyphComponent_Authority_GetNextLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F2D5F0
//		Name   -> Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPurpleGlyphComponent::Authority_AbortMoveWithDeceleration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration"));

	UPurpleGlyphComponent_Authority_AbortMoveWithDeceleration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D5D0
//		Name   -> Function Archives.PurpleGlyphComponent.Authority_AbortMove
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPurpleGlyphComponent::Authority_AbortMove()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.PurpleGlyphComponent.Authority_AbortMove"));

	UPurpleGlyphComponent_Authority_AbortMove_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DF70
//		Name   -> Function Archives.QuestEventsHandler.OnPlayergameStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDSharedTypes_EGameState                          GameState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestEventsHandler::OnPlayergameStateChanged(DBDSharedTypes_EGameState GameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnPlayergameStateChanged"));

	UQuestEventsHandler_OnPlayergameStateChanged_Params params {};
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DC90
//		Name   -> Function Archives.QuestEventsHandler.OnGameEnded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_EEndGameReason                      reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestEventsHandler::OnGameEnded(DeadByDaylight_EEndGameReason reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnGameEnded"));

	UQuestEventsHandler_OnGameEnded_Params params {};
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DB80
//		Name   -> Function Archives.QuestEventsHandler.OnFinishedPlaying
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UQuestEventsHandler::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.OnFinishedPlaying"));

	UQuestEventsHandler_OnFinishedPlaying_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x028E6B60
//		Name   -> Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
//		Flags  -> (Final, Exec, Native, Public)
void UQuestEventsHandler::DBD_ShowInGameCurrentQuestInfos()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos"));

	UQuestEventsHandler_DBD_ShowInGameCurrentQuestInfos_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D800
//		Name   -> Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		int                                                amount                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestEventsHandler::DBD_InGameAddProgressionToCurrentQuest(int amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest"));

	UQuestEventsHandler_DBD_InGameAddProgressionToCurrentQuest_Params params {};
	params.amount = amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D8E0
//		Name   -> Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UQuestEventsHandler*                         QuestEventsHandler                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestEventsHandlerUtilities::STATIC_InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler"));

	UQuestEventsHandlerUtilities_InitializeQuestEventHandler_Params params {};
	params.QuestEventsHandler = QuestEventsHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DE20
//		Name   -> Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USearchItemRarityQEEvaluator::OnItemSpawnedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest"));

	USearchItemRarityQEEvaluator_OnItemSpawnedFromChest_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E2F0
//		Name   -> Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckConsecutiveQEEvaluator::OnSkillCheckSuccess(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckSuccess"));

	USkillCheckConsecutiveQEEvaluator_OnSkillCheckSuccess_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E1E0
//		Name   -> Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckConsecutiveQEEvaluator::OnSkillCheckFail(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.SkillCheckConsecutiveQEEvaluator.OnSkillCheckFail"));

	USkillCheckConsecutiveQEEvaluator_OnSkillCheckFail_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E9B0
//		Name   -> Function Archives.YellowGlyphComponent.TriggerSkillCheck
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              currentTickerLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UYellowGlyphComponent::TriggerSkillCheck(float currentTickerLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.TriggerSkillCheck"));

	UYellowGlyphComponent_TriggerSkillCheck_Params params {};
	params.currentTickerLocation = currentTickerLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX
//		Flags  -> (Event, Protected, BlueprintEvent)
void UYellowGlyphComponent::StartGlyphPreTeleportVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX"));

	UYellowGlyphComponent_StartGlyphPreTeleportVFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
//		Flags  -> (Event, Protected, BlueprintEvent)
void UYellowGlyphComponent::StartGlyphPostTeleportVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX"));

	UYellowGlyphComponent_StartGlyphPostTeleportVFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2E080
//		Name   -> Function Archives.YellowGlyphComponent.OnSkillCheck
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UYellowGlyphComponent::OnSkillCheck(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.OnSkillCheck"));

	UYellowGlyphComponent_OnSkillCheck_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2DF50
//		Name   -> Function Archives.YellowGlyphComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UYellowGlyphComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.OnLevelReadyToPlay"));

	UYellowGlyphComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D9E0
//		Name   -> Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UYellowGlyphComponent::Multicast_TeleportGlyph(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.Multicast_TeleportGlyph"));

	UYellowGlyphComponent_Multicast_TeleportGlyph_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D880
//		Name   -> Function Archives.YellowGlyphComponent.GetOwningGlyph
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AGlyph*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGlyph* UYellowGlyphComponent::GetOwningGlyph()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.GetOwningGlyph"));

	UYellowGlyphComponent_GetOwningGlyph_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02F2D770
//		Name   -> Function Archives.YellowGlyphComponent.Authority_TeleportGlyph
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		int                                                maxNumberOfTries                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UYellowGlyphComponent::Authority_TeleportGlyph(int maxNumberOfTries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Archives.YellowGlyphComponent.Authority_TeleportGlyph"));

	UYellowGlyphComponent_Authority_TeleportGlyph_Params params {};
	params.maxNumberOfTries = maxNumberOfTries;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
