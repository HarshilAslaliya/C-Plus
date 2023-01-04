#include <iostream>
using namespace std;

class P
{
protected:
    float celsius, fahrenheit, kelvin;

public:
    void setDataT()
    {
        cout << endl
             << "Enter Temperature of Celcius : ";
        cin >> celsius;
    }
};
class Q : public P
{
public:
    void toFahrenheit()
    {
        fahrenheit = (celsius * 9.0) / 5.0 + 32;
        cout << endl
             << "Convert Celsius to Fahrenheit : " << fahrenheit << endl;
        ;
    }
};
class R : public Q
{
public:
    void toKelvin()
    {
        kelvin = celsius + 273.15;

        cout << endl
             << "Convert Celsius to Kelvin : " << kelvin << endl;
    }
};

int main()
{
    R r1;

    r1.setDataT();
    r1.toFahrenheit();
    r1.toKelvin();
}