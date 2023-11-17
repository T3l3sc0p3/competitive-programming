#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int n,inp, min = INT_MAX, a, b;
	vector<int>arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		arr.push_back(inp);
	}
	for (int i = 1; i < n; i++) {
		if (abs(arr[i] - arr[i - 1]) < min) {
			a = i;
			b = i + 1;
			min = abs(arr[i] - arr[i - 1]);
		}
	}

	if (abs(arr[0] - arr[n - 1]) < min) {
		cout << n << " " << 1 << endl;
	}
	else {
		cout << a << " " << b << endl;
	}
	return 0;
}