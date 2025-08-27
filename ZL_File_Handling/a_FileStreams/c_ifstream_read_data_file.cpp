#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string srg;
    ifstream myfile("hello.txt");
    if(myfile.is_open())
    {
        while (getline(myfile,srg))
        {
            cout << srg << endl;
        } 
    }else{
        cout << "No such file found." << endl;
    }
}