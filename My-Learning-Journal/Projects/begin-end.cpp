#include <iostream>
#include <array>

int main ()
{
    std::array arr {1,2,3};
    auto begin {arr.begin()};
    auto end {arr.end()};
    for (auto p{begin} ; p != end ; p++)
        std::cout << *p <<  ' ';
    std::cout << '\n';
    return 0;
}