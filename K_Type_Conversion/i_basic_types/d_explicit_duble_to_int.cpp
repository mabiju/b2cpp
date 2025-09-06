// explicit type conversion, narrowing type conversion (double to int)
#include <iostream>
using namespace std;

int main()
{
    double num_double = 12.34;

    // c style
    int num_int = (int)num_double;
    cout << "Original double value = " << num_double << endl;
    cout << "Converted integer value using c style= " << num_int << endl;

    cout << endl;

    // using function notation
    int num_int1 = int(num_double);
    cout << "Original double value = " << num_double << endl;
    cout << "Converted integer value using function notation = " << num_int1 << endl;
    return 0;
}