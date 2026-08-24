#include <iostream>

void printValue(std::string& x)
{
    std::cout << x << '\n'; 
}

int main ()
{
    std::string x{"Hello World!"};

    printValue(x);
    
    return 0;
}