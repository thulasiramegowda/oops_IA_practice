#include<iostream>
using namespace std;
class BankAccount{
  protected:
  float balance;
  BankAccount(float b){
    balance = b;
  }
  void virtual calculatefare()=0;
};

class SavingAccount : public BankAccount{
  public:
  SavingAccount(float b):BankAccount(b){}
  void calculatefare(){
    cout<<"saving account:"<<balance*0.04<<endl;
  }
};

class FixedAccount : public BankAccount{
  public:
  FixedAccount(float b):BankAccount(b){}
  void calculatefare(){
    cout<<"Fixed account:"<<balance*0.07<<endl;
  }
};

int main(){
 float bal1,bal2;
  cout<<"Enter bal1:";
  cin>>bal1;
   cout<<"Enter bal2:";
  cin>>bal2;

  SavingAccount s(bal1);
  FixedAccount f(bal2);
  s.calculatefare();
  f.calculatefare();
  return 0;
}