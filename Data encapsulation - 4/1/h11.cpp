#include <iostream>
using namespace std;

class stu
{
private:
    int stu_id, stu_age;
    char stu_name[200], stu_course[200], stu_email[200], stu_city[200], stu_college[200];

public:
    void setStu()
    {

        cout << "Student ID : ";
        cin >> stu_id;
        cout << "Student Name : ";
        cin >> stu_name;
        cout << "Student Age : ";
        cin >> stu_age;
        cout << "Student Course : ";
        cin >> stu_course;
        cout << "Student Email : ";
        cin >> stu_email;
        cout << "Student City : ";
        cin >> stu_city;
        cout << "Student Collage : ";
        cin >> stu_college;

        cout << endl
             << endl;
    }
    void getStu()
    {
        cout << "STUDENT DETAILS" << endl
             << endl;

        cout << "Student ID : " << stu_id << endl
             << "Student Name : " << stu_name << endl
             << "Student Age : " << stu_age << endl
             << "Student Course : " << stu_course << endl
             << "Student Email:" << stu_email << endl
             << "Student City:" << stu_city << endl
             << "Student Collage:" << stu_college << endl;
    }
};

int main()
{
    int i;
    stu s1[2];

    for (i = 1; i <= 2; i++)
    {
        s1[i].setStu();
    }
    for (i = 1; i <= 2; i++)
    {
        s1[i].getStu();
    }
}