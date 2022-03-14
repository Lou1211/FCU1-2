#include <iostream>
#include <string>
#include "4.h"

using namespace std;

Student::Student(string name, string id, string sex, string email, string phone)
{
    void setName(string NewName);
    void setId(string NewId);
    void setSex(string NewSex);
    void setEmail(string NewEmail);
    void setPhone(string NewPhone);
}

// set

void Student::setName(string NewName)
{
    if (NewName.size() > 26)
    {
        name = NewName.substr(0, 25);
    }
    else
    {
        name = NewName;
    }
}
void Student::setId(string NewId)
{
    if (NewId.size() > 11)
    {
        id = NewId.substr(0, 10);
    }
    else
    {
        id = NewId;
    }
}
void Student::setSex(string NewSex)
{
    sex = NewSex;
}
void Student::setEmail(string NewEmail)
{
    email = NewEmail;
}
void Student::setPhone(string NewPhone)
{
    phone = NewPhone;
}

// get

string Student::getName()
{
    return name;
}
string Student::getId()
{
    return id;
}
string Student::getSex()
{
    return sex;
}
string Student::getEmail()
{
    return email;
}
string Student::getPhone()
{
    return phone;
}

// show

void Student::showInfo()
{
    cout << "------------------------------------" << endl;
    cout << "Name: " << getName() << "(" << getId << ")" << endl;
    cout << "Email: " << getEmail << endl;
    cout << "Phone: " << getPhone << endl;
    cout << "------------------------------------" << endl;
}