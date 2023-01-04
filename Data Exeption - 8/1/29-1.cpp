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
        cout << "\n\nFirst Scenario:\n";
        cout << "Enter A : ";
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
        catch (string n)
        {

            cout << endl
                 << n << endl;
        }
    }
};
class Secound
{
protected:
    int age;
    string exp = "A person cannot be able to vote!!";

public:
    Secound()
    {
        cout << "\n\nSecound Scenario :\n";

        cout << "Enter Your Age : ";
        cin >> age;

        try
        {
            if (age <= 18)
            {
                throw exp;
            }
            else
            {
                cout << endl
                     << "Next process..." << endl;
            }
        }
        catch (string n)
        {
            cout << endl
                 << n << endl;
        }
    }
};
class Third
{
protected:
    string password;
    string exp = "Password cannot be validate!!";

public:
    Third()
    {
        cout << "\nThird Scenario : \n";
        cout << "Enter Password : ";
        fflush(stdin);
        getline(cin, password);

        try
        {
            if (password >= "A" && password <= "Z")
            {
                throw exp;
            }
            else
            {
                cout << "Password is valid!!";
            }
        }
        catch (string n)
        {
            cout << endl
                 << n << endl;
        }
    }
};
int main()
{
    First f1;
    Secound s1;
    Third t1;
}