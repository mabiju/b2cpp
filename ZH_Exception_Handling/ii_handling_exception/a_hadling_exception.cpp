#include <iostream>
using namespace std;

float divide(int a, int b)
{
    if (b == 0)
    {
        throw "Cannot divide by zero";
    }
    return (a / b);
}

int main()
{
    int dividend, divisor;
    cout << "Enter dividend:";
    cin >> dividend;
    cout << "Enter divisor:";
    cin >> divisor;

    try
    {
        float quotient = divide(dividend, divisor);
        cout << "The quotient = " << quotient;
    }
    catch (const char *msg)
    {
        cerr << msg << endl;
    }
    return 0;
}