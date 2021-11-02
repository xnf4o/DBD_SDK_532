#pragma once

// Name: DBD, Version: 5.3.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DBDCompetence.TimedStatusEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UTimedStatusEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TimedStatusEffect"));
		return ptr;
	}



};

// Class DBDCompetence.AbilityStealthUndetectableEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UAbilityStealthUndetectableEffect : public UTimedStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AbilityStealthUndetectableEffect"));
		return ptr;
	}



};

// Class DBDCompetence.AdjustableCooldownStatusEffect
// 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
class UAdjustableCooldownStatusEffect : public UStatusEffect
{
public:
	struct FGameplayTag                                CooldownModifierType;                                      // 0x0350(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LH2F[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AdjustableCooldownStatusEffect"));
		return ptr;
	}



};

// Class DBDCompetence.ExhaustedEffect
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
public:
	float                                              CooldownModifier;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2WRB[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ExhaustedEffect"));
		return ptr;
	}



};

// Class DBDCompetence.ActivatableExhaustedEffect
// 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
class UActivatableExhaustedEffect : public UExhaustedEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ActivatableExhaustedEffect"));
		return ptr;
	}



	void Authority_Start(float Duration);
	void Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
};

// Class DBDCompetence.ActivateOnEventTimedStatusEffect
// 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
class UActivateOnEventTimedStatusEffect : public UStatusEffect
{
public:
	struct FGameplayTagContainer                       _eventsToActivateOn;                                       // 0x0350(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ActivateOnEventTimedStatusEffect"));
		return ptr;
	}



};

// Class DBDCompetence.Alert
// 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
class UAlert : public UPerk
{
public:
	float                                              _killerAuraRevealDuration[0x3];                            // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TNA7[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _alertKillerRevealEffect;                                  // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Alert"));
		return ptr;
	}



	void OnPerkActivate_Cosmetic();
};

// Class DBDCompetence.AlertKillerRevealEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UAlertKillerRevealEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AlertKillerRevealEffect"));
		return ptr;
	}



};

// Class DBDCompetence.AllHexTotemsAreActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_IRA8[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AllHexTotemsAreActive"));
		return ptr;
	}



};

// Class DBDCompetence.AnyActorPairQueryRangeIsTrue
// 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_U00C[0x10];                                    // 0x00F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AnyActorPairQueryRangeIsTrue"));
		return ptr;
	}



	void OnInRangeChanged(bool InRange);
};

// Class DBDCompetence.AnyMeansNecessary
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class UAnyMeansNecessary : public UPerk
{
public:
	bool                                               RevealSurvivorOnPalletPullUpStarted;                       // 0x03C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RevealSurvivorOnPalletPulledUp;                            // 0x03C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_547Q[0x2];                                     // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealSurvivorDuration;                                    // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UStatusEffect>                _effect;                                                   // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownDuration[0x3];                                    // 0x03D8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X3Q3[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AnyMeansNecessary"));
		return ptr;
	}



	void Authority_OnPalletPullUpStarted(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
	void Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
};

// Class DBDCompetence.AnySurvivorHasObjectState
// 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_5C2V[0x50];                                    // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _stateTag;                                                 // 0x0138(0x000C) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7MHD[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.AnySurvivorHasObjectState"));
		return ptr;
	}



	void OnSurvivorRemoved(class ACamperPlayer* survivor);
	void OnSurvivorAdded(class ACamperPlayer* survivor);
};

// Class DBDCompetence.Babysitter
// 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
class UBabysitter : public UPerk
{
public:
	float                                              _scratchMarkHidingTime[0x3];                               // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffect[0x3];                                         // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _showAuraTime[0x3];                                        // 0x03E0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownTime[0x3];                                        // 0x03EC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Babysitter"));
		return ptr;
	}



};

// Class DBDCompetence.BabysitterEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UBabysitterEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BabysitterEffect"));
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPerkUsableCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_2QGL[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BaseIsPerkUsableCondition"));
		return ptr;
	}



};

// Class DBDCompetence.BaseIsPlayerPerformingInteraction
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UKXD[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BaseIsPlayerPerformingInteraction"));
		return ptr;
	}



	void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.BaseLingeringStatusEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UBaseLingeringStatusEffect : public UStatusEffect
{
public:
	float                                              _lingerDuration;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XO5C[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BaseLingeringStatusEffect"));
		return ptr;
	}



	void SetLingerDuration(float lingerDuration);
};

// Class DBDCompetence.BetterTogether
// 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
class UBetterTogether : public UPerk
{
public:
	bool                                               ShouldRevealKiller;                                        // 0x03C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShouldRevealSurvivors;                                     // 0x03C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9YKO[0x2];                                     // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RevealDistance;                                            // 0x03CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ADBDPlayer*>                          _affectedCampers;                                          // 0x03D0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FCIO[0x8];                                     // 0x03E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      _genToReveal;                                              // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03F0(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LWEH[0x24];                                    // 0x03FC(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BetterTogether"));
		return ptr;
	}



	void OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
};

// Class DBDCompetence.BlessedStatusEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UBlessedStatusEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BlessedStatusEffect"));
		return ptr;
	}



	void OnExitBoonRange();
	void OnEnterBoonRange();
	class ATotem* GetBoundTotem();
	float GetBoonTotemBlessingRange();
	void Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* survivor);
};

