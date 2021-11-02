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

// Class DBDUIViewsCore.CoreBaseUserWidget
// 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
class UCoreBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_IYO4[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScaleBox*                                   ScaleContainer;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsInteractive;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EControlMode                        _controlMode;                                              // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDUIManagers_EScaleType                           ScaleType;                                                 // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A4EW[0x5];                                     // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDInputManager*                            _inputManager;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J4UL[0x50];                                    // 0x0288(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreBaseUserWidget"));
		return ptr;
	}



	void UpdateScale(float Scale);
	void RegisterForInput();
	void OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode);
	void DeregisterFromInput();
};

// Class DBDUIViewsCore.CharacterTooltipWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCharacterTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               InstructionTB;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               LevelTB;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MarketTB;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDRichTextBlock*                           DifficultyRTB;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CharacterTooltipWidget"));
		return ptr;
	}



	void SetTooltipData(const struct FCharacterTooltipViewData& characterViewData);
	void SetLevel(int Level);
	void SetDifficulty(DBDSharedTypes_ECharacterDifficulty Difficulty);
};

// Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UCoreBaseLoadoutPartWidget : public UUserWidget
{
public:
	class UDBDImage*                                   ImageRarity;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   ImageIcon;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextStackCount;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget"));
		return ptr;
	}



	void SetLoadoutStackCount(int StackCount);
	void SetLoadoutPartRarity(DBDSharedTypes_EItemRarity Rarity);
	void SetLoadoutPartIcon();
};

// Class DBDUIViewsCore.CoreAddonWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_Z7D3[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreAddonWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreBaseHudWidget
// 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{
public:
	float                                              FocusAnimationDuration;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationDelay;                                       // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FocusAnimationEasing;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9LAH[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusAnimationMaxOpacity;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationMinOpacity;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TGES[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreBaseHudWidget"));
		return ptr;
	}



	bool ShouldPlayFocusAnimation();
	void PlayFocusAnimation();
};

// Class DBDUIViewsCore.CoreButtonPromptWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreButtonPromptWidget : public UCoreBaseUserWidget
{
public:
	class UAkAudioEvent*                               CursorOverSfx;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorPressSfx;                                            // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorReleaseSfx;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _inputPromptText;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  _buttonTextField;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _buttonPromptTriggeredDelegate;                            // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreButtonPromptWidget"));
		return ptr;
	}



	void SetText(const struct FText& Text);
	void SetInputKey(const struct FKey& Key);
	void SetAction(DBDInput_EUIActionType actionType);
	void EnablePrompts();
	void DisablePrompts();
};

// Class DBDUIViewsCore.CoreButtonWidget
// 0x00B8 (FullSize[0x0390] - InheritedSize[0x02D8])
class UCoreButtonWidget : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnHoveredDelegate;                                         // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhoveredDelegate;                                       // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressedDelegate;                                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleasedDelegate;                                        // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClickedDelegate;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     HoveredSfxName;                                            // 0x0328(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               HoveredSfx;                                                // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PressedSfxName;                                            // 0x0340(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               PressedSfx;                                                // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClickedSfxName;                                            // 0x0358(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ClickedSfx;                                                // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewsCore_EAnalogCursorStickiness             AnalogCursorStickiness;                                    // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JOTB[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDButton*                                  HitzoneButton;                                             // 0x0378(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_38V8[0x10];                                    // 0x0380(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreButtonWidget"));
		return ptr;
	}



	void SetVisible(DBDUIViewsCore_EButtonWidgetVisibility visible);
	void SetPressable(bool isPressable);
	void SetHoverable(bool isHoverable);
	void SetHoldable(bool isHoldable);
	void SetEnabled(bool IsEnabled);
	void SetClickable(bool isClickable);
	void SetChargeable(bool isChargeable);
	void OnUnhovered();
	void OnReleased();
	void OnPressed();
	void OnInternalUnhovered();
	void OnInternalReleased();
	void OnInternalPressed();
	void OnInternalHovered();
	void OnInternalClicked();
	void OnHovered();
	void OnClicked();
};

