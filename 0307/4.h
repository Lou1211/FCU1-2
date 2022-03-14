#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
    string name;
    string id;
    string sex;
    string email;
    string phone;
public:
    Student(string name,string id,string sex,string email,string phone);
    void setName(string NewName);
    void setId(string NewId);
    void setSex(string NewSex);
    void setEmail(string NewEmail);
    void setPhone(string NewPhone);

    string getName();
    string getId();
    string getSex();
    string getEmail();
    string getPhone();

    void showInfo();
};