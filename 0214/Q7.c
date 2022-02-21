#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[m][n];
    int cin;
    for (int i = m - 1; i >= 0; i--)
    {
        scanf("%d", &cin);
        for (int i1 = n - 1; i1 >= 0; i1--)
        {
            arr[i][i1] = cin % 10;
            cin = cin / 10;
        }
    }
    // right up
    int arr1[2][4]={0};
    int c = 1;
    if (c)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            for (int i1 = n - 1; i1 >= 0; i1--)
            {
                if (arr[i][i1] == 1)
                {
                    arr1[0][0] = i;
                    arr1[1][0] = i1;
                    c = 0;
                }
            }
        }
    }
    // left down
    c = 1;
    if (c)
    {
        for (int i = 0; i < m; i++)
        {
            for (int i1 = 0; i1 < n; i1++)
            {
                if (arr[i][i1] == 1)
                {
                    arr1[0][1] = i;
                    arr1[1][1] = i1;
                    c = 0;
                }
            }
        }
    }
    // left up
    c = 1;
    if (c)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            for (int i1 = 0; i1 < n; i1++)
            {
                if (arr[i][i1] == 1)
                {
                    arr1[0][2] = i;
                    arr1[1][2] = i1;
                    c = 0;
                }
            }
        }
    }
    // right down
    c = 1;
    if (c)
    {
        for (int i = 0; i < m; i++)
        {
            for (int i1 = n - 1; i1 >= 0; i1--)
            {
                if (arr[i][i1] == 1)
                {
                    arr1[0][3] = i;
                    arr1[1][3] = i1;
                    c = 0;
                }
            }
        }
    }

    float a = 0, b = 0, x = 0, y = 0, w = 0, s = 0;
    a = sqrt(pow((arr1[0][0] - arr1[0][1]), 2) + pow((arr1[1][0] - arr1[1][1]), 2));
    b = sqrt(pow((arr1[0][2] - arr1[0][3]), 2) + pow((arr1[1][2] - arr1[1][3]), 2));
    x = sqrt(pow((arr1[0][1] - arr1[0][3]), 2) + pow((arr1[1][1] - arr1[1][3]), 2));
    y = sqrt(pow((arr1[0][0] - arr1[0][2]), 2) + pow((arr1[1][0] - arr1[1][2]), 2));
    w = sqrt(pow((arr1[0][0] - arr1[0][3]), 2) + pow((arr1[1][0] - arr1[1][3]), 2));
    s = sqrt(pow((arr1[0][1] - arr1[0][2]), 2) + pow((arr1[1][1] - arr1[1][2]), 2));
    //printf("%3.3f\t%3.3f\t%3.3f\t%3.3f\t%3.3f\t%3.3f\n",a,b,x,y,w,s);
    if (a >= b && a >= x && a >= y && a >= w && a >= s)
    {
        printf("%d\n", (int)(a + 0.5));
    }
    if (b > a && b >= x && b >= y && b >= w && b >= s)
    {
        printf("%d\n", (int)(b + 0.5));
    }
    if (x > a && x > b && x >= y && x >= w && x >= s)
    {
        printf("%d\n", (int)(x + 0.5));
    }
    if (y > a && y > b && y > x && y >= w && y >= s)
    {
        printf("%d\n", (int)(y + 0.5));
    }
    if (w > a && w > b && w > x && w > y && w >= s)
    {
        printf("%d\n", (int)(w + 0.5));
    }
    if (s > a && s > b && s > x && s > y && s > w)
    {
        printf("%d\n", (int)(s + 0.5));
    }
}