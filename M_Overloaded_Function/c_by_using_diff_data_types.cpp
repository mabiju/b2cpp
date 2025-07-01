#include <iostream>
using namespace std;

void display(int a)
{
    cout << "Integer value = " << a << endl;
}
void display(double b)
{
    cout << "Double value = " << b << endl;
}
void display(char const *c)
{
    cout << "Character value = " << c << endl;
}

int main()
{
    display(3);
    display(4.56);
    display(90.234);
    display("Hello Sanothimi");
    return 0;
}