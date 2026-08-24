#include <iostream>

void print(int x , int y = 4)
{
    std::cout << x << '\n' << y << '\n';
}

int main()
{
    print (3);
    print (8,9);
    return 0;
}