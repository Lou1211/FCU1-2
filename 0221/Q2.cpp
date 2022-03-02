#include <iostream>

#include <string>

using namespace std;

int main()
{
    int n = 0, s = 0, check = 0, b = 1, ans = 0;
    int num[10] = {0};
    char arr[9][9];
    string s1;
    while (n < 9)
    {
        getline(cin, s1);
        for (int i = 0; i < s1.length(); i++)
            arr[n][i] = s1[i];
        n++;
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            s = arr[i][j] - 48;
            if (s != 0)
                num[s]++;
            if (num[s] > 1)
            {
                ans = 1;
                cout << "row" << i + 1 << " #" << arr[i][j] << "\n";
                break;
            }
        }
        for (int j = 0; j < 10; j++)
            num[j] = 0;
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            s = arr[j][i] - 48;
            if (s != 0)
                num[s]++;
            if (num[s] > 1)
            {
                ans = 1;
                cout << "column" << i + 1 << " #" << arr[j][i] << "\n";
                break;
            }
        }
        for (int j = 0; j < 10; j++)
            num[j] = 0;
    }
    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3)
        {
            check = 0;
            for (int x = i; x < i + 3; x++)
            {
                for (int y = j; y < j + 3; y++)
                {
                    s = arr[x][y] - 48;
                    if (s != 0)
                        num[s]++;
                    if (num[s] > 1)
                    {
                        ans = 1;
                        check = 1;
                        cout << "block" << b << " #" << arr[x][y] << "\n";
                        break;
                    }
                }
                if (check == 1)
                    break;
            }
            b++;
            for (int j = 0; j < 10; j++)
                num[j] = 0;
        }
    }
    if (ans == 0)
        cout << "true"
             << "\n";
    return 0;
}