#include <iostream>
#include <string>

using namespace std;

 class BankAccount{
   protected:
   int accountNumber;
   string HolderName;
   double balance; 

   public:
   BankAccount(int accNo,string name,double b){
    accountNumber = accNo;
    HolderName = name;
    balance = b;
   }

   void deposit(double amount){
    if(amount>0){
        balance = balance + amount;
        cout<<"Amount deposited successfully."<<endl;
    }
    else{
        cout<<"Invalid amount."<<endl;
    }
   }
   void withdraw(double amount){
    if(amount>=0 && amount<=balance){
        balance = balance - amount;
        cout<<"Amount withdrawn successfully."<<endl;
    }
    else{
        cout<<"Invalid amount."<<endl;
    }
   }
   void display(){
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Account Holder Name: "<<HolderName<<endl;
    cout<<"Final balance: "<<balance<<endl;
   }
   ~BankAccount(){
     cout<<"Object destoryed successfully."<<endl;
   }
 };

 int main(){
    int accNo;
    string name;
    double amount,balance;
    cout<<"Enter Account Number:";
    cin>>accNo;
    cout<<"Enter holder name:";
    cin>>name;
    cout<<"Enter balance:";
    cin>>balance;
    BankAccount acc1(accNo,name,balance);
    cout<<"Enter deposit amount";
    cin>>amount;
    acc1.deposit(amount); 
    cout<<"Enter amount to withdraw:";
    cin>>amount;
    acc1.withdraw(amount);

    cout<<"Enter Account Number:";
    cin>>accNo;
    cout<<"Enter holder name:";
    cin>>name;
    cout<<"Enter balance:";
    cin>>balance;
    BankAccount acc2(accNo,name,balance);
    cout<<"Enter deposit amount";
    cin>>amount;
    acc2.deposit(amount); 
    cout<<"Enter amount to withdraw:";
    cin>>amount;
    acc2.withdraw(amount);
     cout<<endl;
     cout<<"Account details"<<endl;
     acc1.display();
    acc2.display();
return 0;
 }