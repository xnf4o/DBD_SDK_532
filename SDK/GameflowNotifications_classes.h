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

// Class GameflowNotifications.GameflowEventsNotifier
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameflowEventsNotifier : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameflowNotifications.GameflowEventsNotifier"));
		return ptr;
	}



};

// Class GameflowNotifications.PlayerflowEventsNotifier
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerflowEventsNotifier : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameflowNotifications.PlayerflowEventsNotifier"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