// Class DBDCompetence.BloodEcho
// 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
class UBloodEcho : public UPerk
{
public:
	struct FGameplayTag                                _statusEffectDurationTag;                                  // 0x03C8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownDuration[0x3];                                    // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BloodEcho"));
		return ptr;
	}



};

// Class DBDCompetence.BoonPerk
// 0x0060 (FullSize[0x0468] - InheritedSize[0x0408])
class UBoonPerk : public UTotemBoundPerk
{
public:
	unsigned char                                      UnknownData_XNWM[0x60];                                    // 0x0408(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BoonPerk"));
		return ptr;
	}



	void Authority_OnSurvivorRemoved(class ACamperPlayer* survivor);
};

// Class DBDCompetence.BoonTotemIsActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UBoonTotemIsActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_LWOX[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BoonTotemIsActive"));
		return ptr;
	}



};

// Class DBDCompetence.Breakout
// 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
class UBreakout : public UPerk
{
public:
	class ASlasherPlayer*                              _slasher;                                                  // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _playerOwner;                                              // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hasteEffect[0x3];                                         // 0x03D8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _wiggleEffect;                                             // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorDistanceMax;                                      // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActive;                                             // 0x03EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6B5S[0x53];                                    // 0x03ED(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Breakout"));
		return ptr;
	}



	void OnSlasherSet(class ASlasherPlayer* Slasher);
	void OnRep_IsPerkActive();
	void Authority_OnRangeChanged(bool InRange);
	void Authority_ImposeWiggleStatusEffect(class ACamperPlayer* survivor);
};

// Class DBDCompetence.BuckleUp
// 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
class UBuckleUp : public UPerk
{
public:
	struct FLinearColor                                _noRecoveryColor;                                          // 0x03C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _fullRecoveryColor;                                        // 0x03D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealDuration[0x3];                                      // 0x03E8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AAAH[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.BuckleUp"));
		return ptr;
	}



};

// Class DBDCompetence.Camaraderie
// 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
class UCamaraderie : public UPerk
{
public:
	unsigned char                                      UnknownData_8YR0[0xC];                                     // 0x03C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _percentUseItem[0x3];                                      // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _pauseTimer[0x3];                                          // 0x03E0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _needItemToTrigger;                                        // 0x03EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N21B[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Camaraderie"));
		return ptr;
	}



	void Authority_EnablePerk();
};

// Class DBDCompetence.CollectableOwnerSubjectProvider
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_VJHU[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.CollectableOwnerSubjectProvider"));
		return ptr;
	}



};

// Class DBDCompetence.CorruptIntervention
// 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
class UCorruptIntervention : public UPerk
{
public:
	unsigned char                                      _blockedGeneratorCount[0x3];                               // 0x03C8(0x0003) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SEV6[0x1];                                     // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorBlockDuration[0x3];                              // 0x03CC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AGenerator*>                          _blockedGenerators;                                        // 0x03E8(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AFAP[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.CorruptIntervention"));
		return ptr;
	}



	void Server_ActivatePerk();
	void OnRep_BlockedGenerators();
	void Local_OnIntroCompleted();
};

// Class DBDCompetence.CruelConfinement
// 0x00A0 (FullSize[0x0468] - InheritedSize[0x03C8])
class UCruelConfinement : public UPerk
{
public:
	float                                              _effectiveRadius[0x3];                                     // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _blockDuration[0x3];                                       // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _windowAuraColor;                                          // 0x03E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class AGenerator*, struct FWindowBlockableList> _blockableLists;                                           // 0x03F0(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FQ1S[0x28];                                    // 0x0440(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.CruelConfinement"));
		return ptr;
	}



};

// Class DBDCompetence.DarkDevotion
// 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
class UDarkDevotion : public UPerk
{
public:
	class UTerrorRadiusEmitterComponent*               _obsessionTerrorRadiusEmitter;                             // 0x03C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionTerrorRadius;                                    // 0x03D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _simulatedFixedDistance;                                   // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SJQ7[0x8];                                     // 0x03D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DarkDevotion"));
		return ptr;
	}



};

// Class DBDCompetence.DarkSense
// 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
class UDarkSense : public UPerk
{
public:
	float                                              _effectDurationOnGeneratorComplete;                        // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _effectDurationOnFinalGeneratorComplete[0x3];              // 0x03CC(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P90Z[0x8];                                     // 0x03D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DarkSense"));
		return ptr;
	}



};

// Class DBDCompetence.DBDConditionFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDConditionFactory : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DBDConditionFactory"));
		return ptr;
	}



	class UIsPlayerPerformingInteraction* STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics);
	class UDoesPerkHaveToken* STATIC_DoesPerkHaveToken(class UPerk* Perk);
};

// Class DBDCompetence.DeadMansSwitchEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UDeadMansSwitchEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DeadMansSwitchEffect"));
		return ptr;
	}



};

// Class DBDCompetence.DeceptionEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UDeceptionEffect : public UStatusEffect
{
public:
	bool                                               _hideBloodTrailsWhenCamperFakeEnterLocker;                 // 0x0350(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UUED[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DeceptionEffect"));
		return ptr;
	}



};

