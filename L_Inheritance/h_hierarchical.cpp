#include <iostream>
using namespace std;

class Nums
{
public:
    int a, b;
    void getData()
    {
        cout << "Enter a:";
        cin >> a;
        cout << "Enter b:";
        cin >> b;
    }
};

class Sum : public Nums
{
public:
    void add()
    {
        getData();
        cout << "The sum = " << a + b << endl;
    }
};
class Product : public Nums
{
public:
    void multiply()
    {
        getData();
        cout << "The product = " << a * b << endl;
    }
};

int main()
{
    Sum s1;
    Product p1;
    s1.add();
    p1.multiply();
    return 0;
}