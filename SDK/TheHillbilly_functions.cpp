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
//		Offset -> 0x038CA8C0
//		Name   -> Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UChainsawRevInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay"));

	UChainsawRevInteraction_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CBAC0
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
//		Flags  -> (Final, Native, Private)
void UHillbillyChainsawOverheatComponent::OnRep_IsChainsawOverheating()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating"));

	UHillbillyChainsawOverheatComponent_OnRep_IsChainsawOverheating_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CBAA0
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UHillbillyChainsawOverheatComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay"));

	UHillbillyChainsawOverheatComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CB9E0
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              currentCharge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              previosCharge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHillbillyChainsawOverheatComponent::OnHeatChargeUpdate(float currentCharge, float previosCharge)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate"));

	UHillbillyChainsawOverheatComponent_OnHeatChargeUpdate_Params params {};
	params.currentCharge = currentCharge;
	params.previosCharge = previosCharge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CB9B0
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHillbillyChainsawOverheatComponent::IsChainsawOverheating()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating"));

	UHillbillyChainsawOverheatComponent_IsChainsawOverheating_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x038CB990
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
//		Flags  -> (Final, Native, Private)
void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull"));

	UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x038CB970
//		Name   -> Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
//		Flags  -> (Final, Native, Private)
void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty"));

	UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036B1EB0
//		Name   -> Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UHillbillyChainsawOverheatComponent*         HillbillyChainsawOverheatComponent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHillbillyOverheatPresentationItemProgressComponent::SetHillbillyChainsawOverheatComponent(class UHillbillyChainsawOverheatComponent* HillbillyChainsawOverheatComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent"));

	UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Params params {};
	params.HillbillyChainsawOverheatComponent = HillbillyChainsawOverheatComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03086BB0
//		Name   -> Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue
//		Flags  -> (Final, Native, Private)
void ULightbornBlindFailedIndicatorCondition::OnRep_ReplicatedIsTrue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue"));

	ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
