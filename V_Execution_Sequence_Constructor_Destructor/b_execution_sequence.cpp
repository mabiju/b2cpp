#include <iostream>
using namespace std;

class GrandDad
{
public:
    GrandDad()
    {
        cout << "Calling default constructor of GrandDad Class" << endl;
    }
    ~GrandDad()
    {
        cout << "Calling destructor of GrandDad Class" << endl;
    }
};
class Dad
{
public:
    Dad()
    {
        cout << "Calling default constructor of Dad Class" << endl;
    }
    ~Dad()
    {
        cout << "Calling destructor of Dad Class" << endl;
    }
};
class Child : public GrandDad, public Dad
{
public:
    Child()
    {
        cout << "Calling default constructor of Child Class" << endl;
    }
    ~Child()
    {
        cout << "Calling destructor of Child Class" << endl;
    }
};

int main()
{
    Child c1;
    return 0;
}