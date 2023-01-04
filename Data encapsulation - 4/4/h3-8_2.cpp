#include <iostream>
using namespace std;

class UpperLower
{
private:
    string h;

public:
    UpperLower(string h)
    {
        this->h = h;

        for (int i = 0; h[i] != '\0'; i++)
        {
            if (h[i] >= 'a' && h[i] <= 'z')
            {
                h[i] -= 32;
            }
        }

        cout << endl
             << "Convert to Uppercase : " << h << endl;
    }
    ~UpperLower()
    {
        for (int i = 0; h[i] != '\0'; i++)
        {
            if (h[i] >= 'A' && h[i] <= 'Z')
            {
                h[i] += 32;
            }
        }

        cout << endl
             << "Convert to Lowercase : " << h << endl;
    }
};

int main()
{
    string c;

    cout << "Enter a string : ";
    getline(cin, c);

    UpperLower u1(c);
}
