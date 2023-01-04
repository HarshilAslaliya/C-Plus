#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "\n\n\nAddition = " << a << endl
             << endl
             << endl
             << endl
             << endl;
    }
    A operator+(A &x2)
    {
        A x1;
        x1.a = this->a + x2.a;
        return x1;
    }
};

int main()
{
    A a1, a2, ans;

    a1.setdata(10);
    a2.setdata(20);

    ans = a1 + a2;

    ans.getdata();

    return 0;
}