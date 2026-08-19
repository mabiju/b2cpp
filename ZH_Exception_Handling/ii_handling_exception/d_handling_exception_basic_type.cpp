#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age:";
    cin >> age;

    try
    {
        if (age > 17)
        {
            cout << "You're eligible to get your voter ID." << endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int myAge)
    {
        cout << "You're " << myAge << " years old and not eligible to get your voter ID." << endl;
    }

    return 0;
}