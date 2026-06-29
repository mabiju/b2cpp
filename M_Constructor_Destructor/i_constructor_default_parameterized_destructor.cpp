#include <iostream>
using namespace std;

class Nums
{
    int a;

public:
    // default constructor
    // Nums(){};
    Nums()
    {
        cout << "Default constructor is called.." << endl;
    };

    // paremeterized constructor
    Nums(int x)
    {
        a = x;
        cout << "The value of a = " << a << endl;
    }
    ~Nums()
    {
        cout << "\nDestructor is invoked for constructor.";
    }
};

int main()
{
    Nums n1(90);
    Nums n2;
    return 0;
}