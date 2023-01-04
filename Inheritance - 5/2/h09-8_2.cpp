#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A()
    {
        cout << endl
             << "A = ";
        cin >> a;
    }
};
class B : public A
{
protected:
    int b;

public:
    B()
    {
        cout << "B = ";
        cin >> b;
    }
};
class C
{
protected:
    int c;

public:
    C()
    {
        cout << "C = ";
        cin >> c;
    }
};
class D : public B, public C
{
protected:
    int d;

public:
    D()
    {
        cout << "D = ";
        cin >> d;

        cout << endl
             << "Addition of all elements : " << a + b + c + d << endl
             << endl;
    }
};

int main()
{
    D d1;
}