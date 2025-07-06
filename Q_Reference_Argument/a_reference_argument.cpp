#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;

    cout << a << endl; // 5
    cout << ref << endl; // 5
    cout << &a << endl; // address of a
    cout << &ref << endl; // same as address a

    ref = 10;
    cout <<"\nAfter changing the value of ref:" << endl;
    cout << a << endl; // 10
    cout << ref << endl; // 10
    cout << &a << endl; // address of a
    cout << &ref << endl; // same as address a

    a = 25;
    cout <<"\nAfter changing the value of a:" << endl;
    cout << a << endl; // 25
    cout << ref << endl; // 25
    cout << &a << endl; // address of a
    cout << &ref << endl; // same as address a
    return 0;
}