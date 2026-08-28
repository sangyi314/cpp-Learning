#include <iostream>
#include <vector>

int main()
{
    std::vector score{84,92,76,81,56};
    std::size_t length {score.size()};
    int average {0};
    for (std::size_t index{0}; index < length ;index++)
    {
        average += score[index];
    }
    average /= length;
    std::cout << "The average socre is:" << average << '\n' ;
    return 0;
}
