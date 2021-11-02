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

// Class Archives.ActorPathFollowingComponent
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UActorPathFollowingComponent : public UPathFollowingComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ActorPathFollowingComponent"));
		return ptr;
	}



};

// Class Archives.AfterExitOpenQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_ERSO[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.AfterExitOpenQEEvaluator"));
		return ptr;
	}



	void OnExitGateOpened(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.BloodPointsQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_VX3G[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.BloodPointsQEEvaluator"));
		return ptr;
	}



	void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.CarryDistanceQEEvaluator
// 0x0070 (FullSize[0x0100] - InheritedSize[0x0090])
class UCarryDistanceQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_VARU[0x70];                                    // 0x0090(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CarryDistanceQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ContextualQuestUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UContextualQuestUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ContextualQuestUtilities"));
		return ptr;
	}



	bool STATIC_PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, const struct FName& SpecialBehaviourId);
	bool STATIC_PlayerHasAssociatedQuest(class ADBDPlayer* Player, const struct FName& SpecialBehaviourId);
};

// Class Archives.CustomDistanceEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UCustomDistanceEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_YSDX[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CustomDistanceEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.CustomValueLessThanAmountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UCustomValueLessThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_56KK[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CustomValueLessThanAmountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.CustomValueMoreThanAmountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UCustomValueMoreThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_QML1[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CustomValueMoreThanAmountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.CustomValuePercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CustomValuePercentQEEvaluator"));
		return ptr;
	}



};

// Class Archives.CustomValueQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.CustomValueQEEvaluator"));
		return ptr;
	}



};

// Class Archives.DifferentSurvivorsNearMeQEEvaluator
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_G78Q[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _foundSurvivors[0x50];                                     // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.DifferentSurvivorsNearMeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.DoBeforeEscapeQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.DoBeforeEscapeQEEvaluator"));
		return ptr;
	}



	void OnEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.DoBeforeHookQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.DoBeforeHookQEEvaluator"));
		return ptr;
	}



	void OnHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.DuringEndGameCollapseQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_EBHO[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.DuringEndGameCollapseQEEvaluator"));
		return ptr;
	}



	void OnEndGameCollapseStart(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.EarnEmblemQualityQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_E9W3[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.EarnEmblemQualityQEEvaluator"));
		return ptr;
	}



	void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.EndOfGameQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.EndOfGameQEEvaluator"));
		return ptr;
	}



	void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.EventCountComparisonQEEvaluator
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TArray<struct FGameplayTag>                        _incrementCountEvents;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                        _resetCountEvents;                                         // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Archives_EventCountComparisonOperator              _comparisonOperator;                                       // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q1EY[0xF];                                     // 0x00B1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.EventCountComparisonQEEvaluator"));
		return ptr;
	}



};

// Class Archives.EventInTimeQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_IVTQ[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.EventInTimeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.EventOccurredBetweenQEEvaluator
// 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_40P5[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _middleEvent;                                              // 0x00A0(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               outerEventsDifferentTargets;                               // 0x00AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5H5R[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.EventOccurredBetweenQEEvaluator"));
		return ptr;
	}



};

// Class Archives.GeneratorsNeededCountQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UGeneratorsNeededCountQEEvaluator : public UEndOfGameQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.GeneratorsNeededCountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.Glyph
// 0x0138 (FullSize[0x0450] - InheritedSize[0x0318])
class AGlyph : public ASpecialBehaviourInteractable
{
public:
	unsigned char                                      UnknownData_HF7S[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ADBDPlayer*>                          _playersWithVisibility;                                    // 0x0320(0x0010) (Net, ZeroConstructor, Transient, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class ADBDPlayer*>                          _oldPlayersWithVisibility;                                 // 0x0330(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _specialBehaviourId;                                       // 0x0340(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Archives_EAllowedPlayerType                        _allowedPlayerType;                                        // 0x034C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VEIE[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ADBDPlayer>                   lastPlayerToStartInteraction;                              // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGlyphInteraction*                           _glyphInteraction;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGlyphInteraction*                           _glyphInteractionKiller;                                   // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _glyphInteractionChargeable;                               // 0x0368(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _glyphInteractionChargeableKiller;                         // 0x0370(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractor*                                 _glyphInteractor;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _glyphInteractionZone;                                     // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _glyphMesh;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                                _associatedSurvivorScoreEvent;                             // 0x03A0(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                                _associatedKillerScoreEvent;                               // 0x03AC(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphInteractionSecondsToCharge;                          // 0x03B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphInteractionSecondsToChargeKiller;                    // 0x03E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _glyphDetectionRange;                                      // 0x0408(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _auraColorWhileInteracting;                                // 0x0430(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ADBDPlayer*>                          _playersThatInteractedWithGlyph;                           // 0x0440(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.Glyph"));
		return ptr;
	}



