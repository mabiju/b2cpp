#include <iostream>
using namespace std;

class Nums
{
public:
    int a = 10, b = 20;
};

int main()
{
    Nums n1;
    cout << "Sum = " << n1.a + n1.b;
    return 0;
}