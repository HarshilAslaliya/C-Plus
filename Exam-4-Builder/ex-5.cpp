#include <iostream>
#include <string.h>
using namespace std;

class State
{
private:
    string state;
    string details;
    static string country;

public:
    void setState()
    {
        cout << "Enter State : ";
        fflush(stdin);
        getline(cin, state);
        cout << "Enter State details : ";
        getline(cin, details);
    }
    static void header()
    {
        cout << "\n\t\tSTATE DETAILS\t\t\t\t\n";
        cout << "IndexNo\tCountry\tState\t\tState Details\n------- ------- ------- \t---------------------\n";
    }

    void getState(int i)
    {
        cout << i << "\t" << country << "\t" << state << "\t\t" << details << "\t\t\t\t" << endl;
    }
};

string State::country = "India";

int main()
{
    int i, n;

    cout << endl
         << "Enter number of State : ";
    cin >> n;

    State s1[n];

    for (i = 0; i < n; i++)
    {
        cout << endl;
        s1[i].setState();
    }
    State::header();
    for (i = 0; i < n; i++)
    {
        s1[i].getState(i + 1);
    }
}