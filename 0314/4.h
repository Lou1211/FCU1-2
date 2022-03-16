#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(string name,string job,string sex,string email,string phone,string department,string studytype,string jobname);
    //void set
    void setname(string Newname);
    void setjob(string Newjob);
    void setsex(string Newsex);
    void setemail(string Newemail);
    void setphone(string Newphone);
    void setdepartment(string Newdepartment);
    void setstudytype(string Newstudytype);
    void setjobname(string Newjobname);

    //string get

    string getname();
    string getjob();
    string getsex();
    string getemail();
    string getphone();
    string getdepartment();
    string getstudytype();
    string getjobname();

    //show
    void showinfo();
private:
    string name;
    string job;
    string sex;
    string email;
    string phone;
    string department;
    string studytype;
    string jobname;
};