// Class DBDUIViewsCore.CoreRewardWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UCoreRewardWidget : public UUserWidget
{
public:
	class UDBDImage*                                   RewardIcon;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDButton*                                  HitZone;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreRewardWidget"));
		return ptr;
	}



	class UDBDButton* GetHitZone();
	void ClearData();
};

// Class DBDUIViewsCore.CoreCharacterRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCharacterRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreCharacterRewardWidget"));
		return ptr;
	}



	void SetData(const struct FCharacterRewardViewData& CharacterRewardViewData);
};

// Class DBDUIViewsCore.CoreCurrencyRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCurrencyRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreCurrencyRewardWidget"));
		return ptr;
	}



	void SetData(const struct FCurrencyRewardViewData& CurrencyRewardViewData);
};

// Class DBDUIViewsCore.CoreCustomizationRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreCustomizationRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreCustomizationRewardWidget"));
		return ptr;
	}



	void SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData);
};

// Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
// 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_SWL0[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _progressBarInterpSpeed;                                   // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AD9L[0x6C];                                    // 0x02FC(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget"));
		return ptr;
	}



	void UpdateBarProgression(float Progress);
	void PlayToZeroAnimation();
};

// Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerLeftCanvas;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerRightCanvas;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBoxSlot*                          _markerLeftBox;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBoxSlot*                          _markerRightBox;                                           // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QN0G[0x20];                                    // 0x0300(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedItemWidget
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UCoreEquippedItemWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_MUHG[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ItemDisappearSfx;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreEquippedItemWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedPowerWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_XJRZ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreEquippedPowerWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExampleWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreExampleWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_3C31[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EditAnywhere;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnly;                                          // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditInstanceOnly;                                          // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditNoBlueprint;                                           // 0x0328(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnlyBlueprintReadOnly;                         // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleAnywhere;                                           // 0x0348(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleDefaultsOnly;                                       // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleInstanceOnly;                                       // 0x0368(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ExampleButtonClickDelegate;                                // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreExampleWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExternalEffectsWidget
// 0x0278 (FullSize[0x0568] - InheritedSize[0x02F0])
class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_M1G3[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   GridSlotSize;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AddonScaleRatio;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingBetweenRows;                                        // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingPerks;                                              // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingAddons;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingBetweenPerksAndAddons;                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1QZ7[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PerkWidgetClass;                                           // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      AddonWidgetClass;                                          // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  Container;                                                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2K3N[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerkViewData>                       _perkData;                                                 // 0x0338(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCorePerkWidget*>         _perkWidgets;                                              // 0x0348(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCorePerkWidget*>                     _perkPool;                                                 // 0x0398(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _perkViewInterfaces[0x50];                                 // 0x03A8(0x0050) UNKNOWN PROPERTY: MapProperty
	TArray<struct FAddonViewData>                      _addonData;                                                // 0x03F8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreAddonWidget*>        _addonWidgets;                                             // 0x0408(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCoreAddonWidget*>                    _addonPool;                                                // 0x0458(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _addonViewInterfaces[0x50];                                // 0x0468(0x0050) UNKNOWN PROPERTY: MapProperty
	TMap<struct FName, struct FTimerHandle>            _timerHandleMap;                                           // 0x04B8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, class USpacer*>                 _spacerWidgets;                                            // 0x0508(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USpacer*>                             _spacerPool;                                               // 0x0558(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreExternalEffectsWidget"));
		return ptr;
	}



	void HideExternalPerk(const struct FName& PerkId);
	void HideExternalAddon(const struct FName& AddonID);
};

// Class DBDUIViewsCore.CoreGameManualCategoryButton
// 0x0030 (FullSize[0x03C0] - InheritedSize[0x0390])
class UCoreGameManualCategoryButton : public UCoreButtonWidget
{
public:
	class UDBDTextBlock*                               Title;                                                     // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               Description;                                               // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   Icon;                                                      // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   Background;                                                // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  BackgroundTexture;                                         // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreGameManualCategoryButton"));
		return ptr;
	}



	void SetText(const struct FText& Title, const struct FText& Description);
};

