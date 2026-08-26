#include <iostream>
#include <string_view>

enum class Color
{
    black,
    blue,
    white,
};

constexpr std::string_view getColor(Color color)
{
    using enum Color;
    switch (color)
    {
        case black:
        return "black";
        case blue:
        return "blue";
        case white:
        return "white";
        default:
        
        return "unknown";
    }
}

int main() 
{
    Color myColor {Color::blue};
    std::cout << "The shirt is " << getColor(myColor) << std::endl;
    return 0;
}