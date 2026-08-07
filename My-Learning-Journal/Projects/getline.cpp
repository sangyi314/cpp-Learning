#include <iostream>
#include <string>

int main()
{
    std::string name{};
    std::string color{};
    std::cout << "Enter your full name : ";
    std::getline(std::cin >> std::ws,name);
    std::cout << "Enter your favorite color: ";
    std::getline(std::cin >> std::ws,color);
    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';
    return 0;
}