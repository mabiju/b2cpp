#include <iostream>
using namespace std;

class Triangle
{
    int length, height;

public:
    void getData()
    {
        cout << "Enter length:";
        cin >> length;
        cout << "Enter height:";
        cin >> height;
    }
    // friend function declaration
    friend double calcArea(Triangle a);
};

// friend function definition
double calcArea(Triangle a)
{
    return (a.length * a.height * 0.5);
}

int main()
{
    Triangle t1;
    t1.getData();
    cout << "The area of Triangle = " << calcArea(t1);
    return 0;
}