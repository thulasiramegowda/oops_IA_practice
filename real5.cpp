#include <iostream>
using namespace std;

class BankAccount
{
protected:
    float balance;

public:
    BankAccount(float b)
    {
        balance = b;
    }

    virtual void calculateInterest() = 0;
};

class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(float b) : BankAccount(b) {}

    void calculateInterest()
    {
        cout << "Savings Account Interest: "
             << balance * 0.04 << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
public:
    FixedDepositAccount(float b) : BankAccount(b) {}

    void calculateInterest()
    {
        cout << "Fixed Deposit Interest: "
             << balance * 0.07 << endl;
    }
};

int main()
{
    float balance1, balance2;

    cout << "Enter Savings Account Balance: ";
    cin >> balance1;

    cout << "Enter Fixed Deposit Account Balance: ";
    cin >> balance2;

    SavingsAccount s(balance1);
    FixedDepositAccount f(balance2);

    s.calculateInterest();
    f.calculateInterest();

    return 0;
}