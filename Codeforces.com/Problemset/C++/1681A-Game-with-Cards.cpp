#include <iostream>
#include <vector>
using namespace std;
void solveA() {
	int n, m, temp, maxA = 0, maxB = 0;
	cin >> n;
	vector<int>a,b;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp > maxA) {
			maxA = temp;
		}
		a.push_back(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (temp > maxB) {
			maxB = temp;
		}
		b.push_back(temp);
	}
	if (maxA >= maxB) {
		cout << "Alice\n" << "Alice" << endl;
	} else {
		cout << "Bob" << endl;
		if (maxB < maxA) {
			cout << "Alice" << endl;
		}
		else {
			cout << "Bob" << endl;
		}
	}
	/*sort(a.begin(), a.end());
	sort(b.begin(), b.end());*/
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solveA();
	}
	return 0;
}