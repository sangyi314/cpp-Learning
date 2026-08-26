#include <iostream>

struct Employee
{
    int id{};
    int age{};
    int wage{};
};

void printEmployee(const Employee& employee)
{
    std::cout << "ID: " << employee.id << ", Age: " << employee.age << ", Wage: " << employee.wage << '\n';
}

int main()
{
    Employee joe{.id{101}, .age{30}, .wage{50000}};
    Employee bob{.id{102}, .age{25}, .wage{45000}};
    
    printEmployee(emp1);
    printEmployee(emp2);
    
    return 0;
}