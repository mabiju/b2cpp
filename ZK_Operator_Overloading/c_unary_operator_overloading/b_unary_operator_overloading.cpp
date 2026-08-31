#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << "Value = " << value;
    }
};

int main()
{
    Number n(10);

    ++n;              // Calls overloaded ++ operator
    n.display();

    return 0;
}