#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int n, inp, a, b, sum = 0;
	vector<int>d;
	cin >> n;
	for (int i = 0; i < n-1; i++)
	{
		cin >> inp;
		d.push_back(inp);
	}
	cin >> a >> b;
	for (int i = a-1; i < b-1; i++)
	{
		sum += d[i];
	}
	cout << sum << endl;
	return 0;
}