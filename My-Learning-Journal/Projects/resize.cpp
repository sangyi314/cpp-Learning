#include <iostream>
#include <vector>

void printLength( const std::vector<int>& v )      //<int> cannot be elided.
{
    std::cout << "The length is :" << v.size() << '\n';
}

int main ()
{
    std::vector v {1,2,7};
    printLength(v);

    v.resize(5);
    printLength(v);

    for (auto i : v)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}