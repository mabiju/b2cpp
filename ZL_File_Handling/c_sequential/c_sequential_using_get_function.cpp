/* Writing to files using get() function: studentData:*/

#include <iostream> //Required for input & output:
#include <fstream>  //Required for File function:
using namespace std;

int main()
{
    ofstream myFile; // Object of type ofstream.
    char name[30];   // arguments - variable name & array of char.
    int age;

    cout << "Enter Name: ";
    cin.get(name, 30); // get function.
    cout << "Enter Your Age: ";
    cin >> age;

    myFile.open("studentData.txt", ios::out); // Open the File:
    if (myFile)                               // if File open Successfully:
    {
        myFile << name << endl;
        myFile << age << endl;
        cout << "Data Stored Successfully " << endl;
    }

    // if any error while opening file:
    else
        cout << "Error Occurred while Opening File." << endl;

    return 0;
}