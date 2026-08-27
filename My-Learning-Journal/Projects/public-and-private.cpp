#include <iostream>

class Date 
{
    public:
        void print()
        {
            std::cout << day << '/' << month << '/' << year << '\n';
        }
    private:
        int day{27};
        int month {8};
        int year {26};
};

int main()
{
    Date today;
    today.print();
    return 0;
}
