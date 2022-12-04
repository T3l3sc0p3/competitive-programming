#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;
void solv3(int n) {
	vector<ll>ai;
	ll inp;
	bool check = true;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		ai.push_back(inp);
	}
	if (n == 1 && ai[0] == 1) {
		cout << "YES" << endl;
		return;
	}
	else if (n == 1 && ai[0] != 1) {
		cout << "NO" << endl;
		return;
	}
	else {
		sort(ai.begin(), ai.end());
		if (ai[n-1] - ai[n-2] > 1){
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
}
int main() {
	int t,n;
	cin >> t;
	while (t--) {
		cin >> n;
		solv3(n);
	}
	return 0;
}