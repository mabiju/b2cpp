#include <iostream>
using namespace std;

template <class T>
T add(T x, T y)
{
   return x + y;
}
int main()
{
   int a = 5, b = 6;
   cout << "Sum of integers a and b: " << add(a, b) << endl;

   float c = 5.5, d = 6.5;
   cout << "Sum of floats c and d: " << add(c, d) << endl;

   char e = 'x', f = 'y';
   cout << "Sum of characters e and f: " << add(e, f) << endl;

   return 0;
}
