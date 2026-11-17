#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;
    float salary, bonus, overtimePay, netSalary;

public:
    Employee()
    {
        employeeId = 0;
        employeeName = "";
        salary = 0;
        bonus = 0;
        overtimePay = 0;
        netSalary = 0;
    }

    void setData(int id, string name, float sal)
    {
        employeeId = id;
        employeeName = name;
        salary = sal;
    }

    void calculateOvertimePay(int hours, float rate)
    {
        overtimePay = hours * rate;
    }

    void isEligibleForBonus()
    {
        if (salary >= 50000)
        {
            bonus = salary * 0.10;
            cout << "Eligible for bonus." << endl;
        }
        else
        {
            bonus = 0;
            cout << "Not eligible for bonus." << endl;
        }
    }

    void calculateNetSalary()
    {
        netSalary = salary + bonus + overtimePay;
    }

    void display()
    {
        cout << "\nEmployee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Overtime Pay: " << overtimePay << endl;
        cout << "Net Salary: " << netSalary << endl;
    }

    ~Employee()
    {
        cout << "Employee object destroyed." << endl;
    }
};

int main()
{
    int n, id, overtimeHours;
    string name;
    float salary, overtimeRate;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[10];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter employee " << i + 1 << " ID: ";
        cin >> id;

        cout << "Enter employee " << i + 1 << " name: ";
        cin >> name;

        cout << "Enter employee " << i + 1 << " salary: ";
        cin >> salary;

        employees[i].setData(id, name, salary);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter overtime hours for employee "
             << i + 1 << ": ";
        cin >> overtimeHours;

        cout << "Enter overtime rate for employee "
             << i + 1 << ": ";
        cin >> overtimeRate;

        employees[i].calculateOvertimePay(overtimeHours, overtimeRate);
        employees[i].isEligibleForBonus();
        employees[i].calculateNetSalary();
    }

    cout << "\nEmployee Details:" << endl;

    for (int i = 0; i < n; i++)
    {
        employees[i].display();
    }

    return 0;
}