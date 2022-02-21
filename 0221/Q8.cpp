#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,f;
        cin>>a>>f;
        for (int i1 = 0; i1 < f; i1++)
        {
            for (int i2 = 1; i2 < a+1; i2++)
            {
                for (int i3 = 0; i3 < i2; i3++)
                {
                    cout<<i2;
                }
                cout<<"\n";
            }
            for (int i2 = a-1; i2 > 0; i2--)
            {
                for (int i3 = 0; i3 < i2; i3++)
                {
                    cout<<i2;
                }
                cout<<"\n";
            }
            cout<<"\n";
        }
        
    }
    
    
}