#include <iostream> 
#include <vector>
#include <type_traits>

enum class StudentNames
{
    kenny,
    kyle,
    stan,
    butters,
    cartman,
    max_students,

};

constexpr auto operator+(StudentNames a) noexcept
{
    return static_cast<std::underlying_type_t<StudentNames>>(a);
}

int main()
{
    std::vector testScore {+StudentNames::max_students};
    testScore[+StudentNames::stan] = 76;
    std::cout << "The class has " << +StudentNames::max_students << " students." << '\n';
    return 0;
}