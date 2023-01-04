#include <iostream>
using namespace std;

class emp
{
private:
    int i;
    int emp_id, emp_salary, emp_exp;
    long long int emp_contact;
    char emp_nm[100], emp_role[100], emp_address[100], emp_email[100];

public:
    void setdata()
    {
        cout << "Employee ID : ";
        cin >> emp_id;
        cout << "Employee Name : ";
        cin >> emp_nm;
        cout << "Employee Role : ";
        cin >> emp_role;
        cout << "Employee Salary : ";
        cin >> emp_salary;
        cout << "Employee Experience : ";
        cin >> emp_exp;
        cout << "Employee Address : ";
        cin >> emp_address;
        cout << "Employee Email : ";
        cin >> emp_email;
        cout << "Employee Contact : ";
        cin >> emp_contact;
    }
    void getdata()
    {
        cout << "Employee ID            :" << emp_id << endl;
        cout << "Employee Name          :" << emp_nm << endl;
        cout << "Employee Role          :" << emp_role << endl;
        cout << "Employee Salary        :" << emp_salary << endl;
        cout << "Employee Experience    :" << emp_exp << endl;
        cout << "Employee Address       :" << emp_address << endl;
        cout << "Employee Email         :" << emp_email << endl;
        cout << "Employee Contact       :" << emp_contact << endl;
    }
};

int main()
{
    int i;
    emp e1[5];

    for (i = 1; i <= 5; i++)
    {
        cout << endl
             << "==========================" << endl;
        cout << "  Employee Details No " << i << endl;
        cout << "==========================" << endl;
        e1[i].setdata();
    }
    for (i = 1; i <= 5; i++)
    {
        cout << endl
             << "==========================" << endl;
        cout << "   Employee Data No " << i << endl;
        cout << "==========================" << endl;
        e1[i].getdata();
    }
}