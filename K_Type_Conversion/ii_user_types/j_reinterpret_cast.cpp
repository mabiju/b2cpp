// type conversing using reinterpret cast
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(87);
    char *ch = reinterpret_cast<char *>(ptr);
    cout << "Value of *ptr is: " << *ptr << endl;
    cout << "Value of ptr is: " << ptr << endl;
    cout << "Value of *ch is: " << *ch << endl;
    cout << "Value of ch is: " << ch;
    return 0;
}
