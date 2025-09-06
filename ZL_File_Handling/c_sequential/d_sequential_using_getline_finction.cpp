/* Writing to files using getline() function: studentInfo:*/
#include <iostream> //Required for input & output:
#include <fstream>  //Required for File function:
using namespace std;

int main()
{
    ofstream myFile; // Object of type ofstream.
    char str[100];   // Arguments - Array name & size.

    cout << "Enter name :";
    cin.getline(str, 100); // getline() function.

    // Open the File:
    myFile.open("studentInfo.txt", ios::out);
    if (myFile) // if File open Successfully:
    {
        myFile << str << endl;
        cout << "Data Stored Successfully." << endl;
    }

    // if any error while opening file:
    else
        cout << "Error Occurred while Opening File." << endl;

    return 0;
}