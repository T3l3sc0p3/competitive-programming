#include <iostream>
#define ll long long int
using namespace std;
int main() {
	int n;
	cin >> n;
	ll* arr = new ll[n];
	ll max = INT64_MIN;
	for (ll i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << max << endl;
	delete[]arr;
	return 0;
}