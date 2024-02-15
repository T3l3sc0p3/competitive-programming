#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n;
	cin >> n;
	cout << fixed << setprecision(5) << n/(n+1) << endl;
	return 0;
}