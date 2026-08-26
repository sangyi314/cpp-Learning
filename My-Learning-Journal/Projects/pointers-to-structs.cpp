#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main ()
{
    Employee joe {1,24,50000};
    Employee* ptr {&joe};
    ++(ptr->age);
    std::cout << ptr->age << '\n';
    return 0;
}