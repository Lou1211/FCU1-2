#include <iostream>

using namespace std;

int main()
{
    long long int A, B, X = -5, Y = 5, D, n;
    while (cin >> A >> B)
    {
        long int D, d;
        if (A > B)
        {
            D = A;
            d = B;
        }
        else
        {
            D = B;
            d = A;
        }
        if (A + 1 == B || B + 1 == A)
        {
            n = 1;
            X = -1;
            Y = 1;
        }
        else if (A == B)
        {
            n = A;
            X = 0;
            Y = 1;
        }
        else if (A % B == 0 || B % A == 0)
        {
            n = d;
            X = 0;
            Y = 1;
        }
        else
        {

            while (D != 0 || d != 0)
            {
                D = D%d;
                d = d%D;
                cout << D << " " << d << "\n";
            }
            if (d)
            {
                A = A / d;
                B = B / d;
                n = d;
                cout << d << "\n";
            }
            else if (D)
            {
                A = A / D;
                B = B / D;
                n = D;
                cout << D << "\n";
            }
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
        cout << X << " " << Y << " " << n << "\n";
    }
}