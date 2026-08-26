#include <iostream>

struct Employee
{
    int id {};
    int age{};
    double wage {}; 
};

int main()
{
    Employee joe{};
    joe.id = 14;
    joe.age = 32;
    joe.wage = 60000.00;
    std::cout << joe.id << '\n';
    return 0;
}