#include <iostream>
#include <string.h>
using namespace std;

class MyName
{
public:
    char str[20];
    void accept_name()
    {
        cout << "Enter name: ";
        cin >> str;
    }
    void display_name()
    {
        cout << str;
    }
    MyName operator+(MyName a)
    {
        MyName temp;
        strcat(str, a.str);
        strcpy(temp.str, str);
        return temp;
    }
};

int main()
{
    MyName name1, name2, name3;
    name1.accept_name();
    name2.accept_name();

    name1.display_name();
    name2.display_name();

    cout << "\n-------------------------\n";
    name3 = name1 + name2;
    name3.display_name();
    return 0;
}