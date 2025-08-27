// program to demonstrate writing to a file and reading from the same file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // writing to a file
    ofstream mero_file;

    // creats a file using and output stream of iostream class
    mero_file.open("myfile.txt");

    // writing contents to the file
    mero_file << "Hello Sanothimi K hudai xa teta tira?" << endl;
    mero_file << "Kata hideko bijuli balera" << endl;
    mero_file << "Mero Dushman xa dherai" << endl;

    // closing the ouput stream of the file stream
    mero_file.close();

    // reading from and existing file
    string mero_text;

    // crating an input stream
    ifstream mero_file_in;

    // connecting to a file
    mero_file_in.open("myfile.txt");
    if (mero_file_in.is_open())
    {
        while (getline(mero_file_in, mero_text))
        {
            cout << mero_text << endl;
        }
        mero_file_in.close();
    }
    else
    {
        cout << "File could not be found.";
    }

    // closing the ouput stream of the file stream
    mero_file.close();
    return 0;
}