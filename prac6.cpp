#include<iostream>
#include<string>
using namespace std;
class Employee{
  protected:
  string name;
  double salary;
  public:
  void getdetails(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter salary:";
    cin>>salary;
  }
  void calculatesalary(){
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Employee salary:"<<salary<<endl;
  }
  virtual void calculatebonus(){
    cout<<"Bonus: "<<salary*0.05;
  }
};

class manager:public Employee{
  public:
 void calculatebonus(){
    cout<<"Bonus: "<<salary*0.20;
  }
};

class developer :public Employee{
  public:
 void calculatebonus(){
    cout<<"Bonus: "<<salary*0.10;
  }
};

int main(){
  manager m;
  developer d;
  m.getdetails();
  d.getdetails();

  cout<<"Manager deatails."<<endl;
    m.calculatesalary();
  m.calculatebonus();
cout<<endl;
   cout<<"developer deatails."<<endl;
   d.calculatesalary();
  d.calculatebonus();
  return 0;
}