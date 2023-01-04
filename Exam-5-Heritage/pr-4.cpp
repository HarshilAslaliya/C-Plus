#include <iostream>
using namespace std;

class emp
{

protected:
    char emp_nm[100], emp_role[100];

public:
    emp()
    {
        cout << "\t\t\t\tEmployee Name : ";
        cin >> emp_nm;
        cout << "\t\t\t\tEmployee Role : ";
        cin >> emp_role;
    }
};
class empRead
{
protected:
    int emp_id, emp_salary;

public:
    empRead()
    {
        cout << endl
             << endl
             << "\t\t\t\t* READ EMPLOYEE DETAILS *" << endl
             << endl;
        cout << "\t\t\t\tEmployee ID : ";
        cin >> emp_id;
        cout << "\t\t\t\tEmployee Salary : ";
        cin >> emp_salary;
    }
};
class printEmp : public empRead, public emp
{
public:
    void printEMP()
    {
        cout << endl
             << endl
             << "\t\t\t\t* PRINT EMPLOYEE DETAILS *" << endl
             << endl;
        cout << "\t\t\t\tEmployee Id        : " << empRead::emp_id << endl;
        cout << "\t\t\t\tEmployee Name      : " << emp::emp_nm << endl;
        cout << "\t\t\t\tEmployee Role      : " << emp::emp_role << endl;
        cout << "\t\t\t\tEmployee Salary    : " << empRead::emp_salary << endl
             << endl
             << endl
             << endl
             << endl;
    }
};
int main()
{
    printEmp e1;

    // e1.read1();
    // e1.read2();
    e1.printEMP();
}