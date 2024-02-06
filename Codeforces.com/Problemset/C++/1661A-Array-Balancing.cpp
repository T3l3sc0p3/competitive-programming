#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
#define loop(i,n) for (int i = 0; i < n; i++)
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
void swap(ll &a, ll &b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void solveA() {
	int n;
	ll tmp, sum = 0;
	cin >> n;
	vector <ll> a, b;
	loop(i,n)
	{
		cin >> tmp;
		a.push_back(tmp);
	}
	loop(i,n)
	{
		cin >> tmp;
		b.push_back(tmp);
	}
	loop(i,n) { if (a[i] > b[i]) swap(a[i],b[i]); }
	loop(i,n-1) sum += abs(a[i]-a[i+1]) + abs(b[i]-b[i+1]);
	cout << sum << endl;
}
int main() {
	fastio;
	int t;
	cin >> t;
	while (t--) solveA();
	return 0;
}