#include "RE/H/hkbBehaviorGraphData.h"

namespace RE
{
	int RE::hkbBehaviorGraphData::AddIntVariable(hkStringPtr name, hkbVariableInfo::VariableType type, std::int32_t value)
	{
		if (stringData && stringData->variableNames.data() && variableInfos.data() && variableInitialValues) {
			hkbVariableInfo info;
			info.m_type = type;
			info.m_role.m_role = hkbRoleAttribute::ROLE_DEFAULT;
			info.m_role.m_flags = hkbRoleAttribute::FLAG_NONE;
			stringData->variableNames.push_back(name);
			variableInfos.push_back(info);

			return variableInitialValues->AddInt(value);
		}

		return -1;
	}
}
