#include <iostream>

using namespace std;

unsigned long long int G(unsigned long long int B, unsigned long long int P, unsigned long long int M)
{
    if (P == 0)
    {
        return 1;
    }
    else if (P == 1)
    {
        return B % M;
    }
    else
    {
        unsigned long long int R = G(B, P / 2, M);
        if (P % 2 == 1)
        {
            return R * R * B % M;
        }
        else
        {
            return R * R % M;
        }
    }
}

int main()
{
    unsigned long long int B, P, M;
    int R;
    while (cin >> B >> P >> M)
    {
        cout << G(B, P, M) << "\n";
    }
}