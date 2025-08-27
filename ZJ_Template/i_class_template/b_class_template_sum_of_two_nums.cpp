#include <iostream>
using namespace std;

template <class T1, class T2>
class Addtition
{
    T1 a;
    T2 b;

public:
    Addtition(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The sum =" << (a + b) << endl;
    }
};

int main()
{
    Addtition<int, float> obj1(34, 56.78);
    Addtition<int, int> obj2(34, 56);
    Addtition<float, int> obj3(34.56, 56);
    Addtition<float, float> obj4(34.56, 5.6);
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    return 0;
}