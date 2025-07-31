#include <iostream>
using namespace std;

class Student
{
public:
    // declaration of pure virtual function
    virtual void study() = 0;
};

class Teacher : public Student
{
public:
    // body for pure virtual function
    void study()
    {
        cout << "Students are studying." << endl;
    }
};

int main()
{
    Student *s1;
    Teacher t1;
    s1 = &t1;
    s1->study();
    return 0;
}
