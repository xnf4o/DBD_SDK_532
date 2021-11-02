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

// Class DBDInteraction.ActivePhaseWalkInteraction
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_Z1MB[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	class UCurveFloat*                                 _chargingSpeedCurve;                                       // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97FB[0x18];                                    // 0x06E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.ActivePhaseWalkInteraction"));
		return ptr;
	}



	void ResetMovementSpeedMultipliers();
	void ResetChargeVFX(class ADBDPlayer* Player);
	void Local_SendPhaseWalkInfo(bool startActivePhaseWalk, bool TeleportToHusk, class ADBDPlayer* Player);
};

// Class DBDInteraction.BaseLockerInteraction
// 0x0008 (FullSize[0x05B8] - InheritedSize[0x05B0])
class UBaseLockerInteraction : public UInteractionDefinition
{
public:
	class ALocker*                                     _owningLocker;                                             // 0x05B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.BaseLockerInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.BaseStalkModeInteraction
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class UBaseStalkModeInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData_NQUB[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.BaseStalkModeInteraction"));
		return ptr;
	}



	class UStalkerComponent* GetStalkerComponent();
	bool CanStalk();
};

// Class DBDInteraction.BlessTotem
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class UBlessTotem : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _blessHexTotemSpeedPenalty;                                // 0x06D8(0x0028) (Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.BlessTotem"));
		return ptr;
	}



	class ATotem* GetTotem();
};

// Class DBDInteraction.CleanseTotem
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UCleanseTotem : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_SGNC[0x8];                                     // 0x06D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.CleanseTotem"));
		return ptr;
	}



};

// Class DBDInteraction.CollectItemInteraction
// 0x0028 (FullSize[0x05D8] - InheritedSize[0x05B0])
class UCollectItemInteraction : public UInteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnCollectUpdateStart;                                      // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCollectUpdateEnd;                                        // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEWA[0x8];                                     // 0x05D0(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.CollectItemInteraction"));
		return ptr;
	}



	class ACollectable* GetItem();
};

// Class DBDInteraction.CollectItemFromSearchableInteraction
// 0x0018 (FullSize[0x05F0] - InheritedSize[0x05D8])
class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
{
public:
	unsigned char                                      UnknownData_RJN1[0x8];                                     // 0x05D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_LYMY[0x10];                                    // 0x05E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.CollectItemFromSearchableInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.DestroyDemogorgonPortalInteraction
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UDestroyDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class ADemogorgonPortal*                           _owningPortal;                                             // 0x06D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.DestroyDemogorgonPortalInteraction"));
		return ptr;
	}



	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
};

// Class DBDInteraction.DropItemInteraction
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class UDropItemInteraction : public UInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.DropItemInteraction"));
		return ptr;
	}



	class ACollectable* GetItem();
};

// Class DBDInteraction.EscapeMapInteraction
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class UEscapeMapInteraction : public UInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.EscapeMapInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.GeneratorDamageInteraction
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_L3MT[0x8];                                     // 0x06D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.GeneratorDamageInteraction"));
		return ptr;
	}



	void Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator);
};

// Class DBDInteraction.GeneratorRepairInteraction
// 0x0080 (FullSize[0x0758] - InheritedSize[0x06D8])
class UGeneratorRepairInteraction : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _penaltyPerRepairPlayerCount[0x3];                         // 0x06D8(0x0078) (Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IE90[0x8];                                     // 0x0750(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.GeneratorRepairInteraction"));
		return ptr;
	}



	void SetIsObstructed(bool obstructed);
	class AGenerator* GetOwningGenerator();
};

// Class DBDInteraction.GeneratorToolboxRepairInteraction
// 0x0068 (FullSize[0x07C0] - InheritedSize[0x0758])
class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
{
public:
	struct FText                                       _interactionTextWhenEmpty;                                 // 0x0758(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _repairSkillCheckDurationWhenEmpty;                        // 0x0770(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _repairSkillCheckChanceWhenEmpty;                          // 0x0798(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.GeneratorToolboxRepairInteraction"));
		return ptr;
	}



	bool HasChargedToolBox(class ADBDPlayer* Player);
	struct FString GetInteractionTextWhenEmpty();
};

