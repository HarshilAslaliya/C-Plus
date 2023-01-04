#include <iostream>
using namespace std;

class cars
{
private:
    int car_id, car_realease_year;
    char car_company_nm[100], car_color[100], car_model[100];

public:
    void setcar()
    {
        cout << "Enter Car ID : ";
        cin >> car_id;
        cout << "Enter Car Company Name : ";
        cin >> car_company_nm;
        cout << "Enter Car Color : ";
        cin >> car_color;
        cout << "Enter Car Model : ";
        cin >> car_model;
        cout << "Enter Car Realease Year : ";
        cin >> car_realease_year;
    }
    void getcar()
    {
        cout << "Car ID             : " << car_id << endl;
        cout << "Car Company Name   : " << car_company_nm << endl;
        cout << "Car Color          : " << car_color << endl;
        cout << "Car Model          : " << car_model << endl;
        cout << "Car Realese Year   : " << car_realease_year << endl;
    }
};

int main()
{
    int i;
    cars c1[2];

    for (i = 1; i <= 2; i++)
    {
        cout << endl
             << "==========================" << endl;
        cout << "  Car Details No " << i << endl;
        cout << "==========================" << endl;
        c1[i].setcar();
    }
    for (i = 1; i <= 2; i++)
    {
        cout << endl
             << "==========================" << endl;
        cout << "  Details of Car No " << i << endl;
        cout << "==========================" << endl;
        c1[i].getcar();
    }
}