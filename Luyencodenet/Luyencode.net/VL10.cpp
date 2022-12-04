#include <iostream>
#include <string>
using namespace std;
int main() {
	string n;
	cin >> n;
	if (n[0] == '-') {
		cout << n.length()-1 << endl;
	}
	else {
		cout << n.length() << endl;
	}
	return 0;
}