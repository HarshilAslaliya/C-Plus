#include <iostream>
using namespace std;

class A
{
protected:
    int addition;
    int substraction;
    int multiplication;
    int division;
};

class B : public A
{
public:
    void calculate(int a, int b, int c, int d, int e)
    {
        addition = a + b + c + d + e;
        cout << "\t\tAddition = " << addition << endl;
    }
    void calculate(int a, int b, int c, int d)
    {
        multiplication = a * b * c * d;
        cout << "\t\tMultiplication = " << multiplication << endl;
    }
    void calculate(int a, int b, int c)
    {
        substraction = a - b - c;
        cout << "\t\tSubstraction = " << substraction << endl;
    }
    void calculate(int a, int b)
    {
        division = a / b;
        cout << "\t\tDivision = " << division << endl;
    }
};

int main()
{
    B b1;

    cout << endl;
    b1.calculate(20, 2);
    cout << endl;
    b1.calculate(50, 10, 20);
    cout << endl;
    b1.calculate(5, 4, 3, 2);
    cout << endl;
    b1.calculate(9, 8, 7, 6, 5);
    cout << endl;
}