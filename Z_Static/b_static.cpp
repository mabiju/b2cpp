#include <iostream>
using namespace std;

class StaticDemo
{
public:
    static int num;

    static void display()
    {
        cout << "The num value = " << num << endl;
    }
};

int StaticDemo::num = 78;

int main()
{
    StaticDemo s1;
    // cout << "The value = " << s1.num << endl;
    // s1.display(); // non static method
    StaticDemo::display();
    return 0;
}