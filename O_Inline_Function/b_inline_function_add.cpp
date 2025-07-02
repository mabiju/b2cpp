#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a + b);
}

int main()
{
    cout << "The sum = " << add(34, 156) << endl;
    cout << "The sum = " << add(234, 6) << endl;
    cout << "The sum = " << add(34, 506) << endl;
    cout << "The sum = " << add(22, 56) << endl;
    cout << "The sum = " << add(78, 526) << endl;
    return 0;
}