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

// Class TheGunslinger.ChainPlayerMovementStatusEffect
// 0x0058 (FullSize[0x03A8] - InheritedSize[0x0350])
class UChainPlayerMovementStatusEffect : public UStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _baseMovementSpeedMultiplier;                              // 0x0350(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _collisionMovementSpeedMultiplier;                         // 0x0378(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ARifleChain*                                 _chain;                                                    // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ChainPlayerMovementStatusEffect"));
		return ptr;
	}



	void OnIsChainCollidingChanged(bool IsColliding);
};

// Class TheGunslinger.ChainKillerMovementStatusEffect
// 0x0068 (FullSize[0x0410] - InheritedSize[0x03A8])
class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _backwardMovementSpeedMultiplier;                          // 0x03A8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _backwardMovementAngle;                                    // 0x03D0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HBPL[0x18];                                    // 0x03F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ChainKillerMovementStatusEffect"));
		return ptr;
	}



};

// Class TheGunslinger.ChainLinkableComponent
// 0x00D0 (FullSize[0x0188] - InheritedSize[0x00B8])
class UChainLinkableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SU1T[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _cameraTargetingStrategyClass;                             // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _movementStatusEffectName;                                 // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _linkedStatusEffectName;                                   // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;                                // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URiflePlayerLinker*                          _chainLink;                                                // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HJSM[0x30];                                    // 0x0100(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isLinkedLingering;                                        // 0x0130(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChainPlayerMovementStatusEffect*            _movementStatusEffect;                                     // 0x0160(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4SXW[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseCameraTargetingStrategy*                _cameraStrategy;                                           // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JZ9H[0x10];                                    // 0x0178(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ChainLinkableComponent"));
		return ptr;
	}



};

// Class TheGunslinger.DeadMansSwitch
// 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
class UDeadMansSwitch : public UPerk
{
public:
	unsigned char                                      UnknownData_8K1J[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _activationDurationByLevels[0x3];                          // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _anySurvivorLetGo;                                         // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9Z4Z[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGenerator*>                          _blockedGenerators;                                        // 0x03E0(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E3V5[0x10];                                    // 0x03F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.DeadMansSwitch"));
		return ptr;
	}



	void OnRep_BlockedGenerators();
};

// Class TheGunslinger.FireHarpoonRifleInteraction
// 0x04F0 (FullSize[0x0AA0] - InheritedSize[0x05B0])
class UFireHarpoonRifleInteraction : public UInteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnFireHarpoon;                                             // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHitPlayer;                                               // 0x05C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H148[0x1];                                     // 0x05D0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TheGunslinger_EFireHarpoonRifleAimingInteractionSubState _aimingSubState;                                           // 0x05D1(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3EEQ[0x6];                                     // 0x05D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHarpoonProjectile*                          _harpoon;                                                  // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _collector;                                                // 0x05E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightDuration;                                     // 0x05E8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightZoom;                                         // 0x0610(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightMousePitchScaleMultiplier;                    // 0x0638(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightMouseYawScaleMultiplier;                      // 0x0660(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightGamepadPitchScaleMultiplier;                  // 0x0688(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightGamepadYawScaleMultiplier;                    // 0x06B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimDownSightGamepadPitchCurve;                            // 0x06D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _aimDownSightGamepadYawCurve;                              // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _aimDownSightRotationScaleAdjustmentTime;                  // 0x06E8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _aimDownSightMovementSpeedMultiplier;                      // 0x0710(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireDuration;                                             // 0x0790(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireRotationScaleMultiplier;                              // 0x07B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireRotationScaleAdjustmentTime;                          // 0x07E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _fireMovementSpeedMultiplier;                              // 0x0808(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _longRangeShotMinDistance;                                 // 0x0830(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SUOH[0x8];                                     // 0x0858(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _successMovementSpeedMultiplier;                           // 0x0860(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _missMovementSpeedMultiplier;                              // 0x0888(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _missShotCooldownDuration;                                 // 0x08B0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _nearMissShotMaxDistance;                                  // 0x0930(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _successShotDuration;                                      // 0x0958(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O0SD[0x120];                                   // 0x0980(0x0120) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.FireHarpoonRifleInteraction"));
		return ptr;
	}



	void Server_SetAimingSubstate(TheGunslinger_EFireHarpoonRifleAimingInteractionSubState newState);
	void Server_HandleMissShotScores(TArray<class ADBDPlayer*> nearMissedPlayers);
	void OnHitPlayer__DelegateSignature();
	void OnFireHarpoon__DelegateSignature();
};

