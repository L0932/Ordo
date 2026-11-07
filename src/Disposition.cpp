#include <Ordo/Disposition.hpp>

namespace Ordo
{
	namespace
	{
		constexpr DispositionDefinition Definitions[] =
		{
			{
				DispositionId::Truthfulness,
				"Truthfulness",
				"A tendency to speak truthfully and avoid deliberate falsehood."
			},
			{
				DispositionId::Constancy,
				"Constancy",
				"A tendency to hold to a good course of action despite external obstalces"
			},
			{
				DispositionId::ApprovalSeeking,
				"Approval seeking",
				"A tendency to give social approval excessive weight when choosing."
			}
		};
	}

	const DispositionDefinition* FindDispositionDefinition(
		DispositionId id) noexcept
	{
		for (const auto& definition : Definitions)
		{
			if (definition.id == id)
			{
				return &definition;
			}
		}

		return nullptr;
	}
}