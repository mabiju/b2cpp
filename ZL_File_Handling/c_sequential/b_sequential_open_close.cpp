// sequential file open and close demo
/* Opening & closing files Example: helloNepal:*/

#include <iostream> //Required for input & output:
#include <fstream>  //Required for File function:
#include <stdio.h>
using namespace std;

int main()
{
    /*Create New file: in just Write Mode:*/
    fstream myFile;
    cout << "WRITING PURPOSE:" << endl;
    myFile.open("helloNepal.txt", ios::out); // open file in writing mode:

    if (!myFile) // error checker: if file did'nt open:
    {
        cout << "Error while Opening File: " << endl;
    }
    else
        cout << "New File Open Successfully for Writing Purpose:" << endl;

    myFile.close();               // close the file:
    if (myFile.is_open() == '\0') // error checker, if file still open:
    {
        cout << "File has been Closed" << endl;
    }
    else
        cout << "File still Open: " << endl;

    /*Open Existing File for Reading and Appending Purpose:*/
    cout << "\n\nREADING & APPENDING PURPOSE: " << endl;
    myFile.open("helloNepal.txt", ios::in | ios::app); // file Opening:

    if (!myFile)
    {
        cout << "Error While Opening File: " << endl;
    }
    else
        cout << "Existing File Open Successfully for Reading & Appending Purpose: " << endl;

    // Let's dont close the file and check the error:
    if (myFile.is_open() == '\0')
    {
        cout << "File has been closed: " << endl;
    }
    else
        cout << "File still Open: " << endl;

    return 0;
}