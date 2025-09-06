// example of function overloading by using  template class
#include <iostream>
#include <string.h>
using namespace std;

template <class T>
T add(T x, T y)
{
   return x + y;
}
int main()
{
   int a = 5, b = 6;
   cout << add(a, b) << endl;
   float c = 5.5, d = 6.5;
   cout << add(c, d) << endl;
   char e = 'x', f = 'y';
   cout << add(e, f);
   return 0;
}