// Class DBDCompetence.DecisiveStrike
// 0x00A0 (FullSize[0x0468] - InheritedSize[0x03C8])
class UDecisiveStrike : public UPerk
{
public:
	float                                              _timeAfterUnhook[0x3];                                     // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckDelay;                                          // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _skillCheckBuffer;                                         // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _killerHearsSkillCheckCue;                                 // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FSKD[0x73];                                    // 0x03DD(0x0073) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTag>                        _deactivationEvents;                                       // 0x0450(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasBeenAttempted;                                         // 0x0460(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GJDK[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DecisiveStrike"));
		return ptr;
	}



	void OnUnhookedTimerEnded();
	void OnSkillCheck(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void OnRep_HasBeenAttempted();
	void OnPickUpEnded(class ADBDPlayer* picker);
	void OnOwnerPickedUp(class ADBDPlayer* picker);
};

// Class DBDCompetence.DelayedHealEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UDelayedHealEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_TH73[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DelayedHealEffect"));
		return ptr;
	}



	void Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker);
	void Authority_OnOwningCamperHealthChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after);
	void Authority_OnActivationTimerComplete();
};

// Class DBDCompetence.DidGameEventOccurred
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UDidGameEventOccurred : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTag                                EventTag;                                                  // 0x00E8(0x000C) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IRE8[0x2C];                                    // 0x00F4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DidGameEventOccurred"));
		return ptr;
	}



};

// Class DBDCompetence.Distortion
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class UDistortion : public UPerk
{
public:
	float                                              _activationDurations[0x3];                                 // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _auraBlockIsActive;                                        // 0x03D4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MWJQ[0x13];                                    // 0x03D5(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Distortion"));
		return ptr;
	}



	void OnRep_AuraBlockIsActive();
	bool AuraBlockCanBeActive();
};

// Class DBDCompetence.Diversion
// 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
class UDiversion : public UPerk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Diversion"));
		return ptr;
	}



	bool IsOwnerDisabled(class ACamperPlayer* OwningPlayer);
	float GetThrowDistance();
	bool CanThrow();
};

// Class DBDCompetence.DoesPerkHaveToken
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UDoesPerkHaveToken : public UEventDrivenModifierCondition
{
public:
	TWeakObjectPtr<class UPerk>                        _perk;                                                     // 0x00E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8N8Q[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DoesPerkHaveToken"));
		return ptr;
	}



	void SetPerk(class UPerk* Perk);
	void OnRep_Perk();
};

// Class DBDCompetence.DownedByBasicAttack
// 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{
public:
	bool                                               _replicatedIsTrue;                                         // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FRE4[0x57];                                    // 0x00E9(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DownedByBasicAttack"));
		return ptr;
	}



	void OnRep_ReplicatedIsTrue();
};

// Class DBDCompetence.DyingLight
// 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
class UDyingLight : public UPerk
{
public:
	TArray<float>                                      _actionSpeedPenaltyPerToken;                               // 0x03C8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obsessionActionSpeedBonus;                                // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _obsessionStatusEffectID;                                  // 0x03DC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _nonObsessionStatusEffectID;                               // 0x03E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KCQZ[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStatusEffect*>                       _survivorDebuffs;                                          // 0x03F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.DyingLight"));
		return ptr;
	}



	void OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession);
};

// Class DBDCompetence.EnduranceHighlightEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UEnduranceHighlightEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.EnduranceHighlightEffect"));
		return ptr;
	}



};

// Class DBDCompetence.ExposedEffect
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UExposedEffect : public UAdjustableCooldownStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ExposedEffect"));
		return ptr;
	}



};

// Class DBDCompetence.Fixated
// 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
class UFixated : public UPerk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Fixated"));
		return ptr;
	}



};

// Class DBDCompetence.FlipFlop
// 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
class UFlipFlop : public UPerk
{
public:
	float                                              _recoveryProgressionConversionRatio[0x3];                  // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxWiggleProgression[0x3];                                // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.FlipFlop"));
		return ptr;
	}



	void Authority_OnPickedUp(class ADBDPlayer* picker);
};

// Class DBDCompetence.FurtiveChase
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UFurtiveChase : public UPerk
{
public:
	int                                                _maxTokensByLevel[0x3];                                    // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _terrorRadiusSuppressionPerToken;                          // 0x03D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.FurtiveChase"));
		return ptr;
	}



};

// Class DBDCompetence.GateBlockerEffect
// 0x0038 (FullSize[0x0388] - InheritedSize[0x0350])
class UGateBlockerEffect : public UStatusEffect
{
public:
	float                                              _blockGateLingeringTime;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SBW4[0x34];                                    // 0x0354(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.GateBlockerEffect"));
		return ptr;
	}



	void RemoveCantEscapeFlag();
};

// Class DBDCompetence.HasFlag
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UHasFlag : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTag                                _flag;                                                     // 0x00E8(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XTBF[0x34];                                    // 0x00F4(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HasFlag"));
		return ptr;
	}



};

// Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_4364[0x4];                                     // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isWigglePercentReached;                                   // 0x00EC(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KUNC[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition"));
		return ptr;
	}



	void OnRep_IsWigglePercentReached();
	void Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
};

