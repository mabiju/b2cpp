// defining class member outside the class template
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
    maxDisp<int> obj1(104654, 6546);
    maxDisp<float> obj2(12.546, 4654.654);
    cout << "The max value = " << obj1.getmax() << endl;
    cout << "The max value = " << obj2.getmax() << endl;
    return 0;
}