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
//		Offset -> 0x03986280
//		Name   -> Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAbsorbBloodOrbsInteraction::SetPlayerOwner(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner"));

	UAbsorbBloodOrbsInteraction_SetPlayerOwner_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.UpdateAttracted_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     destination                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  absorber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABloodOrb::UpdateAttracted_Cosmetic(const struct FVector& destination, class ADBDPlayer* absorber, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.UpdateAttracted_Cosmetic"));

	ABloodOrb_UpdateAttracted_Cosmetic_Params params {};
	params.destination = destination;
	params.absorber = absorber;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     destination                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  absorber                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABloodOrb::UpdateAbsorbed_Cosmetic(const struct FVector& destination, class ADBDPlayer* absorber, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.UpdateAbsorbed_Cosmetic"));

	ABloodOrb_UpdateAbsorbed_Cosmetic_Params params {};
	params.destination = destination;
	params.absorber = absorber;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986BF0
//		Name   -> Function TheOni.BloodOrb.OnRep_State
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheOni_EBloodOrbState                              oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABloodOrb::OnRep_State(TheOni_EBloodOrbState oldState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnRep_State"));

	ABloodOrb_OnRep_State_Params params {};
	params.oldState = oldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               isAttracted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABloodOrb::OnIsAttractedChangedCosmetic(bool isAttracted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnIsAttractedChangedCosmetic"));

	ABloodOrb_OnIsAttractedChangedCosmetic_Params params {};
	params.isAttracted = isAttracted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.OnDestroyedCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABloodOrb::OnDestroyedCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnDestroyedCosmetic"));

	ABloodOrb_OnDestroyedCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.OnAbsorbedCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABloodOrb::OnAbsorbedCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.OnAbsorbedCosmetic"));

	ABloodOrb_OnAbsorbedCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986BC0
//		Name   -> Function TheOni.BloodOrb.GetDroppingPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDPlayer* ABloodOrb::GetDroppingPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.GetDroppingPlayer"));

	ABloodOrb_GetDroppingPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.BloodOrb.Authority_OnDropped
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  droppedBy                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ImpulseFactor                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABloodOrb::Authority_OnDropped(class ADBDPlayer* droppedBy, float ImpulseFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_OnDropped"));

	ABloodOrb_Authority_OnDropped_Params params {};
	params.droppedBy = droppedBy;
	params.ImpulseFactor = ImpulseFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986BA0
//		Name   -> Function TheOni.BloodOrb.Authority_OnDropFinished
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void ABloodOrb::Authority_OnDropFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_OnDropFinished"));

	ABloodOrb_Authority_OnDropFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986B80
//		Name   -> Function TheOni.BloodOrb.Authority_DestroyBloodOrb
//		Flags  -> (Final, Native, Private)
void ABloodOrb::Authority_DestroyBloodOrb()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_DestroyBloodOrb"));

	ABloodOrb_Authority_DestroyBloodOrb_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986B60
//		Name   -> Function TheOni.BloodOrb.Authority_Despawn
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void ABloodOrb::Authority_Despawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrb.Authority_Despawn"));

	ABloodOrb_Authority_Despawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986EA0
//		Name   -> Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               inAbsorptionMode                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbAbsorberComponent::SetInAbsorbMode(bool inAbsorptionMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode"));

	UBloodOrbAbsorberComponent_SetInAbsorbMode_Params params {};
	params.inAbsorptionMode = inAbsorptionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03986E70
//		Name   -> Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBloodOrbAbsorberComponent::IsInAbsorbMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode"));

	UBloodOrbAbsorberComponent_IsInAbsorbMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x039876C0
//		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		class UBloodOrbVisibilityComponent*                BloodOrbVisibilityComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange"));

	UBloodOrbConfiguratorComponent_UpdateSurvivorBloodOrbVisibilityRange_Params params {};
	params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987600
//		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		class UBloodOrbVisibilityComponent*                BloodOrbVisibilityComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges"));

	UBloodOrbConfiguratorComponent_UpdateKillerBloodOrbVisiblityRanges_Params params {};
	params.BloodOrbVisibilityComponent = BloodOrbVisibilityComponent;
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987540
//		Name   -> Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		class UBloodOrbAbsorberComponent*                  BloodOrbAbsorberComponent                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, class ADBDPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed"));

	UBloodOrbConfiguratorComponent_UpdateBloodOrbAttractSpeed_Params params {};
	params.BloodOrbAbsorberComponent = BloodOrbAbsorberComponent;
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987520
//		Name   -> Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UBloodOrbConfiguratorComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay"));

	UBloodOrbConfiguratorComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039874A0
//		Name   -> Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		class ADBDPlayer*                                  killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbConfiguratorComponent::Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier"));

	UBloodOrbConfiguratorComponent_Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F2D800
//		Name   -> Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
//		Flags  -> (Final, Exec, Native, Private, Const)
// Parameters:
//		int                                                numOrbs                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::DBD_DropBloodOrbs(int numOrbs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs"));

	UBloodOrbDropperComponent_DBD_DropBloodOrbs_Params params {};
	params.numOrbs = numOrbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03988070
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_SetPaused
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               paused                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_SetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_SetPaused"));

	UBloodOrbDropperComponent_Authority_SetPaused_Params params {};
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987FB0
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  newState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnOwningCamperDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged"));

	UBloodOrbDropperComponent_Authority_OnOwningCamperDamageStateChanged_Params params {};
	params.oldState = oldState;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987E40
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
//		Flags  -> (Final, Native, Private, HasOutParms, Const)
// Parameters:
//		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FBloodOrbDropParams                         dropParams                                                 (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnDropOrbsGameEvent(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData, const struct FBloodOrbDropParams& dropParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent"));

	UBloodOrbDropperComponent_Authority_OnDropOrbsGameEvent_Params params {};
	params.GameEvent = GameEvent;
	params.GameEventData = GameEventData;
	params.dropParams = dropParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987D30
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperUnhooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked"));

	UBloodOrbDropperComponent_Authority_OnCamperUnhooked_Params params {};
	params.GameEvent = GameEvent;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987C20
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
//		Flags  -> (Final, Native, Private, HasOutParms, Const)
// Parameters:
//		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperHooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked"));

	UBloodOrbDropperComponent_Authority_OnCamperHooked_Params params {};
	params.GameEvent = GameEvent;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03987B10
//		Name   -> Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBloodOrbDropperComponent::Authority_OnCamperCrouched(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched"));

	UBloodOrbDropperComponent_Authority_OnCamperCrouched_Params params {};
	params.GameEvent = GameEvent;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039889B0
//		Name   -> Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                previousOverlappingOrbs                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::OnRep_CurrentOverlappingOrbs(int previousOverlappingOrbs)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs"));

	UBloodOrbOverlapComponent_OnRep_CurrentOverlappingOrbs_Params params {};
	params.previousOverlappingOrbs = previousOverlappingOrbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03988930
//		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnDestroyedBloodOrb(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb"));

	UBloodOrbOverlapComponent_Authority_OnDestroyedBloodOrb_Params params {};
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039888B0
//		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheOni_EBloodOrbVisibilityMode                     visibilityMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbVisibilityModeChanged(TheOni_EBloodOrbVisibilityMode visibilityMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbVisibilityModeChanged_Params params {};
	params.visibilityMode = visibilityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03988770
//		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbEndOverlap_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03988560
//		Name   -> Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBloodOrbOverlapComponent::Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap"));

	UBloodOrbOverlapComponent_Authority_OnBloodOrbBeginOverlap_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x037AADF0
//		Name   -> Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTimerObject*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UBloodOrbOverlapRevealToKiller::GetRevealTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbOverlapRevealToKiller.GetRevealTimer"));

	UBloodOrbOverlapRevealToKiller_GetRevealTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x039890F0
//		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		TheOni_EBloodOrbState                              oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TheOni_EBloodOrbState                              newState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbStateChanged(TheOni_EBloodOrbState oldState, TheOni_EBloodOrbState newState, class ABloodOrb* BloodOrb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged"));

	UBloodOrbStateMonitorComponent_OnBloodOrbStateChanged_Params params {};
	params.oldState = oldState;
	params.newState = newState;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03989070
//		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbSpawned(class ABloodOrb* BloodOrb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned"));

	UBloodOrbStateMonitorComponent_OnBloodOrbSpawned_Params params {};
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03988FF0
//		Name   -> Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbStateMonitorComponent::OnBloodOrbDestroyed(class ABloodOrb* BloodOrb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed"));

	UBloodOrbStateMonitorComponent_OnBloodOrbDestroyed_Params params {};
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03989360
//		Name   -> Function TheOni.BloodOrbUtilities.GetAllBloodOrbs
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class ABloodOrb*>                           ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ABloodOrb*> UBloodOrbUtilities::STATIC_GetAllBloodOrbs(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbUtilities.GetAllBloodOrbs"));

	UBloodOrbUtilities_GetAllBloodOrbs_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030B51B0
//		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              visibilityRange                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbVisibilityComponent::SetVisibilityRange(float visibilityRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbVisibilityComponent.SetVisibilityRange"));

	UBloodOrbVisibilityComponent_SetVisibilityRange_Params params {};
	params.visibilityRange = visibilityRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039897E0
//		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TheOni_EBloodOrbVisibilityMode                     visibilityMode                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbVisibilityComponent::SetVisibilityMode(TheOni_EBloodOrbVisibilityMode visibilityMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbVisibilityComponent.SetVisibilityMode"));

	UBloodOrbVisibilityComponent_SetVisibilityMode_Params params {};
	params.visibilityMode = visibilityMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03989750
//		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               show                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbVisibilityComponent::SetShowAttractedBloodOrbsAuras(bool show)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras"));

	UBloodOrbVisibilityComponent_SetShowAttractedBloodOrbsAuras_Params params {};
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030B5230
//		Name   -> Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              auraVisibilityRange                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbVisibilityComponent::SetAuraVisibilityRange(float auraVisibilityRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange"));

	UBloodOrbVisibilityComponent_SetAuraVisibilityRange_Params params {};
	params.auraVisibilityRange = auraVisibilityRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039896D0
//		Name   -> Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodOrbVisibilityComponent::OnBloodOrbSpawned(class ABloodOrb* BloodOrb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned"));

	UBloodOrbVisibilityComponent_OnBloodOrbSpawned_Params params {};
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A440
//		Name   -> Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::ShouldLoseDemonModeOnStun()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun"));

	UDemonModeComponent_ShouldLoseDemonModeOnStun_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0398A420
//		Name   -> Function TheOni.DemonModeComponent.OnPowerChargeFull
//		Flags  -> (Final, Native, Private, Const)
void UDemonModeComponent::OnPowerChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnPowerChargeFull"));

	UDemonModeComponent_OnPowerChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A400
//		Name   -> Function TheOni.DemonModeComponent.OnPowerChargeEmpty
//		Flags  -> (Final, Native, Private, Const)
void UDemonModeComponent::OnPowerChargeEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnPowerChargeEmpty"));

	UDemonModeComponent_OnPowerChargeEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A370
//		Name   -> Function TheOni.DemonModeComponent.OnIsPowerChanged
//		Flags  -> (Final, Native, Private, Const)
// Parameters:
//		bool                                               IsInPower                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::OnIsPowerChanged(bool IsInPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.OnIsPowerChanged"));

	UDemonModeComponent_OnIsPowerChanged_Params params {};
	params.IsInPower = IsInPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036B6400
//		Name   -> Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UDemonModeComponent::Multicast_DemonModeInterruptedOnStartup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup"));

	UDemonModeComponent_Multicast_DemonModeInterruptedOnStartup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA530
//		Name   -> Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UDemonModeComponent::Multicast_DemonModeInterruptedOnEnding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding"));

	UDemonModeComponent_Multicast_DemonModeInterruptedOnEnding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A340
//		Name   -> Function TheOni.DemonModeComponent.IsInDemonMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::IsInDemonMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.IsInDemonMode"));

	UDemonModeComponent_IsInDemonMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0398A310
//		Name   -> Function TheOni.DemonModeComponent.GetDemonModeState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheOni_EDemonModeState                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheOni_EDemonModeState UDemonModeComponent::GetDemonModeState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetDemonModeState"));

	UDemonModeComponent_GetDemonModeState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0398A2E0
//		Name   -> Function TheOni.DemonModeComponent.GetCurrentCharge
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDemonModeComponent::GetCurrentCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetCurrentCharge"));

	UDemonModeComponent_GetCurrentCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0398A2B0
//		Name   -> Function TheOni.DemonModeComponent.GetChargePercent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDemonModeComponent::GetChargePercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.GetChargePercent"));

	UDemonModeComponent_GetChargePercent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AA8E30
//		Name   -> Function TheOni.DemonModeComponent.DBD_DemonModeForever
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               forever                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::DBD_DemonModeForever(bool forever)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.DBD_DemonModeForever"));

	UDemonModeComponent_DBD_DemonModeForever_Params params {};
	params.forever = forever;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A280
//		Name   -> Function TheOni.DemonModeComponent.CanStartDemonMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDemonModeComponent::CanStartDemonMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.CanStartDemonMode"));

	UDemonModeComponent_CanStartDemonMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0398A200
//		Name   -> Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class UInteractionDefinition*                      Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition* Interaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction"));

	UDemonModeComponent_Authority_SetDemonModeCooldownInteraction_Params params {};
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A1E0
//		Name   -> Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UDemonModeComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay"));

	UDemonModeComponent_Authority_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A160
//		Name   -> Function TheOni.DemonModeComponent.Authority_OnChargeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              currentChargePercent                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_OnChargeChanged(float currentChargePercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_OnChargeChanged"));

	UDemonModeComponent_Authority_OnChargeChanged_Params params {};
	params.currentChargePercent = currentChargePercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A020
//		Name   -> Function TheOni.DemonModeComponent.Authority_InterruptedMontage
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_InterruptedMontage"));

	UDemonModeComponent_Authority_InterruptedMontage_Params params {};
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03989FA0
//		Name   -> Function TheOni.DemonModeComponent.Authority_AddCharge
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ChargeAmount                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeComponent::Authority_AddCharge(float ChargeAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeComponent.Authority_AddCharge"));

	UDemonModeComponent_Authority_AddCharge_Params params {};
	params.ChargeAmount = ChargeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A630
//		Name   -> Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeCooldownInteraction::SetPlayerOwner(class ADBDPlayer* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeCooldownInteraction.SetPlayerOwner"));

	UDemonModeCooldownInteraction_SetPlayerOwner_Params params {};
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A610
//		Name   -> Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UDemonModeCooldownInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay"));

	UDemonModeCooldownInteraction_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398A910
//		Name   -> Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               inMenuDemonMode                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemonModeMenuComponent::SetInMenuDemonMode(bool inMenuDemonMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.DemonModeMenuComponent.SetInMenuDemonMode"));

	UDemonModeMenuComponent_SetInMenuDemonMode_Params params {};
	params.inMenuDemonMode = inMenuDemonMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398B150
//		Name   -> Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsInDemonMode                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniCustomizationItemAnimInstance::SetIsInDemonMode(bool IsInDemonMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode"));

	UOniCustomizationItemAnimInstance_SetIsInDemonMode_Params params {};
	params.IsInDemonMode = IsInDemonMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398B5E0
//		Name   -> Function TheOni.OniDashInteraction.SetPlayerOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::SetPlayerOwner(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.SetPlayerOwner"));

	UOniDashInteraction_SetPlayerOwner_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398B5C0
//		Name   -> Function TheOni.OniDashInteraction.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UOniDashInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnLevelReadyToPlay"));

	UOniDashInteraction_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.OniDashInteraction.OnDashEnd
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnDashEnd(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnDashEnd"));

	UOniDashInteraction_OnDashEnd_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.OniDashInteraction.OnDashBegin
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnDashBegin(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnDashBegin"));

	UOniDashInteraction_OnDashBegin_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.OniDashInteraction.OnChargeEnd
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               chargeCompleted                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnChargeEnd(class ADBDPlayer* Player, bool chargeCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnChargeEnd"));

	UOniDashInteraction_OnChargeEnd_Params params {};
	params.Player = Player;
	params.chargeCompleted = chargeCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function TheOni.OniDashInteraction.OnChargeBegin
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOniDashInteraction::OnChargeBegin(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.OniDashInteraction.OnChargeBegin"));

	UOniDashInteraction_OnChargeBegin_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398C6A0
//		Name   -> Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      overlappingActor                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ABloodOrb*                                   BloodOrb                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URenjirosBloodyGlove::Authority_OnBloodOrbOverlapBegin(class AActor* overlappingActor, class ABloodOrb* BloodOrb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin"));

	URenjirosBloodyGlove_Authority_OnBloodOrbOverlapBegin_Params params {};
	params.overlappingActor = overlappingActor;
	params.BloodOrb = BloodOrb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398C920
//		Name   -> Function TheOni.StartDemonModeInteraction.SetPlayerOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Owner                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStartDemonModeInteraction::SetPlayerOwner(class ADBDPlayer* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.StartDemonModeInteraction.SetPlayerOwner"));

	UStartDemonModeInteraction_SetPlayerOwner_Params params {};
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0398C900
//		Name   -> Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UStartDemonModeInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheOni.StartDemonModeInteraction.OnLevelReadyToPlay"));

	UStartDemonModeInteraction_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
