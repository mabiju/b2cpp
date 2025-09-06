//type conversion using const cast
#include <iostream>
using namespace std;

int main()
{
    const int num1 = 10;
    const int *ptr1 = &num1;
    cout << "Old value of ptr1 is: " << *ptr1 << endl;
    int *ptr2 = const_cast<int *>(ptr1);
    *ptr2 = 3;
    cout << "New value of ptr1 is: " << *ptr1;
    return 0;
}
