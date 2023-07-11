#include <iostream>
#define ll long long int
using namespace std;
int main() {
	int a, b;
	ll u = 0;
	cin >> a >> b;
	if (a % 2 != 0) a++;
	if (b % 2 != 0) b--;
	for (int i = a; i <= b; i+=2)
	{
		u += i;
	}
	cout << u << endl;
	return 0;
}