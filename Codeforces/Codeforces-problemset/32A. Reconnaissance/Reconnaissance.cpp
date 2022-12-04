#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL); //Increase running speed
	int n, count = 0;
	long long int d, inp;
	cin >> n >> d;
	vector<int>arr;
	for (int i = 0; i < n; i++)
	{
		cin >> inp;
		arr.push_back(inp);
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] - arr[i] <= d) {
				count += 2;
			}
		}
	}
	cout << count << endl;
	return 0;
}