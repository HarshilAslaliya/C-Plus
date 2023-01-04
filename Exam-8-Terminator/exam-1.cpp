#include <iostream>
using namespace std;

class Garage
{
protected:
    int val;

public:
    Garage(int val)
    {
        this->val = val;
        try
        {
            throw val;
        }
        catch (int n)
        {
            cout << val << " cars...";
        }
    }
};

class Car
{
protected:
    int n;

public:
    Car(int n)
    {
        this->n = n;
        Garage g1(n);
    }
};

class Motor
{
public:
    Motor()
    {
        throw Car(80);
    }
};

int main()
{
    cout << endl
         << endl;
    try
    {
        Motor m1;
        cout << endl;
    }
    catch (...)
    {
        cout << endl
             << "========END========" << endl
             << endl;
    }
}