#include <iostream>

int add(int x ,int y );

int main()
{
    int x{};
    std::cout << "Enter an integer:";
    std::cin >> x;

    int y{};
    std::cout << "Enter an another integer:";
    std::cin >> y;

    std::cout << "The sum of " << x << " and " << y << " is" << add(x,y) << '\n';
    return 0;
}