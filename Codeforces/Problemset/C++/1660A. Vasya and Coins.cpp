#include <iostream>
#define ll long long int
using namespace std;
void solving_p(ll ai, ll bi) {
	if (ai == 0) {
		cout << 1 << endl;
	}
	else if (ai != 0 && bi != 0) {
		cout << ai + (bi * 2) + 1 << endl;
	}
	else {
		cout << ai+1 << endl;
	}
}
int main() {
	int t;
	ll a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		solving_p(a,b);
	}
	return 0;
}