#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    Student(int roll_num)
    {
        roll = roll_num;
    }
};

int main()
{
    Student s1(420);
    Student s2(4420);
    Student s3(20);
    Student s4(9);
    cout << "Roll =" << s1.roll << endl;
    cout << "Roll =" << s2.roll << endl;
    cout << "Roll =" << s3.roll << endl;
    cout << "Roll =" << s4.roll << endl;
    return 0;
}