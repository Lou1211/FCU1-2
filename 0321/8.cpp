#include <iostream>
using namespace std;

void G(long int A, long int B, long int &X, long int &Y, long int &D)
{

    if (!B)
    {
        D = A;
        X = 1;
        Y = 0;
    }
    else
    {
        G(B, A % B, Y, X, D);
        Y = Y - (X * (A / B));
    }
}

int main()
{
    long int A, B, X, Y, D;
    while (cin >> A >> B)
    {
        G(A, B, X, Y, D);
        cout << X << " " << Y << " " << D << "\n";
    }
}