	void OnRep_PlayersWithVisibility();
	bool DoesLocalPlayerHaveVisibility();
	void Cosmetic_OnStoppedInteracting();
	void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
	void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
	void Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible);
	void Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer);
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);
	void Authority_OnIntroCompleted();
	void Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
};

// Class Archives.GlyphInteraction
// 0x0058 (FullSize[0x0730] - InheritedSize[0x06D8])
class UGlyphInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_PPUZ[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_DH6X[0x50];                                    // 0x06E0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.GlyphInteraction"));
		return ptr;
	}



};

// Class Archives.GlyphOutlineUpdateStrategy
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UGlyphOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.GlyphOutlineUpdateStrategy"));
		return ptr;
	}



};

// Class Archives.HasEventHappenedEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasEventHappenedEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FGameplayTag                                _firstGameEvent;                                           // 0x0048(0x000C) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_827F[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasEventHappenedEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.HasGameplayTagEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FGameplayTag>                        _gameplayTagList;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasGameplayTagEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.HasItemNoChargesQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UHasItemNoChargesQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasItemNoChargesQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ItemRarityQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemRarityQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_VD4Y[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ItemRarityQEEvaluator"));
		return ptr;
	}



};

// Class Archives.HasItemRarityQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UHasItemRarityQEEvaluator : public UItemRarityQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasItemRarityQEEvaluator"));
		return ptr;
	}



};

// Class Archives.HasItemTypeQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UHasItemTypeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_UWMM[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasItemTypeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.HasModifierOfTypeEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FGameplayTag>                        _gameplayModifierList;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasModifierOfTypeEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.HasStatusEffectEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FName>                               _statusEffectList;                                         // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HasStatusEffectEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.NearKillerQEEvaluator
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_EWU8[0x30];                                    // 0x0090(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.NearKillerQEEvaluator"));
		return ptr;
	}



	void OnRangeChanged(bool InRange);
};

// Class Archives.HideNearKillerQEEvaluator
// 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData_HJSO[0x28];                                    // 0x00C0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HideNearKillerQEEvaluator"));
		return ptr;
	}



	void OnSlashHarpoonedCamper(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnHarpoonHit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnChaseStart(class ADBDPlayer* chasedSurvivor);
	void OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime);
	void OnCamperBreakFreeFromHarpoon(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.MaxEventCountQEEvaluator
// 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
class UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TArray<struct FGameplayTag>                        _incrementEventCount;                                      // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                        _decrementEventCount;                                      // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                        _stopEventCount;                                           // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PRGX[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.MaxEventCountQEEvaluator"));
		return ptr;
	}



	void OnStopEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnIncrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnDecrementEventCount(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
{
public:
	unsigned char                                      _targetList[0x50];                                         // 0x00C8(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HitDifferentInFrenzyMaxCountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.SurvivorHookSameTimeQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_XNKW[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SurvivorHookSameTimeQEEvaluator"));
		return ptr;
	}



	void OnSurvivorUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnSurvivorHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.HookSameTimeBasementQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.HookSameTimeBasementQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InDirectionOfKillerQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	class ADBDPlayer*                                  _killer;                                                   // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VS1S[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InDirectionOfKillerQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InflictMadnessBaseQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	int                                                _requiredTier;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HI1P[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InflictMadnessBaseQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InjuredDyingHookManyQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInjuredDyingHookManyQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InjuredDyingHookManyQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InjuredDyingMultipleQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInjuredDyingMultipleQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InjuredDyingMultipleQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InLockerNearKillerQEEvaluator
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator
{
public:
	unsigned char                                      UnknownData_G9GP[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InLockerNearKillerQEEvaluator"));
		return ptr;
	}



	void OnClosetHideExit(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnClosetHideEnter(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.InstigatorHookCountQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_6FON[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InstigatorHookCountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InstigatorInBasementQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InstigatorInBasementQEEvaluator"));
		return ptr;
	}



};

// Class Archives.InstigatorInBasementPercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.InstigatorInBasementPercentQEEvaluator"));
		return ptr;
	}



};

// Class Archives.IsInteractingEvaluatorCondition
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UIsInteractingEvaluatorCondition : public UEvaluatorCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.IsInteractingEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.IsPerformingInteractionEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UIsPerformingInteractionEvaluatorCondition : public UEvaluatorCondition
{
public:
	TArray<struct FGameplayTag>                        _semanticTags;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.IsPerformingInteractionEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.ItemConsumedQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_S40G[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ItemConsumedQEEvaluator"));
		return ptr;
	}



	void OnItemConsumed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.ItemPerformedQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ItemPerformedQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ItemPerformedPercentQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ItemPerformedPercentQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ItemUsedQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UItemUsedQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_6QKI[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ItemUsedQEEvaluator"));
		return ptr;
	}



	void OnItemUsed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.KillerNearRedHerringGeneratorQEEvaluator
// 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
class UKillerNearRedHerringGeneratorQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_7D3F[0x60];                                    // 0x0090(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.KillerNearRedHerringGeneratorQEEvaluator"));
		return ptr;
	}



};

