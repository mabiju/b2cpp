#include <iostream>
using namespace std;

class Cube
{
    int volume;

public:
    // setter function
    void input(int l, int b, int h)
    {
        volume = l * b * h;
    }

    // getter function
    int output()
    {
        return volume;
    }
};

int main()
{
    Cube c1;
    int a, b, c;
    cout << "Enter length:";
    cin >> a;
    cout << "Enter breadth:";
    cin >> b;
    cout << "Enter height:";
    cin >> c;
    c1.input(a, b, c);
    cout << "The volume of the cuboid = " << c1.output() << endl;
    return 0;
}