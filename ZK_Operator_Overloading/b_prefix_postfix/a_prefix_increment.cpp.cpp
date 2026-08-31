// ============================================================
// PREFIX INCREMENT (++x) on built-in types
// ============================================================
// Concept: In prefix, the value is INCREMENTED FIRST,
//          then used in the expression.
//   Steps: 1) b = b + 1   (increment)
//          2) a = b        (assignment)
// ============================================================
#include <iostream>
using namespace std;

int main()
{
    int b = 10, a;

    // ++b means: increment b first (10->11), then assign to a
    a = ++b;

    cout << "=== Prefix Increment (++b) ===" << endl;
    cout << "a = " << a << endl;  // a = 11 (incremented value)
    cout << "b = " << b << endl;  // b = 11 (already incremented)

    return 0;
}
