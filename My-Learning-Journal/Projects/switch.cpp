#include <iostream>

int main()
{
    switch(2)
    {
        case 1:
            std::cout << "One" << '\n';
            break;
        case 2:
            std::cout << "Two" << '\n';
            break;
        default:
            std::cout << "Unknown" << '\n';
            break;
    }
    
    return 0;
}