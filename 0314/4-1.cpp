#include <iostream>
#include <string>
#include "4.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    string name;
    string job;
    string sex;
    string email;
    string phone;
    string department;
    string studytype;
    string jobname;
    string a;
    for (int i = 0; i < n; i++)
    {
        getline(cin, a);
        cout << "name = ";
        getline(cin, name);
        cout << "jobID = ";
        getline(cin, job);
        cout << "sex = ";
        getline(cin, sex);
        cout << "email = ";
        getline(cin, email);
        cout << "phone = ";
        getline(cin, phone);
        cout << "department = ";
        getline(cin, department);
        cout << "studytype = ";
        getline(cin, studytype);
        cout << "jobname = ";
        getline(cin, jobname);
        Teacher teacher(name, job, sex, email, phone, department, studytype, jobname);
        teacher.showinfo();
    }
}