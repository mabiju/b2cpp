// function template demo
#include <iostream>
using namespace std;

// can replace 'class" keyword by "typename" keyword
template <class X>
X add(X a, X b)
{
    return a + b;
}

int main()
{
    // func(int,int);
    cout << "Sum of int = " << add(15, 8) << endl;

    // func(char,char);
    cout << "Sum of char = " << add('p', 'q') << endl;

    // func(double,double)
    cout << "Sum of double = " << add(7.5, 9.2) << endl;
    return 0;
}