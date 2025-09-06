#include <iostream>
using namespace std;

class FunOpeMath
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void diff();
    void pro();
    void divis();
};

inline void FunOpeMath::get()
{
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
}

inline void FunOpeMath::sum()
{
    add = a + b;
    cout << "The sum = " << a + b;
}

int main()
{
    FunOpeMath s;
    s.get();
    s.sum();
    return 0;
}