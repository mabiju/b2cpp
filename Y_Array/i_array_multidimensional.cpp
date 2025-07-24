#include <iostream>
using namespace std;

int main()
{
    int num[2][3];

    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            num[i][j] = (i + 1) + (j * 1);
            cout << num[i][j] << "\t";
        }
    }
    return 0;
}