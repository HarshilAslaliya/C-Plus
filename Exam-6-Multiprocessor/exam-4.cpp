#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void setdata()
    {
        cout << "\n\nEnter Value = ";
        cin >> a;
    }
    void getdata(int i)
    {
        cout << i << ") A = " << a << endl
             << endl;
    }
    A operator++()
    {
        A temp;
        temp.a = ++a;
        return temp;
    }
    A operator--(int a)
    {
        A temp;
        temp.a = this->a--;
        return temp;
    }
};
int main()
{
    A a1, a2, a3;

    a1.setdata();
    cout << "\nOriginal Value...\n";
    a1.getdata(1);

    a2 = a1--;
    a3 = ++a2;

    cout << "Increment...\n";
    a2.getdata(2);
    cout << "Decrement...\n";
    a1.getdata(3);
}