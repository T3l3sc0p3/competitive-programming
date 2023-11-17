#include <iostream>
#include <string>
using namespace std;
void solve(string s) {
	while (s.find(s[0], 1) != -1) {
		s.erase(s.begin());
	}
	cout << s << endl;
}
int main() {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		solve(s);
	}
	return 0;
}