#include <iostream>
using namespace std;

class RBI
{
protected:
    float rate = 4.90;

public:
    void getRBI()
    {
        cout << endl
             << "\t\t     *RATES OF INTEREST*\t\t" << endl;
        cout << endl
             << "\t\tRBI Interest Rates     : " << rate << endl;
    }
};
class SBI : public RBI
{
public:
    void getROI1()
    {
        cout << endl
             << "\t\tSBI Rate of interest   : " << rate + 0.40 << endl;
    }
};
class BOB : public RBI
{
public:
    void getROI2()
    {
        cout << endl
             << "\t\tBOB Rate of interest   : " << rate + 0.25 << endl;
    }
};
class ICICI : public RBI
{
public:
    void getROI3()
    {
        cout << endl
             << "\t\tICICI Rate of interest : " << rate - 0.25 << endl
             << endl;
    }
};
int main()
{
    SBI s1;
    BOB b1;
    ICICI i1;

    s1.getRBI();

    s1.getROI1();

    b1.getROI2();

    i1.getROI3();
}