// Class DBDInteraction.GhostChargeStalkModeInteraction
// 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{
public:
	unsigned char                                      UnknownData_128R[0x10];                                    // 0x05C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.GhostChargeStalkModeInteraction"));
		return ptr;
	}



	class UGhostStealthComponent* GetStealthComponent();
};

// Class DBDInteraction.HealInteraction
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UHealInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_W0LP[0x8];                                     // 0x06D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.HealInteraction"));
		return ptr;
	}



	class ACamperPlayer* GetTargetSurvivor();
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
};

// Class DBDInteraction.HookSurvivorDefinition
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UHookSurvivorDefinition : public UChargeableInteractionDefinition
{
public:
	class ACamperPlayer*                               _survivorBeingHooked;                                      // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.HookSurvivorDefinition"));
		return ptr;
	}



	class AMeatHook* GetMeatHook();
};

// Class DBDInteraction.ItemCraftInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class UItemCraftInteraction : public UInteractionDefinition
{
public:
	struct FName                                       _attachToSocketName;                                       // 0x05B0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EB7R[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _collectableClass;                                         // 0x05C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NSSQ[0x8];                                     // 0x05C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.ItemCraftInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.InClosetFlashbangItemCraftInteraction
// 0x0000 (FullSize[0x05D0] - InheritedSize[0x05D0])
class UInClosetFlashbangItemCraftInteraction : public UItemCraftInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.InClosetFlashbangItemCraftInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.LinkedVomitInteraction
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_JXQT[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_V43V[0x14];                                    // 0x06E0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _chargeComplete;                                           // 0x06F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5BSY[0xB];                                     // 0x06F5(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.LinkedVomitInteraction"));
		return ptr;
	}



	bool IsVomiting();
	bool IsChargeComplete();
	class UVomitStateComponent* GetVomitStateComponent();
};

// Class DBDInteraction.LockerFakeEnterInteraction
// 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
class ULockerFakeEnterInteraction : public UInteractionDefinition
{
public:
	float                                              _lockerInteractionBlockTime;                               // 0x05B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_41TF[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALocker*                                     _owningLocker;                                             // 0x05B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fakeEnterLoudNoiseRange;                                  // 0x05C0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0JBP[0x8];                                     // 0x05E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.LockerFakeEnterInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.SearchChestInteractionBase
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class USearchChestInteractionBase : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_KD9Q[0x4];                                     // 0x06D8(0x0004) Fix Super Size
	struct FGameplayTag                                _searchableCompleteContributionPercentTag;                 // 0x06DC(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _scoreEventFired;                                          // 0x06E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AHO5[0x7];                                     // 0x06E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASearchable*                                 _owningChest;                                              // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onLastInteractionWasComplete;                             // 0x06F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TJXU[0x7];                                     // 0x06F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.SearchChestInteractionBase"));
		return ptr;
	}



	void FireChestScoreEvent(class ADBDPlayer* Player);
};

// Class DBDInteraction.OpenChestInteraction
// 0x0020 (FullSize[0x0720] - InheritedSize[0x0700])
class UOpenChestInteraction : public USearchChestInteractionBase
{
public:
	struct FGameplayTag                                _camperSearchablePercentTag;                               // 0x0700(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VK7E[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                     // 0x0710(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startTime;                                                // 0x0718(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RCS4[0x4];                                     // 0x071C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.OpenChestInteraction"));
		return ptr;
	}



	void CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player);
};

