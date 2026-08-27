#include <iostream>
#include <vector>

void printElement1(const auto& vec) 
{
    std::cout << vec[1] << '\n';
}

int main()
{
    std::vector<int> primes{2,3,5,6,7};
    printElement1(primes);
    return 0;
}