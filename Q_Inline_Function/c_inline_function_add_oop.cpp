#include <iostream>
using namespace std;

class Sum
{
public:
    inline int add(int a, int b)
    {
        return (a + b);
    }
};

int main()
{
    Sum s1;
    cout << "The sum = " << s1.add(34, 156) << endl;
    cout << "The sum = " << s1.add(234, 6) << endl;
    cout << "The sum = " << s1.add(34, 506) << endl;
    cout << "The sum = " << s1.add(22, 56) << endl;
    cout << "The sum = " << s1.add(78, 526) << endl;
    return 0;
}