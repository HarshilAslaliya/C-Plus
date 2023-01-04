#include <iostream>
using namespace std;

class Hotel
{
private:
    int h_id, h_rate, h_esta_year, h_staff_quan, h_room_quan;
    char h_nm[200], h_typ[200];
    static char h_loc[200];

public:
    void setHotel(int i)
    {
        cout << "Hotel ID: ";
        cin >> h_id;
        cout << "Hotel Name: ";
        cin >> h_nm;
        cout << "Hotel Type(like hotel or motel): ";
        cin >> h_typ;
        cout << "Hotel Rating(In Star): ";
        cin >> h_rate;
        cout << "Hotel Established Year: ";
        cin >> h_esta_year;
        cout << "Hotel Staff Quantity: ";
        cin >> h_staff_quan;
        cout << "Hotel Room Quantity: ";
        cin >> h_room_quan;
    }
    static void header()
    {
        cout << "\t\t\t\t\t\tHOTEL DETAILS\t\t\t\t\t\n";
        cout << "Index No\tId\tName\tType\tRating\tLocation\tEstablished Year\tStaff Quantity\tRoom Quantity\n-------- \t------- ------- ------- ------- ------- \t---------------- \t-------------- \t-------------\n";
    }
    void getHotel(int i)
    {
        cout << i << "\t\t" << h_id << "\t" << h_nm << "\t" << h_typ << "\t" << h_rate << "\t" << h_loc << "\t\t" << h_esta_year << "\t\t\t" << h_staff_quan << "\t\t" << h_room_quan << "\n";
    }
};

char Hotel::h_loc[200] = "Surat";
int main()
{
    int n;

    cout << "Enter Number of Hotel: ";
    cin >> n;

    Hotel h[n];

    for (int i = 0; i < n; i++)
    {
        cout << "HOTEL DETAILS : " << i + 1 << endl;
        h[i].setHotel(i + 1);
    }
    Hotel::header();
    for (int i = 0; i < n; i++)
    {
        h[i].getHotel(i + 1);
    }
}