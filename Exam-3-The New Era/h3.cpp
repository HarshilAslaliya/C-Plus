#include <iostream>
using namespace std;

class times
{
    int hour, min, sec;
    ;

public:
    void settime()
    {
        cout << endl
             << "Enter Secounds:";
        cin >> sec;

        hour = sec / 3600;
        sec %= 3600;
        min = sec / 60;
        sec %= 60;
    }

    void gettime()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    times a1;

    a1.settime();
    a1.gettime();
}