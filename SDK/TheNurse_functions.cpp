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
//		Offset -> 0x03970920
//		Name   -> Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, BlueprintCallable)
void UBalancedLanding::Server_WarnBalancedLandingPredicted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheNurse.BalancedLanding.Server_WarnBalancedLandingPredicted"));

	UBalancedLanding_Server_WarnBalancedLandingPredicted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0308D5C0
//		Name   -> Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UBalancedLanding::Client_UnvalidateBalanceLanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheNurse.BalancedLanding.Client_UnvalidateBalanceLanding"));

	UBalancedLanding_Client_UnvalidateBalanceLanding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
