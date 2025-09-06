#include <iostream>
using namespace std;

class SuperClass
{
public:
    void display()
    {
        cout << "Hello Sanothimi";
    }
};

class SubClass : public SuperClass
{
public:
    void display()
    {
        cout << "Namaste Sanothimi" << endl;
    }
};

int main()
{
    SubClass obj;
    obj.display();
    obj.SuperClass::display();
    return 0;
}