// Class DBDCompetence.HeadOn
// 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
class UHeadOn : public UPerk
{
public:
	bool                                               IsPerformingHeadOn;                                        // 0x03C8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExhaustOnlyOnSuccessfulStun;                               // 0x03C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StunKillersEnteringStunZone;                               // 0x03CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4P6T[0x1];                                     // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hideDuration[0x3];                                        // 0x03CC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALocker*                                     _locker;                                                   // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TUZI[0x60];                                    // 0x03E0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HeadOn"));
		return ptr;
	}



	void OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHeadOnAnimationComplete();
	void Multicast_StunPlayer(class UStunnableComponent* StunnableComponent, class ADBDPlayer* stunner);
	bool CanApplyHeadOnInteraction();
	void Authority_ActivatePerk();
};

// Class DBDCompetence.HexPerk
// 0x0018 (FullSize[0x0420] - InheritedSize[0x0408])
class UHexPerk : public UTotemBoundPerk
{
public:
	TArray<class ADBDPlayer*>                          _playersWhoKnowCurse;                                      // 0x0408(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8MBU[0x8];                                     // 0x0418(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexPerk"));
		return ptr;
	}



	void UpdateCursedStatusViewOnLocalPlayer();
	void ReceiveGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
	void OnRep_PlayersWhoKnowCurse(TArray<class ADBDPlayer*> oldPlayersWhoKnowCurse);
	void OnHexPerkGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target);
	bool IsCurseRevealedToPlayer(class ADBDPlayer* Player);
	void Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed);
	void Authority_RevealCurseToAllSurvivors();
	void Authority_Reactivate_BP();
};

// Class DBDCompetence.HexHauntedGround
// 0x0010 (FullSize[0x0430] - InheritedSize[0x0420])
class UHexHauntedGround : public UHexPerk
{
public:
	float                                              _exposedStatusEffectDuration[0x3];                         // 0x0420(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_26KO[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexHauntedGround"));
		return ptr;
	}



};

// Class DBDCompetence.HexRuin
// 0x0068 (FullSize[0x0488] - InheritedSize[0x0420])
class UHexRuin : public UHexPerk
{
public:
	unsigned char                                      UnknownData_BZNY[0x18];                                    // 0x0420(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AGenerator*, struct FFastTimer>         _curseActivationTimers;                                    // 0x0438(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HexRuin"));
		return ptr;
	}



	void Authority_ConstructActivationTimersMap();
};

// Class DBDCompetence.HighestLevelAndClosestEffectCondition
// 0x0038 (FullSize[0x0108] - InheritedSize[0x00D0])
class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_D6FS[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UStatusEffect*>                       _effectsLevel1;                                            // 0x00D8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UStatusEffect*>                       _effectsLevel2;                                            // 0x00E8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UStatusEffect*>                       _effectsLevel3;                                            // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.HighestLevelAndClosestEffectCondition"));
		return ptr;
	}



	void SetCurrentEffectLevel(int Level);
	void InitEffectArrays(const struct FName& effectIDLevel1, const struct FName& effectIDLevel2, const struct FName& effectIDLevel3);
};

// Class DBDCompetence.ImAllEars
// 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
class UImAllEars : public UPerk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadius;                                          // 0x03E0(0x0001) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XBGT[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _triggerOutsideRadius;                                     // 0x03E4(0x0004) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WL8D[0x38];                                    // 0x03E8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ImAllEars"));
		return ptr;
	}



	void Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
};

// Class DBDCompetence.ImmediateUndetectableEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UImmediateUndetectableEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ImmediateUndetectableEffect"));
		return ptr;
	}



};

// Class DBDCompetence.OnEventBaseAddon
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UOnEventBaseAddon : public UItemAddon
{
public:
	struct FGameplayTag                                _eventToListenTo;                                          // 0x0298(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V57G[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OnEventBaseAddon"));
		return ptr;
	}



	void OnEventFired(const struct FGameEventData& GameEventData);
};

// Class DBDCompetence.ImposeStatusEffectOnEventAddon
// 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
class UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{
public:
	float                                              _statusEffectTime;                                         // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _statusEffectName;                                         // 0x02AC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DBDCompetence_EImposeEffectTo                      _imposeEffectTo;                                           // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DAJ7[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ImposeStatusEffectOnEventAddon"));
		return ptr;
	}



};

// Class DBDCompetence.InfectiousFright
// 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
class UInfectiousFright : public UPerk
{
public:
	bool                                               _revealPlayerInTerrorRadius;                               // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _perkActivationCount;                                      // 0x03C9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NY3T[0x6];                                     // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACamperPlayer*>                       _revealedSurvivors;                                        // 0x03D0(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACamperPlayer*                               _targetSurvivor;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P5QD[0x28];                                    // 0x03E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.InfectiousFright"));
		return ptr;
	}



	void RevealSurvivorLocation(class ACamperPlayer* Target);
	void OnRep_PerkActivationCount();
};

// Class DBDCompetence.InnerStrength
// 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
class UInnerStrength : public UPerk
{
public:
	float                                              _hideDuration[0x3];                                        // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _perkEnabled;                                              // 0x03D4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3HXP[0x2B];                                    // 0x03D5(0x002B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.InnerStrength"));
		return ptr;
	}



	void OnRep_PerkEnabled();
	void OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
};

// Class DBDCompetence.Insidious
// 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
class UInsidious : public UPerk
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Insidious"));
		return ptr;
	}



};

