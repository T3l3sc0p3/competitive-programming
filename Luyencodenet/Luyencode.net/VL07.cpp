#include <iostream>
using namespace std;
double factorial(int f) {
	double s = 1;
	for (int i = 1; i <= f; i++)
	{
		s *= i;
	}
	return s;
}
int main() {
	int k, n;
	cin >> n >> k;
	cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;
	return 0;
}