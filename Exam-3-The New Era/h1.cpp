#include <iostream>
using namespace std;

class dis
{
private:
    int feet1, feet2, inch1, inch2;
    int a, b;

public:
    void getdis()
    {

        cout << "FIRST DISTANCE" << endl
             << endl;

        cout << "Enter Feet : ";
        cin >> feet1;
        cout << "Enter Inch : ";
        cin >> inch1;

        cout << "SECOUND DISTANCE" << endl
             << endl;

        cout << "Enter Feet : ";
        cin >> feet2;
        cout << "Enter Inch : ";
        cin >> inch2;

        a = feet1 + feet2;
        b = inch1 + inch2;

        while (b >= 12)
        {
            b -= 12;
            a++;
        }
    }

    void setdis()
    {
        cout << "Add two distance:" << endl
             << endl;

        cout << "Feet = " << a << endl;
        cout << "Inch = " << b << endl;
    }
};

int main()
{
    dis a1;

    a1.getdis();
    a1.setdis();
}