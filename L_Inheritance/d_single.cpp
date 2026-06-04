#include <iostream>
using namespace std;

class Bike
{
public:
    char model[30] = "Superlaggara V4";
    int price = 25000000;
};

class Ducati : public Bike
{
public:
    int tax = 0.13 * price;

    void tax_price()
    {
        cout << "Price of bike after tax : " << (price + tax) << endl;
    }
};

int main()
{
    Ducati d1;
    cout << "Bike model = " << d1.model << endl;
    cout << "Price without tax = " << d1.price << endl;
    cout << "Tax amount = " << d1.tax << endl;
    d1.tax_price();
    return 0;
}