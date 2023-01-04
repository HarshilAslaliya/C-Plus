#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate;

public:
    void setter()
    {
        cout << "Enter Rate : ";
        cin >> rate;
    }
};

class SBI : public RBI
{
public:
    void setter1()
    {
        cout << endl
             << "SBI Rate of interest : " << rate + 0.50 << endl;
    }
};
class BOB : public RBI
{
public:
    void SetROI1()
    {
        cout << endl
             << "BOB Rate of interest : " << rate + 0.40 << endl;
    }
};
class ICICI : public RBI
{
public:
    void SetROI2()
    {
        cout << endl
             << "ICICI Rate of interest : " << rate + 0.30 << endl;
    }
};

int main()
{
    SBI s1;
    s1.setter();
    s1.setter1();
    BOB b1;
    b1.SetROI1();
    ICICI i1;
    i1.SetROI2();
}