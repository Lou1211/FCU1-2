#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }
    for (int i = 1; i < a+1; i++)
    {
        for (int i1 = 1; i1 < b+1; i1++)
        {
            cout<<i<<" x "<<i1<<" = "<<i*i1<<"\n";
        }
        
    }
    
}