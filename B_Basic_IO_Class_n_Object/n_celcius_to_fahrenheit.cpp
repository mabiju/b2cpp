#include <iostream>
using namespace std;

class Temperature
{
public:
    int celcius;

    void input()
    {
        cout << "Enter temperature in celcius:";
        cin >> celcius;
    }
    void output()
    {
        cout << "Fahrenheit conversion of celcius = " << (float)(9.0 / 5.0 * celcius + 32.0);
    }
};

int main()
{
    Temperature t1;
    t1.input();
    t1.output();
    return 0;
}