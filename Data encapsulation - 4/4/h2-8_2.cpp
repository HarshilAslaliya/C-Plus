#include <iostream>
using namespace std;

class Food
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Food()
    {
        cout << endl
             << "Welcome to the cafe..." << endl
             << endl;
        cout << "Enter Cafe Id : ";
        cin >> cafe_id;
        cout << "Enter Cafe Name : ";
        cin >> cafe_name;
        cout << "Enter Cafe Type : ";
        cin >> cafe_type;
        cout << "Enter Cafe Rating : ";
        cin >> cafe_rating;
        cout << "Enter Cafe Location : ";
        cin >> cafe_location;
        cout << "Enter Cafe Established Year : ";
        cin >> cafe_establish_year;
        cout << "Enter Cafe Staff Quantity : ";
        cin >> cafe_staff_quantity;
    }
    void getfood()
    {
        cout << "Cafe Id                :" << this->cafe_id << endl;
        cout << "Cafe Name              :" << this->cafe_name << endl;
        cout << "Cafe Type              :" << this->cafe_type << endl;
        cout << "Cafe Rating            :" << this->cafe_rating << endl;
        cout << "Cafe Location          :" << this->cafe_location << endl;
        cout << "Cafe Established Year  :" << this->cafe_establish_year << endl;
        cout << "Cafe Staff Quantity    :" << this->cafe_staff_quantity << endl;
    }
};

int main()
{
    int n, i;

    cout << "Enter Number of Fast Food Cafe :";
    cin >> n;

    Food f1[n];

    cout << endl
         << "CAFE DETAILS...\n"
         << endl;
    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Cafe No : " << i + 1 << endl
             << endl;

        f1[i].getfood();
    }
}