#include <iostream>

struct Foo
{
    int a{};
    int b{};
    int c{};
};

int main ()
{
    Foo f1{.a{3},.c{5}};
    std::cout << f1.a << f1.b << f1.c;
    return 0;
}