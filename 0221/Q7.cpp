#include<iostream>

using namespace std;

int main(){
    int sc=0,tw=0,br=0,tk=0,ms=0;
    cin>>sc>>tw>>br>>tk>>ms;
    int sum=sc+tw*2+br*2+tk*2-ms*2;
    if (sum>=45)
    {
        cout<<"A\n";
    }
    else if(sum>=35&&sum<=44){
        cout<<"B\n";
    }
    else if(sum>=25&&sum<=34){
        cout<<"C\n";
    }
    if (sum<25)
    {
        cout<<"D\n";
    }
}