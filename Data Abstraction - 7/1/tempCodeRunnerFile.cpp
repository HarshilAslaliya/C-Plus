#include <iostream>
using namespace std;

class Admin
{
public:
    string company_name;

protected:
    int manager_salray, employee_salary;

private:
    string can_terminate;
    string total_annual_revenue;
    int total_staff;

public:
    void myAccess(string company_name, string total_annual_revenue, int total_staff,
                  string can_terminate)
    {
        this->company_name = company_name;
        this->total_annual_revenue = total_annual_revenue;
        this->total_staff = total_staff;
        this->can_terminate = can_terminate;

        cout << "\n\n\n\t\t\t\tADMIN DETAILS...\n"
             << endl;

        cout << "\t\t\t\tCompany Name : " << company_name << endl
             << "\t\t\t\tTotal Staff : " << total_staff << endl
             << "\t\t\t\tTotal Annual Revenue : " << total_annual_revenue << endl
             << "\t\t\t\tCan Terminate : " << can_terminate << endl;
    }
};
class Manager : public Admin
{
public:
    void myAccess(string company_name, int manager_salray)
    {
        this->company_name = company_name;
        this->manager_salray = manager_salray;

        cout << "\n\t\t\t\tMANAGER DETAILS...\n"
             << endl;

        cout << "\t\t\t\tCompany Name : " << company_name << endl
             << "\t\t\t\tManager Salary : " << manager_salray << endl;
    }
};
class Employee : public Manager
{
public:
    void myAccess(string company_name, int employee_salray)
    {
        this->company_name = company_name;
        this->employee_salary = employee_salray;

        cout << "\n\t\t\t\tEMPLOYEE DETAILS...\n"
             << endl;

        cout << "\t\t\t\tCompany Name : " << company_name << endl
             << "\t\t\t\tEmployee Salary : " << employee_salary << endl
             << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    Employee e1;

    e1.Admin::myAccess("HA Tech", "10 cr", 250, "Krish Motisariya");

    e1.Manager::myAccess("HA Tech", 300000);

    e1.myAccess("HA Tech", 50000);
}