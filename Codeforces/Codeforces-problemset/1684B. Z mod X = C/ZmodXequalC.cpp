#include <iostream>
#define ll long long int
using namespace std;
void solveB() {
	ll a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c << " " << b + c << " " << c << endl;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solveB();
	}
	return 0;
}