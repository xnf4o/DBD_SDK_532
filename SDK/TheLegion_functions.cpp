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
//		Offset -> 0x039686D0
//		Name   -> Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULegionKillerAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher"));

	ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params params {};
	params.GameEventDispatcher = GameEventDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03968A00
//		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULegionSurvivorAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher"));

	ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params params {};
	params.GameEventDispatcher = GameEventDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x039688F0
//		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULegionSurvivorAnalyticsComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched"));

	ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
