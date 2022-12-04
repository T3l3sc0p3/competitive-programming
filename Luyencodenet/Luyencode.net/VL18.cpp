#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	while (s[0] == '0') {
		s.erase(0, 1);
	}
	cout << s << endl;
	return 0;
}