// Class Archives.LivingSurvivorsCountQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_MKTA[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.LivingSurvivorsCountQEEvaluator"));
		return ptr;
	}



	void OnSurvivorRemoved(class ACamperPlayer* survivorRemoved);
	void OnSurvivorAdded(class ACamperPlayer* survivorAdded);
};

// Class Archives.MaxSameTargetQEEvaluator
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TMap<TWeakObjectPtr<class AActor>, int>            _targetList;                                               // 0x0090(0x0050) (Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.MaxSameTargetQEEvaluator"));
		return ptr;
	}



};

// Class Archives.MultipleEventsBeforeResetEventQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UMultipleEventsBeforeResetEventQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	TArray<struct FGameplayTag>                        _gameEventsResettingProgress;                              // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LUJW[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.MultipleEventsBeforeResetEventQEEvaluator"));
		return ptr;
	}



};

// Class Archives.MultipleEventsInTimeFrameQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UMultipleEventsInTimeFrameQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_6YMZ[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.MultipleEventsInTimeFrameQEEvaluator"));
		return ptr;
	}



};

// Class Archives.MultipleMadSurvivorsQEEvaluator
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UMultipleMadSurvivorsQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	int                                                _requiredTier;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X9HD[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _madSurvivors[0x50];                                       // 0x0094(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.MultipleMadSurvivorsQEEvaluator"));
		return ptr;
	}



};

// Class Archives.NearMeEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_ZMBK[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _questOwnerCanBeSubjectOfEvent;                            // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C2F3[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.NearMeEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.NearPalletVaultWallQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_WEZF[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.NearPalletVaultWallQEEvaluator"));
		return ptr;
	}



};

// Class Archives.NearTrackedActorComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UNearTrackedActorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    IsWithinRangeDelegate;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _distanceThreshold;                                        // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ISUE[0x14];                                    // 0x00CC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.NearTrackedActorComponent"));
		return ptr;
	}



	void StopTrackingActor(class AActor* Actor);
	void StartTrackingActor(class AActor* Actor);
	void SetDistanceThreshold(float value);
	void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor);
	bool IsActorWithinRange(class AActor* Actor);
};

// Class Archives.NurseChainBlinkNumberQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UNurseChainBlinkNumberQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_PWD5[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.NurseChainBlinkNumberQEEvaluator"));
		return ptr;
	}



};

// Class Archives.OniDashHitDiffInTimeQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UOniDashHitDiffInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_PGEL[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      _previousTarget;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.OniDashHitDiffInTimeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.PlagueCorruptUniqueTargetsQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UPlagueCorruptUniqueTargetsQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	class AActor*                                      _previousTarget;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_52Q4[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.PlagueCorruptUniqueTargetsQEEvaluator"));
		return ptr;
	}



};

