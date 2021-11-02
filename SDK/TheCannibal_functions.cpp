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
//		Offset -> 0x0385B410
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UCannibalChainsawPowerComponent::Server_OnTantrumPowerChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.Server_OnTantrumPowerChargeFull"));

	UCannibalChainsawPowerComponent_Server_OnTantrumPowerChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0385B390
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                previousNumPowerCharges                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCannibalChainsawPowerComponent::OnRep_NumPowerCharges(int previousNumPowerCharges)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.OnRep_NumPowerCharges"));

	UCannibalChainsawPowerComponent_OnRep_NumPowerCharges_Params params {};
	params.previousNumPowerCharges = previousNumPowerCharges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0385B370
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UCannibalChainsawPowerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.OnLevelReadyToPlay"));

	UCannibalChainsawPowerComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BA530
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UCannibalChainsawPowerComponent::Multicast_OnTantrumPowerChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.Multicast_OnTantrumPowerChargeFull"));

	UCannibalChainsawPowerComponent_Multicast_OnTantrumPowerChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0385B350
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull
//		Flags  -> (Final, Native, Private)
void UCannibalChainsawPowerComponent::Local_OnTantrumPowerChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.Local_OnTantrumPowerChargeFull"));

	UCannibalChainsawPowerComponent_Local_OnTantrumPowerChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0385B320
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCannibalChainsawPowerComponent::GetNumberOfChainsawPowerCharges()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.GetNumberOfChainsawPowerCharges"));

	UCannibalChainsawPowerComponent_GetNumberOfChainsawPowerCharges_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0385B300
//		Name   -> Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull
//		Flags  -> (Final, Native, Private)
void UCannibalChainsawPowerComponent::Authority_OnChainsawPowerChargeFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalChainsawPowerComponent.Authority_OnChainsawPowerChargeFull"));

	UCannibalChainsawPowerComponent_Authority_OnChainsawPowerChargeFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036B1EB0
//		Name   -> Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCannibalChainsawPowerComponent*             cannibalPowerChainsawComponent                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCannibalPowerPresentationItemProgressComponent::SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheCannibal.CannibalPowerPresentationItemProgressComponent.SetCannibalChainsawPowerComponent"));

	UCannibalPowerPresentationItemProgressComponent_SetCannibalChainsawPowerComponent_Params params {};
	params.cannibalPowerChainsawComponent = cannibalPowerChainsawComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
