#include<iostream>
using namespace std;

int main()
{
    int i,n;

    cout << "Size of array : ";
    cin >> n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "cube is : " << endl;
    for(i=0;i<n;i++)
    {
        cout << a[i] * a[i] * a[i] << endl;
    }
}