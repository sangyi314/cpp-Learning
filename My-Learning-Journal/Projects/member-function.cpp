#include <iostream>

struct Date
{
    int day{};
    int month{};
    int year{};

    void print () const
    {
        std::cout << day << '/' << month << '/' << year << '\n';
    }
};

int main()
{
    Date today {27,8,26};
    today.print();
    return 0;
}