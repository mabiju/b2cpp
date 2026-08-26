#include <iostream>
using namespace std;

template <class T>

void swap_num(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

void display(int m, int n, float a, float b)
{
    cout << "Value of integers m and n before swap: " << m << " and " << n << "\n";
    swap_num(m, n);
    cout << "Value of integers m and n after swap: " << m << " and " << n << "\n\n";
    cout << "Value of floats a and b before swap: " << a << " and " << b << "\n";
    swap_num(a, b);
    cout << "Value of floats a and b after swap: " << a << " and " << b << "\n";
}

int main()
{
    int m, n;
    float a, b;
    cout << "Enter the value of integer m : ";
    cin >> m;
    cout << "Enter the value of integer n : ";
    cin >> n;
    cout << "Enter the value of float a : ";
    cin >> a;
    cout << "Enter the value of float b : ";
    cin >> b;
    display(m, n, a, b);

    return 0;
}