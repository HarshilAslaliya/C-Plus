#include <iostream>
using namespace std;

class house
{
private:
    int room, kitchen, hall;
    int sofa, ac, bed;

public:
    void shouse()
    {
        cout << endl
             << "HOUSE DETAILS:" << endl
             << endl;

        cout << "Enter room:";
        cin >> room;

        cout << "Enter kitchen:";
        cin >> kitchen;

        cout << "Enter hall:";
        cin >> hall;

        cout << endl
             << "ROOM DETAILS:" << endl
             << endl;

        cout << "Enter sofa:";
        cin >> sofa;

        cout << "Enter AC:";
        cin >> ac;

        cout << "Enter bed:";
        cin >> bed;
    }
    void ghouse()
    {
        cout << endl
             << "IN HOUSE" << endl
             << endl
             << room << " Room" << endl
             << kitchen << " Kitchen" << endl
             << hall << " Hall" << endl
             << endl
             << "In Room" << endl
             << endl
             << sofa << " Sofa" << endl
             << ac << " AC" << endl
             << bed << " Bed";
    }
};

int main()
{
    house a1;

    a1.shouse();
    a1.ghouse();
}