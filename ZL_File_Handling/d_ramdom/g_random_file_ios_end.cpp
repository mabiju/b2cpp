/*Seekg(long_num, ios::end) Example: InfoBrother*/
#include <fstream>  //required for file operation:
#include <iostream> //required for input/output:
using namespace std;

main()
{
    ofstream myFile; // Object for Writing:
    ifstream file;   // Object for reading:
    char ch[30];     // Arguments - Name & size of Array.
    char text;       // character variable to read data from file:

    cout << "Enter some Text here: " << endl;
    cin.getline(ch, 30);

    // opening file for Writing:
    myFile.open("InfoBrother.txt", ios::out);
    if (myFile) // Error Checker:
    {
        myFile << ch;
        cout << "Data store Successfully:" << endl;
    }
    else
        cout << " Error while opening file: " << endl;
    myFile.close(); // file close:

    // opening file for reading:
    file.open("InfoBrother.txt", ios::in);
    if (file) // Error Checker:
    {
        // from end of file, move pointer 11 bytes backword:
        file.seekg(-11, ios::end);
        cout << "The last 11 bytes are: ";

        while (!file.eof()) // read data till end of the file:
        {
            file.get(text); // read:
            cout << text;   // display:
        }
    }

    else
        cout << "Error while Opening File: " << endl;
    file.close(); // file close:

    return 0;
}