//Practice recursion
#include <iostream>
using namespace std;
bool chc3(int a, int b) {
	if (b % 3 == 0 && b >= a) {
		cout << b << " ";
		return chc3(a, b - 1) + true;
	}
	else if (b % 3 != 0 && b >= a) {
		return chc3(a, b - 1);
	}
	return false;
}
int main() {
	int a, b;
	cin >> a >> b;
	if (!chc3(a+1, b-1)) {
		cout << "NOT FOUND" << endl;
	}
	return 0;
}