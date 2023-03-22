#include "RE/S/Setting.h"

namespace RE
{
	bool Setting::IsPreferenceSetting() const
	{
		return false;
	}

	Setting::Setting(const char* name, bool value) :
		name(name)
	{
		this->data.b = value;
	}

	Setting::Setting(const char* name, const char* value) :
		name(name)
	{
		this->data.s = value;
	}

	Setting::Setting(const char* name, float value) :
		name(name)
	{
		this->data.f = value;
	}

	Setting::Setting(const char* name, std::int8_t value) :
		name(name)
	{
		this->data.c = value;
	}

	Setting::Setting(const char* name, std::int32_t value) :
		name(name)
	{
		this->data.i = value;
	}

	Setting::Setting(const char* name, std::uint8_t value) :
		name(name)
	{
		this->data.h = value;
	}

	Setting::Setting(const char* name, std::uint32_t value) :
		name(name)
	{
		this->data.u = value;
	}

	bool Setting::GetBool() const
	{
		return this->data.b;
	}

	std::int8_t Setting::GetCharacter() const
	{
		return this->data.c;
	}

	float Setting::GetFloat() const
	{
		return this->data.f;
	}

	std::int32_t Setting::GetInteger() const
	{
		return this->data.i;
	}

	const char* Setting::GetString() const
	{
		return this->data.s;
	}

	std::uint8_t Setting::GetUnsignedCharacter() const
	{
		return this->data.h;
	}

	std::uint32_t Setting::GetUnsignedInteger() const
	{
		return this->data.u;
	}

	void Setting::SetBool(bool value)
	{
		this->data.b = value;
	}

	void Setting::SetCharacter(std::int8_t value)
	{
		this->data.c = value;
	}

	void Setting::SetFloat(float value)
	{
		this->data.f = value;
	}

	void Setting::SetInteger(std::int32_t value)
	{
		this->data.i = value;
	}

	void Setting::SetUnsignedCharacter(std::uint8_t value)
	{
		this->data.h = value;
	}

	void Setting::SetUnsignedInteger(std::uint32_t value)
	{
		this->data.u = value;
	}
}
