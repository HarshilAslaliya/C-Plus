#include <iostream>
using namespace std;

class cus
{
private:
    int cus_id, cus_age, cus_sim_val;
    long long int cus_mob;
    char cus_nm[200], cus_tel_br_nm[200], cus_city[200];

public:
    void setCus()
    {
        cout << "Customer ID : ";
        cin >> cus_id;
        cout << "Customer Name : ";
        cin >> cus_nm;
        cout << "Customer Age : ";
        cin >> cus_age;
        cout << "Customer Telecom Brand Name : ";
        cin >> cus_tel_br_nm;
        cout << "Customer Mobile Number : ";
        cin >> cus_mob;
        cout << "Customer City : ";
        cin >> cus_city;
        cout << "Customer Simcard Validity(year) : ";
        cin >> cus_sim_val;

        cout << endl
             << endl;
    }

    void getCus()
    {

        cout << "Customer ID : " << cus_id << endl
             << "Customer Name : " << cus_nm << endl
             << "Customer Age : " << cus_age << endl
             << "Customer Telecom Brand Name : " << cus_tel_br_nm << endl
             << "Customer Mobile Number:" << cus_mob << endl
             << "Customer City:" << cus_city << endl
             << "Customer Simcard Validity(year):" << cus_sim_val << endl;

        cout << "============================================" << endl;
    }
};
int main()
{
    int i;

    cus c1[5];

    for (i = 1; i <= 5; i++)
    {
        c1[i].setCus();
    }

    for (i = 1; i <= 5; i++)
    {
        cout << "CUSTOMER DETAILS:" << i << endl
             << endl;
        c1[i].getCus();
    }
}