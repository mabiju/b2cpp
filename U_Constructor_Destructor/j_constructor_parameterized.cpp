#include <iostream>
using namespace std;

class Student
{
    // declaring private class data members
private:
    int roll;
    string name;

public:
    // declaring parameterized constructor of three different types
    Student(int r)
    {
        cout << "\nCalling of constructor having only an integer value" << endl;
        roll = r;
        name = "Ram";
    }
    Student(string n)
    {
        cout << "\nCalling of constructor having only a string value" << endl;
        roll = 420;
        name = n;
    }
    Student(int r, string n)
    {
        cout << "\nCalling of constructor having both integer and string value" << endl;
        roll = r;
        name = n;
    }
    void display()
    {
        cout << "Roll no = " << roll << endl;
        cout << "Name = " << name << endl;
    }
};

int main()
{
    Student s1(23);
    s1.display();
    Student s2("Sita");
    s2.display();
    Student s3(120, "Hari");
    s3.display();
    return 0;
}