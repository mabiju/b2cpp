#include <iostream>
using namespace std;

class Nums
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    float add(float c, float d)
    {
        return (c + d);
    }
};

int main()
{
    Nums obj;
    int m, n;
    float p, q;
    cout << "Enter first integer:";
    cin >> m;
    cout << "Enter second integer:";
    cin >> n;
    cout << "Enter first float value:";
    cin >> p;
    cout << "Enter second float value:";
    cin >> q;

    cout << "The sum of integers " << m << " and " << n << " = " << obj.add(m, n) << endl;
    cout << "The sum of floats " << p << " and " << q << " = " << obj.add(p, q);
    return 0;
}