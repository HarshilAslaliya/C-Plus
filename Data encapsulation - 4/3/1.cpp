#include <iostream>
using namespace std;

class times
{
    int hour, min, sec, hour1, min1, sec1;
    int a, b, c;

public:
    void settime()
    {
        cout << endl
             << "1ST TIME" << endl
             << endl;
        cout << "Enter Hour:";
        cin >> hour;
        cout << "Enter Minutes:";
        cin >> min;
        cout << "Enter Secounds:";
        cin >> sec;

        cout << endl
             << "2ND TIME" << endl
             << endl;
        cout << "Enter Hour:";
        cin >> hour1;
        cout << "Enter Minutes:";
        cin >> min1;
        cout << "Enter Secounds:";
        cin >> sec1;

        a = hour + hour1;
        b = min + min1;
        c = sec + sec1;

        while (c >= 60)
        {
            c -= 60;
            b++;
        }

        while (b >= 60)
        {
            b -= 60;
            a++;
        }
    }
    void gettime()
    {
        cout << endl
             << "Total Time Is:" << endl
             << endl;
        cout << "Hour:" << a << endl
             << "Minutes:" << b << endl
             << "Secounds:" << c;
    }
};

int main()
{
    times a1;

    a1.settime();
    a1.gettime();
}
