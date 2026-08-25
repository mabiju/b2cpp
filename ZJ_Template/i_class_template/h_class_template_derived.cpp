#include <iostream>
using namespace std;

class college // non-template class
{
public:
    char clgname[100] = "Sanothimi Campus";
};

template <class T>
class student : public college  //template class
{
    public:
    T *stuname;
    student(T arg[])
    {
        stuname = arg;
    }
    void display()
    {
        cout << "Student Name: " << stuname << endl;
        cout << "College Name: " << clgname << endl;
    }
};

int main()
{
    char arr[100] = "Ram Thapa";
    student<char> b(arr);
    b.display();
    return 0;
}
