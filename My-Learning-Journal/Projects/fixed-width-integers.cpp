#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t x {65};   //std::uint32_t for an unsigned byte
    x = x + 1;
    std::cout << x << '\n';
}