#include <iostream>
using namespace std;

template <class T>
class Addition
{
public:
    T a = 78;
    T b = 67;

    void sum()
    {
        cout << "The sum = " << a + b << endl;
    }
};

int main()
{
    Addition<int> obj;
    obj.sum();
    return 0;
}