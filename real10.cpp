#include <iostream>
using namespace std;

class Ticket
{
    int showID, totalSeats, bookedSeats;

public:
    void read()
    {
        cout << "Enter Show ID: ";
        cin >> showID;

        cout << "Enter Total Seats: ";
        cin >> totalSeats;

        bookedSeats = 0;
    }

    int getID()
    {
        return showID;
    }

    void book(int n)
    {
        if (n > totalSeats - bookedSeats)
            throw "Seats not available";

        bookedSeats += n;

        cout << "Booking successful" << endl;
    }

    void cancel(int n)
    {
        if (n > bookedSeats)
            throw "Seats not booked";

        bookedSeats -= n;

        cout << "Cancellation successful" << endl;
    }

    void display()
    {
        cout << "Show ID: " << showID
             << "\nTotal Seats: " << totalSeats
             << "\nBooked Seats: " << bookedSeats
             << "\nAvailable Seats: "
             << totalSeats - bookedSeats << endl;
    }
};

int main()
{
    Ticket t[10];

    int n, id, seats, choice, i, found;

    cout << "Enter number of shows: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        t[i].read();
    }

    do
    {
        cout << "\n1.Book  2.Cancel  3.Search  4.Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        try
        {
            if (choice >= 1 && choice <= 3)
            {
                cout << "Enter Show ID: ";
                cin >> id;

                found = -1;

                for (i = 0; i < n; i++)
                {
                    if (t[i].getID() == id)
                    {
                        found = i;
                        break;
                    }
                }

                if (found == -1)
                    throw "Show ID not found";

                if (choice == 1)
                {
                    cout << "Enter seats to book: ";
                    cin >> seats;

                    t[found].book(seats);
                }
                else if (choice == 2)
                {
                    cout << "Enter seats to cancel: ";
                    cin >> seats;

                    t[found].cancel(seats);
                }
                else
                {
                    t[found].display();
                }
            }
            else if (choice != 4)
            {
                cout << "Invalid choice";
            }
        }
        catch (const char *msg)
        {
            cout << "Exception: " << msg << endl;
        }

    } while (choice != 4);

    return 0;
}#include <iostream>
using namespace std;

class Ticket
{
    int showID, totalSeats, bookedSeats;

public:
    void read()
    {
        cout << "Enter Show ID: ";
        cin >> showID;

        cout << "Enter Total Seats: ";
        cin >> totalSeats;

        bookedSeats = 0;
    }

    int getID()
    {
        return showID;
    }

    void book(int n)
    {
        if (n > totalSeats - bookedSeats)
            throw "Seats not available";

        bookedSeats += n;

        cout << "Booking successful" << endl;
    }

    void cancel(int n)
    {
        if (n > bookedSeats)
            throw "Seats not booked";

        bookedSeats -= n;

        cout << "Cancellation successful" << endl;
    }

    void display()
    {
        cout << "Show ID: " << showID
             << "\nTotal Seats: " << totalSeats
             << "\nBooked Seats: " << bookedSeats
             << "\nAvailable Seats: "
             << totalSeats - bookedSeats << endl;
    }
};

int main()
{
    Ticket t[10];

    int n, id, seats, choice, i, found;

    cout << "Enter number of shows: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        t[i].read();
    }

    do
    {
        cout << "\n1.Book  2.Cancel  3.Search  4.Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        try
        {
            if (choice >= 1 && choice <= 3)
            {
                cout << "Enter Show ID: ";
                cin >> id;

                found = -1;

                for (i = 0; i < n; i++)
                {
                    if (t[i].getID() == id)
                    {
                        found = i;
                        break;
                    }
                }

                if (found == -1)
                    throw "Show ID not found";

                if (choice == 1)
                {
                    cout << "Enter seats to book: ";
                    cin >> seats;

                    t[found].book(seats);
                }
                else if (choice == 2)
                {
                    cout << "Enter seats to cancel: ";
                    cin >> seats;

                    t[found].cancel(seats);
                }
                else
                {
                    t[found].display();
                }
            }
            else if (choice != 4)
            {
                cout << "Invalid choice";
            }
        }
        catch (const char *msg)
        {
            cout << "Exception: " << msg << endl;
        }

    } while (choice != 4);

    return 0;
}