// simple calculator using class template
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResult()
    {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << "Sum of " << num1 << " and " << num2 << " = " << add() << endl;
        cout << "Difference of " << num1 << " and " << num2 << " = " << subtract() << endl;
        cout << "Product of " << num1 << " and " << num2 << " = " << multiply() << endl;
        cout << "Quotient of " << num1 << " and " << num2 << " = " << divide() << endl;
    }

    T add()
    {
        return num1 + num2;
    }
    T subtract()
    {
        return num1 - num2;
    }
    T multiply()
    {
        return num1 * num2;
    }
    T divide()
    {
        return num1 / num2;
    }
};

int main()
{
    Calculator<int> intCalc(45, 13);
    Calculator<float> floatCalc(278.56, 45.63);

    cout << "Int results:" << endl;
    intCalc.displayResult();

    cout << endl;
    cout << "Float results:" << endl;
    floatCalc.displayResult();

    return 0;
}