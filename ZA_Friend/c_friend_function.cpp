#include <iostream>
using namespace std;

class Sum
{
    int a = 90, b;

public:
    void getB()
    {
        b = 78;
    }
    friend int add(Sum c);
};

int add(Sum c)
{
    return (c.a + c.b);
}

int main()
{
    Sum s1;
    s1.getB();
    cout << "The sum = " << add(s1);
    return 0;
}