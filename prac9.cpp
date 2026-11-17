#include<iostream>
using namespace std;
class Ticket{
  public:
  double baseFare;
  public:
  Ticket(double fare){
    baseFare=fare;
  }
  virtual void calculatefare()=0;
};

class RegularShow:public Ticket{
  public:
  RegularShow(float fare):Ticket(fare){}
  void calculatefare(){
    cout<<"r Base fare: "<<baseFare<<endl;
  }
};

class PremiumShow:public Ticket{
  public:
  PremiumShow(float fare):Ticket(fare){}
  void calculatefare(){
    cout<<" p Base fare: "<<baseFare+100<<endl;
  }
};

class ThreeDShow:public Ticket{
  public:
  ThreeDShow(float fare):Ticket(fare){}
  void calculatefare(){
    cout<<"t Base fare: "<<baseFare+150<<endl;
  }
};

int main(){
  float fare;
  cout<<"Enter fare:";
  cin>>fare;

  RegularShow r(fare);
  PremiumShow p(fare);
  ThreeDShow t(fare);

  r.calculatefare();
p.calculatefare();
  t.calculatefare();
  return 0;
}