// Class DBDCompetence.InsidiousEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UInsidiousEffect : public UAbilityStealthUndetectableEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.InsidiousEffect"));
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsActivationTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_HEZ6[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsActivationTimerActive"));
		return ptr;
	}



};

// Class DBDCompetence.IsActivationTimerActiveAndNotPaused
// 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_CNQ7[0x20];                                    // 0x00E8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsActivationTimerActiveAndNotPaused"));
		return ptr;
	}



};

// Class DBDCompetence.IsBestProveThyselfEffectInRange
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_B72Q[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsBestProveThyselfEffectInRange"));
		return ptr;
	}



	void OnInRangeChanged(bool InRange, class UProveThyselfEffect* ProveThyselfEffect);
};

// Class DBDCompetence.IsBoonBlessed
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsBoonBlessed : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_XPZH[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsBoonBlessed"));
		return ptr;
	}



};

// Class DBDCompetence.IsClosestEffectCondition
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UIsClosestEffectCondition : public UGameplayModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsClosestEffectCondition"));
		return ptr;
	}



};

// Class DBDCompetence.IsCooldownTimerActive
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsCooldownTimerActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_VORO[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsCooldownTimerActive"));
		return ptr;
	}



};

// Class DBDCompetence.IsHexCursed
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UIsHexCursed : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_0IJU[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsHexCursed"));
		return ptr;
	}



};

// Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
// 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
{
public:
	TArray<class UStatusEffect*>                       _applicableEffects;                                        // 0x00D0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RMUB[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect"));
		return ptr;
	}



	void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
};

// Class DBDCompetence.IsHighestTierOriginatingPerk
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
{
public:
	TArray<class UStatusEffect*>                       _applicableEffects;                                        // 0x00E8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AVYS[0x18];                                    // 0x00F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsHighestTierOriginatingPerk"));
		return ptr;
	}



	void OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable);
	void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
};

// Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
// 0x00B0 (FullSize[0x01A0] - InheritedSize[0x00F0])
class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_XA2K[0xB0];                                    // 0x00F0(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange"));
		return ptr;
	}



};

// Class DBDCompetence.IsLifetimeActive
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UIsLifetimeActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_CD2B[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsLifetimeActive"));
		return ptr;
	}



};

// Class DBDCompetence.IsOnHitSprintEffectActive
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOnHitSprintEffectActive"));
		return ptr;
	}



};

// Class DBDCompetence.IsOriginatingPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOriginatingPerkUsableCondition"));
		return ptr;
	}



};

// Class DBDCompetence.IsOutRangeOfOriginatingPlayer
// 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
class UIsOutRangeOfOriginatingPlayer : public URangeBasedCondition
{
public:
	unsigned char                                      UnknownData_3Z8L[0x28];                                    // 0x00F0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOutRangeOfOriginatingPlayer"));
		return ptr;
	}



	void OnInRangeChanged(bool InRange);
};

// Class DBDCompetence.IsOwningPlayerInRangeFromHook
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_IZ9R[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOwningPlayerInRangeFromHook"));
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
{
public:
	unsigned char                                      UnknownData_OKT8[0x18];                                    // 0x0108(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry"));
		return ptr;
	}



};

// Class DBDCompetence.IsOwningPlayerLastSurvivor
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_86JR[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOwningPlayerLastSurvivor"));
		return ptr;
	}



};

// Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller"));
		return ptr;
	}



};

// Class DBDCompetence.IsPerkUsableCondition
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPerkUsableCondition"));
		return ptr;
	}



};

// Class DBDCompetence.IsPlayerPerfInteractionWithNoItem
// 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
{
public:
	unsigned char                                      UnknownData_A4XQ[0x10];                                    // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _useItemInteractionSemantics;                              // 0x0128(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FJLW[0x8];                                     // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDSharedTypes_ELoadoutItemType                    _itemType;                                                 // 0x0150(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I1SI[0x7];                                     // 0x0151(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPlayerPerfInteractionWithNoItem"));
		return ptr;
	}



	void OnCollectableChargeStateChange(bool Empty);
};

// Class DBDCompetence.IsPlayerPerformingItemInteraction
// 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
{
public:
	unsigned char                                      UnknownData_OI3O[0x20];                                    // 0x0118(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPlayerPerformingItemInteraction"));
		return ptr;
	}



	void OnCollectablePickedUp(class ADBDPlayer* Player);
	void OnCollectableDropped();
	void OnCollectableChargeStateChange(bool Empty);
};

// Class DBDCompetence.IsPlayerPerformingInteraction
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x00E8(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CUF6[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.IsPlayerPerformingInteraction"));
		return ptr;
	}



	void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
	void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
};

// Class DBDCompetence.KillerConditionalSpeedCurveEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UKillerConditionalSpeedCurveEffect : public UStatusEffect
{
public:
	class UCurveFloat*                                 _speedCurve;                                               // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.KillerConditionalSpeedCurveEffect"));
		return ptr;
	}



};

// Class DBDCompetence.KillerIsLowOnAmmo
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
{
public:
	int                                                _ammoThreshold;                                            // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RR6H[0x14];                                    // 0x00EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.KillerIsLowOnAmmo"));
		return ptr;
	}



};

