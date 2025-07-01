#include <iostream>
using namespace std;

class MyClass
{
public:
    int displayNum(int a)
    {
        return a;
    }
    double displayNum(double b)
    {
        return b;
    }
};

int main()
{
    MyClass obj;
    cout << "The integer value = " << obj.displayNum(5) << endl;
    cout << "The double value = " << obj.displayNum(5.125) << endl;
    cout << "The double value = " << obj.displayNum(56.78) << endl;
    return 0;
}