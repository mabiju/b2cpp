/*Seekg(long_num, ios::cur) Example: myData*/
#include <fstream>  //required for file operation:
#include <iostream> //required for input/output:
using namespace std;

main()
{
    ofstream myFile; // Object for Writing:
    ifstream file;   // Object for reading:
    char ch[30];     // Arguments, Name & size of Array.
    char text;       // character variable to read data from file:

    cout << "Enter some Text here: " << endl;
    cin.getline(ch, 30); // getline function

    // opening file for Writing:
    myFile.open("myData.txt", ios::out);
    if (myFile) // Error Checker:
    {
        myFile << ch;
        cout << "Data store Successfully.\n\n"
             << endl;
    }
    else
        cout << "Error while opening file: " << endl;
    myFile.close(); // file close:

    // opening file for reading:
    file.open("myData.txt", ios::in);
    if (file) // Error Checker:
    {
        file.seekg(7, ios::beg);  // skip first 7 bytes from beginning:
        file.seekg(-2, ios::cur); // then move back 2 bytes from current position:

        cout << "The output (after skipping first 7 bytes and then move 2 bytes back) is: ";
        while (!file.eof()) // read data from file till end of file:
        {
            file.get(text); // read data:
            cout << text;   // display data:
        }
    }
    else
        cout << "Error while Opening File: " << endl;
    file.close(); // file close:

    return 0;
}