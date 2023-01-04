#include <iostream>
using namespace std;

class First
{
protected:
    int a;
    int b;
    string exp = "Can't Divide By ZERO!";

public:
    First()
    {
        cout << "\n\nEnter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;

        try
        {
            if (b == 0)
            {
                throw exp;
            }
            else
            {
                cout << endl
                     << "Division : " << a / b << endl;
            }
        }
        catch (int n)
        {

            cout << endl
                 << n << endl;
        }
        catch (...)
        {
            cout << endl
                 << "Hello Harshil...!!!" << endl;
        }
    }
};
int main()
{
    First f1;
}