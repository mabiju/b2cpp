#include <iostream>
// provides ofstream and ifstream functionality for file handling
#include <fstream>
using namespace std;

int main()
{
    // ofstream is used to create a new file and write contents on it.
    ofstream myfile("ram.txt");

    // write to the file
    myfile << "Hello Students, how are you?" << endl;

    // close the file
    myfile.close();
}