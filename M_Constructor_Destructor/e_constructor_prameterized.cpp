#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    Student(int roll_num)
    {
        roll = roll_num;
        cout << "Roll =" << roll << endl;
    }
};

int main()
{
    Student s1(420);
    Student s2(4420);
    Student s3(20);
    Student s4(9);
    return 0;
}