#include <iostream>
using namespace std;

class student
{
public:
    void greeting();
};
void student::greeting()
{
    cout << "God morning.";
};

int main()
{
    student s1;
    s1.greeting();
    return 0;
}
