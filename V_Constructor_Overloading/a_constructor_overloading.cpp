// Write a program in C++ to calculte sum using constructor overloading.
#include <iostream>
using namespace std;

class Sum
{
public:
    float add;
    // constructor without argument
    Sum()
    {
        add = 56.78;
    }
    Sum(int a, int b)
    {
        add = a + b;
    }
    // constructor with arguments
    Sum(float a, float b)
    {
        add = a + b;
    }
    void displayAdd()
    {
        cout << "The added value = " << add << endl;
    }
};

int main()
{
    Sum s1;
    s1.displayAdd();
    Sum s2(23, 45);
    s2.displayAdd();
    Sum s3(34.56f, 67.89f);
    s3.displayAdd();
    return 0;
}