#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age:";
    cin >> age;

    if (age > 19) // logical error due to age
    {
        cout << "You're a child.";
    }
    else
    {
        cout << "You're an adult.";
    }
    return 0;
}