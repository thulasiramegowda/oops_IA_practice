#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }

    BankAccount operator+(const BankAccount& account)
    {
        return BankAccount(balance + account.balance);
    }

    bool operator==(const BankAccount& account)
    {
        return balance == account.balance;
    }
};

int main()
{
    double balance1, balance2;

    cout << "Enter balance for Account 1: ";
    cin >> balance1;

    cout << "Enter balance for Account 2: ";
    cin >> balance2;

    BankAccount account1(balance1);
    BankAccount account2(balance2);

    BankAccount account3 = account1 + account2;

    cout << "\nCombined Account Balance:" << endl;
    account3.displayBalance();

    if (account1 == account2)
    {
        cout << "Both accounts have identical balances." << endl;
    }
    else
    {
        cout << "The accounts have different balances." << endl;
    }

    return 0;
}