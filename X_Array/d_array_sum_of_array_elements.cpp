#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num[] = {67, 89, 90, 34, 556, 78, 31};
    for (int i = 0; i < 7; i++)
    {
        sum += num[i]; // sum = sum + num[i];
    }
    cout << "The sum of array elements = " << sum << endl;
    return 0;
}