// Class DBDUIViewsCore.CoreGameManualPanelWidget
// 0x00D8 (FullSize[0x03B0] - InheritedSize[0x02D8])
class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_2X0D[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDUIViewInterfaces_EGameManualMenuState           _currentSelectedManualMenu;                                // 0x02E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EHelpType                           _currentGameManualTopic;                                   // 0x02E1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F6WG[0x6];                                     // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelWidget*                                CategoryPanel;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               GameCategoryButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               SurvivorCategoryButton;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               KillerCategoryButton;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                TopicsPanel;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreTabContainerWidget*                     GameManualTopicsTabs;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentTitle;                                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentSubtitle;                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDRichTextBlock*                           GameManualContentText;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E28B[0x50];                                    // 0x0330(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _onSetOnboardingMenuSubtitleDelegate;                      // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _onResetOnboardingMenuSubtitleDelegate;                    // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GOBY[0x10];                                    // 0x03A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreGameManualPanelWidget"));
		return ptr;
	}



	void ToggleGameManualMenuState();
	void ShowHelpTopics(DBDSharedTypes_EHelpType categoryType);
	void SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState);
	void SetCurrentOnbardingMenuSubtitle();
	void ResetScrolls(bool resetTopicsScroll);
	void OnTopicTabChanged(int tabIndex);
};

// Class DBDUIViewsCore.CoreHookCountWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreHookCountWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_9F3S[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHookCountWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudAlertWidget
// 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
class UCoreHudAlertWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_8QSY[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDisplayedItems;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondaryAlpha;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FullAlertDuration;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PendingAlertDuration;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AnimationDuration;                                         // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                AnimationEasing;                                           // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UWAE[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTranslationY;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTHR[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreHudScoreAlertItemClass;                                // 0x0318(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreHudStatusEffectAlertItemClass;                         // 0x0320(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  AlertContainer;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreBaseUserWidget*>                 _alerts;                                                   // 0x0330(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreBaseUserWidget*>                 _pendingAlerts;                                            // 0x0340(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudScoreAlertItem*>              _scoreAlertPool;                                           // 0x0350(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudStatusEffectAlertItem*>       _statusEffectAlertPool;                                    // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1KS3[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHudAlertWidget"));
		return ptr;
	}



	void PopAlert();
	void OnPopAlertComplete(class UUITweenInstance* tween);
	void OnClearAlertsComplete(class UUITweenInstance* tween);
	float GetRemainingTime();
	TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
	TArray<class UCoreBaseUserWidget*> GetAlerts();
	void ClearAlerts();
};

// Class DBDUIViewsCore.CoreHudObjectivesWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreHudObjectivesWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_R5VP[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               SpecialSpacer;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHudObjectivesWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudObjectiveWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreHudObjectiveWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_GBI5[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               SpecialSpacer;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHudObjectiveWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudScoreAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHudScoreAlertItem"));
		return ptr;
	}



	void SetData(const struct FScoreAlertViewData& Data);
};

// Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem"));
		return ptr;
	}



	void SetData(const struct FStatusEffectAlertViewData& Data);
};

// Class DBDUIViewsCore.CoreInputPromptTextWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreInputPromptTextWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextField;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        InputKey;                                                  // 0x02E8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                      // 0x0308(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInputPromptTextWidget"));
		return ptr;
	}



	void SetText(const struct FText& Text);
	void SetInputKey(const struct FKey& InputKey);
};

// Class DBDUIViewsCore.CoreInputPromptWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
public:
	struct FText                                       UnfoundInputKeyText;                                       // 0x02D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FKey                                        InputKey;                                                  // 0x02F0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInputPromptWidget"));
		return ptr;
	}



	void SetInputKey(const struct FKey& InputKey);
	void PromptNotFound();
	struct FText GetInputShortDisplayName();
	void DisplayPrompt();
};

// Class DBDUIViewsCore.CoreInteractionProgressWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_ZHJD[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreStatusEffectIcon*>               Proficiencies;                                             // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInteractionProgressWidget"));
		return ptr;
	}



	void SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas);
};

