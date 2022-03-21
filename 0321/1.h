#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;

class Staff
{
private:
    string name;
    string jobid;
    string gender;
    string email;
    string phone;
    string workunit;
    string jobagent;
    string date;
    string jobname;

public:
    Staff(string name, string jobid, string gender, string email, string phone, string workunit, string jobagent, string date, string jobname);
    void setname(string Newname);
    void setjobid(string Newjobid);
    void setgender(string Newgender);
    void setemail(string Newemail);
    void setphone(string Newphone);
    void setworkunit(string Newworkunit);
    void setjobagent(string jNewobagent);
    void setdate(string Newdate);
    void setjobname(string Newjobname);

    string getname();
    string getjobid();
    string getgender();
    string getemail();
    string getphone();
    string getworkunit();
    string getjobagent();
    string getdate();
    string getjobname();

    void showinfo();

    bool operator>(const Staff &);
    bool operator>=(const Staff &);
    bool operator<(const Staff &);
    bool operator<=(const Staff &);
    bool operator==(const Staff &);
};
