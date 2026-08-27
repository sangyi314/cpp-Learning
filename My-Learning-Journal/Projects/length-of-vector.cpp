#include <iostream>
#include <vector>

int main()
{
    std::vector primes {2,3,5,7,8};
    auto length {std::ssize(primes)};
    std::cout << "The length of primes is " << length;

    return 0;
}