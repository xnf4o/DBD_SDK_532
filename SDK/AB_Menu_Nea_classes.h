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

// AnimBlueprintGeneratedClass AB_Menu_Nea.AB_Menu_Nea_C
// 0x0000 (FullSize[0x1A98] - InheritedSize[0x1A98])
class UAB_Menu_Nea_C : public UAB_Menu_Camper_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("AnimBlueprintGeneratedClass AB_Menu_Nea.AB_Menu_Nea_C"));
		return ptr;
	}



	void Override_nea_1(bool* Return);
	void Override_Dynamic(bool* Return);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