// Class DBDUIViewsCore.CoreInteractionPromptActionWidget
// 0x0040 (FullSize[0x0360] - InheritedSize[0x0320])
class UCoreInteractionPromptActionWidget : public UCoreInputPromptTextWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt2;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       IdleAnimationName;                                         // 0x0328(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X5T1[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        InputKey2;                                                 // 0x0338(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CZYP[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInteractionPromptActionWidget"));
		return ptr;
	}



	void StopIdleAnimation();
	void SetInputKey2(const struct FKey& InputKey2);
	void PlayIdleAnimation();
	bool HasSecondPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptActionMovementWidget
// 0x0050 (FullSize[0x03B0] - InheritedSize[0x0360])
class UCoreInteractionPromptActionMovementWidget : public UCoreInteractionPromptActionWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt3;                                              // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptWidget*                      InputPrompt4;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        InputKey3;                                                 // 0x0370(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKey                                        InputKey4;                                                 // 0x0390(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInteractionPromptActionMovementWidget"));
		return ptr;
	}



	void SetInputKey4(const struct FKey& InputKey4);
	void SetInputKey3(const struct FKey& InputKey3);
	bool HasThirdPrompt();
	bool HasFourthPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
// 0x00B0 (FullSize[0x03A0] - InheritedSize[0x02F0])
class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_1VZI[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDWrapBox*                                 CenterContainerBox;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDWrapBox*                                 ContainerBox;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InteractionPromptWidgetClass;                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedPrompts;                                       // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedCenterPrompts;                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     SlotMargin;                                                // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UCoreInteractionPromptWidget*>        _promptWidgetPool;                                         // 0x0330(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreInteractionPromptWidget*>        _centerPromptWidgetPool;                                   // 0x0340(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreInteractionPromptWidget*> _displayedPromptsMap;                                      // 0x0350(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptWidget
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UCoreInteractionPromptWidget : public UUserWidget
{
public:
	float                                              LargeTextScale;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IYFQ[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScaleBox*                                   LargeTextScaleBox;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextManager*                             _textManager;                                              // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreInteractionPromptWidget"));
		return ptr;
	}



	void SetData(const struct FInteractionPromptViewData& Data);
	void OnLargeTextSettingsChanged(bool isLargeTextEnabled);
	void ClearData();
};

// Class DBDUIViewsCore.CoreItemBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCoreItemBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_7OHS[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreItemBundleWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreItemInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_WM8T[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreItemInteractionWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_LTUQ[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreItemWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreLeaningArrowsWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_UIOY[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreLeaningArrowsWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreMatchResultWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreMatchResultWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_MAH8[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreMatchResultWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_QK0V[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOfferingInteractionWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_Q6RL[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOfferingWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget"));
		return ptr;
	}



	void SetOnboardingMenuTitle(const struct FText& menuTitle);
	void SetOnboardingMenuSubtitle(const struct FText& menuTitle);
	void SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle);
	void ResetOnboardingMenuSubtitle();
};

// Class DBDUIViewsCore.CoreOnboardingMenuWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_7DLO[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoreTabContainerWidget*                     OnboardingMenuTabs;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreOnboardingMenuTitleWidget*              menuTitle;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreButtonPromptWidget*                     BackButton;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    BackActionDelegate;                                        // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    TabSelectionChangedActionDelegate;                         // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_407G[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOnboardingMenuWidget"));
		return ptr;
	}



	void SetTitleText(bool IsInTutorial);
	void SetBackButtonText(bool isFTUE);
	void OnOnboardingTabChanged(int tabIndex);
};

// Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
// 0x00E8 (FullSize[0x0478] - InheritedSize[0x0390])
class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
{
public:
	struct FScriptMulticastDelegate                    OnSetDataAnimationCompleteDelegate;                        // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FString                                     UnavailablePressedSfxName;                                 // 0x03A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               UnavailablePressedSfx;                                     // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               TitleText;                                                 // 0x03B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               DescriptionText;                                           // 0x03C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               RewardsText;                                               // 0x03C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   RoleIcon;                                                  // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             StateSwitcher;                                             // 0x03D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   LockedImage;                                               // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   CompletedImage;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreRewardWrapperWidget*>            RewardWrappers;                                            // 0x03F0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOnboardingTutorialButtonViewData           viewData;                                                  // 0x0400(0x0078) (BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget"));
		return ptr;
	}



	void SetVisual();
	void SetUIEnabled(bool Enabled);
	void SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation);
	void OnRewardReleased();
	void OnRewardPressed();
	void OnRewardClicked();
	bool IsInUnavailableStep();
};

// Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_WWLC[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreOnboardingTutorialButtonWidget*> TutorialButtons;                                           // 0x02E0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    TutorialSelectedDelegate;                                  // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	TArray<struct FPendingStepData>                    _pendingData;                                              // 0x0300(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget"));
		return ptr;
	}



	void SetTutorialSeparators(const struct FString& completedStepId);
	void SetTutorialDescription(const struct FText& Description, bool isWarning);
	void NextPendingButtonUpdated();
	void CheckNextPendingButtonUpdate();
};

// Class DBDUIViewsCore.CorePerksContainerWidget
// 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
class UCorePerksContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_4ZJ4[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _perkViewInterfaces[0x10];                                 // 0x0308(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePerksContainerWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePerkWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_X9EJ[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePerkWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePingStatusWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCorePingStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_IED4[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePingStatusWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_JFLJ[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePlayerStatusWidget*>             PlayerStatusWidgets;                                       // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _playerStatusViewInterfaces[0x10];                         // 0x0310(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget"));
		return ptr;
	}



	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void ClearVisual();
};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget"));
		return ptr;
	}



	void AfflictionHit();
};

// Class DBDUIViewsCore.CorePlayerStatusWidget
// 0x0190 (FullSize[0x0480] - InheritedSize[0x02F0])
class UCorePlayerStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_5WCB[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EPlayerStatus, struct FPlayerStatusAssets> PlayerStatusAssets;                                        // 0x02F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ObsessionSfx;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               PlayerNameTextfield;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                                    KillerStatusContainer;                                     // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UClass*>           KillerStatusEffectWidgetClasses;                           // 0x0360(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayerStatusViewData                       _cachedViewData;                                           // 0x03B0(0x0078) (BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PLJQ[0x50];                                    // 0x0428(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCorePlayerStatusKillerEffectWidget*         _killerStatusEffectWidget;                                 // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePlayerStatusWidget"));
		return ptr;
	}



	bool ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState);
	bool HasTimerProgressChanged(float newTimerProgress);
	bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	bool HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus newPlayerState);
	bool HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState);
	bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	DBDSharedTypes_EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
	class UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget();
};

// Class DBDUIViewsCore.CorePowerBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCorePowerBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_ZS1R[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePowerBundleWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePowerWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_HW2J[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CorePowerWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreProgressionRewardWidget
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UCoreProgressionRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreProgressionRewardWidget"));
		return ptr;
	}



	void SetData(const struct FProgressionRewardViewData& ProgressionRewardViewData);
};

// Class DBDUIViewsCore.CoreRewardWrapperWidget
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UCoreRewardWrapperWidget : public UUserWidget
{
public:
	class UClass*                                      CharacterRewardWidget;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CurrencyRewardWidget;                                      // 0x0268(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CustomizationRewardWidget;                                 // 0x0270(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ProgressionRewardWidget;                                   // 0x0278(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                RewardContainer;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreRewardWidget*                           _rewardWidget;                                             // 0x0288(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreRewardWrapperWidget"));
		return ptr;
	}



	void SetData(const struct FRewardWrapperViewData& viewData);
	class UCoreRewardWidget* GetRewardWidget();
	void ClearData();
};

// Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_9R86[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T0R7[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                Container;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ScreenIndicatorClass;                                      // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class UCoreScreenIndicatorWidget*> _screenIndicatorsMap;                                      // 0x0310(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCoreScreenIndicatorWidget*>          _screenIndicatorsPool;                                     // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget"));
		return ptr;
	}



	TMap<struct FString, class UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
	struct FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value);
};

