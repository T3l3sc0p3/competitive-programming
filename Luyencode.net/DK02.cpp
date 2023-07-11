#include <iostream>
using namespace std;
int main() {
	int a, b, c, max;
	cin >> a >> b >> c;
	max = (a > b && a > c) ? a : (b > c ? b : c);
	cout << max << endl;
	return 0;
}