// Class TheGunslinger.ForThePeople
// 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
class UForThePeople : public UPerk
{
public:
	unsigned char                                      UnknownData_N0WO[0xC];                                     // 0x03C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _brokenEffectDurations[0x3];                               // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x03E0(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VY3R[0x58];                                    // 0x0418(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ForThePeople"));
		return ptr;
	}



	void Server_OnActionInputPressed();
	void OnHealingAbilityUsed(class ACamperPlayer* healingSurvivor, class ACamperPlayer* healedSurvivor);
	void Multicast_OnHealAbilityUsed(class ACamperPlayer* healingSurvivor, class ACamperPlayer* healedSurvivor);
};

// Class TheGunslinger.Gearhead
// 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
class UGearhead : public UPerk
{
public:
	float                                              _perkActivationDuration[0x3];                              // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _greatSkillCheck;                                          // 0x03D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _basicAttack;                                              // 0x03D5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EK7Q[0x2];                                     // 0x03D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minimumAuraRevealDuration;                                // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _attacksNeededToActivate;                                  // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numAttacksBeforeActivation;                               // 0x03E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YGTB[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AGenerator*, struct FFastTimer>         _timersBeforeUnreveal;                                     // 0x03E8(0x0050) (NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _markedGenerators;                                         // 0x0438(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _revealedGenerators;                                       // 0x0448(0x0010) (Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _local_revealedGenerators;                                 // 0x0458(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8F65[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.Gearhead"));
		return ptr;
	}



	void OnRep_RevealedGenerators();
};

// Class TheGunslinger.GunslingerAnimInstance
// 0x01D8 (FullSize[0x0780] - InheritedSize[0x05A8])
class UGunslingerAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_OYRD[0x7];                                     // 0x05A8(0x0007) Fix Super Size
	bool                                               _isLinked;                                                 // 0x05AF(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isReeling;                                                // 0x05B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInGunState;                                             // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RR4T[0x2];                                     // 0x05B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _idleToAimAnimPlayrate;                                    // 0x05B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _aimToIdleAnimPlayrate;                                    // 0x05B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _fireAnimPlayRate;                                         // 0x05BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _missShotCooldownAnimPlayRate;                             // 0x05C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _successShotAnimPlayRate;                                  // 0x05C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _idleToAimAnim;                                            // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _aimToIdleAnim;                                            // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _fireAnim;                                                 // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _missShotCooldownAnim;                                     // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequence*                               _successShotAnim;                                          // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _idleToAimAnimDuration;                                    // 0x05F0(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _aimToIdleAnimDuration;                                    // 0x0618(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _fireAnimDuration;                                         // 0x0640(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _missShotCooldownAnimDuration;                             // 0x0668(0x0080) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _successShotAnimDuration;                                  // 0x06E8(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ROEY[0x70];                                    // 0x0710(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.GunslingerAnimInstance"));
		return ptr;
	}



};

// Class TheGunslinger.GunslingerCameraTargetingStrategy
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{
public:
	struct FName                                       _cameraSocketName;                                         // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _survivorHarpoonSocketName;                                // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.GunslingerCameraTargetingStrategy"));
		return ptr;
	}



};

// Class TheGunslinger.GunslingerEffectsComponent
// 0x0098 (FullSize[0x0150] - InheritedSize[0x00B8])
class UGunslingerEffectsComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnIsAimingChanged;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    PlayOutOfAmmoSound;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _minimumTimeBetweenBroadcast;                              // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H5SF[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHarpoonRifle*                               _rifle;                                                    // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1BQ1[0x68];                                    // 0x00E8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.GunslingerEffectsComponent"));
		return ptr;
	}



	void PlayOutOfAmmoSound__DelegateSignature();
	void OnItemUsedStateChanged(bool IsPressed);
	void OnIsAimingChanged__DelegateSignature(bool isAiming);
	void Multicast_PlayOutOfAmmoSound();
};

