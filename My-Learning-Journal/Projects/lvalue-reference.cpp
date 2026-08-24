#include <iostream>

int main()
{
    int x {5};
    int& ref = x ;
    std::cout << x << '\n' << ref << '\n';
    return 0;
}