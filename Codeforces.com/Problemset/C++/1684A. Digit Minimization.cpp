#include <iostream>
#define ll long long int
using namespace std;
int solveA(ll n) {
	if (n < 100) {
		return n % 10;
	}
	else {
		int min = 10;
		while (n != 0) {
			if (n % 10 < min) {
				min = n % 10;
			}
			n /= 10;
		}
		return min;
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << solveA(n) << endl;
	}
	return 0;
}