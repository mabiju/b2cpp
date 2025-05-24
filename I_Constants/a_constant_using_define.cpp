#include <iostream>
using namespace std;

// using #define
#define PI 3.14
int main()
{
    // double PI = 3.14159;
    float radius, area;
    cout << "Enter the radius of a circle:";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle = " << area;
    return 0;
}