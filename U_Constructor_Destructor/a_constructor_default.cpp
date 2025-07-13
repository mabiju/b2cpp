#include <iostream>
using namespace std;

class ConstructorDemo
{
public:
    ConstructorDemo()   // default constructor
    {
        cout << "This is default constructor";
    }
};

int main()
{
    ConstructorDemo obj;
    return 0;
}