#include <iostream>

int main()
{
    int a{10};
    int b{4};
    std::cout << a/b << '\n';
    std::cout << static_cast<double>(a) / b << '\n';
    return 0;
}