// Class DBDUIViewsCore.CoreScreenIndicatorWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{
public:
	float                                              InactiveTime;                                              // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IndicatorPadding;                                          // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DistanceClamping;                                          // 0x02E4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceRatio;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceAlpha;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACDF[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreScreenIndicatorWidget"));
		return ptr;
	}



	void SetData(const struct FScreenIndicatorViewData& Data);
	void ClearData();
};

// Class DBDUIViewsCore.CoreSelectableButtonWidget
// 0x0018 (FullSize[0x03A8] - InheritedSize[0x0390])
class UCoreSelectableButtonWidget : public UCoreButtonWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedDelegate;                                        // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               _isSelected;                                               // 0x03A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z7C8[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreSelectableButtonWidget"));
		return ptr;
	}



	void SetSelected(bool IsSelected);
	void OnSelected();
	bool IsSelected();
};

// Class DBDUIViewsCore.CoreSkillCheckWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreSkillCheckWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_IG86[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreSkillCheckWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreSpectateBarWidget
// 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
class UCoreSpectateBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_3SIJ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _leaveButtonClickDelegate;                                 // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _leftArrowClickDelegate;                                   // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _rightArrowClickDelegate;                                  // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreSpectateBarWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStartSequenceWidget
// 0x00A0 (FullSize[0x0390] - InheritedSize[0x02F0])
class UCoreStartSequenceWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_DDRO[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeInDuration;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutDuration;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeInEasing;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeOutEasing;                                             // 0x0301(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_THEQ[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EThemeColorId, struct FLinearColor> BorderColors;                                              // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultColor;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               ThemeNameTextfield;                                        // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SeparatorImage;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MapNameTextfield;                                          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    StartSequenceFadeOutDelegate;                              // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreStartSequenceWidget"));
		return ptr;
	}



	void OnHideStartSequenceComplete(class UUITweenInstance* tween);
};

// Class DBDUIViewsCore.CoreStatusEffectIcon
// 0x0058 (FullSize[0x0330] - InheritedSize[0x02D8])
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_19MB[0x58];                                    // 0x02D8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreStatusEffectIcon"));
		return ptr;
	}



	void UpdateWidget();
	void UpdatePercentageFill(float Percentage);
	void SetStatusEffectData(const struct FStatusEffectViewData& Data);
	void SetInactiveTicks(int inactiveTicks);
	struct FStatusEffectViewData GetStatusEffectData();
	int GetInactiveTicks();
};

// Class DBDUIViewsCore.CoreStatusEffectWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreStatusEffectWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_9EFY[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PrepooledItemAmount;                                       // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemsByColumn;                                             // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EvenColumnOffset;                                          // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreStatusEffectIconClass;                                 // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  StatusEffectContainer;                                     // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreStatusEffectIcon*>               _statusEffectPool;                                         // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _statusEffectOrder;                                        // 0x0328(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreStatusEffectIcon*>   _statusEffectMap;                                          // 0x0338(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreStatusEffectWidget"));
		return ptr;
	}



	TMap<struct FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
};

// Class DBDUIViewsCore.CoreTabContainerWidget
// 0x0068 (FullSize[0x0340] - InheritedSize[0x02D8])
class UCoreTabContainerWidget : public UCoreBaseUserWidget
{
public:
	bool                                               AlignHorizontally;                                         // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9LOL[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     TabPadding;                                                // 0x02DC(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GKRS[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTabClass;                                              // 0x02F0(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  TabContainer;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UseControllerTabSwitching;                                 // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CanLoop;                                                   // 0x0301(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VGM6[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _selectedTabChangedDelegate;                               // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RAO9[0x10];                                    // 0x0318(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreTabWidget*>                      _tabs;                                                     // 0x0328(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8LHB[0x8];                                     // 0x0338(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTabContainerWidget"));
		return ptr;
	}



	void SetAllTabsEnabled(bool Enabled);
	void SelectTab(int tabIndex);
	void SelectPreviousTab();
	void SelectNextTab();
	void OnSelectedTabChanged(int newTabIndex);
	void Init(TArray<struct FText> tabTitles, int selectedIndex);
	void Clear();
};

