#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    void getData()
    {
        cout << "Enter length:";
        cin >> length;
        cout << "Enter breadth:";
        cin >> breadth;
    }
    // friend function declaration
    friend int calcArea(Rectangle a);
};

// friend function definition
int calcArea(Rectangle a)
{
    return (a.length * a.breadth);
}

int main()
{
    Rectangle r1;
    r1.getData();
    cout << "The area of rectangle = " << calcArea(r1);
    return 0;
}