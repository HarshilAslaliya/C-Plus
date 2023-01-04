// Railway station reservation system
#include <iostream>
using namespace std;

class Railway
{
public:
    int train_num;
    string train_name,
        train_destination, source, train_time;

public:
    Railway()
    {

        cout << endl
             << endl
             << "Enter Train Number : ";
        cin >> train_num;
        cout << "Enter Train Name : ";
        fflush(stdin);
        getline(cin, train_name);
        cout << "Enter Train Source : ";
        getline(cin, source);
        cout << "Enter Train Destination : ";
        getline(cin, train_destination);
        cout << "Enter Train Time : ";
        getline(cin, train_time);
        cout << endl;
    }
    void printRailway()
    {

        cout << endl
             << "Welcome to the Railway Reservation System..." << endl
             << endl;

        cout << "Train Number       : " << train_num << endl;
        cout << "Train Name         : " << train_name << endl;
        cout << "Train Source       : " << source << endl;
        cout << "Train Destination  : " << train_destination << endl;
        cout << "Train Time         : " << train_time << endl;
    }
};

int main()
{
    int ch, i;

    Railway r1;
    Railway r2;
    Railway r3;
    do
    {
        cout << endl;
        cout
            << "4 For Exit...." << endl
            << endl;
        cout << endl
             << "Enter Train number for print : ";
        cin >> i;
        cout << endl;
        switch (i)
        {
        case (Railway::train_num):
            r1.printRailway();
            break;
        case 2:
            r2.printRailway();
            break;
        case 3:
            r3.printRailway();
            break;
        }
    } while (i != 4);
}