// Class DBDInteraction.OpenHatchInteraction
// 0x0058 (FullSize[0x0730] - InheritedSize[0x06D8])
class UOpenHatchInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_PHDX[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	struct FAnimationMontageDescriptor                 InteractionStoppedMontage;                                 // 0x06E0(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FAnimationMontageDescriptor                 InteractionSucceedMontage;                                 // 0x0700(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I6V6[0x10];                                    // 0x0720(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.OpenHatchInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.PalletPullUpInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class UPalletPullUpInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_EEGG[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	class APallet*                                     _owningPallet;                                             // 0x06E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K6QP[0x8];                                     // 0x06E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.PalletPullUpInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.SearchOpenedChestInteraction
// 0x0000 (FullSize[0x0700] - InheritedSize[0x0700])
class USearchOpenedChestInteraction : public USearchChestInteractionBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.SearchOpenedChestInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.SetGroundPortalInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class USetGroundPortalInteraction : public UChargeableInteractionDefinition
{
public:
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x06D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObjectPlacerComponent*                      _trapPlacerComponent;                                      // 0x06E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _portalClassToSpawn;                                       // 0x06E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.SetGroundPortalInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.SetTrapInteraction
// 0x0060 (FullSize[0x0738] - InheritedSize[0x06D8])
class USetTrapInteraction : public UChargeableInteractionDefinition
{
public:
	struct FSocketOrBoneCache                          _dropSocket;                                               // 0x06D8(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.SetTrapInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.SnuffTotem
// 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
class USnuffTotem : public UInteractionDefinition
{
public:
	float                                              _slasherFacingTolerance;                                   // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HHQD[0xC];                                     // 0x05B4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.SnuffTotem"));
		return ptr;
	}



};

// Class DBDInteraction.TeleportToDemogorgonPortalInteraction
// 0x00A8 (FullSize[0x0780] - InheritedSize[0x06D8])
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_IAUC[0x4];                                     // 0x06D8(0x0004) Fix Super Size
	float                                              _cancelTeleportingPhaseDuration;                           // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalTargetingComponent*                   _portalTargetingComponent;                                 // 0x06E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPortalPlacerStateComponent*                 _portalPlacerState;                                        // 0x06E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADemogorgonPortal*                           _startingPortal;                                           // 0x06F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADemogorgonPortal*                           _targetedPortal;                                           // 0x06F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _interactingPlayer;                                        // 0x0700(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JX0X[0x60];                                    // 0x0708(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      _huskRef;                                                  // 0x0768(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ClassToSpawnForHusk;                                       // 0x0770(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LYQS[0x8];                                     // 0x0778(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.TeleportToDemogorgonPortalInteraction"));
		return ptr;
	}



	void OnTeleportInteractionCanceledVFX();
	void OnSlasherSet(class ASlasherPlayer* Slasher);
};

// Class DBDInteraction.ThrowInteraction
// 0x0010 (FullSize[0x06E8] - InheritedSize[0x06D8])
class UThrowInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _throwCancelledSpeedCurve;                                 // 0x06D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _throwCancellationExitTime;                                // 0x06E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GGTP[0x4];                                     // 0x06E4(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.ThrowInteraction"));
		return ptr;
	}



	void InitThrowCancellationExitTime(float value);
	bool HasCancelledThrow();
};

// Class DBDInteraction.ThrowRockInteraction
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class UThrowRockInteraction : public UInteractionDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.ThrowRockInteraction"));
		return ptr;
	}



};

// Class DBDInteraction.Unhook
// 0x0068 (FullSize[0x0740] - InheritedSize[0x06D8])
class UUnhook : public UChargeableInteractionDefinition
{
public:
	TArray<class USceneComponent*>                     _snapPoints;                                               // 0x06D8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _unhookLoudNoiseRange;                                     // 0x06E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GYQR[0x8];                                     // 0x0710(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADBDPlayer*                                  _unhookingPlayer;                                          // 0x0718(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hookedCharacterSnapTime;                                  // 0x0720(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YU4S[0x4];                                     // 0x0724(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _playerBeingUnhooked;                                      // 0x0728(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FF0J[0x10];                                    // 0x0730(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.Unhook"));
		return ptr;
	}



};

// Class DBDInteraction.UnhookReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UUnhookReplicationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDInteraction.UnhookReplicationComponent"));
		return ptr;
	}



	void Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
