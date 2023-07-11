//Practice algorithm so I won't use loops to solve VL* problems
#include <iostream>
using namespace std;
int main() {
	int n;
	long long int s;
	cin >> n;
	s = (((2 + n) * (n-1)) / 2) + 2 * n;
	cout << s << endl;
}