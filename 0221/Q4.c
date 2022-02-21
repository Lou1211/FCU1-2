#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    int c=0;
    for (size_t i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int i1 = 0; i1 < a; i1++)
        {
            if (i!=i1)
            {
                if (arr[i]==arr[i1])
                {
                    c++;
                }
            }
        }
    }
    if (c<1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    
}