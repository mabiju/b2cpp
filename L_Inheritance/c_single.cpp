#include <iostream>
using namespace std;

class Student
{
public:
    char name[30], address[30];

    void getData()
    {
        cout << "Enter name :";
        cin >> name;
        cout << "Enter address :";
        cin >> address;
    }
    void displayData()
    {
        cout << "Name is = " << name << endl;
        cout << "Address is = " << address << endl;
    }
};

class College : public Student
{
public:
    char faculty[30];
    int marks;

    void inputData()
    {
        getData();
        cout << "Enter faculty :";
        cin >> faculty;
        cout << "Enter marks :";
        cin >> marks;
    }

    void showData()
    {
        displayData();
        cout << "Faculty is = " << faculty << endl;
        cout << "Marks is = " << marks << endl;
    }
};

int main()
{
    College c1, c2;
    c1.inputData();
    c2.inputData();
    c1.showData();
    cout << endl;
    c2.showData();
    return 0;
}