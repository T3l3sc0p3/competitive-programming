//Practice recursion
#include <iostream>
using namespace std;
char upper_case(char a, char b) {
	if (a > b) return 0;
	cout << a << " ";
	return upper_case(a + 1, b);
}
int main() {
	char a, b;
	cin >> a >> b;
	upper_case(a-32, b-32);
	return 0;
}