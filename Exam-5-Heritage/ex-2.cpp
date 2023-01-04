#include <iostream>
using namespace std;

class mother
{
public:
    mother()
    {
        cout << "\n\n\t\t\t\t* Mother and Daughter conversation *\n\n\n";
        cout << "\t\t\t\tMother says : How are you daughter..." << endl
             << endl;
    }
};
class daughter : public mother
{
public:
    void display()
    {
        cout << "\t\t\t\tDaughter says : I am fine mother...\n\n"
             << endl
             << endl;
    }
};

int main()
{
    daughter d1;

    d1.display();
}