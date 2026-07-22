#include <iostream>

int getValueFromUser()
{
    std::cout<<"Enter an integer:";
    int input{};
    std::cin>>input;
    return input;
}

int main()
{
    int num{getValueFromUser()};
    std::cout<<"The double input is:"<<num*2<<'\n';
    return 0;
}