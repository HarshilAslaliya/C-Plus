#include <iostream>
using namespace std;

class emp
{
private:
    int i;
    int emp_id, emp_age, emp_salary, emp_exp;
    char emp_nm[100], emp_role[100], emp_city[100], emp_company_nm[100];

public:
    void setdata()
    {
        cout << "Employee ID : ";
        cin >> emp_id;
        cout << "Employee Name : ";
        cin >> emp_nm;
        cout << "Employee Role : ";
        cin >> emp_role;
        cout << "Employee Age : ";
        cin >> emp_age;
        cout << "Employee Salary : ";
        cin >> emp_salary;
        cout << "Employee Experience : ";
        cin >> emp_exp;
        cout << "Employee City : ";
        cin >> emp_city;
        cout << "Employee Company name : ";
        cin >> emp_company_nm;
    }
    void getdata()
    {
        cout << "Employee ID            :" << emp_id << endl;
        cout << "Employee Name          :" << emp_nm << endl;
        cout << "Employee Role          :" << emp_role << endl;
        cout << "Employee Age           :" << emp_age << endl;
        cout << "Employee Salary        :" << emp_salary << endl;
        cout << "Employee Experience    :" << emp_exp << endl;
        cout << "Employee City          :" << emp_city << endl;
        cout << "Employee Company Name  :" << emp_company_nm << endl;
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