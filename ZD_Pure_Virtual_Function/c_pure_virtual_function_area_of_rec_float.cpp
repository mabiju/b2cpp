#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Rectangle : public Shape
{
public:
    float length, breadth;
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    float area()
    {
        return (length * breadth);
    }
};

int main()
{
    float m, n;
    cout << "Enter the length of the rectangle:";
    cin >> m;
    cout << "Enter the breadth of the rectangle:";
    cin >> n;

    Rectangle r(m, n);
    Shape *shape;
    shape = &r;
    cout << "The are of the rectangle = " << shape->area() << endl;
    return 0;
}