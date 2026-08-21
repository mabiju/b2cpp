#include <iostream>
using namespace std;

namespace AutoMobile
{
    class Car
    {
        public:
        void gearUp()
        {
            cout << "Hello guys I'm a real car." << endl;
        }
    };
}
namespace Toys
{
    class Car
    {
        public:
        void gearUp()
        {
            cout << "Namaste, I'm a toy car." << endl;
        }
    };
}

int main()
{
    AutoMobile::Car realCar;
    Toys::Car toyCar;

    realCar.gearUp();
    toyCar.gearUp();
    return 0;
}
