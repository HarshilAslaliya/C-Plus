#include <iostream>
using namespace std;

class Input
{
protected:
    int a = 5;

public:
    void value()
    {
        cout << endl
             << "\t\t\t\tValue = ";
        cin >> a;
    }
};
class sqaure : public Input
{
public:
    void get1()
    {
        cout << endl
             << "\t\t\t\t"
             << "Square of " << a << " = " << a * a << endl;
    }
};
class cube : public Input
{
public:
    void get2()
    {
        cout << endl
             << "\t\t\t\t"
             << "Cube of " << a << " = " << a * a * a << endl
             << endl
             << endl
             << endl;
    }
};
int main()
{
    sqaure s1;
    cube c1;

    s1.value();
    s1.get1();
    c1.get2();
}