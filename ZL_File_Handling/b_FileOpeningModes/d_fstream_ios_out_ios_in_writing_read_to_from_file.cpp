#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;

    // open file for writing
    file.open("hello.txt", ios::out); // ios::out -> writing to the file

    if (!file)
    {
        cout << "Something went wrong while writing to a file." << endl;
    }
    file << "Hello Sanothimi!" << endl;
    file << "Hello Nepal" << endl;
    file.close();

    // open file for reading
    file.open("hello.txt", ios::in); // ios::in -> reading the content of the file
    if (!file)
    {
        cout << "Something went wrong while reading the content." << endl;
    }

    string line;
    cout << "Reading content from the file." << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
    return 0;
}