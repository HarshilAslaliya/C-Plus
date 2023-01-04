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
        cout << "Test Over = " << over << endl
             << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    TestMatch t1;

    t1.T20Match::getTotalOvers(20);

    cout << "Overriding Value..." << endl;
    t1.getTotalOvers(90);
}