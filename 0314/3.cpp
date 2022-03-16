#include <iostream>

using namespace std;

int main()
{
    unsigned long long int low, high;
    int arr[18];
    for (int i = 0; i < 18; i++)
    {
        arr[i] = 0;
    }

    while (low != 0 && high != 0)
    {
        int type = 0;
        unsigned long long int f = 1, check = 0, c = 0;
        cin >> low >> high;
        for (unsigned long long int i = low; i <= high; i++)
        {
            for (int i1 = 1; i1 <= i; i1++)
            {
                f = f * i1;
            }
            while (f % 10 == 0)
            {
                check++;
                f = f / 10;
            }
            for (int i1 = 0; i1 <= type; i1++)
            {
                if (check == arr[i1])
                {
                    c++;
                }
            }
            if (c == 0)
            {
                arr[type] = check;
                type++;
                // cout << "check=" << check << endl;
            }
            check = 0;
            c = 0;
            f = 1;
        }
        if (low == 0 && high == 0)
        {
        }
        else
        {
            cout << type + 1 << endl;
        }
        for (int i = 0; i < 18; i++)
        {
            arr[i] = 0;
        }
    }
}