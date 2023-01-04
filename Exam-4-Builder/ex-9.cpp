#include <iostream>
using namespace std;

class hotel
{
private:
    int id;
    string nm, city;

public:
    hotel(int id, string nm, string city)
    {
        cout << "\t\t\tWelcome to the hotel..." << endl
             << endl;

        this->id = id;
        this->nm = nm;
        this->city = city;

        cout << "\t\t\tID\t : " << this->id << endl
             << "\t\t\tName\t : " << this->nm << endl
             << "\t\t\tCity\t : " << this->city << endl
             << endl;
    }
    ~hotel()
    {

        cout << "\t\t\tVISIT AGAIN.....!!" << endl
             << endl;
    }
};
int main()
{

    hotel h1(1, "Marriot", "Surat");
}