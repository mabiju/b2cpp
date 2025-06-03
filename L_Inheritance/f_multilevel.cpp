#include <iostream>
using namespace std;

class One
{
public:
    int a;
};

class Two : public One
{
public:
    int b;

    void getData()
    {
        cout << "Enter the value for a:";
        cin >> a;
        cout << "Enter the value for b:";
        cin >> b;
    }
};

class Three : public Two
{
    int sum;

public:
    void displaySum()
    {
        getData();
        sum = a + b;
        cout << "The sum = " << sum << endl;
    }
};

int main()
{
    Three obj;
    obj.displaySum();
    return 0;
}