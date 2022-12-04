#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << "INF";
		return 0;
	}
	if (n < 0) {
		n = abs(n);
	}
	for (int i = n; i >= 1; i--)
	{
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}