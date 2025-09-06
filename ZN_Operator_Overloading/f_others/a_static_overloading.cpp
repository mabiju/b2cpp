// static overloading
#include <iostream>
using namespace std;

class cal
{
   static int x;

public:
   static void getx()
   {
      cout << "enter the value of x:";
      cin >> x;
      cout << "The value of x is:" << x;
   }
};

int cal::x = 0;
int main()
{
   cal::getx();
   return 0;
}
