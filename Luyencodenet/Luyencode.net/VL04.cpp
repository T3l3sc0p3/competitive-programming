#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	double s = 0;
	for (int i = 2; i <= n; i++)
	{
		s += pow(i, -1);
	}
	cout << fixed << setprecision(4) << s << endl;
	return 0;
}