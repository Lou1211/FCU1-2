#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string name;
    string number;
    string color;
    int air;
    int oil;

public:
    Car(string name, string number, string color, int air, int oil);
    void setname(string newname);
    string getname();
    void setnumber(string newnumber);
    string getnumber();
    void setcolor(string newcolor);
    string getcolor();
    void setair(int newair);
    int getair();
    void setoil(int newoil);
    int getoil();
    void showinfo();
};