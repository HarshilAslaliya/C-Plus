#include <iostream>
using namespace std;

class Student
{
public:
    string nm;
    int std, roll_no;

public:
    Student(string nm, int std, int roll_no)
    {
        this->nm = nm;
        this->std = std;
        this->roll_no = roll_no;

        cout << endl
             << "Student Name \t: " << nm << endl;
        cout << "Student STD \t: " << std << endl;
        cout << "Student Roll No : " << roll_no << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
    }
};
int main()
{
    const Student s1("Harshil Aslaliya", 12, 25);

    // s1.nm = "Harshil";

    // cout << "Original Name : " << s1.nm << endl;
}