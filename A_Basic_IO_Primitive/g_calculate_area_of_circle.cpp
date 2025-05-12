#include <iostream>
using namespace std;

int main()
{
    float r, area;
    cout << "Enter radius of the circle :";
    cin >> r;
    area = 3.14 * r * r;
    cout << "The area of the circle = " << area << " unit square.";
    return 0;
}