// creating files with constructor function
#include <iostream>
#include <fstream>
int main()
{
    std::ofstream outf("studentlist"); // connect studentlist file to outf
    std::cout << "Enter roll number:";
    float roll;
    std::cin >> roll;     // get roll from key board and
    outf << roll << "\n"; // write to file studentlist
    std::cout << "Enter name : ";
    char name[20];
    std::cin >> name;          // get name from key board and
    // std::cout << name << "\n"; // write to file studentlist
    outf.close(); // disconnect studentlist file from outf

    std::ifstream inf("studentlist"); // connect studentlist File to inf
    inf >> roll;                // read the roll from file studentlist
    inf >> name;                // read the name from file studentlist
    std::cout << "\n";
    std::cout << "studentlist roll:" << roll << "\n";
    std::cout << "studentlist name:" << name << "\n";
    inf.close(); // disconnect studentlist from inf

    return 0;
}