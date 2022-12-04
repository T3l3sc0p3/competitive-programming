#include <iostream>
#define ll long long int
using namespace std;
bool isPerfect(ll n) {
	ll s = 0;
	if (n == 0 || n < 6) return false;
	for (ll i = n - 1; i >= 1; i--)
	{
		if (n % i == 0) {
			s += i;
		}
	}
	if (n == s) return true;
	return false;
}
int main() {
	ll n;
	cin >> n;
	if (isPerfect(n)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}