// type conversion using dynamic cast
#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void print() {}
};

class DerivedClass : public BaseClass
{
};

int main()
{
    BaseClass *b = new DerivedClass;
    DerivedClass *d = dynamic_cast<DerivedClass *>(b);

    if (d != NULL)
    {
        cout << "Dynamic Cast Performed" << endl;
    }
    else
    {
        cout << "Something went wrong" << endl;
    }
    return 0;
}