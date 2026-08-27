#include <iostream>

class IDGenerator
{
    private:
        static inline int s_ID {1};
    public:
        static int getID()
        {
            return s_ID++;
        }
};

int main ()
{
    std::cout << "ID:" << IDGenerator::getID() << '\n';
    std::cout << "ID:" << IDGenerator::getID() << '\n';
    std::cout << "ID:" << IDGenerator::getID() << '\n';
    return 0;
}