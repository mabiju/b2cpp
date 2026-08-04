#include <iostream>
using namespace std;

class One
{
public:
    void hello()
    {
        cout << "Hello friends." << endl;
    }
};

class Two
{
public:
    One o1;
    void hi()
    {
        o1.hello();
        cout << "Hi friends." << endl;
    }
};

int main()
{
    Two t1;
    t1.hi();
    return 0;
}