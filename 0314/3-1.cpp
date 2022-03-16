#include <iostream>

using namespace std;

int main()
{
    unsigned long long int low, high;
    while (1)
    {
        cin >> low >> high;
        if (low == 0 || high == 0)
        {
            break;
        }
        cout << ((high / 5) - (low / 5)) + 1 << endl;
    }
}