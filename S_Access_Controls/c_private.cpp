#include <iostream>
using namespace std;

class PrivateDemo
{
public:
// private: // uncomment it before execution to see the effect
    int a = 78;
};

int main()
{
    PrivateDemo obj;
    cout << "The value is = " << obj.a << endl;
    return 0;
}