#include <iostream>
using namespace std;

template <class T>
class A
{
};

template <class T>
class B : public A<T>
{
public:
    B(int a, int b = 0);
};

template <class T>
B<T>::B(int a, int b)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

class C : public B<int>
{
    using B::B;
};

int main()
{
    C obj(5);
    cout << endl;
    C obj2(5, 3);
}