// Class DBDCompetence.KillerSubjectProvider
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UKillerSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_CSGP[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.KillerSubjectProvider"));
		return ptr;
	}



	void RegisterWhenKillerSet(class ASlasherPlayer* killer);
};

// Class DBDCompetence.KindredPerk
// 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
class UKindredPerk : public UPerk
{
public:
	unsigned char                                      UnknownData_PJDB[0x10];                                    // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      _killerAuraRevealRange;                                    // 0x03D8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7OCC[0x8];                                     // 0x03E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.KindredPerk"));
		return ptr;
	}



};

// Class DBDCompetence.LingeringBlessedStatusEffect
// 0x0028 (FullSize[0x0378] - InheritedSize[0x0350])
class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
{
public:
	unsigned char                                      UnknownData_VNOL[0x4];                                     // 0x0350(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _lingerDuration;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P1JS[0x20];                                    // 0x0358(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.LingeringBlessedStatusEffect"));
		return ptr;
	}



	void SetLingerDuration(float lingerDuration);
	void Authority_OnInRangeChanged(bool InRange);
};

// Class DBDCompetence.LingeringStateTagStatusEffect
// 0x0038 (FullSize[0x0390] - InheritedSize[0x0358])
class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FGameplayTag                                _ownerStateTag;                                            // 0x0358(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7I19[0x2C];                                    // 0x0364(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.LingeringStateTagStatusEffect"));
		return ptr;
	}



};

// Class DBDCompetence.LuckyBreak
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class ULuckyBreak : public UPerk
{
public:
	float                                              _activationTime[0x3];                                      // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AP00[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.LuckyBreak"));
		return ptr;
	}



	void OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState);
	void ActivationTimerEnded();
};

// Class DBDCompetence.MindBreaker
// 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
class UMindBreaker : public UPerk
{
public:
	float                                              _effectDurationAfterRepair[0x3];                           // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EVF6[0x2C];                                    // 0x03D4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.MindBreaker"));
		return ptr;
	}



};

// Class DBDCompetence.MindbreakerBlindnessEffect
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class UMindbreakerBlindnessEffect : public UAdjustableCooldownStatusEffect
{
public:
	unsigned char                                      UnknownData_EJEZ[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.MindbreakerBlindnessEffect"));
		return ptr;
	}



};

// Class DBDCompetence.MindbreakerExhaustedEffect
// 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
class UMindbreakerExhaustedEffect : public UExhaustedEffect
{
public:
	unsigned char                                      UnknownData_11VH[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.MindbreakerExhaustedEffect"));
		return ptr;
	}



};

// Class DBDCompetence.Nemesis
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class UNemesis : public UPerk
{
public:
	unsigned char                                      UnknownData_V2IP[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealToKillerTime[0x3];                                  // 0x03D0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _obliviousTime[0x3];                                       // 0x03DC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Nemesis"));
		return ptr;
	}



};

// Class DBDCompetence.NoOneLeftBehind
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UNoOneLeftBehind : public UPerk
{
public:
	TArray<float>                                      _speedBoostEffect;                                         // 0x03C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.NoOneLeftBehind"));
		return ptr;
	}



	float GetSpeedBoostEffect();
};

// Class DBDCompetence.ObliviousEffect
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UObliviousEffect : public UAdjustableCooldownStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ObliviousEffect"));
		return ptr;
	}



};

// Class DBDCompetence.ObsessionTargetSubjectProvider
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_U0ZZ[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ObsessionTargetSubjectProvider"));
		return ptr;
	}



};

// Class DBDCompetence.OnEventSetTimerAddon
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UOnEventSetTimerAddon : public UOnEventBaseAddon
{
public:
	float                                              _addonEffectTime;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J3CM[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OnEventSetTimerAddon"));
		return ptr;
	}



};

// Class DBDCompetence.OwningPlayerInTotemRange
// 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_DXX8[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OwningPlayerInTotemRange"));
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDCompetence.OwningPlayerInBoonBlessingRange
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UOwningPlayerInBoonBlessingRange : public UOwningPlayerInTotemRange
{
public:
	class ATotem*                                      _boundTotem;                                               // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OwningPlayerInBoonBlessingRange"));
		return ptr;
	}



};

// Class DBDCompetence.OwningPlayerInDullTotemRange
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OwningPlayerInDullTotemRange"));
		return ptr;
	}



};

// Class DBDCompetence.OwningSlasherHasBeenStill
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
{
public:
	float                                              _secondsOfStillnessRequired;                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XHDG[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.OwningSlasherHasBeenStill"));
		return ptr;
	}



};

// Class DBDCompetence.PharmacyPerk
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UPharmacyPerk : public UPerk
{
public:
	TArray<float>                                      _searchSpeeds;                                             // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.PharmacyPerk"));
		return ptr;
	}



};

// Class DBDCompetence.PlayerIsInExitArea
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UPlayerIsInExitArea : public UGameplayModifierCondition
{
public:
	unsigned char                                      UnknownData_DVMH[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.PlayerIsInExitArea"));
		return ptr;
	}



	void PlayerExitExitArea();
	void PlayerEnterExitArea();
};

// Class DBDCompetence.Poised
// 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
class UPoised : public UPerk
{
public:
	float                                              _activationTime[0x3];                                      // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LPH9[0x1C];                                    // 0x03D4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Poised"));
		return ptr;
	}



};

