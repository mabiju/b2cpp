#include <iostream>
using namespace std;

class Teacher
{
    int salary;

public:
    Teacher()
    {
        salary = 10000;
    }

    // friend class
    friend class Student;
};

class Student
{
public:
    void displaySalary(Teacher &a)
    {
        cout << "Salary = " << a.salary << endl;
    }
};

int main()
{
    Teacher t1;
    Student s1;
    s1.displaySalary(t1);
    return 0;
}