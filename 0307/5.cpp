#include <iostream>
#include "5.h"
using namespace std;

Car::Car(string name,string number,string color,int air,int oil){
    setname(name);
    setnumber(number);
    setcolor(color);
    setair(air);
    setoil(oil);
}

void Car::setname( string newname)
{
    name = newname;
}
string Car::getname()
{
    return name;
}
void Car::setnumber( string newnumber)
{
    number = newnumber;  
}
string Car::getnumber()
{
    return number;
}
void Car::setair( int newair)
{
    air = newair;
}
int Car::getair()
{
    return air;
}
void Car::setoil( int newoil)
{
    oil = newoil;
}
int Car::getoil()
{
    return oil;
}
void Car::setcolor( string newcolor)
{
    color = newcolor;
}
string Car::getcolor()
{
    return color;
}
void Car::showinfo()
{
    cout<<"------------------------"<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"number : "<<number<<endl;
    cout<<"color : "<<color<<endl;
    if (air>=1000)
    {
        cout<<"air : "<<air<<endl;
    }
    else if (air<1000)
    {
        cout<<"air : "<<1000<<endl;
        cout<<"wrong air"<<endl;
    }
    if (oil>=10)
    {
        cout<<"oil : "<<oil<<endl;
    }
    else if (oil<10)
    {
        cout<<"oil : "<<10<<endl;
        cout<<"wrong oil"<<endl;
    }
    cout<<"------------------------"<<endl;
}