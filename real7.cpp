#include <iostream>
using namespace std;

class Ticket
{
public:
    virtual void calculateFare()
    {
        cout << "Ticket Fare" << endl;
    }
};

class RegularShow : public Ticket
{
    int fare;

public:
    void calculateFare()
    {
        cout << "Enter Regular Show Ticket Fare: ";
        cin >> fare;

        cout << "Regular Show Fare: Rs. "
             << fare << endl;
    }
};

class PremiumShow : public Ticket
{
    int fare;

public:
    void calculateFare()
    {
        cout << "Enter Premium Show Ticket Fare: ";
        cin >> fare;

        cout << "Premium Show Fare: Rs. "
             << fare << endl;
    }
};

int main()
{
    Ticket *t;

    RegularShow r;
    PremiumShow p;

    t = &r;
    t->calculateFare();

    t = &p;
    t->calculateFare();

    return 0;
}