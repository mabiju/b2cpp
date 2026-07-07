#include <iostream>
using namespace std;

class PublicDemo
{
public:
    int a = 78;
};

int main()
{
    PublicDemo obj;
    cout << "The value is = " << obj.a << endl;
    return 0;
}