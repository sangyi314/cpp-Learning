#include <iostream>

template <typename T>
T add (T x ,T y)
{
    return x + y;
}

int main()
{
    std::cout << add (3,4) << '\n' << add (1.2,9.4) << '\n' ;
    return 0;
}