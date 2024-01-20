#include <iostream>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	int a, b, c;
	cin >> a >> b;
	if (b == 0) {
		cout << "INVALID";
	}
	else if (a % b == 0) {
		cout << int(a/b) << endl;
	} 
	else {
		c = abs(gcd(a, b));
		if (b < 0) {
			cout << -int(a/c) << " " << -int(b/c) << endl;
		}
		else {
			cout << int(a/c) << " " << int(b/c) << endl;
		}
	}
	return 0;
}