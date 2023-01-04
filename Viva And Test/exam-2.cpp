#include <iostream>
using namespace std;

class Bank
{
public:
    int AC_number, number;
    string AC_name, AC_type, AC_branch;
    long long int AC_balance;

public:
    void setdata(int a)
    {
        cout << "\t\t\t\t(" << a << ")" << endl
             << endl;

        cout << "\t\t\t\tEnter Account Number : ";
        cin >> AC_number;
        cout << "\t\t\t\tEnter Account Name : ";
        fflush(stdin);
        getline(cin, AC_name);
        cout << "\t\t\t\tEnter Account Type : ";
        cin >> AC_type;
        cout << "\t\t\t\tEnter Account Branch : ";
        cin >> AC_branch;
        cout << "\t\t\t\tEnter Account Balance : ";
        cin >> AC_balance;
    }

    void getdata()
    {
        cout << "\t\t\t\tAccount Number \t\t: " << AC_number << endl;
        cout << "\t\t\t\tAccount Name \t\t: " << AC_name << endl;
        cout << "\t\t\t\tAccount Type \t\t: " << AC_type << endl;
        cout << "\t\t\t\tAccount Branch \t\t: " << AC_branch << endl;
        cout << "\t\t\t\tAccount Balance \t: " << AC_balance << endl;
    }
    int search(int);
};
int Bank ::search(int a)
{
    if (AC_number == a)
    {
        getdata();
    }
}

int main()
{
    Bank b1[2];

    cout << "\n\n\t\t\t\tENTER BANK DETAILS" << endl
         << endl;

    for (int i = 0; i < 2; i++)
    {
        b1[i].setdata(i + 1);
        cout << endl;
    }

    int a;

    cout << "\n\n\t\t\t\tEnter Account Number For Searching: ";
    cin >> a;

    cout << "\n\n\t\t\t\tBANK DETAILS" << endl
         << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << endl;
        b1[i].search(a);
    }
}