// Class Archives.PurpleGlyphComponent
// 0x0198 (FullSize[0x0250] - InheritedSize[0x00B8])
class UPurpleGlyphComponent : public UActorComponent
{
public:
	TArray<class UTileSpawnPoint*>                     _survivorSpawns;                                           // 0x00B8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0RB6[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIMoveRequest                              MoveRequest;                                               // 0x00E0(0x0040) (Transient, NativeAccessSpecifierPrivate)
	class UClass*                                      _navFilter;                                                // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _auraRevealDuration;                                       // 0x0128(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _nextLocationDistanceMinimum;                              // 0x0150(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _nextLocationDistanceMaximum;                              // 0x0178(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _movementAcceptanceRadius;                                 // 0x01A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _distanceToAccelerate;                                     // 0x01C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _distanceToDecelerate;                                     // 0x01F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                OutlineColor;                                              // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBloodTrailSettings*                         _bloodTrailSettings;                                       // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P2VE[0x20];                                    // 0x0230(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.PurpleGlyphComponent"));
		return ptr;
	}



	void StopGlyphMovement(bool useDeceleration);
	void StartGlyphMovement();
	void ResumeGlyphMovement(bool useAcceleration);
	void OnLevelReadyToPlay();
	class ADBDPlayer* GetTrackedPlayer();
	class AGlyph* GetOwningGlyph();
	void Authority_StartMoveWithAcceleration(const struct FVector& goalLocation);
	void Authority_MoveTo(const struct FVector& Location);
	struct FVector Authority_GetNextLocation();
	void Authority_AbortMoveWithDeceleration();
	void Authority_AbortMove();
};

// Class Archives.QuestEventsHandler
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UQuestEventsHandler : public UActorComponent
{
public:
	unsigned char                                      UnknownData_I21J[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UQuestEventEvaluatorBase*>            _evaluatorList;                                            // 0x00C0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BCMB[0x30];                                    // 0x00D0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandler"));
		return ptr;
	}



	void OnPlayergameStateChanged(DBDSharedTypes_EGameState GameState);
	void OnGameEnded(DeadByDaylight_EEndGameReason reason);
	void OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void DBD_ShowInGameCurrentQuestInfos();
	void DBD_InGameAddProgressionToCurrentQuest(int amount);
};

// Class Archives.QuestEventsHandlerTest
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UQuestEventsHandlerTest : public UQuestEventsHandler
{
public:
	class ADBDPlayer*                                  _dbdPlayer;                                                // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandlerTest"));
		return ptr;
	}



};

// Class Archives.QuestEventsHandlerUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.QuestEventsHandlerUtilities"));
		return ptr;
	}



	void STATIC_InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler);
};

// Class Archives.RecentlyActiveStateTagEvaluatorCondition
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_5STR[0x4];                                     // 0x0048(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _stateTag;                                                 // 0x004C(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IRPB[0x30];                                    // 0x0058(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.RecentlyActiveStateTagEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.RepairCoopQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class URepairCoopQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_S936[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.RepairCoopQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ReturnTheFavorQEEvaluator
// 0x00A0 (FullSize[0x0130] - InheritedSize[0x0090])
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      _favorToReturnEvents[0x50];                                // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _instigatorList[0x50];                                     // 0x00E0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ReturnTheFavorQEEvaluator"));
		return ptr;
	}



};

// Class Archives.ScreamSpecialCaseQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UScreamSpecialCaseQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.ScreamSpecialCaseQEEvaluator"));
		return ptr;
	}



};

// Class Archives.SearchItemRarityQEEvaluator
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SearchItemRarityQEEvaluator"));
		return ptr;
	}



	void OnItemSpawnedFromChest(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.SecondHookStageReachedQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class USecondHookStageReachedQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SecondHookStageReachedQEEvaluator"));
		return ptr;
	}



};

// Class Archives.SkillCheckConsecutiveQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USkillCheckConsecutiveQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_E5K9[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SkillCheckConsecutiveQEEvaluator"));
		return ptr;
	}



	void OnSkillCheckSuccess(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void OnSkillCheckFail(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class Archives.SlasherIsCarryingQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SlasherIsCarryingQEEvaluator"));
		return ptr;
	}



};

