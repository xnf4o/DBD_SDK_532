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
//		Offset -> 0x030D4AA0
//		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UActivePhaseWalkInteraction::ResetMovementSpeedMultipliers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.ResetMovementSpeedMultipliers"));

	UActivePhaseWalkInteraction_ResetMovementSpeedMultipliers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivePhaseWalkInteraction::ResetChargeVFX(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.ResetChargeVFX"));

	UActivePhaseWalkInteraction_ResetChargeVFX_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4840
//		Name   -> Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               startActivePhaseWalk                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               TeleportToHusk                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivePhaseWalkInteraction::Local_SendPhaseWalkInfo(bool startActivePhaseWalk, bool TeleportToHusk, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ActivePhaseWalkInteraction.Local_SendPhaseWalkInfo"));

	UActivePhaseWalkInteraction_Local_SendPhaseWalkInfo_Params params {};
	params.startActivePhaseWalk = startActivePhaseWalk;
	params.TeleportToHusk = TeleportToHusk;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D45B0
//		Name   -> Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UStalkerComponent*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStalkerComponent* UBaseStalkModeInteraction::GetStalkerComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent"));

	UBaseStalkModeInteraction_GetStalkerComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4300
//		Name   -> Function DBDInteraction.BaseStalkModeInteraction.CanStalk
//		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseStalkModeInteraction::CanStalk()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.BaseStalkModeInteraction.CanStalk"));

	UBaseStalkModeInteraction_CanStalk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4640
//		Name   -> Function DBDInteraction.BlessTotem.GetTotem
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ATotem*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATotem* UBlessTotem::GetTotem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.BlessTotem.GetTotem"));

	UBlessTotem_GetTotem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D44F0
//		Name   -> Function DBDInteraction.CollectItemInteraction.GetItem
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACollectable*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACollectable* UCollectItemInteraction::GetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.CollectItemInteraction.GetItem"));

	UCollectItemInteraction_GetItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4170
//		Name   -> Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDestroyDemogorgonPortalInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.DestroyDemogorgonPortalInteraction.Authority_OnChargeApplied"));

	UDestroyDemogorgonPortalInteraction_Authority_OnChargeApplied_Params params {};
	params.individualChargeAmount = individualChargeAmount;
	params.totalChargeAmount = totalChargeAmount;
	params.chargeInstigator = chargeInstigator;
	params.wasCoop = wasCoop;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4520
//		Name   -> Function DBDInteraction.DropItemInteraction.GetItem
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACollectable*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACollectable* UDropItemInteraction::GetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.DropItemInteraction.GetItem"));

	UDropItemInteraction_GetItem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D40B0
//		Name   -> Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class ADBDPlayer*                                  damageBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorDamageInteraction::Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator"));

	UGeneratorDamageInteraction_Authority_DamageGenerator_Params params {};
	params.damageBy = damageBy;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4AC0
//		Name   -> Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               obstructed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed"));

	UGeneratorRepairInteraction_SetIsObstructed_Params params {};
	params.obstructed = obstructed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4580
//		Name   -> Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AGenerator*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AGenerator* UGeneratorRepairInteraction::GetOwningGenerator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator"));

	UGeneratorRepairInteraction_GetOwningGenerator_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D46D0
//		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeneratorToolboxRepairInteraction::HasChargedToolBox(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox"));

	UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4470
//		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGeneratorToolboxRepairInteraction::GetInteractionTextWhenEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty"));

	UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D45E0
//		Name   -> Function DBDInteraction.GhostChargeStalkModeInteraction.GetStealthComponent
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UGhostStealthComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGhostStealthComponent* UGhostChargeStalkModeInteraction::GetStealthComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.GhostChargeStalkModeInteraction.GetStealthComponent"));

	UGhostChargeStalkModeInteraction_GetStealthComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4610
//		Name   -> Function DBDInteraction.HealInteraction.GetTargetSurvivor
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACamperPlayer*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACamperPlayer* UHealInteraction::GetTargetSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.HealInteraction.GetTargetSurvivor"));

	UHealInteraction_GetTargetSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDInteraction.HealInteraction.Authority_OnChargeApplied
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHealInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.HealInteraction.Authority_OnChargeApplied"));

	UHealInteraction_Authority_OnChargeApplied_Params params {};
	params.individualChargeAmount = individualChargeAmount;
	params.totalChargeAmount = totalChargeAmount;
	params.chargeInstigator = chargeInstigator;
	params.wasCoop = wasCoop;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4550
//		Name   -> Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AMeatHook*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMeatHook* UHookSurvivorDefinition::GetMeatHook()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.HookSurvivorDefinition.GetMeatHook"));

	UHookSurvivorDefinition_GetMeatHook_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4810
//		Name   -> Function DBDInteraction.LinkedVomitInteraction.IsVomiting
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULinkedVomitInteraction::IsVomiting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.IsVomiting"));

	ULinkedVomitInteraction_IsVomiting_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D47E0
//		Name   -> Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULinkedVomitInteraction::IsChargeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.IsChargeComplete"));

	ULinkedVomitInteraction_IsChargeComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4670
//		Name   -> Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UVomitStateComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent"));

	ULinkedVomitInteraction_GetVomitStateComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D43F0
//		Name   -> Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USearchChestInteractionBase::FireChestScoreEvent(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent"));

	USearchChestInteractionBase_FireChestScoreEvent_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4330
//		Name   -> Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		class ACollectable*                                Collectable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOpenChestInteraction::CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded"));

	UOpenChestInteraction_CollectItemIfEmptyHanded_Params params {};
	params.Collectable = Collectable;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnTeleportInteractionCanceledVFX"));

	UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4A20
//		Name   -> Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.TeleportToDemogorgonPortalInteraction.OnSlasherSet"));

	UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D4760
//		Name   -> Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrowInteraction::InitThrowCancellationExitTime(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime"));

	UThrowInteraction_InitThrowCancellationExitTime_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030D46A0
//		Name   -> Function DBDInteraction.ThrowInteraction.HasCancelledThrow
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UThrowInteraction::HasCancelledThrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.ThrowInteraction.HasCancelledThrow"));

	UThrowInteraction_HasCancelledThrow_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030D4950
//		Name   -> Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class UUnhook*                                     unhookInteraction                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               playerBeingUnhooked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUnhookReplicationComponent::Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked"));

	UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Params params {};
	params.unhookInteraction = unhookInteraction;
	params.playerBeingUnhooked = playerBeingUnhooked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
