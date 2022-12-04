#include <iostream>
#include <cmath>
using namespace std;
#define ull unsigned long long int
int main() {
	ull n;
	cin >> n;
	cout << int(sqrt(n * 2 + 0.25) - 0.5) << endl;
	return 0;
}