#include <iostream>
#include <string>
#include "4.h"

using namespace std;

int main(int argc,char const *argv[])
{
    string name;
    string id;
    string sex;
    string email;
    string phone;
    cout << "Name: ";
    getline(cin, name);
    cout << "Email: ";
    getline(cin, email);
    cout << "Phone: ";
    getline(cin, phone);
    cout << "Sex: ";
    getline(cin, sex);
    cout << "Id: ";
    getline(cin, id);
    Student a(name, id, sex, email, phone);
    a.showInfo();

    cout << "Name: ";
    getline(cin, name);
    cout << "Email: ";
    getline(cin, email);
    cout << "Phone: ";
    getline(cin, phone);
    cout << "Sex: ";
    getline(cin, sex);
    cout << "Id: ";
    getline(cin, id);
    Student b(name, id, sex, email, phone);
    b.showInfo();

    cout << "Name: ";
    getline(cin, name);
    cout << "Email: ";
    getline(cin, email);
    cout << "Phone: ";
    getline(cin, phone);
    cout << "Sex: ";
    getline(cin, sex);
    cout << "Id: ";
    getline(cin, id);
    Student c(name, id, sex, email, phone);
    c.showInfo();
}
