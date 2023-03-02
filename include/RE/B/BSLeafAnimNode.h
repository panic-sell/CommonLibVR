#pragma once
#include "BSFadeNode.h"

namespace RE
{
	class BSLeafAnimNode : public BSFadeNode
	{
	public:
		inline static constexpr auto RTTI = RTTI_BSLeafAnimNode;
		inline static auto           Ni_RTTI = NiRTTI_BSLeafAnimNode;

		~BSLeafAnimNode() override;  //00

		// override (BSFadeNode)
		const NiRTTI*   GetRTTI() const override;                           // 02
		NiObject*       CreateClone(NiCloningProcess& a_cloning) override;  // 17
		void            LoadBinary(NiStream& a_stream) override;            // 18
		void            LinkObject(NiStream& a_stream) override;            // 19
		bool            RegisterStreamables(NiStream& a_stream) override;   // 1A
		void            SaveBinary(NiStream& a_stream) override;            // 1B
		bool            IsEqual(NiObject* a_object) override;               // 1C
		void            OnVisible(NiCullingProcess& a_process) override;    // 34
		BSLeafAnimNode* AsLeafAnimNode() override;                          // 3F

	private:
		float sqrDistanceToCamera;  //158
		float leafAmplitudeRefr;    //15C
		float leafFrequency;        //160
		float runningTime;          //164
		float previousTimer;        //168
	};
	static_assert(sizeof(BSLeafAnimNode) == 0x170);
}
