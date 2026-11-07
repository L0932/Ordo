#include <Ordo/CharacterState.hpp>

#include <iostream>
#include <stdexcept>

int main()
{
    using namespace Ordo;

    CharacterState first{ CharacterId{ 1 }, 0.75f, 0.5f, 0.25f };
    const CharacterState second{ CharacterId{ 2 }, 0.25f, 0.5f, 0.75f };

    if (!first.SetDispositionValue(DispositionId::Constancy, 1.0f) ||
        GetDispositionValue(first, DispositionId::Constancy) != 1.0f ||
        GetDispositionValue(second, DispositionId::Constancy) != 0.5f)
    {
        std::cerr << "Updating constancy should affect only the selected character\n";
        return 1;
    }

    if (first.SetDispositionValue(DispositionId::Constancy, 1.25f) ||
        GetDispositionValue(first, DispositionId::Constancy) != 1.0f)
    {
        std::cerr << "An out-of-range update should preserve constancy\n";
        return 1;
    }

    constexpr auto unknown = static_cast<DispositionId>(255);
    if (first.SetDispositionValue(unknown, 0.5f) ||
        GetDispositionValue(first, unknown).has_value() ||
        FindDispositionDefinition(unknown) != nullptr)
    {
        std::cerr << "Unknown disposition IDs should be rejected\n";
        return 1;
    }

    try
    {
        const CharacterState invalid{ CharacterId{ 3 }, -0.25f, 0.5f, 0.5f };
        std::cerr << "Construction should reject an out-of-range value\n";
        return 1;
    }
    catch (const std::invalid_argument&)
    {
        return 0;
    }
}