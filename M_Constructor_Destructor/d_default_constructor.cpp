#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    Student()
    {
        roll = 420;
        name = "Ram";
    }
    void display()
    {
        cout << "Roll is = " << roll << endl;
        cout << "Name is = " << name;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}