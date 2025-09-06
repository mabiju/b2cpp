#include <iostream>
using namespace std;

class Student
{
    int roll;

public:
    void getRoll()
    {
        cout << "Enter roll number:";
        cin >> roll;
    }
    void operator++()
    {
        roll+=5;
    }
    void displayRoll()
    {
        cout << "Roll number is =" << roll << endl;
    }
};

int main()
{
    Student s1;
    s1.getRoll();
    s1.displayRoll();
    ++s1;
    s1.displayRoll();
    return 0;
}