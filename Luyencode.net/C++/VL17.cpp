#include <iostream>
#include <cmath>
using namespace std;
int slud(int a) {
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0) {
			count++;
		}
	}
	return count;
}
int main() {
	int a;
	cin >> a;
	a = abs(a);
	cout << slud(a) << endl;
	return 0;
}