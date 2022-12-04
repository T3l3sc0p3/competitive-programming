#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	string s;
	cin >> s;
	for (int i = 0; i < s.length();) {
		if (s[i] == '.') {
			cout << 0;
			i++;
		}
		if (s[i] == '-') {
			if (s[i + 1] == '.') {
				cout << 1;
			}
			else if (s[i + 1] == '-') {
				cout << 2;
			}
			i += 2;
		}
	}
	return 0;
}