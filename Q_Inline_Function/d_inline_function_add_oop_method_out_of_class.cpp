#include <iostream>
using namespace std;

class Nums
{
    int a, b, sum;

public:
    void input();
    void output();
};

inline void Nums::input()
{
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
}

inline void Nums::output()
{
    sum = a + b;
    cout << "The sum = " << sum << endl;
}

int main()
{
    Nums n1;
    n1.input();
    n1.output();
    return 0;
}