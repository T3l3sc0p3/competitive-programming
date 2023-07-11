#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long int n, temp;
	cin >> n;
	temp = sqrt(n);
	if (pow(temp, 2) == n) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}