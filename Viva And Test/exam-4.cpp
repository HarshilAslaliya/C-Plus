#include <iostream>
using namespace std;

class Cricket
{
protected:
    int over;
};

class T20Match : public Cricket
{
public:
    void getTotalOvers(int over)
    {
        this->over = over;
        cout << "\n\nT20 Over = " << over << endl
             << endl;
    }
};

class TestMatch : public T20Match
{
public:
    void getTotalOvers(int over)
    {
        this->over = over;
        cout << "\n\nTest Over = " << over << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    TestMatch t1;

    t1.getTotalOvers(90);
}