#include <iomanip>
#include <iostream>
#include <climits>
#include <string>

int main()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n" ;
    std::cout << std::left ;
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n" ;
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n" ;
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n" ;
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n" ;
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n" ;
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n" ;
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n" ;
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n" ;
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n" ;
    std::size_t s {sizeof(int)};
    std::string name{};
    std::cout << std::setw(16) << "name string:" << name.length() << " characters\n" ; 
    std::cout << s << '\n' ;
    return 0;
}

/*
A byte is 8 bits

bool:           1 bytes
char:           1 bytes
short:          2 bytes
int:            4 bytes
long:           8 bytes
long long:      8 bytes
float:          4 bytes
double:         8 bytes
long double:    16 bytes
*/