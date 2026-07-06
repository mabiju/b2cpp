#include <iostream>
using namespace std;

inline int displayValue(int a)
{
    return a;
}

int main()
{
    cout << "The number is " << displayValue(5) << endl;
    cout << "The number is " << displayValue(125) << endl;
    cout << "The number is " << displayValue(225) << endl;
    cout << "The number is " << displayValue(345) << endl;
    cout << "The number is " << displayValue(5678) << endl;
    cout << "The number is " << displayValue(366543) << endl;
    cout << "The number is " << displayValue(366.45) << endl;
    // similar to cout << "The number is " << 366543 << endl;
    return 0;
}