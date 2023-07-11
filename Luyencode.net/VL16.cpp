//Practice recursion VL16
#include <iostream>
#include <cmath>
using namespace std;
int lcm(int a, int b, int max) {
	if (max % a == 0 && max % b == 0) return max;
	return lcm(a, b, max + 1);
}
int main() {
	int a, b, max;
	cin >> a >> b;
	a = abs(a), b = abs(b);
	max = (a >= b) ? a : b;
	cout << lcm(a, b, max) << endl;
	return 0;
}