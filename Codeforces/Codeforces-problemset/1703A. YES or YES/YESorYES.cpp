#include <iostream>
using namespace std;
string ok(string s) {
	if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'e' || s[1] == 'E') && (s[2] == 's' || s[2] == 'S')) return "YES";
	return "NO";
}
int main() {
	string s;
	int t; cin >> t;
	while (t--) {
		cin >> s;
		cout << ok(s) << endl;
	}
	return 0;
}