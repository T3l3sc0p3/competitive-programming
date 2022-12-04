#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;
void solve() {
	vector<ll>A;
	int n;
	ll inp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		A.push_back(inp);
	}
	sort(A.begin(), A.end());
	cout << A[n-1] + A[n-2] << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}