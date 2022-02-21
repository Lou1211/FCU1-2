#include <iostream>

using namespace std;

int main()
{
    int n, a, b, i1, i2, box = 0, tmp = 1;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> i1 >> i2;
        for (b = i1; b <= i2; b++)
        {
            n = b;
            while (n != 1)
            {
                if (n % 2 == 1)
                {
                    n = n * 3 + 1;
                    tmp++;
                }
                else if (n % 2 == 0)
                {
                    n = n / 2;
                    tmp++;
                }
            }
            if (tmp > box)
            {
                box = tmp;
            }
            tmp = 1;
        }
        cout << i1 << " " << i2 << " " << box << endl;
        box = 0;
    }
}