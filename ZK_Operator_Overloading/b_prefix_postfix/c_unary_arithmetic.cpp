// ============================================================
// UNARY ARITHMETIC OPERATORS (+x and -x) on built-in types
// ============================================================
// Concept: Unary operators work on a SINGLE operand.
//   +x : Unary plus   (usually does nothing, but confirms sign)
//   -x : Unary minus  (negates the value)
// ============================================================
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = -5;

    // Unary plus: confirms the positive sign
    cout << "=== Unary Plus (+x) ===" << endl;
    cout << "+a = " << +a << endl;   // +10 (no change)
    cout << "+b = " << +b << endl;   // -5  (no change)

    // Unary minus: negates the value
    cout << "\n=== Unary Minus (-x) ===" << endl;
    cout << "-a = " << -a << endl;   // -10 (negated)
    cout << "-b = " << -b << endl;   //  +5 (negated)

    return 0;
}
