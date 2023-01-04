#include <iostream>
using namespace std;

class A
{
public:
    void add()
    {
        cout << "\n\n\t\t\t\tCalculate Addition!!!" << endl
             << endl;
    }
    void add(int a)
    {
        cout << "\t\t\t\tAddition Value = " << a << endl;
    }
    void add(int a, int b)
    {
        cout << "\t\t\t\tAddition of " << a << " and " << b << " = " << (a + b) << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "\t\t\t\tAddition of " << a << " and " << b << " and " << c << " = " << (a + b + c) << endl
             << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    A a1;

    a1.add();
    a1.add(5);
    a1.add(5, 10);
    a1.add(3, 4, 5);
}