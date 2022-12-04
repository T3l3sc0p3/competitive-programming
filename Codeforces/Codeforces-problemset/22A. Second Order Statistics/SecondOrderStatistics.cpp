#include <iostream>
#include <vector>
using namespace std;
void swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
void bubble_sort(vector<int>& a, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int main() {
	int n, inp;
	vector<int>arr;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> inp;
		arr.push_back(inp);
	}
	bubble_sort(arr, n);
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1]) {
			cout << arr[i] << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}