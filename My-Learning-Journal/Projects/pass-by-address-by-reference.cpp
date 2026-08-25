#include <iostream>

void nullify(int*& x)
{
    x = nullptr;
}

int main ()
{
    int x {5};
    int* ptr {&x};
    std::cout << (ptr? "non-null\n":"null\n");
    nullify(ptr);
    std::cout << (ptr? "non-null\n":"null\n");
    return 0;
}