// ============================================================
// POSTFIX INCREMENT (x++) on built-in types
// ============================================================
// Concept: In postfix, the value is used FIRST in the
//          expression, then INCREMENTED.
//   Steps: 1) a = b        (assignment with old value)
//          2) b = b + 1    (increment)
// ============================================================
#include <iostream>
using namespace std;

int main()
{
    int b = 10, a;

    // b++ means: assign b to a first (a=10), then increment b (10->11)
    a = b++;

    cout << "=== Postfix Increment (b++) ===" << endl;
    cout << "a = " << a << endl;  // a = 10 (old value assigned)
    cout << "b = " << b << endl;  // b = 11 (incremented after)

    return 0;
}
