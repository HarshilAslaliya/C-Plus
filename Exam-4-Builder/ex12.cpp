#include <iostream>
using namespace std;

class Student
{
    int id, std, rollno;
    string name, institute_name;

public:
    void getStu()
    {
        cout << "Enter Id : ";
        cin >> id;
        cout << "Enter Name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter STD : ";
        cin >> std;
        cout << "Enter Roll No : ";
        cin >> rollno;
        cout << "Enter School Name : ";
        fflush(stdin);
        getline(cin, institute_name);
    }
    void printStu()
    {
        cout << "\t\t\t\tStudent  Id            :" << id << endl;
        cout << "\t\t\t\tStudent  Name          :" << name << endl;
        cout << "\t\t\t\tStudent  STD           :" << std << endl;
        cout << "\t\t\t\tStudent  Roll No       :" << rollno << endl;
        cout << "\t\t\t\tStudent  School Name   :" << institute_name << endl;
    }
};
int main()
{
    int i, n;

    cout << endl
         << "Enter number of student : ";
    cin >> n;

    Student s1[n];

    for (i = 0; i < n; i++)
    {
        cout << endl
             << "STUDENT NO:" << i + 1 << endl
             << endl;
        s1[i].getStu();
    }

    cout << endl
         << "\t\t\t\t===========================" << endl
         << "\t\t\t\t      STUDENT DETAILS     " << endl
         << "\t\t\t\t===========================" << endl;

    for (i = 0; i < n; i++)
    {
        s1[i].printStu();
        cout << endl;
    }
}