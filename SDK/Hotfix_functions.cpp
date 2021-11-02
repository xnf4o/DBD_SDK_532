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
//		Offset -> 0x02633C40
//		Name   -> Function Hotfix.OnlineHotfixManager.StartHotfixProcess
//		Flags  -> (Native, Public, BlueprintCallable)
void UOnlineHotfixManager::StartHotfixProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Hotfix.OnlineHotfixManager.StartHotfixProcess"));

	UOnlineHotfixManager_StartHotfixProcess_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
