#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int quantity[n], ele[n][100];
    //�Y��J
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &quantity[i]);
        for (int j = 0; j < quantity[i]; j++)
        {
            scanf("%d", &ele[i][j]);
        }
    }
    //�ŧi�ܼƨӰO��
    int x = 0, y = 0, z = 0;
    //���X�����
    for (int i = 0; i < n; i++)
    {
        //�s����ƪ�l�ܼƬ�0
        x = 0;
        y = 0;
        for (int j = 0; j < quantity[i]; j++)
        {
            //����W�@����Ʈ��� X �O��
            if (ele[i][j] == ele[i][j - 1])
            {
                x++;
                z = 0;
            }
            //������� swap �h�� y �O��
            if (ele[i][j] != ele[i][j - 1])
            {
                if (x >= y)
                {
                    y = x;
                }
                x = 0;
                z = 1;
            }
        }
        y++;
        if (x >= y)
        {
            y = x;
            if (z != 1)
            {
                y = y + 1;
            }
        }
        printf("%d\n", y);
    }
}