#include <iostream>
using namespace std;

class Harshil
{
private:
    float num, b = 5, h = 2;
    float width, height;

public:
    Harshil(float num)
    {
        this->num = num;

        cout << endl
             << "Area of Square : " << num * num << endl;
    }
    int SetH(float width, float height)
    {
        this->width = width;
        this->height = height;

        cout << endl
             << "Area of Rectangle : " << width * height << endl;

        return 0;
    }
    ~Harshil()
    {
        cout << endl
             << "Area of Trianhgle : " << (b * h) / 2 << endl;
    }
};
int main()
{
    Harshil h1(5);
    // Harshil h2(10, 20);
    h1.SetH(5, 6);
}