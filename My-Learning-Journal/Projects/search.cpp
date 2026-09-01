#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    std::cout << "Enter a value to search for and replace with" << '\n';
    std::array arr { 5 , 66 , 78 , 94 , 61 , 75};
    int search {};
    int replace {};
    std::cin >> search >> replace;
    auto found {std::find(arr.begin(),arr.end(),search)};
    if (found == arr.end())
        std::cout << "Could not find " << search << '\n';
    else
        *found = replace ;
    for (int i : arr )
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}