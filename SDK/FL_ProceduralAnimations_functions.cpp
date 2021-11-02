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
//		Offset -> 0x03D2EC10
//		Name   -> Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Rats
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              PositionEnd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Idling                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsGoingRight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IdlingOutput                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PositionOutput                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PositionEndOutput                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_Rats(float PositionEnd, float Position, bool Idling, bool IsRunning, bool IsGoingRight, class UObject* __WorldContext, bool* IdlingOutput, float* PositionOutput, float* PositionEndOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Rats"));

	UFL_ProceduralAnimations_C_Rats_Params params {};
	params.PositionEnd = PositionEnd;
	params.Position = Position;
	params.Idling = Idling;
	params.IsRunning = IsRunning;
	params.IsGoingRight = IsGoingRight;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IdlingOutput != nullptr)
		*IdlingOutput = params.IdlingOutput;
	if (PositionOutput != nullptr)
		*PositionOutput = params.PositionOutput;
	if (PositionEndOutput != nullptr)
		*PositionEndOutput = params.PositionEndOutput;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.ArraySinWave_Funct
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<float>                                      RotationValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		float                                              Period                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Amplitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AbcissOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OrdinateOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TimeOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AmplitudeOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimerOutput                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<float>                                      RotationValueOutput                                        (Parm, OutParm, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_ArraySinWave_Funct(TArray<float>* RotationValue, float Period, float Amplitude, float AbcissOffset, float OrdinateOffset, float Timer, float DeltaTime, int TimeOffset, float AmplitudeOffset, class UObject* __WorldContext, float* TimerOutput, TArray<float>* RotationValueOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.ArraySinWave_Funct"));

	UFL_ProceduralAnimations_C_ArraySinWave_Funct_Params params {};
	params.Period = Period;
	params.Amplitude = Amplitude;
	params.AbcissOffset = AbcissOffset;
	params.OrdinateOffset = OrdinateOffset;
	params.Timer = Timer;
	params.DeltaTime = DeltaTime;
	params.TimeOffset = TimeOffset;
	params.AmplitudeOffset = AmplitudeOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RotationValue != nullptr)
		*RotationValue = params.RotationValue;
	if (TimerOutput != nullptr)
		*TimerOutput = params.TimerOutput;
	if (RotationValueOutput != nullptr)
		*RotationValueOutput = params.RotationValueOutput;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Sinus_Funct
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Period                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Amplitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AbcissOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OrdinateOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimerOutput                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_Sinus_Funct(float Period, float Amplitude, float AbcissOffset, float OrdinateOffset, float Timer, float DeltaTime, class UObject* __WorldContext, float* TimerOutput, float* value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.Sinus_Funct"));

	UFL_ProceduralAnimations_C_Sinus_Funct_Params params {};
	params.Period = Period;
	params.Amplitude = Amplitude;
	params.AbcissOffset = AbcissOffset;
	params.OrdinateOffset = OrdinateOffset;
	params.Timer = Timer;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimerOutput != nullptr)
		*TimerOutput = params.TimerOutput;
	if (value != nullptr)
		*value = params.value;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.MovingGuts_Funct
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<float>                                      ScaleTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		float                                              Amplitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Period                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaleStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Interval                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TIMEOUT                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_MovingGuts_Funct(TArray<float>* ScaleTab, float Amplitude, float Period, float Delay, float ScaleStart, float Interval, float Time, float DeltaTime, class UObject* __WorldContext, float* TIMEOUT)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.MovingGuts_Funct"));

	UFL_ProceduralAnimations_C_MovingGuts_Funct_Params params {};
	params.Amplitude = Amplitude;
	params.Period = Period;
	params.Delay = Delay;
	params.ScaleStart = ScaleStart;
	params.Interval = Interval;
	params.Time = Time;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaleTab != nullptr)
		*ScaleTab = params.ScaleTab;
	if (TIMEOUT != nullptr)
		*TIMEOUT = params.TIMEOUT;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.BreathingBubble_Funct
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScaleMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaleMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AbscissMin                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              AbscissMax                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FBreathingBubble_Struct                     BreathingBubbleIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FBreathingBubble_Struct                     BreathingBubbleOut                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFL_ProceduralAnimations_C::STATIC_BreathingBubble_Funct(float ScaleMin, float ScaleMax, float AbscissMin, float AbscissMax, struct FBreathingBubble_Struct* BreathingBubbleIn, float DeltaTime, class UObject* __WorldContext, struct FBreathingBubble_Struct* BreathingBubbleOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function FL_ProceduralAnimations.FL_ProceduralAnimations_C.BreathingBubble_Funct"));

	UFL_ProceduralAnimations_C_BreathingBubble_Funct_Params params {};
	params.ScaleMin = ScaleMin;
	params.ScaleMax = ScaleMax;
	params.AbscissMin = AbscissMin;
	params.AbscissMax = AbscissMax;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreathingBubbleIn != nullptr)
		*BreathingBubbleIn = params.BreathingBubbleIn;
	if (BreathingBubbleOut != nullptr)
		*BreathingBubbleOut = params.BreathingBubbleOut;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
