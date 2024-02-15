#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t; cin >> t;
	double n;
	while (t--)
	{
		cin >> n;
		cout << fixed << setprecision(8) << 2*n/(n+1) << endl;
	}
	return 0;
}