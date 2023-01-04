#include <iostream>
using namespace std;

class A
{
public:
    virtual void harshil()
    {
        cout << "\n\n\nHELLO HARSHIL" << endl
             << endl;
    }
};
class B : virtual public A
{
public:
    void hello()
    {
        cout << "Krish : How are you???" << endl;
    }
};
class C : public A
{
public:
    void how()
    {
        cout << "Harshil : I am fine!!!" << endl
             << endl
             << endl;
    }
};

int main()
{
    B b1;
    C c1;

    c1.harshil();
    b1.hello();
    c1.how();
}