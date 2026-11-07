#pragma once

#include <cstdint>
#include <string_view>

namespace Ordo
{
	enum class DispositionId : std::uint8_t
	{
		Truthfulness,
		Constancy,
		ApprovalSeeking
	};

	struct DispositionDefinition
	{
		DispositionId id;
		std::string_view name;
		std::string_view description;
	};

	// Returns nullptr if the ID has no defintion
	[[nodiscard]] const DispositionDefinition* FindDispositionDefinition(
		DispositionId id) noexcept;
}