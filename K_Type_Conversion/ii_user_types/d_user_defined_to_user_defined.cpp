#include <iostream>
using namespace std;

class Color
{
    int r, g, b;

public:
    Color(int red, int green, int blue)
    {
        r = red;
        g = green;
        b = blue;
    }

    // Overloaded operator + to merge with another Color
    Color operator+(const Color &obj)
    {
        return Color(r + obj.r, g + obj.g, b + obj.b);
    }

    // Accessors for color components
    int getRed()
    {
        return r;
    }
    int getGreen()
    {
        return g;
    }
    int getBlue()
    {
        return b;
    }
};

int main()
{
    Color Red(255, 0, 0);
    Color Green(0, 255, 0);

    // Implicit conversion using operator +
    Color Yellow = Red + Green;

    cout << "Red + Green = Yellow (RGB) = (" << Yellow.getRed() << ", " << Yellow.getGreen() << ", " << Yellow.getBlue() << " )" << endl;
    return 0;
}