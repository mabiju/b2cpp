#include <iostream>
using namespace std;

class Apple
{
public:
    virtual void display()
    {
        cout << "from class Apple" << endl;
    }
};
class Ball : public Apple
{
public:
    void display()
    {
        cout << "from class Ball" << endl;
    }
};
class Cat : public Apple
{
public:
    void display()
    {
        cout << "from class Cat" << endl;
    }
};

int main()
{
    Apple *ptr[3];
    Ball b1;
    Cat c1;
    ptr[0] = &b1;
    ptr[0]->display();
    ptr[1] = &c1;
    ptr[1]->display();
    return 0;
}