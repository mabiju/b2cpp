#include <iostream>
using namespace std;

class Myname
{
public:
    char name[10];
    void input()
    {
        cout << "Enter your name:";
        cin >> name;
    }
    void display()
    {
        input();
        cout << "You're " << name;
    }
};

int main()
{
    Myname me;
    me.display();
    return 0;
}