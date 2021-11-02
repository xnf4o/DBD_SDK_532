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
// Enums
//---------------------------------------------------------------------------

// Enum DBDUIViewsCore.EAnalogCursorStickiness
enum class DBDUIViewsCore_EAnalogCursorStickiness : uint8_t
{
	EAnalogCursorStickiness__None  = 0,
	EAnalogCursorStickiness__ButtonSmall = 1,
	EAnalogCursorStickiness__ButtonMedium = 2,
	EAnalogCursorStickiness__ButtonLarge = 3,
	EAnalogCursorStickiness__Bloodweb = 4,
	EAnalogCursorStickiness__Slow  = 5,
	EAnalogCursorStickiness__EAnalogCursorStickiness_MAX = 6,

};

// Enum DBDUIViewsCore.EButtonWidgetVisibility
enum class DBDUIViewsCore_EButtonWidgetVisibility : uint8_t
{
	EButtonWidgetVisibility__Visible = 0,
	EButtonWidgetVisibility__Collapsed = 1,
	EButtonWidgetVisibility__Hidden = 2,
	EButtonWidgetVisibility__EButtonWidgetVisibility_MAX = 3,

};

// Enum DBDUIViewsCore.EBackgroundProgressBarState
enum class DBDUIViewsCore_EBackgroundProgressBarState : uint8_t
{
	EBackgroundProgressBarState__Empty = 0,
	EBackgroundProgressBarState__Quarter = 1,
	EBackgroundProgressBarState__Half = 2,
	EBackgroundProgressBarState__ThreeQuarters = 3,
	EBackgroundProgressBarState__Full = 4,
	EBackgroundProgressBarState__EBackgroundProgressBarState_MAX = 5,

};

// Enum DBDUIViewsCore.EPlayerStatusBloodSplatterType
enum class DBDUIViewsCore_EPlayerStatusBloodSplatterType : uint8_t
{
	EPlayerStatusBloodSplatterType__None = 0,
	EPlayerStatusBloodSplatterType__Top = 1,
	EPlayerStatusBloodSplatterType__Bottom = 2,
	EPlayerStatusBloodSplatterType__EPlayerStatusBloodSplatterType_MAX = 3,

};

// Enum DBDUIViewsCore.ETabWidgetState
enum class DBDUIViewsCore_ETabWidgetState : uint8_t
{
	ETabWidgetState__Unselected    = 0,
	ETabWidgetState__Selected      = 1,
	ETabWidgetState__Disabled      = 2,
	ETabWidgetState__Hidden        = 3,
	ETabWidgetState__ETabWidgetState_MAX = 4,

};

// Enum DBDUIViewsCore.EShowScrollDisplayPrompt
enum class DBDUIViewsCore_EShowScrollDisplayPrompt : uint8_t
{
	EShowScrollDisplayPrompt__DontShow = 0,
	EShowScrollDisplayPrompt__AlwaysShow = 1,
	EShowScrollDisplayPrompt__ShowOnMouseOver = 2,
	EShowScrollDisplayPrompt__EShowScrollDisplayPrompt_MAX = 3,

};

// Enum DBDUIViewsCore.ETooltipType
enum class DBDUIViewsCore_ETooltipType : uint8_t
{
	ETooltipType__None             = 0,
	ETooltipType__Character        = 1,
	ETooltipType__Currency         = 2,
	ETooltipType__Customization    = 3,
	ETooltipType__ETooltipType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewsCore.OnboardingTutorialButtonViewData
// 0x0078
struct FOnboardingTutorialButtonViewData
{
	DBDSharedTypes_EOnboardingStepStatus               StepStatus;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6S5W[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     stepId;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tutorialId;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardWrapperViewData>              RewardsData;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingTutorialButtonStyle      ButtonStyle;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKHZ[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewsCore.PendingTutorialData
// 0x0080
struct FPendingTutorialData
{
	int                                                buttonIndex;                                               // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R16Y[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOnboardingTutorialButtonViewData           buttonViewData;                                            // 0x0008(0x0078) (Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.PendingStepData
// 0x0010
struct FPendingStepData
{
	TArray<struct FPendingTutorialData>                tutorialData;                                              // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.PlayerStatusAssets
// 0x0018
struct FPlayerStatusAssets
{
	DBDUIViewsCore_EPlayerStatusBloodSplatterType      BloodSplatterType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8Q9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  BloodTexture;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.TabTextProperties
// 0x0090
struct FTabTextProperties
{
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0028(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.TabStyle
// 0x0338
struct FTabStyle
{
	struct FButtonStyle                                WidgetDefaultStyle;                                        // 0x0000(0x02A8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTabTextProperties                          TextDefaultStyle;                                          // 0x02A8(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.DBDTextDockingProperties
// 0x0040
struct FDBDTextDockingProperties
{
	bool                                               UseColor;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YC2F[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 Color;                                                     // 0x0008(0x0028) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                               UseOpacity;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_000H[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Opacity;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseSize;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8PE[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Size;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.TabWidgetData
// 0x0020
struct FTabWidgetData
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BMJW[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewsCore.HtmlToRichTagConvertRow
// 0x0020 (0x0028 - 0x0008)
struct FHtmlToRichTagConvertRow : public FTableRowBase
{
	struct FString                                     HtmlTag;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RichTextTag;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsCore.InputPromptDataRow
// 0x0048 (0x0050 - 0x0008)
struct FInputPromptDataRow : public FTableRowBase
{
	struct FText                                       InputLabel;                                                // 0x0008(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FKey                                        InputKey;                                                  // 0x0020(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PromptTexture;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowLabel;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YY8C[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewsCore.TooltipWidgetData
// 0x0010 (0x0018 - 0x0008)
struct FTooltipWidgetData : public FDBDTableRowBase
{
	DBDUIViewsCore_ETooltipType                        TooltipType;                                               // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RXKE[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WidgetClass;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
