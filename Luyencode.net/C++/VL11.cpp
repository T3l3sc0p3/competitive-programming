#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
bool isPrime(ll n) {
	if (n < 2) return false;
	for (ll i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	ll n;
	cin >> n;
	if (isPrime(n)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}