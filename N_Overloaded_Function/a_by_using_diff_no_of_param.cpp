#include <iostream>
using namespace std;

class Sum
{
public:
    void add(int a, int b)
    {
        cout << "The sum = " << (a + b) << endl;
    }

public:
    void add(int a, int b, int c)
    {
        cout << "The sum = " << (a + b + c) << endl;
    }
};

int main()
{
    Sum s1;
    s1.add(10, 20);
    s1.add(10, 20, 30);
    return 0;
}