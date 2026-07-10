#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[] = {67, 89, 90, 34, 556, 78, 31};
    int length = sizeof(num) / sizeof(num[0]);
    cout << "Array before soring in ascending order " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << num[i] << endl;
    }
    sort(num, num + length);
    cout << "\nArray after soring in ascending order " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}