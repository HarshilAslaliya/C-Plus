#include <iostream>
using namespace std;

class mother
{
protected:
    string name;
    int age;

public:
    void Setvalue()
    {
        cout << "\t\t\t\tEnter Name : ";
        cin >> name;
        cout << "\t\t\t\tEnter Age : ";
        cin >> age;
    }
};

class Zebra : public mother
{
public:
    void zebradisplay()
    {
        cout << endl
             << "\t\t\t\tThe Zebra name is " << name << " ,\n\t\t\t\tThe Zebra is " << age << " Years old" << endl
             << endl;
    }
};

class Dolphin : public mother
{
public:
    void dolphindisplay()
    {
        cout << endl
             << "\t\t\t\tThe Dolphin name is " << name << " ,\n\t\t\t\tThe Dolphin is " << age << " Years old" << endl
             << endl;
    }
};

int main()
{
    Zebra z1;
    Dolphin d1;

    cout << endl
         << "\t\t\t\t* Set Value For ZEBRA *" << endl
         << endl;

    z1.Setvalue();

    cout << endl
         << "\t\t\t\t* Set Value For DOLPHIN *" << endl
         << endl;

    d1.Setvalue();

    cout << endl
         << "\t\t\t\t* ZEBRA INFORMATION *"
         << endl;

    z1.zebradisplay();

    cout << endl
         << "\t\t\t\t* DOLPHIN INFORMATION *"
         << endl;

    d1.dolphindisplay();
}