// Class DBDCompetence.PreventKOEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UPreventKOEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_4DCG[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.PreventKOEffect"));
		return ptr;
	}



};

// Class DBDCompetence.ProveThyself
// 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
class UProveThyself : public UPerk
{
public:
	struct FDBDTunableRowHandle                        _proveThyselfRange;                                        // 0x03C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HD2V[0x28];                                    // 0x03F0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ProveThyself"));
		return ptr;
	}



	void OnSurvivorInOwnerRangeChanged(bool InRange);
};

// Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_XAM3[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect"));
		return ptr;
	}



	void Authority_OnSurvivorRemoved(class ACamperPlayer* survivor);
};

// Class DBDCompetence.ProveThyselfEffect
// 0x00C0 (FullSize[0x0418] - InheritedSize[0x0358])
class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect
{
public:
	unsigned char                                      UnknownData_1W8V[0x20];                                    // 0x0358(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _proveThyselfRange;                                        // 0x0378(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _speedPercentageAddedPerSurvivorRepairingInRange;          // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NB8U[0x74];                                    // 0x03A4(0x0074) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ProveThyselfEffect"));
		return ptr;
	}



	void OnInRangeOfOriginatorChanged(bool InRange, class ACamperPlayer* survivor);
};

// Class DBDCompetence.ResiliencePerk
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UResiliencePerk : public UPerk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_57I9[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ResiliencePerk"));
		return ptr;
	}



};

// Class DBDCompetence.Saboteur
// 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
class USaboteur : public UPerk
{
public:
	float                                              _cooldownDuration[0x3];                                    // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _revealHookDistance[0x3];                                  // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMeatHookOutlineUpdateStrategy*>      _revealedMeatHooksOultineStrategy;                         // 0x03E0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Saboteur"));
		return ptr;
	}



};

// Class DBDCompetence.SecondsToRateModifierBaseAddon
// 0x0110 (FullSize[0x03A8] - InheritedSize[0x0298])
class USecondsToRateModifierBaseAddon : public UItemAddon
{
public:
	struct FTunableStat                                _chargeRate;                                               // 0x0298(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _maxCharge;                                                // 0x0318(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _secondsToAdd;                                             // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                                _rateModifierTagToCompute;                                 // 0x039C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SecondsToRateModifierBaseAddon"));
		return ptr;
	}



};

// Class DBDCompetence.SecondWind
// 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
class USecondWind : public UPerk
{
public:
	unsigned char                                      UnknownData_LI6Q[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDCompetence_ESecondWindState                     _currentState;                                             // 0x03D0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3PAW[0x3];                                     // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _amountHealed;                                             // 0x03D4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VOD4[0x4];                                     // 0x03D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _numberOfHealStateToHealToActivate[0x3];                   // 0x03DC(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationOfHeal[0x3];                                      // 0x03E8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _applyBrokenEffect;                                        // 0x03F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8AM7[0xB];                                     // 0x03F5(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SecondWind"));
		return ptr;
	}



};

// Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
{
public:
	unsigned char                                      UnknownData_9GEY[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon"));
		return ptr;
	}



};

// Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
// 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                                 // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon"));
		return ptr;
	}



};

// Class DBDCompetence.SingleGateBlockerEffect
// 0x0050 (FullSize[0x03D8] - InheritedSize[0x0388])
class USingleGateBlockerEffect : public UGateBlockerEffect
{
public:
	float                                              _distanceThreshold;                                        // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8JQA[0x4];                                     // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AEscapeDoor*                                 _gate;                                                     // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInRange;                                                // 0x0398(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q8XH[0x3F];                                    // 0x0399(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SingleGateBlockerEffect"));
		return ptr;
	}



};

// Class DBDCompetence.SmallGame
// 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
class USmallGame : public UPerk
{
public:
	float                                              _detectionConeAngle[0x3];                                  // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _detectionConeAngleReductionRate[0x3];                     // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _totemDetected;                                            // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8DHF[0xF];                                     // 0x03E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SmallGame"));
		return ptr;
	}



	void VFXTotemFound();
	void SearchForTotems();
	void Multicast_TotemFound();
	float GetDetectionConeAngle();
	void Authority_SetTotemDetected(bool value);
};

// Class DBDCompetence.SoleSurvivor
// 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
class USoleSurvivor : public UPerk
{
public:
	float                                              _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3];       // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GE0S[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACamperPlayer*>                       _otherSurvivors;                                           // 0x03D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DAXB[0x10];                                    // 0x03E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SoleSurvivor"));
		return ptr;
	}



	void Authority_OnSurvivorAdded(class ACamperPlayer* survivor);
};

// Class DBDCompetence.Solidarity
// 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
class USolidarity : public UPerk
{
public:
	bool                                               _allowMedkit;                                              // 0x03C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4RW7[0x7];                                     // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _healerHPSlot;                                             // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _targetHPSlot;                                             // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*            _healOtherInteraction;                                     // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SLZU[0x10];                                    // 0x03E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Solidarity"));
		return ptr;
	}



	void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, DBDSharedTypes_ESkillCheckCustomType Type, float ChargeChange);
	void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
};

