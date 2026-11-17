#include<iostream>
using namespace std;
class Ticket{
  int showID,totalseats,bookedseats;
  public:
  void getdata(){
    cout<<"Enter Show ID:";
    cin>>showID;
    cout<<"Enter total seats:";
    cin>>totalseats;
    bookedseats=0;
  }
  int getID(){
    return showID;
  }
  void book(int n){
    if(n<=0 && n>totalseats-bookedseats)
      throw "Invalid seats";
    bookedseats = bookedseats+n;
    cout<<"Seats Booked successfully."<<endl;
  }
  void cancel(int n){
    if(n>bookedseats)
      throw "Invalid seats";

    bookedseats=bookedseats-n;
    cout<<"Seats cancellation successfully done."<<endl;
  }
void display(){
  cout<<"Show ID:"<<showID<<endl;
  cout<<"Booked seats:"<<bookedseats<<endl;
  cout<<"Seats availabel:"<<totalseats-bookedseats<<endl;
} 
};

int main(){
  int choice,n,id,found,seats;
  cout<<"Enter n:";
  cin>>n;
  Ticket t[10];
  for(int i=0;i<n;i++){
    t[i].getdata();
  }
  do{
    cout<<"1.Book  2.cancel 3.search 4.Exit";
    cin>>choice;
    try{
      if(choice>=1 && choice<=3){
        cout<<"Enter show ID:";
        cin>>id;
        found =-1;
        for(int i=0;i<n;i++){
          if(t[i].getID() == id){
            found=i;
            break;
          }
        }

        if(found==-1){
        cout<<"ShowId not found.";
        }
        if(choice==1){
          cout<<"Enter seats to book:";
          cin>>seats;
          t[found].book(seats);
        }
        if(choice==2){
          cout<<"Enter seats to cancel:";
          cin>>seats;
          t[found].cancel(seats);
        }
        else{
          t[found].display();
        }
      }
      else if(choice!=4){
        cout<<"Invalid choice";
      }
    }
     catch(const char *msg) {
       cout<<"Exception:"<<msg<<endl;
     }
  }while(choice!=4);
    return 0;
}