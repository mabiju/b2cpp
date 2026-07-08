#include <iostream>
using namespace std;

class SuperClass
{
public:
    SuperClass()
    {
        cout << "Calling default constructor of SuperClass Class" << endl;
    }
    ~SuperClass()
    {
        cout << "Calling destructor of SuperClass Class" << endl;
    }
};
class SubClass : public SuperClass
{
public:
    SubClass()
    {
        cout << "Calling default constructor of SubClass Class" << endl;
    }
    ~SubClass()
    {
        cout << "Calling destructor of SubClass Class" << endl;
    }
};

int main()
{
    SubClass c1;
    return 0;
}