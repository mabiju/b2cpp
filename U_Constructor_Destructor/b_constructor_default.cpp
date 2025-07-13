#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    Student()
    {
        roll = 420;
    }
};

int main()
{
    Student s1;
    cout << "The roll number is = " << s1.roll << endl;
    return 0;
}