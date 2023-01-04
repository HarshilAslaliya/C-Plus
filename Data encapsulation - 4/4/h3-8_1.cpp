#include <iostream>
using namespace std;

class Value
{
private:
    int h;

public:
    Value(int h)
    {
        this->h = h;
        cout << endl
             << "Square = " << h * h << endl;
    }
    ~Value()
    {
        cout << endl
             << "Cube = " << h * h * h << endl;
    }
};

int main()
{
    int h1;

    cout << "Enter value : ";
    cin >> h1;

    Value v1(h1);
}