#include <iostream>
using namespace std;

class Teacher
{
public:
    char name[20];
    void getName()
    {
        cout << "Enter teacher's name:";
        cin >> name;
    }
    void display()
    {
        cout << "Teacher's name =" << name << endl;
    }
};

class Student
{
    Teacher t1;
    int roll;

public:
    void getRoll()
    {
        cout << "Enter roll number:";
        cin >> roll;
        t1.getName();
    }
    void display()
    {
        cout << "Roll number =" << roll << endl;
        t1.display();
    }
};

int main()
{
    Student s1;
    s1.getRoll();
    s1.display();
    return 0;
}