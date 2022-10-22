#include "RE/H/hkbBehaviorGraphData.h"

namespace RE
{
	int hkbBehaviorGraphData::AddIntVariable(hkStringPtr name, std::int32_t value)
	{
		if (stringData && stringData->variableNames.data() && variableInfos.data() && variableInitialValues) {
			hkbVariableInfo info;
			info.m_type = hkbVariableInfo::VariableType::VARIABLE_TYPE_INT32;
			info.m_role.m_role = hkbRoleAttribute::ROLE_DEFAULT;
			info.m_role.m_flags = hkbRoleAttribute::FLAG_NONE;
			stringData->variableNames.push_back(name);
			variableInfos.push_back(info);

			return variableInitialValues->AddInt(value);
		}

		return -1;
	}
}
