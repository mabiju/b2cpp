#include <iostream>
using namespace std;

class BankAccount
{
    int balance = 500;

public:
    void deposit(int amt)
    {
        if (amt > 0)
        {
            balance += amt;
        }
    }
    int displayBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount b1;
    int depo;
    cout << "Enter deposit amount :";
    cin >> depo;
    b1.deposit(depo);
    cout << "The balance have in account = " << b1.displayBalance() << endl;
    return 0;
}