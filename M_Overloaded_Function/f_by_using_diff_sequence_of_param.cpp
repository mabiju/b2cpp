#include <iostream>
using namespace std;

class MyNums
{
public:
    void add(int a, double b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
    void add(double a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }
};

int main()
{
    MyNums obj;
    obj.add(4, 5.67);
    obj.add(12.45, 89);
    return 0;
}