#include <iostream>
using namespace std;

void ExtendedEuclid(int a, int b) {
	bool flag = false;
	long long left1 = 1, left2 = 0, right1 = 0, right2 = 1, buffer;
	while (b) {
		if (!flag) {
			left1 -= a / b * right1;
			left2 -= a / b * right2;
		}
		else {
			right1 -= a / b * left1;
			right2 -= a / b * left2;
		}
		flag = !flag;
		buffer = a % b, a = b, b = buffer;
	}
	if (!flag)
		cout << left1 << ' ' << left2 << ' ' << a << '\n';
	else
		cout << right1 << ' ' << right2 << ' ' << a << '\n';
}

int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	int x, y;
	while (cin >> x >> y)
		ExtendedEuclid(x, y);
}