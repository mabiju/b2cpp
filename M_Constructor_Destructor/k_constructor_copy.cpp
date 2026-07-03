#include <iostream>
using namespace std;

class Calc
{
public:
    int a;
    // parameterized construcor
    Calc(int x)
    {
        a = x;
    }

    // copy constructor
    Calc(const Calc &i)
    {
        a = i.a;
    }
};

int main()
{
    Calc c1(25); // parameterized constructor
    cout << "The value = " << c1.a << endl;

    // Calc c2 = c1;
    Calc c2(c1); // parameterized constructor
    cout << "\nAfter invoking copy constructor" << endl;
    cout << "The value after passing the value from another object : " << c2.a << endl;
    return 0;
}