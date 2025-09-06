#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile;
    ifstream file;
    char ch[25];
    char text;

    cout << "Enter your text :" << endl;
    cin.getline(ch, 25);

    myFile.open("my_file.txt", ios::out);
    if (myFile)
    {
        myFile << ch;
        cout << "Data insert bhayo hajur...." << endl;
    }
    else
    {
        cout << "Something went wrong." << endl;
    }
    myFile.close();

    file.open("my_file.txt", ios::in);
    if (file)
    {
        file.seekg(-5, ios::end);
        cout << "Output of last 5 bytes : ";
        while (!file.eof())
        {
            file.get(text);
            cout << text;
        }
    }
    else
    {
        cout << "Something went wrong...." << endl;
    }
    file.close();
    return 0;
}