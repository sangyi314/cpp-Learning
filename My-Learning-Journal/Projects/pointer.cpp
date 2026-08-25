#include <iostream>

int main ()
{
    int x {5};
    int y {6};
    int* ptr {&x};
    std::cout << *ptr << '\n';
    ptr = &y;
    std::cout << *ptr << '\n';
    *ptr = 9;
    std::cout << y <<'\n';
    return 0;
}