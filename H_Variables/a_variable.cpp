#include <iostream>
using namespace std;

class Student
{
    static int clz_id; // static variable
    int marks;          // instance variable

public:
    void inputMarks()
    {
        cout << "Enter your marks in a subject:";
        cin >> marks;
    }

    void displayPercentage()
    {
        int fullMarks = 100; // local variable
        float per = (float) marks / fullMarks *100;
        cout << "Percentage : " << per << "% " << endl;
        cout << "College Id : " << clz_id << endl;
    }
};

int Student :: clz_id = 67; // :: is called scope resolution operator

int main()
{
    Student ram, sita;
    ram.inputMarks();
    sita.inputMarks();

    ram.displayPercentage();   
    sita.displayPercentage();
    return 0;
}