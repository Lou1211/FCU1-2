#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[2][4], arr2[2][4];
    int a = 0, b = 0;
    for (int i2 = 0; i2 < 4; i2++)
    {
        scanf("%d", &arr1[0][i2]);
        scanf("%d", &arr1[1][i2]);
    }
    for (int i2 = 0; i2 < 4; i2++)
    {
        scanf("%d", &arr2[0][i2]);
        scanf("%d", &arr2[1][i2]);
    }

    for (int i = 0; i < 4; i++)
    {
        // 1
        if (pow((arr1[0][0] - arr1[0][1]), 2) + pow((arr1[1][0] - arr1[1][1]), 2) == pow((arr1[0][1] - arr1[0][2]), 2) + pow((arr1[1][1] - arr1[1][2]), 2) == pow((arr1[0][2] - arr1[0][3]), 2) + pow((arr1[1][2] - arr1[1][3]), 2) == pow((arr1[0][3] - arr1[0][0]), 2) + pow((arr1[1][3] - arr1[1][0]), 2))
        {
            if (pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2) == pow((arr1[0][1] - arr1[0][3]), 2) + pow((arr1[1][1] - arr1[1][3]), 2))
            {
                // printf("YES %d\n",pow((arr1[0][0]-arr1[0][1]),2)+pow((arr1[1][0]-arr1[1][1]),2));
            }
            a = pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2);
        }
        // 2
        if (pow((arr1[0][0] - arr1[0][1]), 2) + pow((arr1[1][0] - arr1[1][1]), 2) == pow((arr1[0][1] - arr1[0][3]), 2) + pow((arr1[1][1] - arr1[1][3]), 2) == pow((arr1[0][3] - arr1[0][2]), 2) + pow((arr1[1][3] - arr1[1][2]), 2) == pow((arr1[0][2] - arr1[0][0]), 2) + pow((arr1[1][2] - arr1[1][0]), 2))
        {
            if (pow((arr1[0][0] - arr1[0][3]), 2) + pow((arr1[1][0] - arr1[1][3]), 2) == pow((arr1[0][1] - arr1[0][2]), 2) + pow((arr1[1][1] - arr1[1][2]), 2))
            {
                // printf("YES %d\n",pow((arr1[0][0]-arr1[0][1]),2)+pow((arr1[1][0]-arr1[1][1]),2));
            }
            a = pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2);
        }
        // 3
        if (pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2) == pow((arr1[0][2] - arr1[0][1]), 2) + pow((arr1[1][2] - arr1[1][1]), 2) == pow((arr1[0][1] - arr1[0][3]), 2) + pow((arr1[1][1] - arr1[1][3]), 2) == pow((arr1[0][3] - arr1[0][0]), 2) + pow((arr1[1][3] - arr1[1][0]), 2))
        {
            if (pow((arr1[0][0] - arr1[0][1]), 2) + pow((arr1[1][0] - arr1[1][1]), 2) == pow((arr1[0][2] - arr1[0][3]), 2) + pow((arr1[1][2] - arr1[1][3]), 2))
            {
                // printf("YES %d\n",pow((arr1[0][0]-arr1[0][2]),2)+pow((arr1[1][0]-arr1[1][2]),2));
            }
            a = pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2);
        }
        else
        {
            // printf("NO\n");
        }
    }

    for (int i = 0; i < 4; i++)
    {
        // 1
        if (pow((arr2[0][0] - arr2[0][1]), 2) + pow((arr2[1][0] - arr2[1][1]), 2) == pow((arr2[0][1] - arr2[0][2]), 2) + pow((arr2[1][1] - arr2[1][2]), 2) == pow((arr2[0][2] - arr2[0][3]), 2) + pow((arr2[1][2] - arr2[1][3]), 2) == pow((arr2[0][3] - arr2[0][0]), 2) + pow((arr2[1][3] - arr2[1][0]), 2))
        {
            if (pow((arr2[0][0] - arr2[0][2]), 2) + pow((arr2[1][0] - arr2[1][2]), 2) == pow((arr2[0][1] - arr2[0][3]), 2) + pow((arr2[1][1] - arr2[1][3]), 2))
            {
                // printf("YES %d\n",pow((arr2[0][0]-arr2[0][1]),2)+pow((arr2[1][0]-arr2[1][1]),2));
            }
            b = pow((arr2[0][0] - arr2[0][2]), 2) + pow((arr2[1][0] - arr2[1][2]), 2);
        }
        // 2
        if (pow((arr2[0][0] - arr2[0][1]), 2) + pow((arr2[1][0] - arr2[1][1]), 2) == pow((arr2[0][1] - arr2[0][3]), 2) + pow((arr2[1][1] - arr2[1][3]), 2) == pow((arr2[0][3] - arr2[0][2]), 2) + pow((arr2[1][3] - arr2[1][2]), 2) == pow((arr2[0][2] - arr2[0][0]), 2) + pow((arr2[1][2] - arr2[1][0]), 2))
        {
            if (pow((arr2[0][0] - arr2[0][3]), 2) + pow((arr2[1][0] - arr2[1][3]), 2) == pow((arr2[0][1] - arr2[0][2]), 2) + pow((arr2[1][1] - arr2[1][2]), 2))
            {
                // printf("YES %d\n",pow((arr2[0][0]-arr2[0][1]),2)+pow((arr2[1][0]-arr2[1][1]),2));
            }
            b = pow((arr2[0][0] - arr2[0][2]), 2) + pow((arr2[1][0] - arr2[1][2]), 2);
        }
        // 3
        if (pow((arr2[0][0] - arr2[0][2]), 2) + pow((arr2[1][0] - arr2[1][2]), 2) == pow((arr2[0][2] - arr2[0][1]), 2) + pow((arr2[1][2] - arr2[1][1]), 2) == pow((arr2[0][1] - arr2[0][3]), 2) + pow((arr2[1][1] - arr2[1][3]), 2) == pow((arr2[0][3] - arr2[0][0]), 2) + pow((arr2[1][3] - arr2[1][0]), 2))
        {
            if (pow((arr2[0][0] - arr2[0][1]), 2) + pow((arr2[1][0] - arr2[1][1]), 2) == pow((arr2[0][2] - arr2[0][3]), 2) + pow((arr2[1][2] - arr2[1][3]), 2))
            {
                // printf("YES %d\n",pow((arr2[0][0]-arr2[0][2]),2)+pow((arr2[1][0]-arr2[1][2]),2));
            }
            b = pow((arr2[0][0] - arr2[0][2]), 2) + pow((arr2[1][0] - arr2[1][2]), 2);
        }
        else
        {
            // printf("NO\n");
        }
    }
    if (a > b)
    {
        printf("A\n");
    }
    if (a < b)
    {
        printf("B\n");
    }
    else
    {
        printf("Peace\n");
    }
}