// Class TheGunslinger.GunslingerUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGunslingerUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.GunslingerUtilities"));
		return ptr;
	}



	class AHarpoonRifle* STATIC_GetHarpoonRifle(class ADBDPlayer* Player);
};

// Class TheGunslinger.HarpoonChainPositioner
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UHarpoonChainPositioner : public UActorComponent
{
public:
	class UClass*                                      _harpoonPropClass;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _survivorAttachSocket;                                     // 0x00C0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _animationSocket;                                          // 0x00CC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _reelBackToRifleSpeed;                                     // 0x00D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _harpoonMinimumSnapBackDistance;                           // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BUC4[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AHarpoonProp*                                _harpoonProp;                                              // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AHarpoonProjectile*                          _harpoonProjectile;                                        // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _collector;                                                // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EVR5[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARifleChain*                                 _chain;                                                    // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JS62[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonChainPositioner"));
		return ptr;
	}



	void OnOwnerCollected(class ADBDPlayer* collector);
	void OnHarpoonTravelingChanged(bool isTravelling);
	void OnHarpoonLoadedOnRifle();
	void OnCurrentHarpoonChanged(class AActor* currentHarpoon);
	class AHarpoonProp* GetHarpoonProp();
	class AActor* GetCurrentHarpoon();
	void AttachToRifle();
	void AttachToAnimSocket();
};

// Class TheGunslinger.HarpoonedSurvivorSubAnimInstance
// 0x0090 (FullSize[0x0580] - InheritedSize[0x04F0])
class UHarpoonedSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	float                                              _linkedMaxSpeed;                                           // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeBeforeHarpoonHitReset;                                // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _hitHarpoonedEnterEvent;                                   // 0x04F8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _chainBreakEnterEvent;                                     // 0x0504(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChainLinked;                                            // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingReeled;                                            // 0x0511(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasLinkInput;                                             // 0x0512(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TETW[0x1];                                     // 0x0513(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _linkInputX;                                               // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _linkInputY;                                               // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _chainBreakTrigger;                                        // 0x051C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _triggerHarpoonHit;                                        // 0x051D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V0Q1[0x2];                                     // 0x051E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _harpoonHitTurnAnimNormalizedStartTime;                    // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _harpoonHitAnimTurnRight;                                  // 0x0524(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isCrawling;                                               // 0x0525(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0O64[0x5A];                                    // 0x0526(0x005A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonedSurvivorSubAnimInstance"));
		return ptr;
	}



};

// Class TheGunslinger.HarpoonLauncher
// 0x0058 (FullSize[0x01D8] - InheritedSize[0x0180])
class UHarpoonLauncher : public UKillerProjectileLauncher
{
public:
	struct FDBDTunableRowHandle                        _launchSpeed;                                              // 0x0180(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _launchDistanceFromCamera;                                 // 0x01A8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _launchZOffset;                                            // 0x01D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KN5L[0x4];                                     // 0x01D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonLauncher"));
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProjectile
// 0x00D0 (FullSize[0x03D8] - InheritedSize[0x0308])
class AHarpoonProjectile : public AKillerProjectile
{
public:
	unsigned char                                      UnknownData_F1AF[0x78];                                    // 0x0308(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _launchDistanceFromCamera;                                 // 0x0380(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonProjectileMovementComponent*         _movement;                                                 // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _environmentCollider;                                      // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _targetCollider;                                           // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      _skeletalMesh;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPoolableActorComponent*                     _poolableActorComponent;                                   // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y2F4[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonProjectile"));
		return ptr;
	}



	void OnHarpoonStop(const struct FHitResult& Result);
};

// Class TheGunslinger.HarpoonProjectileMovementComponent
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UHarpoonProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
public:
	struct FDBDTunableRowHandle                        _maxTravelDistance;                                        // 0x0260(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DGG6[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonProjectileMovementComponent"));
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProp
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class AHarpoonProp : public AActor
{
public:
	unsigned char                                      UnknownData_3P7Q[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      _skeletalMesh;                                             // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonProp"));
		return ptr;
	}



};

