#include <iostream>
#include <array>
#include <algorithm>

struct Students
{
    std::string_view name;
    int scores{};
};

int main()
{
    std::array<Students,4> students 
        {{ 
            {"Alice",80}, 
            { "Bob", 95 },
            { "Charlie", 72 },
            { "David", 88 }
        }};
    const auto best {std::max_element (students.begin() , students.end() , [](const auto& a, const auto& b)
            {
                return a.scores < b.scores;
            })};

    std::cout << best -> name << '\n';
    return 0;
}