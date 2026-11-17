#include<iostream>
#include<string>
using namespace std;
class Ticket{
  protected:
  string moviename;
  int Notickets;
  float amount;
  public:
  void getdetails(){
    cout<<"Enter movie name:";
    cin>>moviename;
    cout<<"Enter amount:";
    cin>>amount;
    cout<<"Enter number of tickets:";
    cin>>Notickets;
  }
 virtual void displaydetails(){
    cout<<"Movie Name:"<<moviename<<endl;
    cout<<"Amount:"<<amount<<endl;
    cout<<"Number of ticket:"<<Notickets<<endl;
  }
};

class RegularShow : public Ticket{
  public:
  void displaydetails(){
  cout<<"Regular show details:"<<endl;
  Ticket::displaydetails();
  cout<<"Total price:"<<Notickets*amount<<endl;
  }
};
class PremiumShow : public Ticket{
  public:
  void displaydetails(){
  cout<<"Premium show details:"<<endl;
  Ticket::displaydetails();
  cout<<"Total price:"<<Notickets*amount<<endl;
  }
};
class ThreeDShow : public Ticket{
  public:
  void displaydetails(){
  cout<<"ThreeD show details:"<<endl;
  Ticket::displaydetails();
  cout<<"Total price:"<<Notickets*amount<<endl;
  }
};

int main(){
  Ticket *t[3];
  RegularShow r;
  PremiumShow p;
  ThreeDShow d;
  t[0]=&r;
  t[1]=&p;
  t[2]=&d;

  for(int i=0;i<3;i++){
    t[i]->getdetails();
  }
   for(int i=0;i<3;i++){
    t[i]->displaydetails();
  }
  return 0;
}
  