#include <iostream>
using namespace std;
bool check_leap_year(int y) {
	if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) {
		return true;
	}
	return false;
}
int main() {
	int month, year;
	cin >> month >> year;
	if (month > 12) {
		cout << "INVALID";
	}
	else {
		switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << 31 << endl;
			break;
		case 4: case 6: case 9: case 11:
			cout << 30 << endl;
			break;
		case 2:
			if (check_leap_year(year)) {
				cout << 29 << endl;
			}
			else {
				cout << 28 << endl;
			}
			break;
		}
	}
	return 0;
}