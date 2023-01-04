#include<iostream>
using namespace std;

int main()
{
    char a[200],i;

    cout << "Enter string :";
    cin >> a;

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            cout << "Charcter is numeric.";
        }
        else{
            cout << "Not numeric.";
        }
    }

}