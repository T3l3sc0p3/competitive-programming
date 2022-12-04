#include <iostream>
#define ll long long int
using namespace std;
int main() {
	ll n,s;
	cin >> n;
	if (n % 2 == 0) {
		s = ((3 * n + 1) + 1) / 2;
	}
	else {
		s = (-(3 * n + 1)) / 2;
	}
	cout << s << endl;
	return 0;
}