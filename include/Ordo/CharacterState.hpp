#include <Ordo/Disposition.hpp>

#include <cstdint>
#include <optional>

namespace Ordo
{
	enum class CharacterId : std::uint32_t {};

	class CharacterState
	{
	public:
		// Throws std::invalid_argument if any value is outside [0, 1].
		CharacterState(CharacterId id, float truthfulness,
			float constancy, float approvalSeeking);

		[[nodiscard]] CharacterId GetId() const noexcept { return m_Id; }

		// Returns false for an unknown disposition or a value outside [0, 1].
		[[nodiscard]] bool SetDispositionValue(DispositionId id, float value) noexcept;

	private:
		friend std::optional<float> GetDispositionValue(
			const CharacterState& character, DispositionId id) noexcept;

		CharacterId m_Id;
		float m_Truthfulness;
		float m_Constancy;
		float m_ApprovalSeeking;
	};

	[[nodiscard]] std::optional<float> GetDispositionValue(
		const CharacterState& character, DispositionId id) noexcept;
}