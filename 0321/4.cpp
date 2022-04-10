#include <iostream>

using namespace std;

int main()
{
    long int A, B;
    int X = -5, Y = 5;
    while (cin >> A >> B)
    {
        long int D, n;
        if (A > B)
        {
            D = A;
            n = B;
        }
        else
        {
            D = B;
            n = A;
        }
        if (A + 1 == B || B + 1 == A)
        {
            D = 1;
            X = -1;
            Y = 1;
        }
        else if (A == B)
        {
            D = A;
            X = 0;
            Y = 1;
        }
        else if (A % B == 0 || B % A == 0)
        {
            D = n;
            X = 0;
            Y = 1;
        }
        else
        {
            for (D; D > 1; D--)
            {
                if (A % D == 0 && B % D == 0 && D <= n)
                {
                    // cout << "D= " << D << "\n";
                    break;
                }
            }
            A = A / D;
            B = B / D;
            for (int i1 = -5; i1 < 5; i1++)
            {
                for (int i2 = -5; i2 < 5; i2++)
                {
                    if (A * i1 + B * i2 == 1)
                    {
                        if (i1 <= 0)
                        {
                            if ((i2 + (-i1)) < ((-X) + Y))
                            {
                                X = i1;
                                Y = i2;
                            }
                        }
                        else if (i2 <= 0)
                        {
                            if ((i1 + (-i2)) < ((-X) + Y))
                            {
                                X = i2;
                                Y = i1;
                            }
                        }
                        else
                        {
                            if ((i1 + i2) < (X + Y))
                            {
                                if (i1 < i2)
                                {
                                    X = i1;
                                    Y = i2;
                                }
                                else
                                {
                                    X = i2;
                                    Y = i1;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << X << " " << Y << " " << D << "\n";
    }
}