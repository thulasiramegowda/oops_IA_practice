#include<iostream>
using namespace std;
class Ticket{
  public:
  virtual void calculatefare(){
    cout<<"Fare"<<endl;
  }
};
class RegularShow:public Ticket{
  public:
  float fare;
  public:
  void calculatefare(){
    cout<<"Enter fare:";
    cin>>fare;
    cout<<"Fare of regular show is "<<fare<<endl;
  }
};

class PremiumShow:public Ticket{
  public:
  float fare;
  public:
  void calculatefare(){
    cout<<"Enter fare:";
    cin>>fare;
    cout<<"Fare of premium show is "<<fare<<endl;
  }
};

int main(){
  Ticket *t;
  RegularShow r;
  PremiumShow p;
  t=&r;
  t->calculatefare();
  t=&p;
  t->calculatefare();
  return 0;
}