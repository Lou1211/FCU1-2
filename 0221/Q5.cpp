#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double m = (y1 - y2) / (x1 - x2);
    cout << fixed << setprecision(1) << m << "\n";
}