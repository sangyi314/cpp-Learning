namespace Color
{
    enum Color
    {
        red,    //0
        green = 5,  //5
        blue,    // 6
        black   = -3,  // -3
        white,    // -2
    };
}   

int main()
{
    Color::Color apple {Color::red};
    return 0;
}