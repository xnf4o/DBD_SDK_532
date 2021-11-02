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
// Parameters
//---------------------------------------------------------------------------

// Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
struct UCoreBaseUserWidget_UpdateScale_Params
{
	float                                              Scale;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
struct UCoreBaseUserWidget_RegisterForInput_Params
{
};

// Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
struct UCoreBaseUserWidget_OnControlModeChangedBP_Params
{
	DBDSharedTypes_EControlMode                        controlMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
struct UCoreBaseUserWidget_DeregisterFromInput_Params
{
};

// Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
struct UCharacterTooltipWidget_SetTooltipData_Params
{
	struct FCharacterTooltipViewData                   characterViewData;                                         // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
struct UCharacterTooltipWidget_SetLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
struct UCharacterTooltipWidget_SetDifficulty_Params
{
	DBDSharedTypes_ECharacterDifficulty                Difficulty;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
struct UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params
{
	int                                                StackCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params
{
	DBDSharedTypes_EItemRarity                         Rarity;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
struct UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params
{
};

// Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
struct UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
struct UCoreBaseHudWidget_PlayFocusAnimation_Params
{
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
struct UCoreButtonPromptWidget_SetText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
struct UCoreButtonPromptWidget_SetInputKey_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
struct UCoreButtonPromptWidget_SetAction_Params
{
	DBDInput_EUIActionType                             actionType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
struct UCoreButtonPromptWidget_EnablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
struct UCoreButtonPromptWidget_DisablePrompts_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.SetVisible
struct UCoreButtonWidget_SetVisible_Params
{
	DBDUIViewsCore_EButtonWidgetVisibility             visible;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetPressable
struct UCoreButtonWidget_SetPressable_Params
{
	bool                                               isPressable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
struct UCoreButtonWidget_SetHoverable_Params
{
	bool                                               isHoverable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
struct UCoreButtonWidget_SetHoldable_Params
{
	bool                                               isHoldable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
struct UCoreButtonWidget_SetEnabled_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetClickable
struct UCoreButtonWidget_SetClickable_Params
{
	bool                                               isClickable;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
struct UCoreButtonWidget_SetChargeable_Params
{
	bool                                               isChargeable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
struct UCoreButtonWidget_OnUnhovered_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnReleased
struct UCoreButtonWidget_OnReleased_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnPressed
struct UCoreButtonWidget_OnPressed_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
struct UCoreButtonWidget_OnInternalUnhovered_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
struct UCoreButtonWidget_OnInternalReleased_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
struct UCoreButtonWidget_OnInternalPressed_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
struct UCoreButtonWidget_OnInternalHovered_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
struct UCoreButtonWidget_OnInternalClicked_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnHovered
struct UCoreButtonWidget_OnHovered_Params
{
};

// Function DBDUIViewsCore.CoreButtonWidget.OnClicked
struct UCoreButtonWidget_OnClicked_Params
{
};

// Function DBDUIViewsCore.CoreRewardWidget.GetHitZone
struct UCoreRewardWidget_GetHitZone_Params
{
	class UDBDButton*                                  ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWidget.ClearData
struct UCoreRewardWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
struct UCoreCharacterRewardWidget_SetData_Params
{
	struct FCharacterRewardViewData                    CharacterRewardViewData;                                   // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData
struct UCoreCurrencyRewardWidget_SetData_Params
{
	struct FCurrencyRewardViewData                     CurrencyRewardViewData;                                    // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
struct UCoreCustomizationRewardWidget_SetData_Params
{
	struct FCustomizationRewardViewData                CustomizationRewardViewData;                               // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
struct UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params
{
	float                                              Progress;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
struct UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params
{
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
struct UCoreExternalEffectsWidget_HideExternalPerk_Params
{
	struct FName                                       PerkId;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
struct UCoreExternalEffectsWidget_HideExternalAddon_Params
{
	struct FName                                       AddonID;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
struct UCoreGameManualCategoryButton_SetText_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0000(0x0018)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
struct UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params
{
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
struct UCoreGameManualPanelWidget_ShowHelpTopics_Params
{
	DBDSharedTypes_EHelpType                           categoryType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
struct UCoreGameManualPanelWidget_SetGameManualMenuState_Params
{
	DBDUIViewInterfaces_EGameManualMenuState           menuState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
struct UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params
{
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
struct UCoreGameManualPanelWidget_ResetScrolls_Params
{
	bool                                               resetTopicsScroll;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged
struct UCoreGameManualPanelWidget_OnTopicTabChanged_Params
{
	int                                                tabIndex;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
struct UCoreHudAlertWidget_PopAlert_Params
{
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
struct UCoreHudAlertWidget_OnPopAlertComplete_Params
{
	class UUITweenInstance*                            tween;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
struct UCoreHudAlertWidget_OnClearAlertsComplete_Params
{
	class UUITweenInstance*                            tween;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
struct UCoreHudAlertWidget_GetRemainingTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
struct UCoreHudAlertWidget_GetPendingAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
struct UCoreHudAlertWidget_GetAlerts_Params
{
	TArray<class UCoreBaseUserWidget*>                 ReturnValue;                                               // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
struct UCoreHudAlertWidget_ClearAlerts_Params
{
};

// Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
struct UCoreHudScoreAlertItem_SetData_Params
{
	struct FScoreAlertViewData                         Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
struct UCoreHudStatusEffectAlertItem_SetData_Params
{
	struct FStatusEffectAlertViewData                  Data;                                                      // 0x0000(0x01A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
struct UCoreInputPromptTextWidget_SetText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
struct UCoreInputPromptTextWidget_SetInputKey_Params
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
struct UCoreInputPromptWidget_SetInputKey_Params
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
struct UCoreInputPromptWidget_PromptNotFound_Params
{
};

// Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
struct UCoreInputPromptWidget_GetInputShortDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
struct UCoreInputPromptWidget_DisplayPrompt_Params
{
};

// Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
struct UCoreInteractionProgressWidget_SetProficiencies_Params
{
	TArray<struct FStatusEffectViewData>               proficiencyDatas;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
struct UCoreInteractionPromptActionWidget_StopIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
struct UCoreInteractionPromptActionWidget_SetInputKey2_Params
{
	struct FKey                                        InputKey2;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
struct UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params
{
};

// Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
struct UCoreInteractionPromptActionWidget_HasSecondPrompt_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4
struct UCoreInteractionPromptActionMovementWidget_SetInputKey4_Params
{
	struct FKey                                        InputKey4;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3
struct UCoreInteractionPromptActionMovementWidget_SetInputKey3_Params
{
	struct FKey                                        InputKey3;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt
struct UCoreInteractionPromptActionMovementWidget_HasThirdPrompt_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt
struct UCoreInteractionPromptActionMovementWidget_HasFourthPrompt_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
struct UCoreInteractionPromptWidget_SetData_Params
{
	struct FInteractionPromptViewData                  Data;                                                      // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
struct UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params
{
	bool                                               isLargeTextEnabled;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
struct UCoreInteractionPromptWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params
{
	struct FText                                       menuTitle;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params
{
	struct FText                                       menuTitle;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
struct UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params
{
	struct FText                                       menuTitle;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       menuSubTitle;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
struct UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
struct UCoreOnboardingMenuWidget_SetTitleText_Params
{
	bool                                               IsInTutorial;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButtonText
struct UCoreOnboardingMenuWidget_SetBackButtonText_Params
{
	bool                                               isFTUE;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged
struct UCoreOnboardingMenuWidget_OnOnboardingTabChanged_Params
{
	int                                                tabIndex;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
struct UCoreOnboardingTutorialButtonWidget_SetVisual_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
struct UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
struct UCoreOnboardingTutorialButtonWidget_SetData_Params
{
	struct FOnboardingTutorialButtonViewData           viewData;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               isRefreshingWithAnimation;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
struct UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
struct UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
struct UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
struct UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
struct UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params
{
	struct FString                                     completedStepId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
struct UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params
{
	struct FText                                       Description;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               isWarning;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
struct UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params
{
};

// Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
struct UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params
{
};

// Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
struct UCorePlayerStatusKillerEffectWidget_SetKillerData_Params
{
	struct FPlayerStatusViewData                       Data;                                                      // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
struct UCorePlayerStatusKillerEffectWidget_ClearVisual_Params
{
};

// Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
struct UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params
{
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
struct UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params
{
	DBDSharedTypes_ESleepingUIState                    newSleepState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
struct UCorePlayerStatusWidget_HasTimerProgressChanged_Params
{
	float                                              newTimerProgress;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
struct UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
struct UCorePlayerStatusWidget_HasPlayerStateChanged_Params
{
	DBDSharedTypes_EPlayerStatus                       newPlayerState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
struct UCorePlayerStatusWidget_HasObsessionStateChanged_Params
{
	DBDSharedTypes_EObsessionUIState                   newObsessionState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
struct UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
struct UCorePlayerStatusWidget_GetPlayerStateChangeType_Params
{
	struct FPlayerStatusViewData                       newViewData;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStateChangeType              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
struct UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params
{
	class UCorePlayerStatusKillerEffectWidget*         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData
struct UCoreProgressionRewardWidget_SetData_Params
{
	struct FProgressionRewardViewData                  ProgressionRewardViewData;                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
struct UCoreRewardWrapperWidget_SetData_Params
{
	struct FRewardWrapperViewData                      viewData;                                                  // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
struct UCoreRewardWrapperWidget_GetRewardWidget_Params
{
	class UCoreRewardWidget*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
struct UCoreRewardWrapperWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
struct UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params
{
	TMap<struct FString, class UCoreScreenIndicatorWidget*> ReturnValue;                                               // 0x0000(0x0050)  (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
struct UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params
{
	class UCoreScreenIndicatorWidget*                  value;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
struct UCoreScreenIndicatorWidget_SetData_Params
{
	struct FScreenIndicatorViewData                    Data;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
struct UCoreScreenIndicatorWidget_ClearData_Params
{
};

// Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
struct UCoreSelectableButtonWidget_SetSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelected
struct UCoreSelectableButtonWidget_OnSelected_Params
{
};

// Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
struct UCoreSelectableButtonWidget_IsSelected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
struct UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params
{
	class UUITweenInstance*                            tween;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
struct UCoreStatusEffectIcon_UpdateWidget_Params
{
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
struct UCoreStatusEffectIcon_UpdatePercentageFill_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
struct UCoreStatusEffectIcon_SetStatusEffectData_Params
{
	struct FStatusEffectViewData                       Data;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
struct UCoreStatusEffectIcon_SetInactiveTicks_Params
{
	int                                                inactiveTicks;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
struct UCoreStatusEffectIcon_GetStatusEffectData_Params
{
	struct FStatusEffectViewData                       ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
struct UCoreStatusEffectIcon_GetInactiveTicks_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
struct UCoreStatusEffectWidget_GetStatusEffectMap_Params
{
	TMap<struct FName, class UCoreStatusEffectIcon*>   ReturnValue;                                               // 0x0000(0x0050)  (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled
struct UCoreTabContainerWidget_SetAllTabsEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab
struct UCoreTabContainerWidget_SelectTab_Params
{
	int                                                tabIndex;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab
struct UCoreTabContainerWidget_SelectPreviousTab_Params
{
};

// Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab
struct UCoreTabContainerWidget_SelectNextTab_Params
{
};

// Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged
struct UCoreTabContainerWidget_OnSelectedTabChanged_Params
{
	int                                                newTabIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.Init
struct UCoreTabContainerWidget_Init_Params
{
	TArray<struct FText>                               tabTitles;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                selectedIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabContainerWidget.Clear
struct UCoreTabContainerWidget_Clear_Params
{
};

// Function DBDUIViewsCore.CoreTabWidget.SetVisualState
struct UCoreTabWidget_SetVisualState_Params
{
	DBDUIViewsCore_ETabWidgetState                     newState;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTabWidget.ButtonClicked
struct UCoreTabWidget_ButtonClicked_Params
{
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
struct UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params
{
	bool                                               removeAfterCompletion;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
struct UCoreTutorialObjectiveItem_InitObjective_Params
{
	struct FTutorialObjectivesViewData                 interactionsViewData;                                      // 0x0000(0x0170)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
struct UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params
{
	class UCoreTutorialObjectiveItem*                  Item;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData
struct UCurrencyTooltipWidget_SetTooltipData_Params
{
	struct FCurrencyTooltipViewData                    currencyViewData;                                          // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
struct UCustomizationTooltipWidget_SetTooltipData_Params
{
	struct FCustomizationTooltipViewData               customizationViewData;                                     // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
struct UCustomizationTooltipWidget_SetStatusText_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
struct UDBDImage_SetBrushFromTextureWithDefault_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               matchSize;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
struct UDBDImage_SetBrushFromSoftTextureWithDefault_Params
{
	bool                                               matchSize;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
struct UDBDRichTextBlock_SetIsUpperCase_Params
{
	bool                                               isUpperCase;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
struct UDBDRichTextBlock_SetHTMLText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking
struct UDBDRichTextBlock_SetHasUndocking_Params
{
	bool                                               hasUndocking;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
struct UDBDRichTextBlock_OnSwitchDockStateChanged_Params
{
	bool                                               isDocked;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
struct UDBDRichTextBlock_GetIsUpperCase_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking
struct UDBDRichTextBlock_GetHasUndocking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
struct UDBDScrollBox_UpdateDisplayPrompt_Params
{
};

// Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
struct UDBDScrollBox_OnControlModeChanged_Params
{
	DBDSharedTypes_EControlMode                        controlMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
struct UDBDScrollBox_IsMouseOver_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
struct UDBDScrollBox_HandleControllerInput_Params
{
	float                                              analogValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
struct UDBDTextBlock_SetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   undockedProperties;                                        // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetOverrideUndockedPropertiesWithLargeText
struct UDBDTextBlock_SetOverrideUndockedPropertiesWithLargeText_Params
{
	bool                                               overrideUndockedPropertiesWithLargeText;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetLargeTextProperties
struct UDBDTextBlock_SetLargeTextProperties_Params
{
	struct FDBDTextDockingProperties                   largeTextProperties;                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
struct UDBDTextBlock_SetIsUpperCase_Params
{
	bool                                               isUpperCase;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
struct UDBDTextBlock_SetHasUndocking_Params
{
	bool                                               hasUndocking;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.SetHasLargeText
struct UDBDTextBlock_SetHasLargeText_Params
{
	bool                                               hasLargeText;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
struct UDBDTextBlock_OnSwitchDockStateChanged_Params
{
	bool                                               isDocked;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
struct UDBDTextBlock_OnLargeTextSettingsChanged_Params
{
	bool                                               isLargeText;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
struct UDBDTextBlock_GetUndockedProperties_Params
{
	struct FDBDTextDockingProperties                   ReturnValue;                                               // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetOverrideUndockedPropertiesWithLargeText
struct UDBDTextBlock_GetOverrideUndockedPropertiesWithLargeText_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetLargeTextProperties
struct UDBDTextBlock_GetLargeTextProperties_Params
{
	struct FDBDTextDockingProperties                   ReturnValue;                                               // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
struct UDBDTextBlock_GetIsUpperCase_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
struct UDBDTextBlock_GetHasUndocking_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTextBlock.GetHasLargeText
struct UDBDTextBlock_GetHasLargeText_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
struct UDBDTooltipManager_ShowCustomizationTooltip_Params
{
	struct FCustomizationTooltipViewData               tooltipViewData;                                           // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // 0x0000(0x0038)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
struct UDBDTooltipManager_ShowCurrencyTooltip_Params
{
	struct FCurrencyTooltipViewData                    tooltipViewData;                                           // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // 0x0000(0x0038)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
struct UDBDTooltipManager_ShowCharacterTooltip_Params
{
	struct FCharacterTooltipViewData                   tooltipViewData;                                           // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGeometry                                   triggerGeometry;                                           // 0x0000(0x0038)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
struct UDBDTooltipManager_HideTooltip_Params
{
};

// Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
struct UDBDWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
struct UDBDWrapBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
struct UDBDWrapBox_AddChildToWrapBox_Params
{
	class UWidget*                                     Content;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDWrapBoxSlot*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
struct UDBDWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
struct UDBDWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
struct UDBDWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
struct UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
struct UDBDWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIViewsCore.TestWidget.SetShowWorkbench
struct UTestWidget_SetShowWorkbench_Params
{
	bool                                               showWorkbench;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
