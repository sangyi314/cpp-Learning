#include <iostream>

auto add(auto x , auto y)
{
    return x + y;
}

int main()
{
    int a {3};
    double b {5.1};

    auto c {3};
    auto d {5.1};

    auto e {add (c,d)};

    std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n';

    return 0; 
}