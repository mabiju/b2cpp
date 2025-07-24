#include <iostream>
using namespace std;

class Nums
{
    static int a;
    int b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayData()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};
int Nums::a;

int main()
{
    Nums n1, n2;
    n1.getData(34, 56);
    n1.displayData();
    cout << endl;
    n2.getData(2, 3);
    n2.displayData();
    return 0;
}