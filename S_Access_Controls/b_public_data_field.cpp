#include <iostream>
using namespace std;

class PublicDemo
{
public:
    int a;
    void displayData()
    {
        cout << "The value of a = " << a << endl;
    }
};

int main()
{
    PublicDemo obj;
    cout << "Enter the value of a: ";
    cin >> obj.a;
    obj.displayData();
    return 0;
}