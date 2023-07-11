#include <iostream>
#include <iomanip>
#define ll long long int
using namespace std;
ll factorial(int f) {
	ll t = 1;
	for (int i = 1; i <= f; i++)
	{
		t *= i;
	}
	return t;
}
double power(double x, int n) {
	if (n == 1) {
		return x;
	}
	double temp = power(x, n / 2);
	return (n % 2 == 0) ? (temp * temp) : (temp * temp * x);
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	double x;
	int n;
	cin >> x >> n;
	double s = x;
	for (int i = 2; i <= n; i++)
	{
		s += power(x, i) / factorial(i);
	}
	cout << fixed << setprecision(2) << s << endl;
	return 0;
}