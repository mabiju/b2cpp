#include <iostream>
using namespace std;

template <class t>
t add(t x, t y)
{
   return x + y;
}

int main()
{
   int p = 5, q = 6;
   cout << "Sum of int = " << add(p, q) << endl;
   float l = 5.5, k = 5.8;
   cout << "Sum of float = " << add(l, k) << endl;
   return 0;
}