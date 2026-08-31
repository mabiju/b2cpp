// ============================================================
// PREFIX vs POSTFIX INCREMENT — side-by-side comparison
// ============================================================
// Key Difference:
//   b = a++  ->  b gets OLD value, then a increments
//   b = ++a  ->  a increments first, then b gets NEW value
// ============================================================
#include <iostream>
using namespace std;

int main()
{
    int a = 41, b;

    // POSTFIX: a is assigned to b FIRST (b=41), then a becomes 42
    b = a++;
    cout << "=== Postfix: b = a++ ===" << endl;
    cout << "b = " << b << endl;  // b = 41 (old value)
    cout << "a = " << a << endl;  // a = 42 (incremented after)

    // PREFIX:  a is incremented FIRST (a=43), then assigned to b
    b = ++a;
    cout << "\n=== Prefix: b = ++a ===" << endl;
    cout << "b = " << b << endl;  // b = 43 (new value)
    cout << "a = " << a << endl;  // a = 43 (already incremented)

    return 0;
}
