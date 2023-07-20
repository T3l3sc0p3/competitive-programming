#include <iostream>

using namespace std;

int main() {
	int weight;
	cin >> weight;
	if (weight >= 1 && weight <= 100) {
		for (int i = 2; i < weight; i++) {
			if (((weight - i) % 2 == 0) && (i % 2 == 0)) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout <<	"NO";

	return 0;
}