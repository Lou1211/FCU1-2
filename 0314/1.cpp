#include <iostream>

using namespace std;

int main()
{
    int j = 1, r = 1, a;
    while (j != 0 && r != 0)
    {
        cin >> j >> r;
        int arr1[600];
        int max = 0;
        for (int i = 0; i < 600; i++)
        {
            arr1[i] = 0;
        }

        int chan = 0;
        for (int i = 0; i < j * r; i++)
        {
            cin >> a;
            arr1[i % j ] = arr1[i % j ] + a;
        }

        /*for (int i = 0; i < j; i++)
        {
            cout <<"arr1[i]= "<< arr1[i] << endl;
        }*/

        for (int i = 0; i < j; i++)
        {
            if (arr1[i] > max)
            {
                max = arr1[i];
            }
        }
        //cout <<"max= "<< max << endl;
        for (int i = 0; i < j; i++)
        {
            if (arr1[i] == max)
            {
                chan = i + 1;
            }
            //cout << chan << endl;
        }

        if (j == 0 && r == 0)
        {
        }
        else
        {
            cout << chan << endl;
        }
    }
}