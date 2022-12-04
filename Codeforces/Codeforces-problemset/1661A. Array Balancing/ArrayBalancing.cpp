#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;
void swap(ll &a, ll &b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void solveA() {
	int n;
	ll inp, sum = 0;
	cin >> n;
	vector <ll>a;
	for (int i = 0; i < n*2; i++)
	{
		cin >> inp;
		a.push_back(inp);
	}
	for (int i = 0; i < (n*2)-1; i++)
	{
		if (a[i] == a[n + i+1]) {
			swap(a[i], a[n + i]);
		}
	}
	for (int i = (n*2)-1; i > 1; i--)
	{
		if (i > n) {
			sum += (a[i] - a[i-1]);
		}
		else {
			sum += a[i-1] - a[i-2];
		}
	}
	cout << sum << endl;
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