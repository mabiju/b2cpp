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
    cout << "m and n before swap:" << m << " " << n << "\n";
    swap_num(m, n);
    cout << "m and n after swap:" << m << " " << n << "\n";

    cout << "a and b before swap:" << a << " " << b << "\n";
    swap_num(a, b);
    cout << "a and b after swap:" << a << " " << b << "\n";
}

int main()
{
    display(45, 65, 78.63, 89.65);
    return 0;
}