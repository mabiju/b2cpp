#include <iostream>
using namespace std;

int main()
{
    int num[3][5];

    cout << "Enter array elements for 3x5 array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter array element for a["<<i<<"]"<<"["<<j<<"] :";
            cin >> num[i][j];
        }
    }

    cout << "\nDisplaying array elements of 3x5 array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << num[i][j] << "\t";
        }
    }

    return 0;
}