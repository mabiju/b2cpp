/* Writing to files using Insertion Operator:  studentData:*/
#include <iostream> //Required for input & output:
#include <fstream>  //Required for File function:
using namespace std;

int main()
{
    ofstream fp; // Object of type ofstream.

    fp.open("studentData.txt", ios::out); // Open the File:
    if (fp)                               // if File open Successfully:
    {
        fp << "Kathmandu" << endl;
        fp << "Butwal" << endl;
        fp << "Surkhet" << endl;
        fp << "Kabhre" << endl;
    }

    // if any error while opening file:
    else
        cout << " Error Occurred while Opening File: " << endl;

    return 0;
}