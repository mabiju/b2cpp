#include <iostream>
using namespace std;

class Nums
{
public:
    int a, b;

    void inputNums()
    {
        cout << "Enter a :";
        cin >> a;
        cout << "Enter b :";
        cin >> b;
    }
    void displaySum()
    {
        cout << "The sum of " << a << " and " << b << " is = " << (a + b);
    }
};

int main()
{
    Nums n1;
    n1.inputNums();
    n1.displaySum();
    return 0;
}