// Class TheGunslinger.HarpoonProviderComponent
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UHarpoonProviderComponent : public USingleProjectileProviderComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonProviderComponent"));
		return ptr;
	}



};

// Class TheGunslinger.HarpoonRifle
// 0x00C0 (FullSize[0x0568] - InheritedSize[0x04A8])
class AHarpoonRifle : public ACollectable
{
public:
	unsigned char                                      UnknownData_DYRL[0x18];                                    // 0x04A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _survivorLinkableClass;                                    // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _killerLinkableClass;                                      // 0x04C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _chainClass;                                               // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _rifleMuzzleSocket;                                        // 0x04D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _rifleHarpoonLoadingSocket;                                // 0x04E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _crowActiveRange;                                          // 0x04F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonLauncher*                            _launcher;                                                 // 0x0518(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonProviderComponent*                   _harpoonProvider;                                          // 0x0520(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ARifleChain*                                 _chain;                                                    // 0x0528(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URifleChainTensionComponent*                 _chainTensionComponent;                                    // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _chainTensionChargeable;                                   // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URiflePlayerLinker*                          _playerLinker;                                             // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHarpoonChainPositioner*                     _harpoonChainPositioner;                                   // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFireHarpoonRifleInteraction*                _fireInteraction;                                          // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTriggerableActivatorComponent*              _crowsActivatorComponent;                                  // 0x0558(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PSME[0x8];                                     // 0x0560(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonRifle"));
		return ptr;
	}



	class ARifleChain* GetChain();
	void Authority_OnFireHarpoon();
};

// Class TheGunslinger.HarpoonRifleAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UHarpoonRifleAnimInstance : public UAnimInstance
{
public:
	class ARifleChain*                                 _chain;                                                    // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _chainUnwindingSpeed;                                      // 0x0278(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8PCQ[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HarpoonRifleAnimInstance"));
		return ptr;
	}



};

// Class TheGunslinger.HellshireIronAddon
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UHellshireIronAddon : public UItemAddon
{
public:
	float                                              _undetectableDurationPostHarpoon;                          // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BTAR[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _statusEffect;                                             // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HellshireIronAddon"));
		return ptr;
	}



};

// Class TheGunslinger.HexRetribution
// 0x0010 (FullSize[0x0430] - InheritedSize[0x0420])
class UHexRetribution : public UHexPerk
{
public:
	float                                              _obliviousDurationByLevels[0x3];                           // 0x0420(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _auraRevealDuration;                                       // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HexRetribution"));
		return ptr;
	}



};

// Class TheGunslinger.HoneyLocustThornsAddon
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UHoneyLocustThornsAddon : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.HoneyLocustThornsAddon"));
		return ptr;
	}



};

// Class TheGunslinger.GunslingerHarpoon
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGunslingerHarpoon : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.GunslingerHarpoon"));
		return ptr;
	}



};

// Class TheGunslinger.IridescentCoinAddon
// 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
class UIridescentCoinAddon : public UItemAddon
{
public:
	class UStatusEffect*                               _exposedStatusEffect;                                      // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6CN0[0x28];                                    // 0x02A0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.IridescentCoinAddon"));
		return ptr;
	}



};

// Class TheGunslinger.KillerChainLinkableComponent
// 0x0010 (FullSize[0x0198] - InheritedSize[0x0188])
class UKillerChainLinkableComponent : public UChainLinkableComponent
{
public:
	unsigned char                                      UnknownData_0DW3[0x10];                                    // 0x0188(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.KillerChainLinkableComponent"));
		return ptr;
	}



};

// Class TheGunslinger.OffTheRecord
// 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
class UOffTheRecord : public UPerk
{
public:
	float                                              _activationDurationLevels[0x3];                            // 0x03C8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H85Y[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.OffTheRecord"));
		return ptr;
	}



};

// Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UPlayerReelInputAccelerationConstraintStrategy : public UBaseInputAccelerationConstraintStrategy
{
public:
	unsigned char                                      UnknownData_RE2H[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy"));
		return ptr;
	}



};