// Class Archives.StateTagEvaluatorCondition
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{
public:
	struct FGameplayTag                                _gameplayTag;                                              // 0x0048(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1G5I[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.StateTagEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.SurvivorNearMeEvaluatorCondition
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
{
public:
	unsigned char                                      UnknownData_PLXJ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.SurvivorNearMeEvaluatorCondition"));
		return ptr;
	}



};

// Class Archives.TargetInBasementQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetInBasementQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetIsObsessionQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetIsObsessionQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetNearPalletVaultWallQEEvaluator
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UTargetNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_N0WN[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetNearPalletVaultWallQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetOfEventRecentlyQEEvaluator
// 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_O5WD[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _firstGameEvent;                                           // 0x0098(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _secondEventOnSelf;                                        // 0x00A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_58WT[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetOfEventRecentlyQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetTriggeredEventRecentlyQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_QBVG[0x4];                                     // 0x0090(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _gameEvent;                                                // 0x0094(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetTriggeredEventRecentlyQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator
// 0x00B8 (FullSize[0x0148] - InheritedSize[0x0090])
class UTargetWasDamagedBySpecialAttackRecentlyEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_CQFC[0xA8];                                    // 0x0090(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTag>                        _specialCaseGameEvents;                                    // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator"));
		return ptr;
	}



};

// Class Archives.TargetWasTargetedByEventRecentlyEvaluator
// 0x0068 (FullSize[0x00F8] - InheritedSize[0x0090])
class UTargetWasTargetedByEventRecentlyEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_99MR[0x58];                                    // 0x0090(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTag>                        _gameEventsToTriggerFirst;                                 // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TargetWasTargetedByEventRecentlyEvaluator"));
		return ptr;
	}



};

// Class Archives.TotemsAtEndTrialCountQEEvaluator
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TotemsAtEndTrialCountQEEvaluator"));
		return ptr;
	}



};

// Class Archives.TriggerWithSameTargetWithinTimeQEEvaluator
// 0x0058 (FullSize[0x00E8] - InheritedSize[0x0090])
class UTriggerWithSameTargetWithinTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_F7WB[0x58];                                    // 0x0090(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.TriggerWithSameTargetWithinTimeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.UniqueTargetIncrementQEEvaluator
// 0x0050 (FullSize[0x00E0] - InheritedSize[0x0090])
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      _targetList[0x50];                                         // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.UniqueTargetIncrementQEEvaluator"));
		return ptr;
	}



};

// Class Archives.UniqueTargetsInTimeQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UUniqueTargetsInTimeQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_BXKQ[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.UniqueTargetsInTimeQEEvaluator"));
		return ptr;
	}



};

// Class Archives.WithPulledUpPalletQEEvaluator
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
{
public:
	unsigned char                                      UnknownData_H81K[0x10];                                    // 0x0090(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.WithPulledUpPalletQEEvaluator"));
		return ptr;
	}



};

// Class Archives.YellowGlyphComponent
// 0x0078 (FullSize[0x0130] - InheritedSize[0x00B8])
class UYellowGlyphComponent : public UActorComponent
{
public:
	class ADBDPlayer*                                  _currentlyInteractingPlayer;                               // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IKOB[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _skillCheckDuration;                                       // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _skillCheckZoneLength;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _skillCheckDelay;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _skillCheckAverageDistance;                                // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _skillCheckDistanceVariance;                               // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _teleportDelay;                                            // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MI5O[0x34];                                    // 0x00DC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTileSpawnPoint*>                     _survivorSpawns;                                           // 0x0110(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGlyph*>                              _allGlyphs;                                                // 0x0120(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class Archives.YellowGlyphComponent"));
		return ptr;
	}



	void TriggerSkillCheck(float currentTickerLocation);
	void StartGlyphPreTeleportVFX();
	void StartGlyphPostTeleportVFX();
	void OnSkillCheck(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void OnLevelReadyToPlay();
	void Multicast_TeleportGlyph(const struct FVector& Location);
	class AGlyph* GetOwningGlyph();
	bool Authority_TeleportGlyph(int maxNumberOfTries);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
