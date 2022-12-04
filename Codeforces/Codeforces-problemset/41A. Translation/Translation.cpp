#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	string s, t;
	cin >> s;
	cin >> t;
	if (s.length() != t.length()) {
		cout << "NO" << endl;
		return 0;
	}
	reverse(t.begin(), t.end());
	if (s == t) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}