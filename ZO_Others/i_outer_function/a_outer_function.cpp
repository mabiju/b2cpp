#include <iostream>
using namespace std;

class Bike
{
private:
    char bike_name[10];
    int bike_price;

public:
    void getdata();
    void showdata();
};
void Bike ::getdata()
{
    cout << "Enter bike name: ";
    cin >> bike_name;
    cout << "Enter bike price: ";
    cin >> bike_price;
}
void Bike ::showdata()
{
    cout << "Bike name is " << bike_name << endl;
    cout << "Bike price is " << bike_price;
}

int main()
{
    Bike b1;
    b1.getdata();
    b1.showdata();
    return 0;
}