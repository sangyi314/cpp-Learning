#include <iostream>

class Date 
{
    public:
        void print()
        {
            std::cout << m_day << '/' << m_month << '/' << m_year << '\n';
        }
    private:
        int m_day{27};
        int m_month {8};
        int m_year {26};
};

int main()
{
    Date today;
    today.print();
    return 0;
}