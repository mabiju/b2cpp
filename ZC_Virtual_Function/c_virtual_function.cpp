#include <iostream>
using namespace std;

class College
{
public:
    virtual void display()
    {
        cout << "Good morning students." << endl;
    }
};

class Science : public College
{
public:
    void display()
    {
        cout << "Hi from Science department." << endl;
    }
};
class Maths : public College
{
public:
    void display()
    {
        cout << "Hello from Maths department." << endl;
    }
};

int main()
{
    College *ptr;
    Science ram;
    Maths sita;

    ptr = &ram;
    ptr->display();

    ptr = &sita;
    ptr->display();
    return 0;
}