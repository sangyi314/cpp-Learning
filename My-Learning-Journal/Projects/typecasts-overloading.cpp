#include <iostream>

class Cents
{
    private :
        int m_cents {};
    public :
        Cents(int cents)
        :m_cents {cents}
        {}

        explicit operator int() const
        {
            return m_cents;
        }
};

int main ()
{
    Cents myCents {5};
    std::cout << static_cast<int>(myCents) << '\n';
    return 0;
}