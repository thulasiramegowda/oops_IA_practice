#include<iostream>
#include<string>
using namespace std;
class Employee
{
    int employeeID;
    string name;
    float salary,overtimepay,bonus,netsalary;
    public:
    Employee(){
        employeeID=0;
       name ="";
       salary = 0;
       overtimepay=0;
       bonus=0;
     netsalary=0;
    }

void setdata(int ID,string n,float sal){
    employeeID = ID;
    name = n;
    salary = sal;
}

void overtime(int hours,float rate){
    overtimepay=hours*rate;
}

void bonuscalculate(){
    if(salary>=50000){
        bonus = salary * 0.10;
        cout<<"Bonus Added successfully."<<endl;
    }
    else{
        bonus=0;
        cout<<"Bonus is zero"<<endl;
    }
}
void netsalarycalculate(){
    netsalary = salary + bonus + overtimepay;
}
void display(){
    cout<<"Employye name:"<<name<<endl;
    cout<<"Employee ID:"<<employeeID<<endl;
    cout<<"Employee Salary:"<<salary<<endl;
    cout<<"Bonus:"<<bonus<<endl;
    cout<<"Overtime:"<<overtimepay<<endl;
    cout<<"Netsalary:"<<netsalary<<endl;
}
~Employee(){
    cout<<"Object destroyed successfully."<<endl;
}
};

int main(){
    int Id,hours,n;
    string name;
    float rate,salary,bonus,overtime;
    cout<<"Enter n:";
    cin>>n;
    Employee emp[10];
    for(int i=0;i<n;i++){
        cout<<"Enter name:";
        cin>>name;
        cout<<"ID:";
        cin>>Id;
        cout<<"salary:";
        cin>>salary;
        emp[i].setdata(Id,name,salary);
    }
    for(int i=0;i<n;i++){
        cout<<"Enter hours:";
        cin>>hours;
        cout<<"Enter rate:";
        cin>>rate;
        emp[i].overtime(hours,rate);
        emp[i].bonuscalculate();
        emp[i].netsalarycalculate();
    }
    cout<<"Displaying data:"<<endl;
    for(int i=0;i<n;i++)
        {
            emp[i].display();
        }
    return 0;
}