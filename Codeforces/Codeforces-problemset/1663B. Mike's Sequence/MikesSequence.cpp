#include <iostream>
using namespace std;
int main() {
	int r, Rating[] = { 1200,1400,1600,1900,2100,2300,2400,2600,3000 };
	cin >> r;
	for (int i = 0; i < 9;i++) {
		if (Rating[i] > r) {
			cout << Rating[i] << endl;
			break;
		}
	}
	return 0;
}