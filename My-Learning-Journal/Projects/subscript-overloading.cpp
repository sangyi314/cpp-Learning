#include <iostream>
#include <array>

class IntArray
{
private :
    int m_arr [5] {};
public :
    int& operator[](std::size_t index)
    {
        return m_arr[index];
    }
    const int operator[](std::size_t index) const
    {
        return m_arr[index];
    }
};

int main()
{
    IntArray arr ;
    arr[0] = 5 ;
    arr[2] = 4 ;
    std::cout << arr[0] << '\n';
}