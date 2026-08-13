// program to find the area of rectangle and triangle
// using abstract class
#include <iostream>
using namespace std;

class Figure
{
public:
    // pure virtual function
    virtual int Area() = 0;

    // Function for setting breadth
    void setBreadth(int br)
    {
        breadth = br;
    }

    // Function for setting height
    void setHeight(int ht)
    {
        height = ht;
    }

protected:
    int breadth;
    int height;
};
// A rectangle is a figure so it inherits abstract class figure
class Rectangle : public Figure
{
public:
    // overriding pure virtual function in derived class
    int Area()
    {
        return (breadth * height);
    }
};

// A triangle is a figure so it inherits abstract class figure
class Triangle : public Figure
{
public:
    // overriding pure virtual function in derived class
    int Area()
    {
        return (breadth * height) / 2;
    }
};

int main()
{
    Rectangle r1;
    Triangle t1;

    r1.setBreadth(12);
    r1.setHeight(45);

    t1.setBreadth(2);
    t1.setHeight(5);

    cout << "The area of the rectangle is = " << r1.Area() << endl;
    cout << "The area of the triangle is = " << t1.Area() << endl;
}