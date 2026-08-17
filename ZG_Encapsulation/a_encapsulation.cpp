#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    // setter function
    void getRoll(int a)
    {
        roll = a;
    }
    // getter function
    int displayRoll()
    {
        return roll;
    }
};

int main()
{
    Student s1;
    s1.getRoll(420);
    cout << "Roll number = " << s1.displayRoll() << endl;
    return 0;
}