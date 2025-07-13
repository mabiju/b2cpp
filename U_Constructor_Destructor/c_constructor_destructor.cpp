#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Constructor is invoked ..." << endl;
    }

    // destructor
    ~Student()
    {
        cout << "Destructor is executed ...." << endl;
    }
};

int main()
{
    Student s1, s2;
    return 0;
}