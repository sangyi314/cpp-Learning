#include <iostream>
#include <vector>

int main()
{
    std::vector<int> primes{2,3,5,6,7};
    std::vector<int> emptyTen(10);
    std::cout << primes[0] << ' ' << primes[3] << ' ' << emptyTen[4];
    return 0;
}