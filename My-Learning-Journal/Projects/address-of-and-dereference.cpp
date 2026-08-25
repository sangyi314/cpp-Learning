#include <iostream>

int main ()
{
    int x{5};
    std::cout << x << '\n' << &x << '\n' << *(&x) << '\n';
    return 0;
}