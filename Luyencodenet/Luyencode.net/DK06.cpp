#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "INF";
	}
	else if (a == 0 && b != 0) {
		cout << "NO";
	}
	else {
		cout << fixed << setprecision(2) << -b/float(a) << endl;
	}
	return 0;
}