// Class DBDUIViewsCore.CoreTabWidget
// 0x09D8 (FullSize[0x0D68] - InheritedSize[0x0390])
class UCoreTabWidget : public UCoreButtonWidget
{
public:
	bool                                               IsUsingCustomWidgetStateStyles;                            // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HJPA[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTabStyle                                   WidgetDefaultStyle;                                        // 0x0398(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FTabStyle                                   WidgetSelectedStyle;                                       // 0x06D0(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FTabStyle                                   WidgetDisabledStyle;                                       // 0x0A08(0x0338) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	int                                                tabIndex;                                                  // 0x0D40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_027X[0x4];                                     // 0x0D44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               TabTextField;                                              // 0x0D48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   TabImage;                                                  // 0x0D50(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _tabTriggeredDelegate;                                     // 0x0D58(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTabWidget"));
		return ptr;
	}



	void SetVisualState(DBDUIViewsCore_ETabWidgetState newState);
	void ButtonClicked();
};

// Class DBDUIViewsCore.CoreTemplateWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UCoreTemplateWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_68KB[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTemplateWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTestBuildFlagWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_D9L2[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  TopLineTextfield;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BottomLineTextfield;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTestBuildFlagWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_DFCU[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialObjectiveItem
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    TutorialObjectiveCompletedDelegate;                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTutorialObjectiveItem"));
		return ptr;
	}



	void SetObjectiveCompleted(bool removeAfterCompletion);
	void InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData);
};

// Class DBDUIViewsCore.CoreTutorialObjectivesContainer
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_WOM9[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTutorialObjectiveItemClass;                            // 0x02F8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BasePooledInstanceAmount;                                  // 0x0300(0x0004) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K79A[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGridPanel*                                  ObjectiveContainer;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreTutorialObjectiveItem*>          _objectivePool;                                            // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreTutorialObjectiveItem*> _objectiveItems;                                           // 0x0320(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTutorialObjectivesContainer"));
		return ptr;
	}



	void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
};

// Class DBDUIViewsCore.CoreTutorialPopupWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_RGIQ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ClosePopupSfx;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _notifTutoConfirmButtonClickDelegate;                      // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CoreTutorialPopupWidget"));
		return ptr;
	}



};

// Class DBDUIViewsCore.CurrencyTooltipWidget
// 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
class UCurrencyTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               CurrencyTB;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               CurrencyTitleTB;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDRichTextBlock*                           CurrencyDescriptionRTB;                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CurrencyTooltipWidget"));
		return ptr;
	}



	void SetTooltipData(const struct FCurrencyTooltipViewData& currencyViewData);
};

// Class DBDUIViewsCore.CustomizationTooltipWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCustomizationTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               ToolTipStatusTB;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.CustomizationTooltipWidget"));
		return ptr;
	}



	void SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData);
	void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked);
};

// Class DBDUIViewsCore.DBDButton
// 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
class UDBDButton : public UButton
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDButton"));
		return ptr;
	}



};

// Class DBDUIViewsCore.DBDImage
// 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
class UDBDImage : public UImage
{
public:
	class UTexture2D*                                  DefaultImage;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5R6J[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDImage"));
		return ptr;
	}



	void SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize);
	void SetBrushFromSoftTextureWithDefault(bool matchSize);
};

// Class DBDUIViewsCore.DBDRichTextBlock
// 0x0018 (FullSize[0x06E0] - InheritedSize[0x06C8])
class UDBDRichTextBlock : public URichTextBlock
{
public:
	bool                                               _debugPreviewUndockedState;                                // 0x06C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ASQ6[0xF];                                     // 0x06C9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isUpperCase;                                              // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QIZ7[0x6];                                     // 0x06DA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDRichTextBlock"));
		return ptr;
	}



	void SetIsUpperCase(bool isUpperCase);
	void SetHTMLText(const struct FText& InText);
	void SetHasUndocking(bool hasUndocking);
	void OnSwitchDockStateChanged(bool isDocked);
	bool GetIsUpperCase();
	bool GetHasUndocking();
};

