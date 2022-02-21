#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr1[2][4],arr2[2][4];
    int a,b,c;
    int a1=0,a2=0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr1[0][i]);
        scanf("%d",&arr1[1][i]);
    }
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr2[0][i]);
        scanf("%d",&arr2[1][i]);
    }
    a=pow((arr1[0][0]-arr1[0][1]),2)+pow((arr1[1][0]-arr1[1][1]),2);
    b=pow((arr1[0][0]-arr1[0][2]),2)+pow((arr1[1][0]-arr1[1][2]),2);
    c=pow((arr1[0][0]-arr1[0][3]),2)+pow((arr1[1][0]-arr1[1][3]),2);
    //printf("%f %f %f\n",a,b,c);
    if (a==b&&a+b==c)
    {
        printf("Yes %d\n",a*n*n);
        a1=a;
    }
    else if(a==c&&a+c==b)
    {
        printf("Yes %d\n",a*n*n);
        a1=a;
    }
    else if (b==c&&b+c==a)
    {
        printf("Yes %d\n",b*n*n);
        a1=b;
    }
    else
    {
        printf("No\n");
    }

    a=pow((arr2[0][0]-arr2[0][1]),2)+pow((arr2[1][0]-arr2[1][1]),2);
    b=pow((arr2[0][0]-arr2[0][2]),2)+pow((arr2[1][0]-arr2[1][2]),2);
    c=pow((arr2[0][0]-arr2[0][3]),2)+pow((arr2[1][0]-arr2[1][3]),2);
    //printf("%f %f %f\n",a,b,c);
    if (a==b&&a+b==c)
    {
        printf("Yes %d\n",a*n*n);
        a2=a;
    }
    else if(a==c&&a+c==b)
    {
        printf("Yes %d\n",a*n*n);
        a2=a;
    }
    else if (b==c&&b+c==a)
    {
        printf("Yes %d\n",b*n*n);
        a2=b;
    }
    else
    {
        printf("No\n");
    }

    if (a1>a2)
    {
        printf("A\n");
    }
    if (a1<a2)
    {
        printf("B\n");
    }
    else if(a1==a2)
    {
        printf("Peace\n");
    }
}