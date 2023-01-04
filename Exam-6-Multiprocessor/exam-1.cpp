#include <iostream>
using namespace std;

class A
{
private:
    string ch;

public:
    void setdata()
    {
        cout << "\n\n\nHello ";
    }
    void setdata(string ch)
    {
        cout << ch;
    }
};

int main()
{
    A a1;

    a1.setdata();
    a1.setdata("World!!!\n\n\n");

    return 0;
}