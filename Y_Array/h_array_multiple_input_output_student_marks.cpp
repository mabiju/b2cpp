#include <iostream>
using namespace std;

class Student
{
public:
    int marks[5];

    void inputMarks()
    {
        cout << "Please enter the marks of 5 subjects" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the marks of Subject " << (i + 1) << " : ";
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of subject " << (i + 1) << " = " << marks[i] << endl;
        }
    }
};

int main()
{
    Student s1;
    s1.inputMarks();
    cout << endl;
    s1.displayMarks();
    return 0;
}