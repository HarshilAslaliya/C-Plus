#include<iostream>
using namespace std;

int main()
{
    char a;
    int i;

    cout << "enter character :";
    cin >> a;

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        cout << "Character is vowel";
    }
    else if( a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        cout << "Character is vowel";
    }
    else 
    {
        cout << "character is consonant";
    }
}