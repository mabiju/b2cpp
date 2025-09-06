#include <iostream>
using namespace std;

template <class T>
class maxDisp
{
    T a, b;

public:
    maxDisp(T x, T y)
    {
        a = x;
        b = y;
    }
    T getmax();
};

template <class T>
T maxDisp<T>::getmax()
{
    T c;
    c = a > b ? a : b;
    return c;
}

int main()
{
    maxDisp<int> obj1(100, 75);
    maxDisp<float> obj2(12.5, 18.3);
    cout << obj1.getmax() << endl;
    cout << obj2.getmax() << endl;
    return 0;
}