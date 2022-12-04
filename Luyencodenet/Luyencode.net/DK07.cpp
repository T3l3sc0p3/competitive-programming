#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0 && c == 0) {
			cout << "INF";
		}
		else if (b == 0 && c != 0) {
			cout << "NO";
		}
		else {
			cout << fixed << setprecision(2) << -c/float(b) << endl;
		}
	}
	else {
		float delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			float x1, x2;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			if (x1 >= x2) {
				cout << fixed << setprecision(2) << x2 << " " << x1 << endl;
			}
			else {

				cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
			}
			
		}
		else if (delta == 0) {
			cout << fixed << setprecision(2) << -b / float(2 * a) << endl;
		}
		else {
			cout << "NO";
		}
	}
	return 0;
}