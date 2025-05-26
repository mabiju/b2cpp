#include <iostream>
using namespace std;

int main()
{
    int num_int = 34;
    string num_string = "23";
    int num_string_int = stoi(num_string);
    int sum = num_int + num_string_int;
    cout << "Sum = " << sum;
    return 0;
}