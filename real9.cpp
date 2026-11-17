#include <iostream>
using namespace std;

class Ticket
{
protected:
    int baseFare;

public:
    Ticket(int fare)
    {
        baseFare = fare;
    }

    virtual void calculateFare() = 0;
};

class RegularShow : public Ticket
{
public:
    RegularShow(int fare) : Ticket(fare) {}

    void calculateFare()
    {
        cout << "Regular Show Fare: "
             << baseFare << endl;
    }
};

class PremiumShow : public Ticket
{
public:
    PremiumShow(int fare) : Ticket(fare) {}

    void calculateFare()
    {
        cout << "Premium Show Fare: "
             << baseFare + 100 << endl;
    }
};

class ThreeDShow : public Ticket
{
public:
    ThreeDShow(int fare) : Ticket(fare) {}

    void calculateFare()
    {
        cout << "3D Show Fare: "
             << baseFare + 150 << endl;
    }
};

int main()
{
    int fare;

    cout << "Enter base fare: ";
    cin >> fare;

    RegularShow r(fare);
    PremiumShow p(fare);
    ThreeDShow t(fare);

    r.calculateFare();
    p.calculateFare();
    t.calculateFare();

    return 0;
}