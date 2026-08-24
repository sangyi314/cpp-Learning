#include <iostream>

int main()
{
    int a {3};
    double b {5.1};

    auto c {3};
    auto d {5.1};

    std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n';

    return 0;
}