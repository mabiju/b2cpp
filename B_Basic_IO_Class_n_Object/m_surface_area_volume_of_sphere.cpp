#include <iostream>
#include <math.h>
using namespace std;

class Sphere
{
public:
    int radius;

    void input()
    {
        cout << "Enter radius:";
        cin >> radius;
    }

    void sarea()
    {
        cout << "Total surface area of sphere = " << (float)(4.0f * 3.14f * pow(radius, 2));
    }

    void volume()
    {
        cout << "Volume of sphere = " << (float)(4.0f / 3.0f * 3.14f * pow(radius, 3));
    }
};

int main()
{
    Sphere jabulani;
    jabulani.input();
    jabulani.sarea();
    cout << endl;
    jabulani.volume();
    return 0;
}