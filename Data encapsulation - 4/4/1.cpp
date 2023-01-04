#include <iostream>
using namespace std;

class Diamond
{
private:
    int comp_id;
    string comp_nm;
    int comp_staff_quantity;
    long long int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Diamond(int comp_id, string comp_nm, int comp_staff_quantity,
            long long int comp_revenue, int comp_import_raw_diamonds,
            int comp_export_diamonds, string comp_ceo)
    {

        this->comp_id = comp_id;
        this->comp_nm = comp_nm;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        this->comp_ceo = comp_ceo;
    }

    Diamond()
    {
        cout << "Company id : ";
        cin >> comp_id;
        cout << "Company Name : ";
        cin >> comp_nm;
        cout << "Company Staff quantity : ";
        cin >> comp_staff_quantity;
        cout << "Company Revenue(per year) : ";
        cin >> comp_revenue;
        cout << "Company Import raw diamonds(no. of raw diamondsimported per year) : ";
        cin >> comp_import_raw_diamonds;
        cout << "Company Export Diamond(no. of diamonds per year) : ";
        cin >> comp_export_diamonds;
        cout << "Company CEO(name of CEO of the company) : ";
        cin >> comp_ceo;
    }
    void getdata()
    {
        cout << "company_id                     :" << this->comp_id << endl;
        cout << "company_name                   :" << this->comp_nm << endl;
        cout << "company_staff_quantity         :" << this->comp_staff_quantity << endl;
        cout << "company_revenue                :" << this->comp_revenue << endl;
        cout << "company_import_raw_diamonds    :" << this->comp_import_raw_diamonds << endl;
        cout << "company_export_diamonds        :" << this->comp_export_diamonds << endl;
        cout << "company_ceo                    :" << this->comp_ceo << endl;
    }
};

int main()
{
    int n, i;

    cout << "Enter Number of company : ";
    cin >> n;

    Diamond d1[n];

    //     for (i = 0; i < n; i++)
    //     {
    //         d1[i].Setdata();
    //     }
    for (i = 0; i < n; i++)
    {
        cout << "Company Number : " << i + 1 << endl;
        d1[i].getdata();
    }
}