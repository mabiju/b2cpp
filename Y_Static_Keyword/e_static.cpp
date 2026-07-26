#include <iostream>
using namespace std;

class StaticDemo
{
    int num;
    static int count;

public:
    StaticDemo()
    {
        num = count++;
    }
    void displayNum()
    {
        cout << "The value of num = " << num << endl;
    }
    void displayCount()
    {
        cout << "The value of count = " << count << endl;
    }
};
int StaticDemo::count;

int main()
{
    StaticDemo obj1, obj2, obj3;
    obj1.displayNum();
    obj1.displayCount();
    cout << endl;
    obj2.displayNum();
    obj2.displayCount();
    cout << endl;
    obj3.displayNum();
    obj3.displayCount();
}