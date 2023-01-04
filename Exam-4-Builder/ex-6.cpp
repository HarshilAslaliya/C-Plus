#include <iostream>
using namespace std;

class Harshil
{
private:
    int id;
    string nm;

public:
    Harshil()
    {
        cout << endl
             << "Welcome to the Hotel...." << endl;

        cout << endl
             << "Enter Customer ID : ";
        cin >> id;

        cout << "Enter Customer Name : ";
        fflush(stdin);
        getline(cin, nm);

        cout
            << "\n\tCUSTOMER DETAILS\n ";

        cout
            << "Customer ID\tCustomer Name\n-------------- --------------\n";

        cout << id << "\t\t" << nm << "\t" << endl;
    }
};
int main()
{
    Harshil s1;
}