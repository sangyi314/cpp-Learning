#include <iostream>
#include <vector>

int main()
{
    std::vector number{2,3,5,7,8};
    int average{0};
    for (auto num : number)
    {
        std::cout << num << '\n';
    }
    return 0;
}