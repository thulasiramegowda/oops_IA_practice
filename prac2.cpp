#include<iostream>
#include<string>
using namespace std;
class Ticket{
   
    int TicketNo,bookedseats,totalseats;
    string name;
    public:
    Ticket(int No,string movie,int total){
        TicketNo = No;
        name =movie;
        totalseats=total;
        bookedseats=0;
    }
    void bookseats(){
        int seatNo;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        if (seatNo > 0 && seatNo <= totalseats &&
            bookedseats < totalseats)
        {
            bookedseats++;
            cout << "Single seat booked successfully." << endl;
        }
        else
            cout << "Seat not available." << endl;
    }

    void bookseats(int count){
        if(count>0 && count<=totalseats-bookedseats){
            bookedseats += count;
        }
        else{
            cout<<"Seats are not available."<<endl;
        }
    }
    void bookseats(int count,string catogory){
        if(count>=0 && count<=totalseats-bookedseats){
            bookedseats+=count;
    cout<<count<< " " << catogory<< " seats booked successfully."<< endl;
        }
        else{
            cout<<"Seats are not available."<<endl;
        }
    }
    void display(){
        cout << "\nBooking Summary:" << endl;
        cout << "Ticket Number: " << TicketNo << endl;
        cout << "Movie Name: " << name << endl;
        cout << "Total Seats: " << totalseats << endl;
        cout << "Booked Seats: " << bookedseats << endl;
        cout << "Available Seats: "<< totalseats - bookedseats << endl;
    }
 ~Ticket()
    {
        cout << "Ticket object destroyed." << endl;
    }
};

int main(){
    int ticNo,count,totalseats;
    string movie,catogory;
    
   cout<<"Enter total number of seats:";
    cin>>totalseats;
    cout<<"Enter Ticket Number:";
    cin>>ticNo;
    cout<<"Enter movie name";
     cin>>movie;
    
    Ticket t(ticNo,movie,totalseats);
    
    t.bookseats();
    
    cout<<"enter number of counts:";
    cin>>count;
    t.bookseats(count);
    
   cout<<"enter number of counts:";
    cin>>count;
    cout<<"Enter catogory:";
    cin>>catogory;
    t.bookseats(count,catogory);
    
    t.display();
    return 0;
}
