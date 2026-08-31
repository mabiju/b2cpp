#include <iostream>
using namespace std;

class Number
{
public:
    int x;
    Number(int a)
    {
        x = a;
    }

    // here operator+ is a member function which takes one argument of type Number and returns a new Number object which is the sum of the two Number objects.
    Number operator+(Number n)
    {
        return Number(x + n.x);
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2; // Calls overloaded + operator

    cout << "Sum = " << n3.x;

    return 0;
}