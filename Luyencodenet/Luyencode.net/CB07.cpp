#include <iostream>
#include <iomanip>
#define pi 3.14
using namespace std;
int main() {
	float r;
	cin >> r;
	cout << fixed << setprecision(3) << 2 * pi * r << " " << pi * (r * r) << endl;
	return 0;
}