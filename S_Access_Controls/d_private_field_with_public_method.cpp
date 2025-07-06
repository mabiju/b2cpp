#include <iostream>
using namespace std;

class PrivateDemo
{
    // no access specifier, i.e. private by default
    int a;

public:
    void input()
    {
        cout << "Enter the value of a:";
        cin >> a;
    }
    void output()
    {
        cout << "The value you entered = " << a << endl;
    }
};

int main()
{
    PrivateDemo obj;
    obj.input();
    obj.output();
    return 0;
}