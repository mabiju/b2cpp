#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inch;

public:
    Distance();
    void inputData();
    void showData();
    Distance addDistance(Distance d2);
};

Distance::Distance()
{
    feet = 0;
    inch = 0;
}

void Distance::inputData()
{
    cout << "Enter Value of feets : ";
    cin >> feet;
    cout << "Enter value of inches : ";
    cin >> inch;

    inch = (inch >= 12) ? 12 : inch;
}

void Distance::showData()
{
    cout << "Feets : " << feet << endl;
    cout << "Inches: " << inch << endl;
}

Distance Distance::addDistance(Distance d2)
{
    Distance temp;

    temp.feet = feet + d2.feet;
    temp.inch = inch + d2.inch;

    if (temp.inch >= 12)
    {
        temp.feet++;
        temp.inch -= 12;
    }
    return temp;
}

int main()
{
    Distance d1;
    Distance d2;
    Distance d3;

    cout << "Enter Distance1 : " << endl;
    d1.inputData();

    cout << "Enter Distance2 : " << endl;
    d2.inputData();

    d3 = d1.addDistance(d2);

    cout << "Distance1 : " << endl;
    d1.showData();

    cout << "\nDistance2 : " << endl;
    d2.showData();

    cout << "\nAdded : " << endl;
    d3.showData();
    cout << endl;
    return 0;
}