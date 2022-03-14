#include<iostream>
#include<iomanip>
#include "5.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n=0;
    cin>>n;
    string name ;
    string number ;
    string color;
    int air ;
    int oil ;
    string a;
    for (int i = 0; i < n; i++)
    {
        getline(cin,a);
        cout<<"name = " ;
        getline(cin,name);
        cout<<"number = " ;
        getline(cin,number);
        cout<<"color = " ;
        getline(cin,color);
        cout<<"air = ";
        cin>>air;
        cout<<"oil = ";
        cin>>oil;
        Car car( name, number, color, air, oil);
        car.showinfo();
    }
}