#include <iostream>
using namespace std;

class name
{
private:
    char n[200];

public:
    void snm()
    {
        cout << "Enter Name : ";
        cin >> n;
    }
    void gnm()
    {
        cout << endl
             << "==============" << endl
             << n;
    }
};

int main()
{
    name a1;

    a1.snm();
    a1.gnm();
}