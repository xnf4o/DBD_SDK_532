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
//		Offset -> 0x02F875F0
//		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDAnalytics_ESurvivorTutorialSections             tutorialSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_StartSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics"));

	UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F87540
//		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDAnalytics_EKillerTutorialSections               tutorialSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_StartKillerTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics"));

	UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F87440
//		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAnalyticsFunctionLibrary::STATIC_IncrementHookSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned"));

	UAnalyticsFunctionLibrary_IncrementHookSpawned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F87320
//		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDAnalytics_ESurvivorTutorialSections             tutorialSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_EndSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics"));

	UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F87270
//		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDAnalytics_EKillerTutorialSections               tutorialSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnalyticsFunctionLibrary::STATIC_EndKillerTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics"));

	UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.tutorialSection = tutorialSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F874D0
//		Name   -> Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_RecordClosetSearchSuccess(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess"));

	UClosetAnalytics_RecordClosetSearchSuccess_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F87460
//		Name   -> Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_RecordClosetSearchFail(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail"));

	UClosetAnalytics_RecordClosetSearchFail_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F873D0
//		Name   -> Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UClosetAnalytics::STATIC_IncrementClosetEnter(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter"));

	UClosetAnalytics_IncrementClosetEnter_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F8B840
//		Name   -> Function DBDAnalytics.DBDAnalytics.RecordGameProgress
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InProgressType                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDAnalytics::STATIC_RecordGameProgress(const struct FString& InProgressType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.DBDAnalytics.RecordGameProgress"));

	UDBDAnalytics_RecordGameProgress_Params params {};
	params.InProgressType = InProgressType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F958D0
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  interruptedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableInterruptAnalytics(class ADBDPlayer* interruptedPlayer, class ADBDPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics"));

	UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params params {};
	params.interruptedPlayer = interruptedPlayer;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95820
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  hitPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableHitNearGeneratorAnalytics(class ADBDPlayer* hitPlayer, class ADBDPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics"));

	UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params params {};
	params.hitPlayer = hitPlayer;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95770
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  revealedPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendLightbornAuraRevealedAnalytics(class ADBDPlayer* revealedPlayer, class ADBDPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics"));

	UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params params {};
	params.revealedPlayer = revealedPlayer;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F956C0
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  findingSurvivor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  foundSurvivor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendKnockoutSurvivorFoundAnalytics(class ADBDPlayer* findingSurvivor, class ADBDPlayer* foundSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics"));

	UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params params {};
	params.findingSurvivor = findingSurvivor;
	params.foundSurvivor = foundSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95610
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  hitSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendFranklinsHitSurvivorNearDroppedItemAnalytics(class ADBDPlayer* hitSurvivor, class ADBDPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics"));

	UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params params {};
	params.hitSurvivor = hitSurvivor;
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F955A0
//		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  previousOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPerkAnalyticsLibrary::STATIC_SendFranklinsConsumeItemAnalytics(class ADBDPlayer* previousOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics"));

	UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params params {};
	params.previousOwner = previousOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F954E0
//		Name   -> Function DBDAnalytics.PigAnalytics.RecordRBTSearch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               searchingPlayer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PigAnalytics.RecordRBTSearch"));

	UPigAnalytics_RecordRBTSearch_Params params {};
	params.searchingPlayer = searchingPlayer;
	params.success = success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95430
//		Name   -> Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ASlasherPlayer*                              attacher                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               attachee                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics"));

	UPigAnalytics_OnRBTAttached_Analytics_Params params {};
	params.attacher = attacher;
	params.attachee = attachee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F953C0
//		Name   -> Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               attachedPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived"));

	UPigAnalytics_IncrementRBTTimerActived_Params params {};
	params.attachedPlayer = attachedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95300
//		Name   -> Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               playerKilled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               killedByExecutionZone                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPigAnalytics::STATIC_IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount"));

	UPigAnalytics_IncrementRBTKilledCount_Params params {};
	params.playerKilled = playerKilled;
	params.killedByExecutionZone = killedByExecutionZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95290
//		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletStun(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun"));

	UPulldownAnalytics_IncrementPalletStun_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95220
//		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletSpawned(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned"));

	UPulldownAnalytics_IncrementPalletSpawned_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F951B0
//		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletDrop(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop"));

	UPulldownAnalytics_IncrementPalletDrop_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F95140
//		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPulldownAnalytics::STATIC_IncrementPalletDestroy(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy"));

	UPulldownAnalytics_IncrementPalletDestroy_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F97500
//		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_RecordHealSuccess(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess"));

	USurvivorInteractionAnalytics_RecordHealSuccess_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F97490
//		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_RecordHatchEscape(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape"));

	USurvivorInteractionAnalytics_RecordHatchEscape_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F97420
//		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorInteractionAnalytics::STATIC_IncrementHealCount(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount"));

	USurvivorInteractionAnalytics_IncrementHealCount_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
