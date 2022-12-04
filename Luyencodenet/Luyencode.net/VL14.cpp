#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	int a, b;
	cin >> a >> b;
	if (a < 0 || b < 0) cout << abs(gcd(a, b)) << endl;
	else cout << gcd(a, b) << endl;
	return 0;
}