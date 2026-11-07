#include <Ordo/CharacterState.hpp>

#include <stdexcept>

namespace Ordo
{
	namespace
	{
		bool IsValidDispositionValue(float value) noexcept
		{
			return value >= 0.0f && value <= 1.0f;
		}
	}

	CharacterState::CharacterState(CharacterId id, float truthfulness,
		float constancy, float approvalSeeking)
		: m_Id{ id },
		m_Truthfulness { truthfulness },
		m_Constancy { constancy },
		m_ApprovalSeeking { approvalSeeking }
	{
		const auto isValid = [](float value) {
			return value >= 0.0f && value <= 1.0f;
			};

		if (!isValid(truthfulness) || !isValid(constancy) ||
			!isValid(approvalSeeking))
		{
			throw std::invalid_argument{ "Disposition values must be in [0, 1]" };
		}
	}

	bool CharacterState::SetDispositionValue(DispositionId id, float value) noexcept
	{
		if (!IsValidDispositionValue(value))
		{
			return false;
		}

		switch (id)
		{
		case DispositionId::Truthfulness:
			m_Truthfulness = value;
			return true;
		case DispositionId::Constancy:
			m_Constancy = value;
			return true;
		case DispositionId::ApprovalSeeking:
			m_ApprovalSeeking = value;
			return true;
		}

		return false;
	}

	std::optional<float> GetDispositionValue(
		const CharacterState& character, DispositionId id) noexcept
	{
		switch (id)
		{
		case DispositionId::Truthfulness:
			return character.m_Truthfulness;
		case DispositionId::Constancy:
			return character.m_Constancy;
		case DispositionId::ApprovalSeeking:
			return character.m_ApprovalSeeking;
		}

		return std::nullopt;
	}
}