// Class TheGunslinger.PrisonChainAddon
// 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
class UPrisonChainAddon : public UItemAddon
{
public:
	struct FDBDTunableRowHandle                        _maxTensionCharge;                                         // 0x0298(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _tensionChargeModifier;                                    // 0x02C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LQLT[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.PrisonChainAddon"));
		return ptr;
	}



};

// Class TheGunslinger.RedHerring
// 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
class URedHerring : public UPerk
{
public:
	unsigned char                                      UnknownData_I10Y[0x60];                                    // 0x03C8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGenerator*                                  _generatorBeingRepaired;                                   // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGenerator*                                  _markedGenerator;                                          // 0x0430(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _secondsToActivatePerk;                                    // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _loudNoiseTriggeredNotifyTime;                             // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _cooldownLevels[0x3];                                      // 0x0440(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ENM1[0x24];                                    // 0x044C(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.RedHerring"));
		return ptr;
	}



	void OnRep_MarkedGenerator(class AGenerator* oldMarkedGenerator);
	void OnLoudNoiseTriggered();
};

// Class TheGunslinger.ReelChainInteraction
// 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
class UReelChainInteraction : public UInteractionDefinition
{
public:
	float                                              _frontMovementAngle;                                       // 0x05B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HAQ5[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minimumFrontVelocity;                                     // 0x05B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S4HS[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADBDPlayer*                                  _linkedPlayer;                                             // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3VGO[0x28];                                    // 0x05C8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ReelChainInteraction"));
		return ptr;
	}



};

// Class TheGunslinger.ReloadHarpoonRifleInteraction
// 0x00B8 (FullSize[0x0790] - InheritedSize[0x06D8])
class UReloadHarpoonRifleInteraction : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _reloadTime;                                               // 0x06D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _movementSpeedMultiplier;                                  // 0x0700(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _rotationScaleMultiplier;                                  // 0x0728(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _rotationScaleAdjustmentTime;                              // 0x0750(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4VW8[0x18];                                    // 0x0778(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.ReloadHarpoonRifleInteraction"));
		return ptr;
	}



};

// Class TheGunslinger.RifleChain
// 0x01E8 (FullSize[0x0418] - InheritedSize[0x0230])
class ARifleChain : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnProjectileSet;                                           // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsCollidingChanged;                                      // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAkComponent*                                _chainCenterAkComponent;                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _collisionLoopStartEvent;                                  // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _collisionLoopEndEvent;                                    // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAkSoundLoop>                        _collisionSoundLoops;                                      // 0x0268(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sphereTraceRadius;                                        // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _timeBetweenTrace;                                         // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _harpoon[0x10];                                            // 0x0280(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_Z9AV[0x188];                                   // 0x0290(0x0188) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.RifleChain"));
		return ptr;
	}



	void UpdateChainMesh(class UInstancedStaticMeshComponent* Mesh, class USplineComponent* spline, float alpha);
	int SpawnChainPoints(const struct FVector& Start, const struct FVector& Stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class USplineComponent* spline);
	void OnUnattachFromPlayer(class ADBDPlayer* Player);
	void OnReelBackToRifle();
	void OnProjectileSet__DelegateSignature(class AActor* Projectile);
	void OnLaunch();
	void OnIsCollidingChanged__DelegateSignature(bool IsColliding);
	void OnAttachToPlayer(class ADBDPlayer* Player);
	bool IsColliding();
	float GetUnwindingSpeed();
	class URiflePlayerLinker* GetRiflePlayerLinker();
	TArray<struct FHitResult> GetFirstAndLastCollisionHits();
	class URifleChainTensionComponent* GetChainTensionComponent();
	struct FVector GetChainStart();
	struct FVector GetChainEnd();
};

