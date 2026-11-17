#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    double salary;

public:
    void getDetails()
    {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void calculateSalary()
    {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual void calculateBonus()
    {
        cout << "Bonus: " << salary * 0.05 << endl;
    }
};

class Manager : public Employee
{
public:
    void calculateBonus()
    {
        cout << "Bonus: " << salary * 0.20 << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateBonus()
    {
        cout << "Bonus: " << salary * 0.10 << endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    cout << "Enter Manager Details" << endl;
    m.getDetails();

    cout << "\nEnter Developer Details" << endl;
    d.getDetails();

    cout << "\nManager Details" << endl;
    m.calculateSalary();
    m.calculateBonus();

    cout << "\nDeveloper Details" << endl;
    d.calculateSalary();
    d.calculateBonus();

    return 0;
}