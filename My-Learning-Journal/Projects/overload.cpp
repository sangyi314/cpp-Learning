#include <iostream>
#include <string_view>

enum Color
{
    black,
    red,
    blue,
};

constexpr std::string_view getColor(Color color)
{
    switch (color)
    {
        case black:
        return "black";
        case red :
        return "red";
        case blue:
        return "blue";
        default:
        return "unknown";
    }
}

std::ostream& operator<<(std::ostream& output,Color color)
{
    output << getColor(color);
    return output;
}

int main ()
{
    Color shirt {blue};
    std::cout << "The shirt is " << shirt << '\n';
    return 0;
}