#include <iostream>
#include <string.h>
#include <ctime>
#include "1.h"

using namespace std;

Staff::Staff(string name, string jobid, string gender, string email, string phone, string workunit, string jobagent, string date, string jobname)
{
    setname(name);
    setjobid(jobid);
    setgender(gender);
    setemail(email);
    setphone(phone);
    setworkunit(workunit);
    setjobagent(jobagent);
    setdate(date);
    setjobname(jobname);
}

// getstart--------------------------------------------------------------------------------------------------------

string Staff::getname()
{
    return name;
}

string Staff::getjobid()
{
    return jobid;
}

string Staff::getgender()
{
    return gender;
}

string Staff::getemail()
{
    return email;
}

string Staff::getphone()
{
    return phone;
}

string Staff::getworkunit()
{
    return workunit;
}

string Staff::getjobagent()
{
    return jobagent;
}

string Staff::getdate()
{
    return date;
}

string Staff::getjobname()
{
    return jobname;
}

// getend--------------------------------------------------------------------------------------------------------

// setstart--------------------------------------------------------------------------------------------------------

void Staff::setname(string Newname)
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

void Staff::setjobid(string Newjobid)
{
    if (Newjobid.size() > 11)
    {
        jobid = Newjobid.substr(0, 10);
    }
    else
    {
        jobid = Newjobid;
    }
}

void Staff::setgender(string Newgender)
{
    gender = Newgender;
}

void Staff::setemail(string Newemail)
{
    email = Newemail;
}

void Staff::setphone(string Newphone)
{
    phone = Newphone;
}

void Staff::setworkunit(string Newworkunit)
{
    workunit = Newworkunit;
}

void Staff::setjobagent(string Newjobagent)
{
    jobagent = Newjobagent;
}

void Staff::setdate(string Newdate)
{
    date = Newdate;
}

void Staff::setjobname(string Newjobname)
{
    jobname = Newjobname;
}

// setend--------------------------------------------------------------------------------------------------------

// operatorstart--------------------------------------------------------------------------------------------------------

bool Staff::operator>(const Staff &obj)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 6));
    int day = stoi(date.substr(8, 9));

    int objyear = stoi(obj.date.substr(0, 4));
    int objmonth = stoi(obj.date.substr(5, 6));
    int objday = stoi(obj.date.substr(8, 9));

    if (year < objyear)
    {
        return true;
    }
    else if (year == objyear && month < objmonth)
    {
        return true;
    }
    else if (year == objyear && month == objmonth && day < objday)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Staff::operator>=(const Staff &obj)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 6));
    int day = stoi(date.substr(8, 9));

    int objyear = stoi(obj.date.substr(0, 4));
    int objmonth = stoi(obj.date.substr(5, 6));
    int objday = stoi(obj.date.substr(8, 9));

    if (year < objyear)
    {
        return true;
    }
    else if (year == objyear && month < objmonth)
    {
        return true;
    }
    else if (year == objyear && month == objmonth && day <= objday)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Staff::operator<(const Staff &obj)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 6));
    int day = stoi(date.substr(8, 9));

    int objyear = stoi(obj.date.substr(0, 4));
    int objmonth = stoi(obj.date.substr(5, 6));
    int objday = stoi(obj.date.substr(8, 9));
    
    if (year > objyear)
    {
        return true;
    }
    else if (year == objyear && month > objmonth)
    {
        return true;
    }
    else if (year == objyear && month == objmonth && day > objday)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Staff::operator<=(const Staff &obj)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 6));
    int day = stoi(date.substr(8, 9));

    int objyear = stoi(obj.date.substr(0, 4));
    int objmonth = stoi(obj.date.substr(5, 6));
    int objday = stoi(obj.date.substr(8, 9));

    if (year > objyear)
    {
        return true;
    }
    else if (year == objyear && month > objmonth)
    {
        return true;
    }
    else if (year == objyear && month == objmonth && day >= objday)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Staff::operator==(const Staff &obj)
{
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 6));
    int day = stoi(date.substr(8, 9));

    int objyear = stoi(obj.date.substr(0, 4));
    int objmonth = stoi(obj.date.substr(5, 6));
    int objday = stoi(obj.date.substr(8, 9));
    
    if (year == objyear && month == objmonth && day == objday)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// operatorend--------------------------------------------------------------------------------------------------------

void Staff::showinfo()
{
    cout << "--------------------------------------------\n"
         << "Name: " << name << "\n"
         << "Job ID: " << jobid << "\n"
         << "Gender: " << gender << "\n"
         << "E-mail: " << email << "\n"
         << "Phone Number: " << phone << "\n"
         << "Work Unit: " << workunit << "\n"
         << "Job Agent: " << jobagent << "\n"
         << "Date: " << date << "\n"
         << "Job Name: " << jobname << "\n"
         << "--------------------------------------------\n";
}