#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // creating a text string which is used to output the text file
    string txtString;

    // red from the text file
    ifstream myfile("hello.txt");
    
    // using a while loop together with the getline() function to read the file line by line
    while (getline(myfile, txtString))
    {
        cout << txtString;
    }

    // close the file
    myfile.close();
    return 0;    
}