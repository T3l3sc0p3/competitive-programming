#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	int a, b, ucln;
	cin >> a >> b;
	if (b == 0) {
		cout << "INVALID";
		return 0;
	}
	if (a % b == 0) {
		cout << int(a / b) << endl;
		return 0;
	}
	ucln = abs(gcd(a, b));
	if (b < 0) {
		a /= -1 * ucln;
		b /= -1 * ucln;
		cout << int(a) << " " << int(b) << endl;
	}
	else {
		a /= ucln;
		b /= ucln;
		cout << int(a) << " " << int(b) << endl;
	}
	return 0;
}