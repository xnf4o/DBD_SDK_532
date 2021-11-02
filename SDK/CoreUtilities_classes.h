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

// Class CoreUtilities.CoreUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUtilities.CoreUtilities"));
		return ptr;
	}



	TArray<int> STATIC_GetRandomValuesFromArray(TArray<int> Values, int numberOfDesiredValues);
	class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
