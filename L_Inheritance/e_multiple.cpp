#include <iostream>
using namespace std;

class One
{
public:
    int a;
    void getA()
    {
        cout << "Enter the value of a:";
        cin >> a;
    }
};

class Two
{
public:
    int b;
    void getB()
    {
        cout << "Enter the value of b:";
        cin >> b;
    }
};

class Nums : public One, public Two
{
    int sum;

public:
    void getSum()
    {
        getA();
        getB();
        sum = a + b;
        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    Nums obj;
    obj.getSum();
    return 0;
}