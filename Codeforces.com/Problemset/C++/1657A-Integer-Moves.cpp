#include <iostream>
#include <cmath>
using namespace std;
void solve(int x2, int y2) {
	if (x2 == 0 && y2  == 0) {
		cout << 0 << endl;
	}
	else {
		if (floor(sqrt(pow(x2, 2) + pow(y2, 2))) == ceil(sqrt(pow(x2, 2) + pow(y2, 2)))) {
			cout << 1 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}
}
int main() {
	int t,x,y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		solve(x, y);
	}
	return 0;
}