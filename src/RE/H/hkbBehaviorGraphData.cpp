#include "RE/H/hkbBehaviorGraphData.h"

namespace RE
{
	int hkbBehaviorGraphData::AddBoolVariable(hkStringPtr a_name, bool a_value)
	{
		if (stringData && stringData->variableNames.data() && variableInfos.data() && variableInitialValues) {
			hkbVariableInfo info;
			info.m_type = hkbVariableInfo::VariableType::VARIABLE_TYPE_BOOL;
			info.m_role.m_role = hkbRoleAttribute::ROLE_DEFAULT;
			info.m_role.m_flags = hkbRoleAttribute::FLAG_NONE;
			stringData->variableNames.push_back(a_name);
			variableInfos.push_back(info);

			return variableInitialValues->AddBool(a_value);
		}

		return -1;
	}

	int hkbBehaviorGraphData::AddIntVariable(hkStringPtr a_name, std::int32_t a_value)
	{
		if (stringData && stringData->variableNames.data() && variableInfos.data() && variableInitialValues) {
			hkbVariableInfo info;
			info.m_type = hkbVariableInfo::VariableType::VARIABLE_TYPE_INT32;
			info.m_role.m_role = hkbRoleAttribute::ROLE_DEFAULT;
			info.m_role.m_flags = hkbRoleAttribute::FLAG_NONE;
			stringData->variableNames.push_back(a_name);
			variableInfos.push_back(info);

			return variableInitialValues->AddInt(a_value);
		}

		return -1;
	}

	int hkbBehaviorGraphData::AddFloatVariable(hkStringPtr a_name, float a_value)
	{
		if (stringData && stringData->variableNames.data() && variableInfos.data() && variableInitialValues) {
			hkbVariableInfo info;
			info.m_type = hkbVariableInfo::VariableType::VARIABLE_TYPE_REAL;
			info.m_role.m_role = hkbRoleAttribute::ROLE_DEFAULT;
			info.m_role.m_flags = hkbRoleAttribute::FLAG_NONE;
			stringData->variableNames.push_back(a_name);
			variableInfos.push_back(info);

			return variableInitialValues->AddFloat(a_value);
		}

		return -1;
	}
}
