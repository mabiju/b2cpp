// program to concatenate two strings using binary operator overloading
#include <iostream>
#include <string.h>
using namespace std;

class AddString
{
public:
    // class object of string
    char str[100];

    // calling default constructor
    AddString() {}

    // calling paramererized constructor to initialize class variable
    AddString(char str[])
    {
        strcpy(this->str, str);
    }

    // overload operator+ to concatenate two strings
    AddString operator+(AddString &S2)
    {
        // object to return the copy of concatenated value
        AddString S3;

        // use strcat() to concatenate two specific strings
        strcat(this->str, S2.str);

        // copy the string to string to be return
        strcpy(S3.str, this->str);

        // return the object
        return S3;
    }
};

int main()
{
    // declaring two strings
    char str1[] = "Sita ";
    char str2[] = "Rai";

    // declaring and initializing the class with above two strings
    AddString a1(str1);
    AddString a2(str2);
    AddString a3;

    // calling the operator function
    a3 = a1 + a2;
    cout << "Concatenation : " << a3.str;
    return 0;
}