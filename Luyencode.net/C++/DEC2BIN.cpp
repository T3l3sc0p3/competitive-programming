#include <iostream>
using namespace std;
void bin(long long int n) {
	if (n > 1) bin(n / 2);
	cout << n % 2;
}
int main() {
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		bin(n);
		cout << endl;
	}
	return 0;
}