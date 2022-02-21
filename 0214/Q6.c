#include <stdio.h>
#include <string.h>

int main()
{
    int n, c = 0, d = 0;
    scanf("%d", &n);
    int arr[n],arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c);
        d = d + c;
        arr[i] = d;
        arr2[i]=c;
    }
    char arr1[d][10];
    for (int i = 0; i < d; i++)
    {
        scanf("%s", &arr1[i]);
    }
    /*puts("");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }*/
    int count = 0;
    int compare;
    int i22 = 0;
    int i11 = 0;
    // printf("%d\t%d\t%d\n",n,c,d);
    for (int i = 0; i < n; i++)
    {
        for (; i11 < arr[i]; i11++)
        {
            for (; i22 < arr[i]; i22++)
            {
                //printf("I11=%d\n",i11);
                if (i11 != i22)
                {
                    compare = strcmp(arr1[i11], arr1[i22]);
                    if (compare == 0)
                    {
                        count++;
                        strcpy(arr1[i22], arr1[i22 + 1]);
                        for (int i33 = i; i33 < n; i33++)
                        {
                            arr[i33]--;
                        }
                        
                    }
                }
            }
            i22 = i11+1;
        }
        printf("%d\n",count);
        count = 0;
    }
}
/*
4

6
3
5
2

AAA
CCC
AABA
AABA
AAA
CCC

AABA
AAC
AAC

AABCA
AABCD
AABCA
AABCD
AABC

AABCDD
AAD
*/