#include <iostream>
using namespace std;

class Stime;
class Ftime
{
private:
    int hour = 04;
    int minutes = 56;
    int sec = 45;

public:
    // void settime()
    // {
    //     cout << endl
    //          << "FIRST TIME :" << endl
    //          << endl;
    //     cout << "Enter Hour : ";
    //     cin >> hour;
    //     cout << "Enter Minutes : ";
    //     cin >> minutes;
    //     cout << "Enter Secounds : ";
    //     cin >> sec;
    // }
    void gettime()
    {

        cout << "HH:MM:SS[Format]" << endl
             << endl
             << "First Time :" << endl
             << hour << ":" << minutes << ":" << sec << endl;
    }

    friend void Ttime(Ftime, Stime);
};

class Stime
{
private:
    int hour = 03;
    int minutes = 36;
    int sec = 49;

public:
    // void settime()
    // {
    //     cout << endl
    //          << "SECOUND TIME :" << endl
    //          << endl;
    //     cout << "Enter Hour : ";
    //     cin >> hour;
    //     cout << "Enter Minutes : ";
    //     cin >> minutes;
    //     cout << "Enter Secounds : ";
    //     cin >> sec;
    // }
    void gettime()
    {
        cout << endl
             << "Secound Time :" << endl
             << hour << ":" << minutes << ":" << sec << endl;
    }
    friend void Ttime(Ftime, Stime);
};

void Ttime(Ftime f, Stime s)
{
    int a, b, c;
    // cout << endl
    //      << "TOTAL TIMES " << endl
    //      << f.hour + s.hour << ":" << f.minutes + s.minutes << ":" << f.sec + s.sec << endl;
    a = f.hour + s.hour;
    b = f.minutes + s.minutes;
    c = f.sec + s.sec;
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
    cout << endl
         << "TOTAL TIMES " << endl
         << a << ":" << b << ":" << c << endl;
};

int main()
{
    Ftime f1;
    Stime s1;

    // f1.settime();
    // s1.settime();

    f1.gettime();
    s1.gettime();

    Ttime(f1, s1);
}