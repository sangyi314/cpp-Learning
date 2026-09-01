#include <iostream>
#include <array>

int main()
{
    std::array someNumbers {30,50,10,20,70,60};
    constexpr int length {static_cast<int>(someNumbers.size())};
    for (int startNumber{0} ; startNumber < length ; startNumber++)
    {
        int smallestNumber {startNumber};
        for (int currentNumber {startNumber+1} ; currentNumber < length ; currentNumber++)
        {
            if (someNumbers[smallestNumber] > someNumbers[currentNumber])
                smallestNumber = currentNumber;
        }
        std::swap (someNumbers[startNumber],someNumbers[smallestNumber]);
    }
    for (int i : someNumbers)
        std::cout << i << ' ';
    std::cout << '\n';
    return 0;
}