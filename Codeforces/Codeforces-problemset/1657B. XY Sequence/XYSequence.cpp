#include <iostream>
#define ll long long int
using namespace std;
void solve(ll n, ll B, ll x, ll y) {
	ll sum = 0, i = 1, A = 0;
	for (; i <= n; i++) {
		if (A + x <= B) {
			A += x;
		}
		else {
			A -= y;
		}
		sum = sum + A;
	}
	cout << sum << endl;
}
int main() {
	int t;
	ll n, B, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> B >> x >> y;
		solve(n,B,x,y);
	}
	return 0;
}