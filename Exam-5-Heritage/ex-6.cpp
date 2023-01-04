#include <iostream>
using namespace std;

class A
{
protected:
    int id;
    string name, role;

public:
    void setterA()
    {
        cout << endl
             << endl
             << "Enter Id : ";
        cin >> id;
        cout << "Enter Name : ";
        fflush(stdin);
        getline(cin, name);
        cout << "Enter Role : ";
        getline(cin, role);
    }
};
class B
{
protected:
    int salary;
    string experience;

public:
    void setterB()
    {
        cout << "Enter Salary : ";
        cin >> salary;

        cout << "Enter Experience : ";
        fflush(stdin);
        getline(cin, experience);
    }
};
class C
{
protected:
    string company_name, address;

public:
    // void getterC()
    // {
    //     cout << "Name           : " << A::name << endl;
    //     cout << "Role           : " << A::role << endl;
    //     cout << "Salary         : " << A::salary << endl;
    // }
    void setterC()
    {
        cout << "Enter Company Name : ";
        fflush(stdin);
        getline(cin, company_name);

        cout << "Enter Address : ";
        getline(cin, address);
    }
};
class D : public A, public B, public C
{
protected:
    string email;
    long long int contact;

public:
    void setterD()
    {
        cout << "Enter Email : ";
        fflush(stdin);
        getline(cin, email);

        cout << "Enter Contact : ";
        cin >> contact;

        cout << endl
             << "=================================\n"
             << endl
             << endl;
    }
    void getterD()
    {
        cout << endl
             << endl
             << "\t\t\t\t   * EMPLOYEE DETAILS *" << endl
             << "\t\t\t\t==========================" << endl
             << endl;

        cout << "\t\t\t\tId                 : " << id << endl;
        cout << "\t\t\t\tName               : " << name << endl;
        cout << "\t\t\t\tRole               : " << role << endl;
        cout << "\t\t\t\tSalary             : " << salary << endl;
        cout << "\t\t\t\tExprience          : " << experience << endl;
        cout << "\t\t\t\tCompany Name       : " << company_name << endl;
        cout << "\t\t\t\tAddress            : " << address << endl;
        cout << "\t\t\t\tEmail              : " << email << endl;
        cout << "\t\t\t\tContact            : " << contact << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    D d1;

    d1.setterA();
    d1.setterB();
    d1.setterC();
    d1.setterD();
    d1.getterD();
}