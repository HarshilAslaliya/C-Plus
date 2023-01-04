#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[50], i, n;

    cout << "Enter size of array : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Sqaure root of elements : " << endl;

    for (i = 0; i < n; i++)
    {
        cout << sqrt(a[i]) << endl;
    }
}