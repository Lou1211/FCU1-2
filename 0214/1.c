#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, e, h, m;
    double angle;
    scanf("%d%d", &s, &e);
    for (int i = s * 60; i <= e * 60; i++)
    {
        h = (i / 60) % 12;
        m = i % 60;
        // printf("%02d:%02d ", h, m);
        angle = 30.00 * h + 0.50 * m - 6.00 * m;
        // printf("%.2f\n", angle);
        if (angle < 0)
        {
            angle = angle * -1;
        }
        if (angle >= 180.00)
        {
            angle = 360.00 - angle;
        }
        if (angle >= 88.00 && angle <= 92.00)
        {
            printf("%02d:%02d degree=%.2f\n", i/60, m, angle);
        }
    }
}