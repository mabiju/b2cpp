// implicit type conversion, narrowing type conversion (double to int)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 12.34;
    int num_int = num_double;
    cout << "Original double value = " << num_double << endl;
    cout << "Converted integer value = " << num_int << endl;
    return 0;
}