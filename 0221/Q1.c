#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int a1, a2, a3;
    int fi=0;
    int tmp=0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d%d%d", &a1, &a2, &a3);
        int arr[a1][a2];
        for (int i1 = 0; i1 < a1; i1++)
        {
            for (int i2 = 0; i2 < a2; i2++)
            {
                scanf("%d", &arr[i1][i2]);
            }
        }
        /*for (int i1 = 0; i1 < a1; i1++)
        {
            for (int i2 = 0; i2 < a2; i2++)
            {
                printf("%d\t", arr[i1][i2]);
            }
            puts("");
        }*/
        for (int i1 = 0; i1 < a1-a3+1; i1++)
        {
            for (int i2 = 0; i2 < a2-a3+1; i2++)
            {
                for (int i3 = 0; i3 < a3; i3++)
                {
                    for (int i4 = 0; i4 < a3; i4++)
                    {
                        tmp+=arr[i3+i1][i4+i2];
                        //printf("%d\n",tmp);
                    }
                    if (tmp>fi)
                    {
                        fi=tmp;
                    }
                }
                tmp=0;
            }
        }
        printf("%d\n",fi);
        fi=0;
    }
}