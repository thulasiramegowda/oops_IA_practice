#include<iostream>
using namespace std;
class BankAccount{
  double balance;
  public:
  BankAccount(double b){
    balance =  b;
  }
  void display(){
    cout<<"Balance :"<<balance<<endl;
  }
  BankAccount operator+(const BankAccount& account){
    return BankAccount(balance + account.balance);
  }
  bool operator==(const BankAccount& account){
    return balance == account.balance;
  }
};
int main(){
  int bal1,bal2;
  cout<<"Enter balance for Account 1:";
  cin>>bal1;
  cout<<"Enter balance for Account 2:";
  cin>>bal2;
   BankAccount account1(bal1);
   BankAccount account2(bal2);
  BankAccount account3 = account1 + account2;
  cout<<"Combined Account Balance:"<<endl;
  account3.display();
  if(account1==account2){
    cout<<"The accounts have same balances.";
  }
  else{
    cout<<"The accounts have different balances.";
  }
  return 0;
  }