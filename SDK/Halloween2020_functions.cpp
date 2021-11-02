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
//		Offset -> 0x03823410
//		Name   -> Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
//		Flags  -> (Final, Native, Private)
void UBlightedSerumAddon::OnRep_DashInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.BlightedSerumAddon.OnRep_DashInteraction"));

	UBlightedSerumAddon_OnRep_DashInteraction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBlightedSerumAddon::OnBlightedDashEnabledVfxSfx()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx"));

	UBlightedSerumAddon_OnBlightedDashEnabledVfxSfx_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038235A0
//		Name   -> Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UBlightedSerumCooldownInteraction*           cooldownInteraction                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumCollisionInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction"));

	UBlightedSerumCollisionInteraction_SetCooldownInteraction_Params params {};
	params.cooldownInteraction = cooldownInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038235A0
//		Name   -> Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UBlightedSerumCooldownInteraction*           cooldownInteraction                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumDashInteraction::SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction"));

	UBlightedSerumDashInteraction_SetCooldownInteraction_Params params {};
	params.cooldownInteraction = cooldownInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038238D0
//		Name   -> Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UBlightedSerumCollisionInteraction*          collisionInteraction                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightedSerumDashInteraction::SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction"));

	UBlightedSerumDashInteraction_SetCollisionInteraction_Params params {};
	params.collisionInteraction = collisionInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03823C60
//		Name   -> Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsComplete                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AToxinPlantInteractable::SetToxinPlantComplete(bool IsComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete"));

	AToxinPlantInteractable_SetToxinPlantComplete_Params params {};
	params.IsComplete = IsComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AToxinPlantInteractable::OnToxinPlantComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete"));

	AToxinPlantInteractable_OnToxinPlantComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AToxinPlantInteractable::OnSalvageInteractionStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart"));

	AToxinPlantInteractable_OnSalvageInteractionStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AToxinPlantInteractable::OnSalvageInteractionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished"));

	AToxinPlantInteractable_OnSalvageInteractionFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03823C30
//		Name   -> Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AToxinPlantInteractable::IsToxinPlantComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete"));

	AToxinPlantInteractable_IsToxinPlantComplete_Params params {};

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
