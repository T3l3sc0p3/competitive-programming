#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAX 100005
using namespace std;

int main() {
	int t, n, x[MAX];
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			scanf("%d", x + i);
		}
		cout << (int)(min_element(x, x + n) - x) + 1 << " " << (int)(max_element(x, x + n) - x) + 1 << endl;
	}
}