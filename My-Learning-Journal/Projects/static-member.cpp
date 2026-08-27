#include <iostream>

struct Something 
{
    static int s_something ;    /* data */
};

int Something::s_something = 1;

int main()
{
    Something a{};
    Something b{};
    a.s_something = 2;
    std::cout << a.s_something << ' ' << b.s_something << '\n';
    return 0;
}
