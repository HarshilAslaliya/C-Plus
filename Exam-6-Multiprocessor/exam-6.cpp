#include <iostream>
using namespace std;

class Distance
{
protected:
    int feet, inch;

public:
    void SetDistance()
    {
        cout << "Enter Feet : ";
        cin >> feet;
        cout << "Enter Inch : ";
        cin >> inch;
    }
    void GetDistance()
    {
        cout << "Feet : " << feet << "\t"
             << "Inch : " << inch << endl;
    }
    Distance operator+(Distance &d2)
    {
        Distance d1;
        d1.inch = inch + d2.inch;
        d1.feet = feet + d2.feet + (d1.inch / 12);
        d1.inch = d1.inch % 12;
        return d1;
    }
};
int main()
{
    Distance d1, d2, ans;

    cout << "\n\n\nFirst Distance :" << endl
         << endl;
    d1.SetDistance();
    cout << endl;

    cout << "Second Distance :" << endl
         << endl;
    d2.SetDistance();
    cout << endl;

    ans = d1 + d2;

    ans.GetDistance();
    cout << endl
         << endl
         << endl
         << endl;
}
