#include<iostream>
#include<string>
using namespace std;

class Ticket
{
    int ticketNo, totalSeats, bookedSeats;
    string movieName;

public:
    Ticket(int no, string movie, int seats)
    {
        ticketNo = no;
        movieName = movie;
        totalSeats = seats;
        bookedSeats = 0;
    }

    void bookSeats()
    {
        int seatNo;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        if (seatNo > 0 && seatNo <= totalSeats &&
            bookedSeats < totalSeats)
        {
            bookedSeats++;
            cout << "Single seat booked successfully." << endl;
        }
        else
            cout << "Seat not available." << endl;
    }

    void bookSeats(int count)
    {
        if (count > 0 && count <= totalSeats - bookedSeats)
        {
            bookedSeats += count;
            cout << "Multiple seats booked successfully." << endl;
        }
        else
            cout << "Not enough seats available." << endl;
    }

    void bookSeats(int count, string category)
    {
        if (count > 0 && count <= totalSeats - bookedSeats)
        {
            bookedSeats += count;
            cout << count << " " << category
                 << " seats booked successfully." << endl;
        }
        else
            cout << "Not enough seats available." << endl;
    }

    void display()
    {
        cout << "\nBooking Summary:" << endl;
        cout << "Ticket Number: " << ticketNo << endl;
        cout << "Movie Name: " << movieName << endl;
        cout << "Total Seats: " << totalSeats << endl;
        cout << "Booked Seats: " << bookedSeats << endl;
        cout << "Available Seats: "
             << totalSeats - bookedSeats << endl;
    }

    ~Ticket()
    {
        cout << "Ticket object destroyed." << endl;
    }
};

int main()
{
    int no, total, count;
    string movie, category;

    cout << "Enter Ticket Number: ";
    cin >> no;

    cout << "Enter Movie Name: ";
    cin >> movie;

    cout << "Enter Total Seats: ";
    cin >> total;

    Ticket t(no, movie, total);

    t.bookSeats();

    cout << "Enter Number of Seats: ";
    cin >> count;
    t.bookSeats(count);

    cout << "Enter Seat Category: ";
    cin >> category;

    cout << "Enter Number of Seats: ";
    cin >> count;
    t.bookSeats(count, category);

    t.display();

    return 0;
}