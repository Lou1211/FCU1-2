#include <stdio.h>

int main()
{
    int ii, jj, i, j;
    int q;
    scanf("%d", &q);
    for (int i3 = 0; i3 < q; i3++)
    {
        scanf("%d %d", &ii, &jj);
        if (jj > ii)
        {
            i = ii;
            j = jj;
        }
        else
        {
            i = jj;
            j = ii;

        } ///�o�̬O�n��Ʀr�p�����e�\�A�ӳ̫ᵪ�׭n�L�X�쥻�����ǩҥH�Τ@�ӷs���Ѽƶi�h�ӰO��
        int n, c;
        int max = 0;
        for (int k = i; k <= j; k++)
        {
            n = k;
            c = 1;
            while (n != 1)
            { ///�D�سW�h
                if (n % 2 != 0)
                    n = 3 * n + 1;
                else
                    n /= 2;
                c++;
            }
            if (c > max)
                max = c;
        }
        printf("%d %d %d\n", ii, jj, max);
    }
}