// Class TheGunslinger.RifleChainTensionComponent
// 0x01E8 (FullSize[0x02A0] - InheritedSize[0x00B8])
class URifleChainTensionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_POXC[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnIsBuildingTensionChanged;                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COZ3[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isBuildingTension;                                        // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9RPL[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USurvivorChainLinkableComponent*             _targetlinkable;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OTAD[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxTensionCharge;                                         // 0x0108(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseTensionRate;                                          // 0x0130(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _collisionTensionRate;                                     // 0x0158(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _survivorPullingTensionRate;                               // 0x0180(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNonTunableStat                             _currentTensionRate;                                       // 0x0200(0x0060) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	DeadByDaylight_EProgressModifier                   _progressModifierForSurvivors;                             // 0x0260(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0VL5[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       _chargeProgressDescriptionText;                            // 0x0268(0x0018) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7M6E[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ARifleChain*                                 _chain;                                                    // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y804[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.RifleChainTensionComponent"));
		return ptr;
	}



	void OnTensionChargeableCompletionChanged(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
	void OnRep_IsBuildingTension();
	void OnIsBuildingTensionChanged__DelegateSignature(bool IsBuildingTension);
	bool IsBuildingTension();
	float GetProgress();
};

// Class TheGunslinger.RiflePlayerLinker
// 0x0158 (FullSize[0x0210] - InheritedSize[0x00B8])
class URiflePlayerLinker : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnLinkedPlayerSet;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  _linkedPlayer;                                             // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _linkedPlayerDuringAttack;                                 // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _linkOwner;                                                // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _desiredLinkLength;                                        // 0x00E0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GZB9[0x3C];                                    // 0x00E4(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _elasticLength;                                            // 0x0120(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minimumLinkLength;                                        // 0x0148(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _breakFreeCloseRangeMaxDistance;                           // 0x0170(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HK6P[0x4];                                     // 0x0198(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _movementLinkReductionThreshold;                           // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _movementAccelerationTreshold;                             // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RBYV[0x6C];                                    // 0x01A4(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.RiflePlayerLinker"));
		return ptr;
	}



	void Server_OnClientConfirmTensionBreakChain(class ADBDPlayer* Player);
	void OnLinkedPlayerSet__DelegateSignature(class ADBDPlayer* linkedPlayer);
	void Multicast_Unlink();
	void Multicast_Link(class ADBDPlayer* linkedPlayer);
	class ADBDPlayer* GetLinkOwner();
	class ADBDPlayer* GetLinkedPlayer();
	void Client_OnAuthorityTensionBreakChain(class ADBDPlayer* Player);
};

// Class TheGunslinger.RustedSpikeAddon
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class URustedSpikeAddon : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.RustedSpikeAddon"));
		return ptr;
	}



};

// Class TheGunslinger.SurvivorChainLinkableComponent
// 0x00E0 (FullSize[0x0268] - InheritedSize[0x0188])
class USurvivorChainLinkableComponent : public UChainLinkableComponent
{
public:
	struct FDBDTunableRowHandle                        _pullbackAngle;                                            // 0x0188(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IW2Y[0x8];                                     // 0x01B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _immobilizationDuration;                                   // 0x01B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       _linkableInteractionTags;                                  // 0x01E0(0x0020) (Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       _cancelableInteractionTags;                                // 0x0200(0x0020) (Edit, NativeAccessSpecifierPrivate)
	class UClass*                                      _velocityAdditiveStrategyClass;                            // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _immobilizationEffectName;                                 // 0x0228(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GNVT[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize10                       _linkedMoveInput;                                          // 0x0238(0x000C) (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3YJU[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _immobilizationEffect;                                     // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USurvivorReelVelocityAdditiveStrategy*       _velocityAdditiveStrategy;                                 // 0x0250(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N3JS[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.SurvivorChainLinkableComponent"));
		return ptr;
	}



	void OnRep_VelocityAdditiveStrategy();
};

// Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class USurvivorReelVelocityAdditiveStrategy : public UBaseCharacterVelocityAdditiveStrategy
{
public:
	struct FTunableStat                                _reelSpeed;                                                // 0x00B8(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minimumLinkLengthDelta;                                   // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maximumVelocityAdditive;                                  // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isBeingReeled;                                            // 0x0140(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isBeingPulled;                                            // 0x0170(0x0030) (Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3ELB[0x30];                                    // 0x01A0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy"));
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheGunslinger.TestOffTheRecord
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class UTestOffTheRecord : public UOffTheRecord
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class TheGunslinger.TestOffTheRecord"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
