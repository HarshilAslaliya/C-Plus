#include <iostream>
using namespace std;

class emp
{
protected:
    int emp_id, emp_salary;

public:
    void read1()
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
class empRead
{
protected:
    char emp_nm[100], emp_role[100];

public:
    void read2()
    {
        cout << "\t\t\t\tEmployee Name : ";
        cin >> emp_nm;
        cout << "\t\t\t\tEmployee Role : ";
        cin >> emp_role;
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
        cout << "\t\t\t\tEmployee Id        : " << emp::emp_id << endl;
        cout << "\t\t\t\tEmployee Name      : " << empRead::emp_nm << endl;
        cout << "\t\t\t\tEmployee Role      : " << empRead::emp_role << endl;
        cout << "\t\t\t\tEmployee Salary    : " << emp::emp_salary << endl
             << endl
             << endl
             << endl
             << endl;
    }
};
int main()
{
    printEmp e1;

    e1.read1();
    e1.read2();
    e1.printEMP();
}