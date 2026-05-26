#include <iostream>
using namespace std;

class Student
{
public:
    int marks;
};

int main()
{
    Student ram;
    ram.marks = 92; // dot operator
    cout << "Marks of Ram = " << ram.marks << endl;
    return 0;
}