// Class DBDUIViewsCore.DBDScrollBox
// 0x0030 (FullSize[0x0938] - InheritedSize[0x0908])
class UDBDScrollBox : public UScrollBox
{
public:
	bool                                               _useControllerScroll;                                      // 0x0908(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _shouldScrollOnMouseOver;                                  // 0x0909(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5IQC[0x2];                                     // 0x090A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _scrollSpeed;                                              // 0x090C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _displayPrompt;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       _displayPromptText;                                        // 0x0918(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoClear, Protected, NativeAccessSpecifierProtected)
	DBDUIViewsCore_EShowScrollDisplayPrompt            _showDisplayPrompt;                                        // 0x0930(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VTUQ[0x7];                                     // 0x0931(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDScrollBox"));
		return ptr;
	}



	void UpdateDisplayPrompt();
	void OnControlModeChanged(DBDSharedTypes_EControlMode controlMode);
	bool IsMouseOver();
	void HandleControllerInput(float analogValue);
};

// Class DBDUIViewsCore.DBDTextBlock
// 0x00F0 (FullSize[0x03D8] - InheritedSize[0x02E8])
class UDBDTextBlock : public UTextBlock
{
public:
	bool                                               _debugPreviewLargeTextState;                               // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _debugPreviewUndockedState;                                // 0x02E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_24RS[0x6];                                     // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USwitchDockStateManager*                     _switchDockStateManager;                                   // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextManager*                             _textManager;                                              // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUpperCase;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasLargeText;                                             // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0HV5[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTextDockingProperties                   _largeTextProperties;                                      // 0x0308(0x0040) (Edit, BlueprintVisible, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GR6K[0x1];                                     // 0x0348(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _overrideUndockedPropertiesWithLargeText;                  // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PP88[0x5];                                     // 0x034B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTextDockingProperties                   _undockedProperties;                                       // 0x0350(0x0040) (Edit, BlueprintVisible, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GG80[0x48];                                    // 0x0390(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDTextBlock"));
		return ptr;
	}



	void SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties);
	void SetOverrideUndockedPropertiesWithLargeText(bool overrideUndockedPropertiesWithLargeText);
	void SetLargeTextProperties(const struct FDBDTextDockingProperties& largeTextProperties);
	void SetIsUpperCase(bool isUpperCase);
	void SetHasUndocking(bool hasUndocking);
	void SetHasLargeText(bool hasLargeText);
	void OnSwitchDockStateChanged(bool isDocked);
	void OnLargeTextSettingsChanged(bool isLargeText);
	struct FDBDTextDockingProperties GetUndockedProperties();
	bool GetOverrideUndockedPropertiesWithLargeText();
	struct FDBDTextDockingProperties GetLargeTextProperties();
	bool GetIsUpperCase();
	bool GetHasUndocking();
	bool GetHasLargeText();
};

// Class DBDUIViewsCore.DBDTooltipManager
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UDBDTooltipManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_MZ5Z[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 _currentTooltip;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDTooltipManager"));
		return ptr;
	}



	void ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCurrencyTooltip(const struct FCurrencyTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void HideTooltip();
};

// Class DBDUIViewsCore.DBDWrapBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UDBDWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x014D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5UD[0x12];                                    // 0x014E(0x0012) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDWrapBox"));
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

// Class DBDUIViewsCore.DBDWrapBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UDBDWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FJOX[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_54TY[0xE];                                     // 0x005A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.DBDWrapBoxSlot"));
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class DBDUIViewsCore.TestWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTestWidget : public UUserWidget
{
public:
	class UPanelWidget*                                Workbench;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               showWorkbench;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_36KS[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class DBDUIViewsCore.TestWidget"));
		return ptr;
	}



	void SetShowWorkbench(bool showWorkbench);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
