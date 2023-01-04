#include <iostream>
using namespace std;

int avg();
int su();

int main()
{
    su(avg());
}
int su()
{
    int n, sum = 0, i;
    cout << "Size of array: ";
    cin >> n;

    int a[n];

    for (i = 0; i < n; i++)
    {
        cout << "A = ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
}
int avg(int n, int sum)
{
    int avg = 0;

    avg = sum / n;
    cout << "Average of array = " << avg;

    return 0;
}