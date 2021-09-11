#include "RE/IFormFactory.h"

#include "REL/Relocation.h"
#include "RE/Offsets.h"

namespace RE
{
	std::pair<IFormFactory**, bool> IFormFactory::GetFormFactories()
	{
		struct Factories
		{
			IFormFactory* data[to_underlying(FormType::Max)];
		};

		// Fix offsets for VR here - avoid using Addr DB
		REL::Offset<Factories*> formFactories(Offset::FormFactory::FormFactories);
		REL::Offset<bool*> formFactoriesInitialized(Offset::FormFactory::FormFactoriesInitialized);
		return std::make_pair(formFactories->data, *formFactoriesInitialized);
	}


	IFormFactory* IFormFactory::GetFormFactoryByType(FormType a_formType)
	{
		auto formFactories = GetFormFactories();
		return formFactories.second ? formFactories.first[static_cast<UInt32>(a_formType)] : nullptr;
	}


	TESForm* IFormFactory::Create()
	{
		return CreateImpl();
	}
}
