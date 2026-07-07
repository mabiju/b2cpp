#include <iostream>
using namespace std;

class SuperClass
{
protected:
    int a = 10;
};

class SubClass : public SuperClass
{
    int b = 20;

public:
    void sum()
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    SubClass obj;
    obj.sum();
    return 0;
}