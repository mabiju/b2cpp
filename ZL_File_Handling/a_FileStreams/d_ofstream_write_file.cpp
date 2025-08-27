#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream filestream("merodata.txt");
    if (filestream.is_open())
    {
        filestream << "Hello Sanothimi, How are you?" << endl;
        filestream << "Hello Nepal, Aile kati bajyo?";
        filestream.close();
    }
    else
    {
        cout << "Something went wrong or file cannot be created.";
    }
    return 0;
}