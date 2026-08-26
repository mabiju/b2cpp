// function template overloading
#include <iostream>
using namespace std;

template <class T>
void num(T a)
{
    cout << "Value of a (single parameter) = " << a << endl;
}
template <class T, class U>
void num(T m, U n)
{
    cout << "Value of m (first parameter) = " << m << endl;
    cout << "Value of n (second parameter) = " << n << endl;
}

int main()
{
    num(78);
    num(789.23, 45896);
    return 0;
}