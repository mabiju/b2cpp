#include <iostream>
using namespace std;

class Rectangle
{
    float l, b;

public:
    Rectangle()
    {
        l = 78.5;
        b = 9.8;
    }
    Rectangle(float p)
    {
        l = p;
        b = 23.4;
    }
    Rectangle(float p, float q)
    {
        l = p;
        b = q;
    }

    float calcArea()
    {
        return (l * b);
    }
};

int main()
{
    Rectangle r1, r2(4.5), r3(23.4, 2.45);
    cout << "The area of rectangle one = " << r1.calcArea() << endl;
    cout << "The area of rectangle two = " << r2.calcArea() << endl;
    cout << "The area of rectangle three = " << r3.calcArea();
    return 0;
}