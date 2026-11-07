#include <Ordo/Core.hpp>

#include <iostream>
#include <string_view>

int main()
{
    if (std::string_view{ Ordo::GetVersion() } != "0.1.0")
    {
        std::cerr << "Unexpected Ordo version\n";
        return 1;
    }

    return 0;
}