#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
void solveA() {
	int n, ans = 0, odd = 0, even = 0;
	ll temp;
	cin >> n;
	vector<ll>a;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		a.push_back(temp);
	}
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 != 0 && even > odd) {
			ans++;
		}
		else if (a[j] % 2 == 0 && odd >= even) {
			ans++;
		}
	}
	cout << ans << endl;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solveA();
	}
	return 0;
}