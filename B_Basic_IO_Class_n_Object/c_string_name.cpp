#include <iostream>
using namespace std;

class Student
{
public:
    string name;

    void inputData()
    {
        cout << "Enter name :";
        cin >> name;
    }
    void displayData()
    {
        cout << "Your name is " << name;
    }
};

int main()
{
    Student s1;
    s1.inputData();
    s1.displayData();
    return 0;
}