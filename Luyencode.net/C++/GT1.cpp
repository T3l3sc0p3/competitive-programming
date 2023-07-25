#include <iostream>
#define ll long long int
using namespace std;
ll giaithua(ll n) {
	if (n <= 1) return 1;
	return n * giaithua(n-1);
}
int main() {
	int n;
	cin >> n;
	cout << giaithua(n) << endl;
	return 0;
}