#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class MyFile
{
    string mytext;

public:
    MyFile() {};

    // 8.3 Using constructor to open file
    MyFile(const string &name)
    {
        ifstream merofile;
        merofile.open(name);
        if (!merofile.good())
        {
            cout << "We could not open your file." << endl;
        }
        else
        {
            string line;
            while (getline(merofile, line))
            {
                mytext = mytext + line;
            }
        }
    }
    string Contents()
    {
        return mytext;
    }
};

int main()
{
    MyFile obj("ram.txt");
    cout << "Contents are : " << obj.Contents() << endl;
    return 0;
}