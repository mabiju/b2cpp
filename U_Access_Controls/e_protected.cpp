#include <iostream>
using namespace std;

class ProtectedDemo
{
public:
    // protected: // uncomment it before execution to see the effect
    int a = 78;
};

int main()
{
    ProtectedDemo obj;
    cout << "The value is = " << obj.a << endl;
    return 0;
}