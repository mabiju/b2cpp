// explicit type conversion(type casting), widening type conversion
#include <iostream>
using namespace std;

int main()
{
    int num_int = 89;
    double num_double = (double)num_int; // explicit type conversion, i.e. Type Casting
    cout << "Original integer value = " << num_int << endl;
    cout << "Converted double value = " << num_double << endl;
    return 0;
}