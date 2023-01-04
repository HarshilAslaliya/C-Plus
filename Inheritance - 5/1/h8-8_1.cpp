#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c;
};
class Y : public X
{
public:
    void setData()
    {
        cout << endl
             << "Enter A = ";
        cin >> a;
        cout << "Enter B = ";
        cin >> b;
        cout << "Enter C = ";
        cin >> c;
    }
    void getData()
    {
        cout << endl
             << "A = " << a << endl
             << "B = " << b << endl
             << "C = " << c << endl;
    }
};

int main()
{
    Y y1;

    y1.setData();
    y1.getData();
}