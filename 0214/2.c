#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int quantity[n], ele[n][100];
    //吃輸入
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &quantity[i]);
        for (int j = 0; j < quantity[i]; j++)
        {
            scanf("%d", &ele[i][j]);
        }
    }
    //宣告變數來記錄
    int x = 0, y = 0, z = 0;
    //有幾筆資料
    for (int i = 0; i < n; i++)
    {
        //新的資料初始變數為0
        x = 0;
        y = 0;
        for (int j = 0; j < quantity[i]; j++)
        {
            //等於上一筆資料時讓 X 記錄
            if (ele[i][j] == ele[i][j - 1])
            {
                x++;
                z = 0;
            }
            //不等於後 swap 去讓 y 記錄
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