#include <iostream>
using namespace std;

class Student
{
public:
    virtual void getdata();
    virtual void displaydata();
};

class College : public Student
{
private:
    int roll;
    char name[20];

public:
    void getdata();
    void displaydata();
};

void Student ::getdata() {}
void Student ::displaydata() {}

void College ::getdata()
{
    cout << "Enter roll number of the Student :";
    cin >> roll;
    cout << "Enter the name of the Student :";
    cin >> name;
}

void College ::displaydata()
{
    cout << "Name is =" << name << endl;
    cout << "Roll number is =" << roll << endl;
}

int main()
{
    College *ptr;
    College obj;
    ptr = &obj;
    ptr->getdata();
    ptr->displaydata();
    return 0;
}