// Class DBDCompetence.SpiesFromTheShadows
// 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
class USpiesFromTheShadows : public UPerk
{
public:
	float                                              _cooldownDurationSecs;                                     // 0x03C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZS89[0x4];                                     // 0x03CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SpiesFromTheShadows"));
		return ptr;
	}



};

// Class DBDCompetence.SpineChillPerk
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class USpineChillPerk : public UPerk
{
public:
	float                                              _actionSpeed[0x3];                                         // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RE0A[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SpineChillPerk"));
		return ptr;
	}



};

// Class DBDCompetence.SprintBurst
// 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
class USprintBurst : public UPerk
{
public:
	float                                              _exhaustionDuration[0x3];                                  // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sprintDuration;                                           // 0x03D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4IOM[0x8];                                     // 0x03E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SprintBurst"));
		return ptr;
	}



	void Authority_OnIsRunningAndMovingChanged(bool IsRunningAndMoving);
};

// Class DBDCompetence.StatsSystemUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatsSystemUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.StatsSystemUtilities"));
		return ptr;
	}



	void STATIC_InitStatBP(struct FTunableStat* theStat);
	float STATIC_GetStatValueBP(const struct FTunableStat& theStat);
};

// Class DBDCompetence.StatusEffectOriginatorSubjectProvider
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.StatusEffectOriginatorSubjectProvider"));
		return ptr;
	}



};

// Class DBDCompetence.Surge
// 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
class USurge : public UPerk
{
public:
	float                                              _zoneRadius[0x3];                                          // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _instantRegression[0x3];                                   // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownDuration[0x3];                                    // 0x03E0(0x000C) (Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasCooldown;                                              // 0x03EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _useTerrorRadiusInsteadOfFixedDistance;                    // 0x03ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q2NL[0x1A];                                    // 0x03EE(0x001A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.Surge"));
		return ptr;
	}



	void Client_TriggerEffects(TArray<class AGenerator*> generators);
};

// Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect
// 0x0028 (FullSize[0x0378] - InheritedSize[0x0350])
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _survivorWasRecentlyUnhookedDuration;                      // 0x0350(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect"));
		return ptr;
	}



};

// Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
{
public:
	class UActorPairQueryEvaluatorComponent*           _actorPairQueryEvaluatorComponent;                         // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue"));
		return ptr;
	}



};

// Class DBDCompetence.TestCollectable
// 0x0000 (FullSize[0x04A8] - InheritedSize[0x04A8])
class ATestCollectable : public ACollectable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestCollectable"));
		return ptr;
	}



};

// Class DBDCompetence.TestDBDGameState
// 0x0000 (FullSize[0x07F0] - InheritedSize[0x07F0])
class ATestDBDGameState : public ADBDGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TestDBDGameState"));
		return ptr;
	}



};

// Class DBDCompetence.TheMettleOfMan
// 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
class UTheMettleOfMan : public UPerk
{
public:
	int                                                _tokenNeededToActivate[0x3];                               // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealOutsideRange[0x3];                                  // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _mustBeInjured;                                            // 0x03E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YVMQ[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numTokenSoFar;                                            // 0x03E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DBDCompetence_ETheMettleOfManPhase                 _currentPhase;                                             // 0x03E8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KYPN[0xF];                                     // 0x03E9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _revealToKillerEffect;                                     // 0x03F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RXRR[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TheMettleOfMan"));
		return ptr;
	}



	void OnRep_NumTokenSoFar();
	void OnRep_CurrentPhase();
};

// Class DBDCompetence.ThrillingTremors
// 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
class UThrillingTremors : public UPerk
{
public:
	int                                                _cooldownByLevel[0x3];                                     // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _durationByLevel[0x3];                                     // 0x03D4(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _disableWhenSurvivorPutDownOrUnhooked;                     // 0x03E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PMIB[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03E4(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_40MR[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGenerator*>                          _blockedGenerators;                                        // 0x03F8(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _revealedGenerators;                                       // 0x0408(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DSGT[0x10];                                    // 0x0418(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ThrillingTremors"));
		return ptr;
	}



	void OnRep_BlockedGenerators();
};

// Class DBDCompetence.TimedObliviousEffect
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UTimedObliviousEffect : public UObliviousEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.TimedObliviousEffect"));
		return ptr;
	}



};

// Class DBDCompetence.WeddingRing
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UWeddingRing : public UItemAddon
{
public:
	unsigned char                                      UnknownData_4SCG[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.WeddingRing"));
		return ptr;
	}



};

// Class DBDCompetence.YamaokaFamilyCrest
// 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
class UYamaokaFamilyCrest : public UItemAddon
{
public:
	float                                              _revealDuration;                                           // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _revealRange;                                              // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ACamperPlayer*>                       _survivorsToReveal;                                        // 0x02A0(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _addonActivationCount;                                     // 0x02B0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0B6N[0x1F];                                    // 0x02B1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.YamaokaFamilyCrest"));
		return ptr;
	}



	void RevealSurvivor(class ACamperPlayer* survivorToReveal);
	void OnRep_AddonActivationCount();
};

// Class DBDCompetence.ZanshinTactics
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UZanshinTactics : public UPerk
{
public:
	float                                              _cooldownDuration[0x3];                                    // 0x03C8(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7RZF[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDCompetence.ZanshinTactics"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
