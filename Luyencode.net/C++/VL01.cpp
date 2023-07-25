#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}