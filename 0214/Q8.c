#include <stdio.h>

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    for (int i = l * 60; i <= r * 60; ++i)
    {
        int h = (i / 60)%12;
        int m = i % 60;
        double d = 30.0 * h + 0.5 * m - 6.0 * m;
        if (d<0)
        {
            d=d*-1;
        }
        if (d >= 180.0)
        {
            d = 360.0 - d;
        }
        if (d >= 88.0 && d <= 92.0)
        {
            printf("%02d:%02d degree=%.2f\n", i / 60, m, d);
        }
    }
}