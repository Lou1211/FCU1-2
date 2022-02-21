#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char arr[n][50],tp;
    for (int i = 0; i < n; i++)
    {
        gets(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int i1 = 0; arr[i1]!='\0'; i1++)
        {
            if (isdigit(arr[i][i1]))
            {
                for (int i2 = 0; i2 < i1; i2++)
                {
                    if (arr[i][i2]>64)
                    {
                        printf("%s",arr[i][i2]+arr[i][i1]-30);
                    }
                    
                }
                
            }
            
        }
        puts("");
    }
    
}