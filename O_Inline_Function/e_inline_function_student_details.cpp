#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    // char name[10];
    int marks;

public:
    void getData();
    void displayDetails();
};

inline void Student::getData()
{
    cout << "Enter roll number:";
    cin >> roll;
    cout << "Enter name:";
    cin >> name;
    cout << "Enter marks:";
    cin >> marks;
}

inline void Student::displayDetails()
{
    cout << "\nRoll number = " << roll << endl;
    cout << "Name = " << name << endl;
    cout << "Marks = " << marks << endl;
}

int main()
{
    Student s1, s2;
    s1.getData();
    s2.getData();
    s1.displayDetails();
    s2.displayDetails();
    return 0;
}