#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() {
	int y, w, max, g;
	cin >> y >> w;
	max = (y > w) ? y : w;
	g = gcd(6 - max + 1, 6);
	cout <<  (6 - max + 1)/ g << "/" << 6/g << endl;
	return 0;
}
int gcd(int a, int b) {
	if (b != 0) {
		return gcd(b, a % b);
	}
	else {
		return a;
	}
}