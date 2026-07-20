#include <iostream>
using namespace std;

class StaticDemo
{
public:
    // static member declaration
    static int num;
};
// definition
int StaticDemo::num = 78;

int main()
{
    cout << "The value = " << StaticDemo::num << endl;
    return 0;
}