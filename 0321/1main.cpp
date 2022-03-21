#include <iostream>
#include <string.h>
#include <ctime>
#include "1.h"

using namespace std;

int main()
{
    string name[5];
    string jobid[5];
    string gender[5];
    string email[5];
    string phone[5];
    string workunit[5];
    string jobagent[5];
    string date[5];
    string jobname[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "No. " << i + 1 << "\n";
        cout << "Name: ";
        cin >> name[i];
        cout << "Job ID: ";
        cin >> jobid[i];
        cout << "Gender: ";
        cin >> gender[i];
        cout << "E-mail: ";
        cin >> email[i];
        cout << "Phone Number: ";
        cin >> phone[i];
        cout << "Work Unit: ";
        cin >> workunit[i];
        cout << "Job Agent: ";
        cin >> jobagent[i];
        cout << "Date: ";
        cin >> date[i];
        cout << "Job Name: ";
        cin >> jobname[i];
    }
    Staff arr[5] = {Staff(name[0], jobid[0], gender[0], email[0], phone[0], workunit[0], jobagent[0], date[0], jobname[0]),
                    Staff(name[1], jobid[1], gender[1], email[1], phone[1], workunit[1], jobagent[1], date[1], jobname[1]),
                    Staff(name[2], jobid[2], gender[2], email[2], phone[2], workunit[2], jobagent[2], date[2], jobname[2]),
                    Staff(name[3], jobid[3], gender[3], email[3], phone[3], workunit[3], jobagent[3], date[3], jobname[3]),
                    Staff(name[4], jobid[4], gender[4], email[4], phone[4], workunit[4], jobagent[4], date[4], jobname[4])};
    Staff tmp("", "", "", "", "", "", "", "", "");

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i].showinfo();
    }
    
}