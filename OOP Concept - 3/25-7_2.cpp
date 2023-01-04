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
        cout << "Car ID : " << car_id << endl;
        cout << "Car Company Name : " << car_company_nm << endl;
        cout << "Car Color : " << car_color << endl;
        cout << "Car Model : " << car_model << endl;
        cout << "Car Realese Year : " << car_realease_year << endl;
    }
};

int main()
{
    cars c1, c2, c3, c4;

    c1.setcar();
    c2.setcar();
    c3.setcar();
    c4.setcar();

    cout << "======CAR DETAILS=====" << endl;

    c1.getcar();
    cout << "-----------------------------" << endl;
    c2.getcar();
    cout << "-----------------------------" << endl;
    c3.getcar();
    cout << "-----------------------------" << endl;
    c4.getcar();
    cout << "-----------------------------" << endl;
}