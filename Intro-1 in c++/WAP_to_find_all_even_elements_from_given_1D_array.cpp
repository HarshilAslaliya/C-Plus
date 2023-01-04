#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout << "Enter size of array : ";
    cin >> n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cout << "Enter elements : ";
        cin >> a[i];
    }
    
    cout << "====================================" << endl;

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout << "Even Number : " << a[i] << endl;
        }
    }
   
}