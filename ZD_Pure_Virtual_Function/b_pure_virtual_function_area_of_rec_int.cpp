#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    int length, breadth;
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void area()
    {
        cout << "Area= " << (length * breadth);
    }
};

int main()
{
    int m, n;
    cout << "Enter the length:";
    cin >> m;
    cout << "Enter breadth:";
    cin >> n;

    Rectangle r1(m, n);
    Shape *shape;
    shape = &r1;
    shape->area();
    return 0;
}