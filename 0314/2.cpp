#include <iostream>

using namespace std;

int main()
{
    int v1 = 1, v2 = 1, d1 = 1, d2 = 1;
    int ctime = 1;
    while (v1 != 0 && v2 != 0 && d1 != 0 && d2 != 0)
    {
        cin >> v1 >> d1 >> v2 >> d2;
        float t1 = d1 / v1;
        float t2 = d2 / v2;
        if (t1 < t2)
        {
            cout << "Case #" << ctime << ": You owe me a beer!" << endl;
        }
        else
        {
            cout << "Case #" << ctime << ": No beer for the captain." << endl;
        }
        ctime++;
        int n = 1;
        // cout << "Avg. arrival time: " << (t1 + t2) / 2 << endl;
        if ((int)t1 == (int)t1 + 0.999 && (int)t2 == (int)t2 + 0.999)
        {
            if ((int)(t1 + t2) % 2 == 0)
            {
                cout << "Avg. arrival time: " << (t1 + t2) / 2 << endl;
                cout << "1" << endl;
            }
            else
            {
                cout << "Avg. arrival time: " << (t1 + t2) << "/2" << endl;
                cout << "2" << endl;
            }
        }
        else if (((v1 * d2) + (v2 * d1)) % (v1 * v2) == 0)
        {
            if ((((v1 * d2) + (v2 * d1)) / (v1 * v2)) % 2 == 0)
            {
                cout << "Avg. arrival time: " << (((v1 * d2) + (v2 * d1)) / (v1 * v2 * 2)) << endl;
                cout << "3" << endl;
            }
            else
            {
                cout << "Avg. arrival time: " << (((v1 * d2) + (v2 * d1)) / (v1 * v2)) << "/2" << endl;
                cout << "4" << endl;
            }
        }
        else
        {
            for (int i = (v1 * v2) ; i > 1; i--)
            {
                if (((v1 * d2) + (v2 * d1)) % i == 0 && (v1 * v2) % i == 0)
                {
                    //cout << i << endl;
                    n = i;
                    break;
                }
            }
            if ((((v1 * d2) + (v2 * d1)) % 2) == 0)
            {
                cout << "Avg. arrival time: " << ((v1 * d2) + (v2 * d1)) / (2 * n) << "/" << (v1 * v2) / n << endl;
                //cout << "5" << endl;
            }
            else
            {
                cout << "Avg. arrival time: " << ((v1 * d2) + (v2 * d1)) / n << "/" << (v1 * v2) / (2 * n) << endl;
                //cout << "6" << endl;
            }
        }
    }
}