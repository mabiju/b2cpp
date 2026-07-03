#include <iostream>
using namespace std;

class Num
{
public:
    int add(int a)
    {
        return (a + a);
    }
    int add(int a, int b)
    {
        return (a + b);
    }
    int add(int a, int b, int c)
    {
        return (a + b + c);
    }
};

int main()
{
    Num obj;
    cout << "The sum = " << obj.add(5) << endl;
    cout << "The sum = " << obj.add(5, 10) << endl;
    cout << "The sum = " << obj.add(5, 10, 15) << endl;
    return 0;
}