#pragma once
#include "RE/B/BSTSingleton.h"
namespace RE
{
	class BSDirectInputManager : public BSTSingletonSDM<BSDirectInputManager>
	{
	public:
		static BSDirectInputManager* GetSingleton();

		DirectInput8::IDirectInputDevice8A* CreateDeviceWithGUID(WinAPI::GUID* a_guid);
		void                                GetDeviceState(DirectInput8::IDirectInputDevice8A* a_device, std::uint32_t a_size, void* outData);
		void                                GetDeviceData(DirectInput8::IDirectInputDevice8A* a_device, std::uint32_t* a_dataSize, DirectInput8::DIDEVICEOBJECTDATA** outData);
		void                                ReleaseDevice(DirectInput8::IDirectInputDevice8A* a_device);

		// REL::ID ctor = RELOCATION_ID(67372, 68674);
		// REL::ID dtor = RELOCATION_ID(67371, 68673);

		// members
		uint32_t                      pad00;        //00
		DirectInput8::IDirectInput8A* diInterface;  //08
	};
	static_assert(sizeof(BSDirectInputManager) == 0x10);
}