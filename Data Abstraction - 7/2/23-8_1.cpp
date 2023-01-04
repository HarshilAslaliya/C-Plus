#include <iostream>
using namespace std;

class A
{
protected:
    int Radius = 10, Height = 10, Base = 10, Width = 10, Height2 = 10;

public:
    virtual void calculate() = 0;
};
class B : public A
{
public:
    void calculate()
    {
        cout << "\n\n\t\t\t\tRadius of Circle :" << 3.14 * Radius * Radius << endl
             << endl;
        cout << "\t\t\t\tArea of Triangle :" << Height * Base / 2 << endl
             << endl;
        cout << "\t\t\t\tArea of Rectangle :" << Width * Height2 << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    B b1;

    b1.calculate();
}