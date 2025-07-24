#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[20], mob[10];

    void inputData()
    {
        cout << "Enter roll number:";
        cin >> roll;
        cout << "Enter name:";
        cin >> name;
        cout << "Enter mobile number:";
        cin >> mob;
    }
    void displayData()
    {
        cout << "\nRoll = " << roll << endl;
        cout << "Name = " << name << endl;
        cout << "Mobile = " << mob;
    }
};

int main()
{
    Student s1, s2;
    s1.inputData();
    s2.inputData();
    s1.displayData();
    s2.displayData();
    return 0;
}