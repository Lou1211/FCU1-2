#include <iostream>
#include <string>
#include "4.h"

using namespace std;

Teacher::Teacher(string name, string job, string sex, string email, string phone, string department, string studytype, string jobname)
{
    setname(name);
    setjob(job);
    setsex(sex);
    setemail(email);
    setphone(phone);
    setdepartment(department);
    setstudytype(studytype);
    setjobname(jobname);
}

// Teacher::
// set

void Teacher::setname(string Newname)
{
    if (Newname.size() > 26)
    {
        name = Newname.substr(0, 25);
    }
    else
    {
        name = Newname;
    }
}

void Teacher::setjob(string Newjob)
{
    if (Newjob.size() > 11)
    {
        job = Newjob.substr(0, 10);
    }
    else
    {
        job = Newjob;
    }
}

void Teacher::setsex(string Newsex)
{
    sex = Newsex;
}

void Teacher::setemail(string Newemail)
{
    email = Newemail;
}

void Teacher::setphone(string Newphone)
{
    phone = Newphone;
}

void Teacher::setdepartment(string Newdepartment)
{
    department = Newdepartment;
}

void Teacher::setstudytype(string Newstudytype)
{
    studytype = Newstudytype;
}

void Teacher::setjobname(string Newjobname)
{
    jobname = Newjobname;
}

// get

string Teacher::getname()
{
    return name;
}

string Teacher::getjob()
{
    return job;
}

string Teacher::getsex()
{
    return sex;
}

string Teacher::getemail()
{
    return email;
}

string Teacher::getphone()
{
    return phone;
}

string Teacher::getdepartment()
{
    return department;
}

string Teacher::getstudytype()
{
    return studytype;
}

string Teacher::getjobname()
{
    return jobname;
}

void Teacher::showinfo()
{
    cout << "------------------------" << endl;
    cout << "name : " << name << endl;
    cout << "job : " << job << endl;
    cout << "sex : " << sex << endl;
    cout << "email : " << email << endl;
    cout << "phone : " << phone << endl;
    cout << "department : " << department << endl;
    cout << "studytype : " << studytype << endl;
    cout << "jobname : " << jobname << endl;
    cout << "------------------------" << endl;
}