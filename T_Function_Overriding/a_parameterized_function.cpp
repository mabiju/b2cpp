#include <iostream>
using namespace std;

class student
{
   int roll;

public:
   void getroll(int x)
   {
      roll = x;
      cout << "Roll=" << x;
   }
};

int main()
{
   student kale, kali;
   kale.getroll(420);
   kali.getroll(840);
   return 0;
}
