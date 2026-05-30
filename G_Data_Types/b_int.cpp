#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /* short a = 2;
    short b = 3;
    short result = (short)pow(a, b);
    cout << "Result = " << result << endl; // 8 */

    /* short a = 12;
    short b = 7;
    short result = (short)pow(a, b);
    cout << "Result = " << result << endl; // -32768 */

    int a = 12;
    int b = 7;
    int result = (int)pow(a, b);
    cout << "Result = " << result << endl; //35831808

    return 0;
}