/* Reading from Sequential files: myData:*/
#include <iostream> //Required for input & output:
#include <fstream>  //Required for File function:
using namespace std;

int main()
{
    ifstream myFile;   // object of type ifstream:
    char fileName[20]; // will use to store fileName from user:
    char ch;           // will use to read all data from file:

    cout << "Enter the Name of the file you want to read: " << endl;
    cin >> fileName;

    myFile.open(fileName, ios::in); // open file for reading purpose:

    if (!myFile) // error checker: if file not exist:
    {
        cout << "Error While Opening File: " << endl;
    }

    else // if file exists and open successfully:
    {
        cout << "File Open Successfully: here is the result: " << endl;
        while (!myFile.eof()) // read till end-of-file:
        {
            myFile.get(ch); // read data from file:
            cout << ch;     // display data on screen:
        }
    }

    myFile.close(); // close the file:

    return 0;
}