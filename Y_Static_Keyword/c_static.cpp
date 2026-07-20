#include <iostream>
using namespace std;

class Nums
{
    static int a;
    static int b;

public:
    static void display()
    {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

int Nums::a = 90;
int Nums::b = 66;

int main()
{
    Nums n1;
    cout << "Displayin the value of static field with object:" << endl;
    n1.display();
    cout << "Displayin the value of static field by using class:" << endl;
    Nums::display();
    return 0;
}