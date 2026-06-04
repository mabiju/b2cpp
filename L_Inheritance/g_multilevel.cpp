#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void getName()
    {
        cout << "Enter name :";
        cin >> name;
    }
};

class ExamSection : public Student
{
public:
    int marks;
    void getMarks()
    {
        getName();
        cout << "Enter your marks in Computer :";
        cin >> marks;
    }
};

class RessultSection : public ExamSection
{
public:
    void displayResult()
    {
        getMarks();
        if (marks >= 40)
        {
            cout << "Hello " << name << " you've passed your exam with " << marks << " marks." << endl;
        }
        else
        {
            cout << "Sorry " << name << " better luck next time. Your marks is " << marks << endl;
        }
    }
};

int main()
{
    RessultSection STC002;
    STC002.displayResult();
    return 0;
}