#include <iostream>
using namespace std;

class area
{
protected:
    float height, width;

public:
    void area1()
    {
        cout << "\t\t\t\tEnter Heights : ";
        cin >> height;
        cout << "\t\t\t\tEnter Width : ";
        cin >> width;
    }
};

class triangle : public area
{
public:
    void SetArea1()
    {
        cout << endl
             << endl
             << "\t\t\t\tArea of Triangle : " << (width * height) / 2 << endl;
        cout << "\t\t\t\t===================================" << endl;
    }
};
class rectangle : public area
{
public:
    void SetArea2()
    {
        cout << endl
             << "\t\t\t\tArea of Rectangle : " << width * height << endl
             << endl;
        cout << "\t\t\t\t===================================" << endl;
    }
};

int main()
{
    triangle t1;
    rectangle r1;

    cout << endl
         << "\t\t\t\t* Triangle *\n\n";
    t1.area1();
    t1.SetArea1();
    cout << endl
         << "\t\t\t\t* Rectangle *\n\n";
    r1.area1();
    r1.SetArea2();
}