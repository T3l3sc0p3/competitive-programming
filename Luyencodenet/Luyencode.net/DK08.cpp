#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float a, b;
	char c;
	cin >> a >> c >> b;
	switch (c) {
	case '+':
		cout << fixed << setprecision(2) << a + b << endl;
		break;
	case '-':
		cout << fixed << setprecision(2) << a - b << endl;
		break;
	case '*':
		cout << fixed << setprecision(2) << a * b << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "Math Error";
			break;
		}
		cout << fixed << setprecision(2) << a / b << endl;
		break;
	}
	return 0;
}