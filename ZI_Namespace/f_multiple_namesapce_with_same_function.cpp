// multiple namespace with same function name and its access
#include <iostream>
using namespace std;

// first namespece SectionOne
namespace sectionOne
{
    void func()
    {
        cout << "Hello Nepal" << endl;
    }
}

// second namespace SectionTwo
namespace sectionTwo
{
    void func()
    {
        cout << "Hello Sanothimi";
    }
}

int main()
{
    // Calls function from SectionOne namespace.
    sectionOne::func();
    
    // Calls function from SectionTwo namespace.
    sectionTwo::func();
    return 0;
}